#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager openScope'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openScope (GGS_currentVarManager & ioObject,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_currentVarManager temp_0 = ioObject ;
  ioObject.mProperty_mSubMaps.setter_insertAtIndex (temp_0.readProperty_mLocalVarMap (), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 789)) ;
  }
  ioObject.mProperty_mLocalVarMap = GGS_scopeLocalVarMap::init (inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager closeScope'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeScope (GGS_currentVarManager & ioObject,
                                 const GGS_location constinArgument_inErrorLocation,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_currentVarManager temp_0 = ioObject ;
  extensionMethod_checkFinalStates (temp_0.readProperty_mLocalVarMap (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 796)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_currentVarManager temp_2 = ioObject ;
    test_1 = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mSubMaps ().getter_count (SOURCE_FILE ("variable-manager.galgas3", 797)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("EMPTY SUBMAPS"), fixItArray3  COMMA_SOURCE_FILE ("variable-manager.galgas3", 798)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_currentVarManager temp_5 = ioObject ;
    test_4 = GGS_bool (ComparisonKind::greaterThan, temp_5.readProperty_mSubMaps ().getter_count (SOURCE_FILE ("variable-manager.galgas3", 800)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      ioObject.mProperty_mSubMaps.setter_popFirst (ioObject.mProperty_mLocalVarMap, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 801)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (GGS_currentVarManager & ioObject,
                                const GGS_lstring constinArgument_inVarName,
                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                const GGS_string constinArgument_inCppName,
                                const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                const GGS_localVariableAttributes constinArgument_inAttributes,
                                const GGS_localVarValuation constinArgument_inState,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mLocalVarMap.setter_insertKey (constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, constinArgument_inAttributes, constinArgument_inState, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 815)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarValuation checkFinalState'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkFinalState (const GGS_localVarValuation inObject,
                                      const GGS_lstring constinArgument_inVarName,
                                      const GGS_localVariableAttributes constinArgument_inAttributes,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVarValuation temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_localVarValuation::Enumeration::invalid:
    break ;
  case GGS_localVarValuation::Enumeration::enum_invalid:
    break ;
  case GGS_localVarValuation::Enumeration::enum_declared:
    {
      GGS_bool extractedValue_37459_usedInOtherBlock_0 ;
      temp_0.getAssociatedValuesFor_declared (extractedValue_37459_usedInOtherBlock_0) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = constinArgument_inAttributes.getter_contains (GGS_localVariableAttributes::class_func_rejectDeclaredStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 833)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 833)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inVarName.readProperty_location (), GGS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 834)).add_operation (GGS_string ("' should be initialized"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 834)), fixItArray2  COMMA_SOURCE_FILE ("variable-manager.galgas3", 834)) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = extractedValue_37459_usedInOtherBlock_0.boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GGS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 836)).add_operation (GGS_string ("' is only used  in sub scope; consider moving it"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 836)), fixItArray4  COMMA_SOURCE_FILE ("variable-manager.galgas3", 836)) ;
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GGS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 838)).add_operation (GGS_string ("' was never used; consider removing it"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 838)), fixItArray5  COMMA_SOURCE_FILE ("variable-manager.galgas3", 838)) ;
        }
      }
    }
    break ;
  case GGS_localVarValuation::Enumeration::enum_initialized:
    {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = constinArgument_inAttributes.getter_contains (GGS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas3", 841)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 841)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GGS_string ("parameter '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 842)).add_operation (GGS_string ("' was never read; consider declaring it as unused"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 842)), fixItArray7  COMMA_SOURCE_FILE ("variable-manager.galgas3", 842)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = constinArgument_inAttributes.getter_contains (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 843)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 843)).operator_not (SOURCE_FILE ("variable-manager.galgas3", 843)).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GenericArray <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GGS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 844)).add_operation (GGS_string ("' was never read; consider removing it"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 844)), fixItArray9  COMMA_SOURCE_FILE ("variable-manager.galgas3", 844)) ;
          }
        }
      }
    }
    break ;
  case GGS_localVarValuation::Enumeration::enum_read:
    {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = constinArgument_inAttributes.getter_contains (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 847)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 847)).operator_not (SOURCE_FILE ("variable-manager.galgas3", 847)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GGS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 848)).add_operation (GGS_string ("' was never mutated; consider declaring it as 'let'"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 848)), fixItArray11  COMMA_SOURCE_FILE ("variable-manager.galgas3", 848)) ;
        }
      }
    }
    break ;
  case GGS_localVarValuation::Enumeration::enum_mutated:
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@scopeLocalVarMap checkFinalStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkFinalStates (const GGS_scopeLocalVarMap inObject,
                                       const GGS_location /* constinArgument_inErrorLocation */,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_scopeLocalVarMap temp_0 = inObject ;
  UpEnumerator_scopeLocalVarMap enumerator_38775 (temp_0) ;
  while (enumerator_38775.hasCurrentObject ()) {
    extensionMethod_checkFinalState (enumerator_38775.current_mState (HERE), enumerator_38775.current_lkey (HERE), enumerator_38775.current_mAttributes (HERE), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 859)) ;
    enumerator_38775.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager checkAutomatonStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkAutomatonStates (const GGS_currentVarManager inObject,
                                           const GGS_location constinArgument_inErrorLocation,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_currentVarManager temp_0 = inObject ;
  extensionMethod_checkFinalStates (temp_0.readProperty_mLocalVarMap (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 872)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarValuation combineValuationWith'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_combineValuationWith (const GGS_localVarValuation inObject,
                                           const GGS_localVarValuation constinArgument_inOther,
                                           GGS_localVarValuation & outArgument_outResult,
                                           GGS_string & /* ioArgument_ioErrorMessage */,
                                           Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult.drop () ; // Release 'out' argument
  const GGS_localVarValuation temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_localVarValuation::Enumeration::invalid:
    break ;
  case GGS_localVarValuation::Enumeration::enum_invalid:
    {
      const GGS_localVarValuation temp_1 = inObject ;
      outArgument_outResult = temp_1 ;
    }
    break ;
  case GGS_localVarValuation::Enumeration::enum_declared:
    {
      GGS_bool extractedValue_39876_usedInSubscope_0 ;
      temp_0.getAssociatedValuesFor_declared (extractedValue_39876_usedInSubscope_0) ;
      switch (constinArgument_inOther.enumValue ()) {
      case GGS_localVarValuation::Enumeration::invalid:
        break ;
      case GGS_localVarValuation::Enumeration::enum_invalid:
        {
          outArgument_outResult = constinArgument_inOther ;
        }
        break ;
      case GGS_localVarValuation::Enumeration::enum_declared:
        {
          GGS_bool extractedValue_39977_otherUsedInSubscope_0 ;
          constinArgument_inOther.getAssociatedValuesFor_declared (extractedValue_39977_otherUsedInSubscope_0) ;
          outArgument_outResult = GGS_localVarValuation::class_func_declared (extractedValue_39876_usedInSubscope_0.operator_or (extractedValue_39977_otherUsedInSubscope_0 COMMA_SOURCE_FILE ("variable-manager.galgas3", 890))  COMMA_SOURCE_FILE ("variable-manager.galgas3", 890)) ;
        }
        break ;
      case GGS_localVarValuation::Enumeration::enum_initialized:
      case GGS_localVarValuation::Enumeration::enum_read:
      case GGS_localVarValuation::Enumeration::enum_mutated:
        {
          outArgument_outResult = GGS_localVarValuation::class_func_declared (GGS_bool (true)  COMMA_SOURCE_FILE ("variable-manager.galgas3", 892)) ;
        }
        break ;
      }
    }
    break ;
  case GGS_localVarValuation::Enumeration::enum_initialized:
    {
      switch (constinArgument_inOther.enumValue ()) {
      case GGS_localVarValuation::Enumeration::invalid:
        break ;
      case GGS_localVarValuation::Enumeration::enum_invalid:
        {
          outArgument_outResult = constinArgument_inOther ;
        }
        break ;
      case GGS_localVarValuation::Enumeration::enum_declared:
        {
          GGS_bool extractedValue_40286_otherUsedInSubscope_0 ;
          constinArgument_inOther.getAssociatedValuesFor_declared (extractedValue_40286_otherUsedInSubscope_0) ;
          outArgument_outResult = GGS_localVarValuation::class_func_declared (extractedValue_40286_otherUsedInSubscope_0  COMMA_SOURCE_FILE ("variable-manager.galgas3", 899)) ;
        }
        break ;
      case GGS_localVarValuation::Enumeration::enum_initialized:
      case GGS_localVarValuation::Enumeration::enum_read:
      case GGS_localVarValuation::Enumeration::enum_mutated:
        {
          outArgument_outResult = constinArgument_inOther ;
        }
        break ;
      }
    }
    break ;
  case GGS_localVarValuation::Enumeration::enum_read:
    {
      switch (constinArgument_inOther.enumValue ()) {
      case GGS_localVarValuation::Enumeration::invalid:
        break ;
      case GGS_localVarValuation::Enumeration::enum_invalid:
        {
          outArgument_outResult = constinArgument_inOther ;
        }
        break ;
      case GGS_localVarValuation::Enumeration::enum_declared:
        {
          GGS_bool extractedValue_40588__0 ;
          constinArgument_inOther.getAssociatedValuesFor_declared (extractedValue_40588__0) ;
          outArgument_outResult = GGS_localVarValuation::class_func_declared (GGS_bool (true)  COMMA_SOURCE_FILE ("variable-manager.galgas3", 908)) ;
        }
        break ;
      case GGS_localVarValuation::Enumeration::enum_initialized:
        {
          const GGS_localVarValuation temp_2 = inObject ;
          outArgument_outResult = temp_2 ;
        }
        break ;
      case GGS_localVarValuation::Enumeration::enum_read:
      case GGS_localVarValuation::Enumeration::enum_mutated:
        {
          outArgument_outResult = constinArgument_inOther ;
        }
        break ;
      }
    }
    break ;
  case GGS_localVarValuation::Enumeration::enum_mutated:
    {
      switch (constinArgument_inOther.enumValue ()) {
      case GGS_localVarValuation::Enumeration::invalid:
        break ;
      case GGS_localVarValuation::Enumeration::enum_invalid:
        {
          outArgument_outResult = constinArgument_inOther ;
        }
        break ;
      case GGS_localVarValuation::Enumeration::enum_declared:
        {
          GGS_bool extractedValue_40884__0 ;
          constinArgument_inOther.getAssociatedValuesFor_declared (extractedValue_40884__0) ;
          outArgument_outResult = GGS_localVarValuation::class_func_declared (GGS_bool (true)  COMMA_SOURCE_FILE ("variable-manager.galgas3", 919)) ;
        }
        break ;
      case GGS_localVarValuation::Enumeration::enum_initialized:
      case GGS_localVarValuation::Enumeration::enum_read:
      case GGS_localVarValuation::Enumeration::enum_mutated:
        {
          const GGS_localVarValuation temp_3 = inObject ;
          outArgument_outResult = temp_3 ;
        }
        break ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@scopeLocalVarMap combineMapWith'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_combineMapWith (GGS_scopeLocalVarMap & ioObject,
                                     const GGS_scopeLocalVarMap constinArgument_inOtherMap,
                                     GGS_string & ioArgument_ioErrorMessage,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_scopeLocalVarMap temp_0 = ioObject ;
  UpEnumerator_scopeLocalVarMap enumerator_41301 (temp_0) ;
  while (enumerator_41301.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_scopeLocalVarMap_2E_element var_otherVar_41334 = constinArgument_inOtherMap.readSubscript__3F_ (enumerator_41301.current_lkey (HERE).readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!constinArgument_inOtherMap.readSubscript__3F_ (enumerator_41301.current_lkey (HERE).readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_1 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_41301.current_mCppName (HERE).objectCompare (var_otherVar_41334.readProperty_mCppName ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            ioArgument_ioErrorMessage.plusAssignOperation(GGS_string ("\n  - 'internal error type 1 for '").add_operation (enumerator_41301.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 933)).add_operation (GGS_string ("' local variable"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 933)), inCompiler  COMMA_SOURCE_FILE ("variable-manager.galgas3", 933)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GGS_localVarValuation var_newValuation_41582 ;
          extensionMethod_combineValuationWith (enumerator_41301.current_mState (HERE), var_otherVar_41334.readProperty_mState (), var_newValuation_41582, ioArgument_ioErrorMessage, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 935)) ;
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::notEqual, var_newValuation_41582.objectCompare (enumerator_41301.current_mState (HERE))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              {
              ioObject.setter_setMStateForKey (var_newValuation_41582, enumerator_41301.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 937)) ;
              }
            }
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      ioArgument_ioErrorMessage.plusAssignOperation(GGS_string ("\n  - 'internal error type 2 for '").add_operation (enumerator_41301.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 941)).add_operation (GGS_string ("' local variable"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 941)), inCompiler  COMMA_SOURCE_FILE ("variable-manager.galgas3", 941)) ;
    }
    enumerator_41301.gotoNextObject () ;
  }
  UpEnumerator_scopeLocalVarMap enumerator_41867 (constinArgument_inOtherMap) ;
  while (enumerator_41867.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_scopeLocalVarMap temp_5 = ioObject ;
      test_4 = temp_5.getter_hasKey (enumerator_41867.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("variable-manager.galgas3", 946)).operator_not (SOURCE_FILE ("variable-manager.galgas3", 946)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        ioArgument_ioErrorMessage.plusAssignOperation(GGS_string ("\n  - 'internal error type 3 for '").add_operation (enumerator_41867.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 947)).add_operation (GGS_string ("' local variable"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 947)), inCompiler  COMMA_SOURCE_FILE ("variable-manager.galgas3", 947)) ;
      }
    }
    enumerator_41867.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager combineManagerWith'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_combineManagerWith (GGS_currentVarManager & ioObject,
                                         const GGS_currentVarManager constinArgument_inOtherManager,
                                         const GGS_location constinArgument_inErrorLocation,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_42334 = GGS_string::makeEmptyString () ;
  {
  extensionSetter_combineMapWith (ioObject.mProperty_mLocalVarMap, constinArgument_inOtherManager.readProperty_mLocalVarMap (), var_s_42334, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 957)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_currentVarManager temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mSubMaps ().getter_count (SOURCE_FILE ("variable-manager.galgas3", 961)).objectCompare (constinArgument_inOtherManager.readProperty_mSubMaps ().getter_count (SOURCE_FILE ("variable-manager.galgas3", 961)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_currentVarManager temp_2 = ioObject ;
      var_s_42334.plusAssignOperation(GGS_string ("Scope deepth error, ").add_operation (temp_2.readProperty_mSubMaps ().getter_count (SOURCE_FILE ("variable-manager.galgas3", 962)).getter_string (SOURCE_FILE ("variable-manager.galgas3", 962)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 962)).add_operation (GGS_string (" != "), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 962)).add_operation (constinArgument_inOtherManager.readProperty_mSubMaps ().getter_count (SOURCE_FILE ("variable-manager.galgas3", 962)).getter_string (SOURCE_FILE ("variable-manager.galgas3", 962)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 962)), inCompiler  COMMA_SOURCE_FILE ("variable-manager.galgas3", 962)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_localVarMapListForLLVM var_newSubMapList_42631 = GGS_localVarMapListForLLVM::init (inCompiler COMMA_HERE) ;
    const GGS_currentVarManager temp_3 = ioObject ;
    UpEnumerator_localVarMapListForLLVM enumerator_42660 (temp_3.readProperty_mSubMaps ()) ;
    UpEnumerator_localVarMapListForLLVM enumerator_42687 (constinArgument_inOtherManager.readProperty_mSubMaps ()) ;
    while (enumerator_42660.hasCurrentObject () && enumerator_42687.hasCurrentObject ()) {
      GGS_scopeLocalVarMap var_mutableSubMap_42740 = enumerator_42660.current_mMap (HERE) ;
      {
      extensionSetter_combineMapWith (var_mutableSubMap_42740, enumerator_42687.current_mMap (HERE), var_s_42334, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 967)) ;
      }
      var_newSubMapList_42631.addAssignOperation (var_mutableSubMap_42740  COMMA_SOURCE_FILE ("variable-manager.galgas3", 971)) ;
      enumerator_42660.gotoNextObject () ;
      enumerator_42687.gotoNextObject () ;
    }
    ioObject.mProperty_mSubMaps = var_newSubMapList_42631 ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_s_42334.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("convergence error:").add_operation (var_s_42334, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 977)), fixItArray5  COMMA_SOURCE_FILE ("variable-manager.galgas3", 977)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//  Map type @internalRoutineMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap::GGS_internalRoutineMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap::~ GGS_internalRoutineMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap::GGS_internalRoutineMap (const GGS_internalRoutineMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap & GGS_internalRoutineMap::operator = (const GGS_internalRoutineMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap GGS_internalRoutineMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_internalRoutineMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_internalRoutineMap::getter_hasKey (const GGS_string & inKey
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_internalRoutineMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                       const GGS_uint & inLevel
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_internalRoutineMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_internalRoutineMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_internalRoutineMap::getter_locationForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_internalRoutineMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_internalRoutineMap::getter_keyList (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_internalRoutineMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_internalRoutineMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap::performInsert (const GGS_internalRoutineMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_internalRoutineMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_internalRoutineMap_2E_element>
GGS_internalRoutineMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_internalRoutineMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_internalRoutineMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_internalRoutineMap_2E_element>>
GGS_internalRoutineMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_internalRoutineMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_internalRoutineMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element_3F_ GGS_internalRoutineMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_internalRoutineMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_internalRoutineMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_internalRoutineMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_internalRoutineMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mArgumentMap = info->mProperty_mArgumentMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap GGS_internalRoutineMap::class_func_mapWithMapToOverride (const GGS_internalRoutineMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_internalRoutineMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_internalRoutineMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap GGS_internalRoutineMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_internalRoutineMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap::setter_insertKey (GGS_lstring inLKey,
                                               GGS_routineArgumentMap inArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  const GGS_internalRoutineMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' routine has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap::method_searchKey (GGS_lstring inLKey,
                                               GGS_routineArgumentMap & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_internalRoutineMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' routine is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mArgumentMap ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap::setter_insertOrReplace (GGS_lstring inLKey,
                                                     GGS_routineArgumentMap inArgument0
                                                     COMMA_LOCATION_ARGS) {
  const GGS_internalRoutineMap_2E_element element (inLKey, inArgument0) ;
  OptionalSharedRef <GenericMapNode <GGS_internalRoutineMap_2E_element>> unusedExistingNode ;
  const bool allowReplacing = true ;
  mSharedRoot.insulate (THERE) ;
  mSharedRoot->insertOrReplaceInfo (element, allowReplacing, unusedExistingNode COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap GGS_internalRoutineMap::getter_mArgumentMapForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_routineArgumentMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_internalRoutineMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mArgumentMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap::setter_setMArgumentMapForKey (GGS_routineArgumentMap inValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_internalRoutineMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mArgumentMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_internalRoutineMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_internalRoutineMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mArgumentMap:") ;
    inArray (i COMMA_HERE)->mProperty_mArgumentMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_internalRoutineMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_internalRoutineMap_2E_element>> array = sortedInfoArray () ;
    GGS_internalRoutineMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_internalRoutineMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_internalRoutineMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @internalRoutineMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_internalRoutineMap::DownEnumerator_internalRoutineMap (const GGS_internalRoutineMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element DownEnumerator_internalRoutineMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_internalRoutineMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap DownEnumerator_internalRoutineMap::current_mArgumentMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mArgumentMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @internalRoutineMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_internalRoutineMap::UpEnumerator_internalRoutineMap (const GGS_internalRoutineMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap_2E_element UpEnumerator_internalRoutineMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_internalRoutineMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap UpEnumerator_internalRoutineMap::current_mArgumentMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mArgumentMap ;
}


//--------------------------------------------------------------------------------------------------
//     @internalRoutineMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_internalRoutineMap ("internalRoutineMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_internalRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_internalRoutineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_internalRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_internalRoutineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_internalRoutineMap GGS_internalRoutineMap::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_internalRoutineMap result ;
  const GGS_internalRoutineMap * p = (const GGS_internalRoutineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_internalRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("internalRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @routineArgumentMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap::GGS_routineArgumentMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap::~ GGS_routineArgumentMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap::GGS_routineArgumentMap (const GGS_routineArgumentMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap & GGS_routineArgumentMap::operator = (const GGS_routineArgumentMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap GGS_routineArgumentMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_routineArgumentMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineArgumentMap::getter_hasKey (const GGS_string & inKey
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineArgumentMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                       const GGS_uint & inLevel
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineArgumentMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineArgumentMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_routineArgumentMap::getter_locationForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_routineArgumentMap::getter_keyList (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineArgumentMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_routineArgumentMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::performInsert (const GGS_routineArgumentMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_routineArgumentMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element>
GGS_routineArgumentMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_routineArgumentMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element>>
GGS_routineArgumentMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_routineArgumentMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element_3F_ GGS_routineArgumentMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineArgumentMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_routineArgumentMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_routineArgumentMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mRoutineSignature = info->mProperty_mRoutineSignature ;
      element.mProperty_mIsFilePrivate = info->mProperty_mIsFilePrivate ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap GGS_routineArgumentMap::class_func_mapWithMapToOverride (const GGS_routineArgumentMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_routineArgumentMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_routineArgumentMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap GGS_routineArgumentMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_routineArgumentMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::setter_insertKey (GGS_lstring inLKey,
                                               GGS_formalParameterSignature inArgument0,
                                               GGS_bool inArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  const GGS_routineArgumentMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "-- internal error --" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::method_searchKey (GGS_lstring inLKey,
                                               GGS_formalParameterSignature & outArgument0,
                                               GGS_bool & outArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "-- internal error --" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mRoutineSignature ;
    outArgument1 = info->mProperty_mIsFilePrivate ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_routineArgumentMap::getter_mRoutineSignatureForKey (const GGS_string & inKey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_formalParameterSignature result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRoutineSignature ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineArgumentMap::getter_mIsFilePrivateForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsFilePrivate ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::setter_setMRoutineSignatureForKey (GGS_formalParameterSignature inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_routineArgumentMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRoutineSignature = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::setter_setMIsFilePrivateForKey (GGS_bool inValue,
                                                             GGS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_routineArgumentMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsFilePrivate = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_routineArgumentMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mRoutineSignature:") ;
    inArray (i COMMA_HERE)->mProperty_mRoutineSignature.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIsFilePrivate:") ;
    inArray (i COMMA_HERE)->mProperty_mIsFilePrivate.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineArgumentMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element>> array = sortedInfoArray () ;
    GGS_routineArgumentMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_routineArgumentMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_routineArgumentMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @routineArgumentMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineArgumentMap::DownEnumerator_routineArgumentMap (const GGS_routineArgumentMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element DownEnumerator_routineArgumentMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineArgumentMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature DownEnumerator_routineArgumentMap::current_mRoutineSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRoutineSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_routineArgumentMap::current_mIsFilePrivate (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsFilePrivate ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @routineArgumentMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineArgumentMap::UpEnumerator_routineArgumentMap (const GGS_routineArgumentMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap_2E_element UpEnumerator_routineArgumentMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineArgumentMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature UpEnumerator_routineArgumentMap::current_mRoutineSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRoutineSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_routineArgumentMap::current_mIsFilePrivate (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsFilePrivate ;
}


//--------------------------------------------------------------------------------------------------
//     @routineArgumentMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineArgumentMap ("routineArgumentMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineArgumentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineArgumentMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineArgumentMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineArgumentMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineArgumentMap GGS_routineArgumentMap::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_routineArgumentMap result ;
  const GGS_routineArgumentMap * p = (const GGS_routineArgumentMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineArgumentMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineArgumentMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@acceptableParameterList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_acceptableParameterList : public CollectionElementPtr {
  public: GGS_acceptableParameterList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_acceptableParameterList (const GGS_formalParameterSignature & in_mRoutineSignature,
                                                        const GGS_bool & in_mIsFilePrivate
                                                        COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_acceptableParameterList (const GGS_acceptableParameterList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_acceptableParameterList::CollectionElementPtr_acceptableParameterList (const GGS_formalParameterSignature & in_mRoutineSignature,
                                                                                            const GGS_bool & in_mIsFilePrivate
                                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mRoutineSignature, in_mIsFilePrivate) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_acceptableParameterList::CollectionElementPtr_acceptableParameterList (const GGS_acceptableParameterList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mRoutineSignature, inElement.mProperty_mIsFilePrivate) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_acceptableParameterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_acceptableParameterList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_acceptableParameterList (mObject.mProperty_mRoutineSignature, mObject.mProperty_mIsFilePrivate COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @acceptableParameterList
//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList::GGS_acceptableParameterList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList::GGS_acceptableParameterList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_acceptableParameterList * p = (CollectionElementPtr_acceptableParameterList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_acceptableParameterList) ;
    const GGS_acceptableParameterList_2E_element element (p->mObject.mProperty_mRoutineSignature, p->mObject.mProperty_mIsFilePrivate) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                             const GGS_formalParameterSignature & in_mRoutineSignature,
                                                             const GGS_bool & in_mIsFilePrivate
                                                             COMMA_LOCATION_ARGS) {
  CollectionElementPtr_acceptableParameterList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_acceptableParameterList (in_mRoutineSignature, in_mIsFilePrivate COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_acceptableParameterList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_acceptableParameterList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mRoutineSignature:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRoutineSignature.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mIsFilePrivate:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mIsFilePrivate.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_acceptableParameterList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::plusPlusAssignOperation (const GGS_acceptableParameterList_2E_element & inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::class_func_listWithValue (const GGS_formalParameterSignature & inOperand0,
                                                                                   const GGS_bool & inOperand1
                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_acceptableParameterList_2E_element element (inOperand0, inOperand1) ;
  GGS_acceptableParameterList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::addAssignOperation (const GGS_formalParameterSignature & inOperand0,
                                                      const GGS_bool & inOperand1
                                                      COMMA_LOCATION_ARGS) {
  const GGS_acceptableParameterList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::setter_append (const GGS_formalParameterSignature inOperand0,
                                                 const GGS_bool inOperand1,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  const GGS_acceptableParameterList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::setter_insertAtIndex (const GGS_formalParameterSignature inOperand0,
                                                        const GGS_bool inOperand1,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  const GGS_acceptableParameterList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::setter_removeAtIndex (GGS_formalParameterSignature & outOperand0,
                                                        GGS_bool & outOperand1,
                                                        const GGS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mRoutineSignature ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mIsFilePrivate ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::setter_popFirst (GGS_formalParameterSignature & outOperand0,
                                                   GGS_bool & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRoutineSignature ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mIsFilePrivate ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::setter_popLast (GGS_formalParameterSignature & outOperand0,
                                                  GGS_bool & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRoutineSignature ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mIsFilePrivate ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::method_first (GGS_formalParameterSignature & outOperand0,
                                                GGS_bool & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRoutineSignature ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mIsFilePrivate ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::method_last (GGS_formalParameterSignature & outOperand0,
                                               GGS_bool & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRoutineSignature ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mIsFilePrivate ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::add_operation (const GGS_acceptableParameterList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_acceptableParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::subList (const int32_t inStart,
                                                                  const int32_t inLength,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_acceptableParameterList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_acceptableParameterList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_acceptableParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_acceptableParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::plusAssignOperation (const GGS_acceptableParameterList inList,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::setter_setMRoutineSignatureAtIndex (GGS_formalParameterSignature inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRoutineSignature = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_formalParameterSignature GGS_acceptableParameterList::getter_mRoutineSignatureAtIndex (const GGS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_formalParameterSignature result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRoutineSignature ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_acceptableParameterList::setter_setMIsFilePrivateAtIndex (GGS_bool inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mIsFilePrivate = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_acceptableParameterList::getter_mIsFilePrivateAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mIsFilePrivate ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @acceptableParameterList
//--------------------------------------------------------------------------------------------------

DownEnumerator_acceptableParameterList::DownEnumerator_acceptableParameterList (const GGS_acceptableParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList_2E_element DownEnumerator_acceptableParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature DownEnumerator_acceptableParameterList::current_mRoutineSignature (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRoutineSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_acceptableParameterList::current_mIsFilePrivate (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsFilePrivate ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @acceptableParameterList
//--------------------------------------------------------------------------------------------------

UpEnumerator_acceptableParameterList::UpEnumerator_acceptableParameterList (const GGS_acceptableParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList_2E_element UpEnumerator_acceptableParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature UpEnumerator_acceptableParameterList::current_mRoutineSignature (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRoutineSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_acceptableParameterList::current_mIsFilePrivate (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsFilePrivate ;
}




//--------------------------------------------------------------------------------------------------
//     @acceptableParameterList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_acceptableParameterList ("acceptableParameterList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_acceptableParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_acceptableParameterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_acceptableParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_acceptableParameterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_acceptableParameterList GGS_acceptableParameterList::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_acceptableParameterList result ;
  const GGS_acceptableParameterList * p = (const GGS_acceptableParameterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_acceptableParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("acceptableParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @unifiedTypeMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap::GGS_unifiedTypeMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap::~ GGS_unifiedTypeMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap::GGS_unifiedTypeMap (const GGS_unifiedTypeMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap & GGS_unifiedTypeMap::operator = (const GGS_unifiedTypeMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap GGS_unifiedTypeMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_unifiedTypeMap::getter_hasKey (const GGS_string & inKey
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_unifiedTypeMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                   const GGS_uint & inLevel
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_unifiedTypeMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_unifiedTypeMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_unifiedTypeMap::getter_locationForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_unifiedTypeMap::getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_unifiedTypeMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::performInsert (const GGS_unifiedTypeMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_unifiedTypeMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element>
GGS_unifiedTypeMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_unifiedTypeMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element>>
GGS_unifiedTypeMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_unifiedTypeMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element_3F_ GGS_unifiedTypeMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_unifiedTypeMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_unifiedTypeMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_unifiedTypeMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mElement = info->mProperty_mElement ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap GGS_unifiedTypeMap::class_func_mapWithMapToOverride (const GGS_unifiedTypeMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_unifiedTypeMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap GGS_unifiedTypeMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::setter_internalInsertKey (GGS_lstring inLKey,
                                                   GGS_unifiedTypeMapElementClass inArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_unifiedTypeMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMap::getter_mElementForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapElementClass result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mElement ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::setter_setMElementForKey (GGS_unifiedTypeMapElementClass inValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_unifiedTypeMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mElement = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_unifiedTypeMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mElement:") ;
    inArray (i COMMA_HERE)->mProperty_mElement.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element>> array = sortedInfoArray () ;
    GGS_unifiedTypeMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_unifiedTypeMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_unifiedTypeMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @unifiedTypeMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_unifiedTypeMap::DownEnumerator_unifiedTypeMap (const GGS_unifiedTypeMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element DownEnumerator_unifiedTypeMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_unifiedTypeMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass DownEnumerator_unifiedTypeMap::current_mElement (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mElement ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @unifiedTypeMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_unifiedTypeMap::UpEnumerator_unifiedTypeMap (const GGS_unifiedTypeMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element UpEnumerator_unifiedTypeMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_unifiedTypeMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass UpEnumerator_unifiedTypeMap::current_mElement (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mElement ;
}


//--------------------------------------------------------------------------------------------------
//     @unifiedTypeMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMap ("unifiedTypeMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap GGS_unifiedTypeMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMap result ;
  const GGS_unifiedTypeMap * p = (const GGS_unifiedTypeMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap makeEntry'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntry (GGS_unifiedTypeMap & ioObject,
                                const GGS_lstring constinArgument_inLKey,
                                GGS_unifiedTypeMapEntry & outArgument_outEntry,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntry.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inLKey.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas3", 47)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unifiedTypeMap temp_2 = ioObject ;
      const GGS_unifiedTypeMap_2E_element var_node_2205 = temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_1 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_1) {
        outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_node_2205.readProperty_mElement ()  COMMA_SOURCE_FILE ("unified-type-map.galgas3", 49)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GGS_unifiedTypeMapElementClass var_newElement_2307 = GGS_unifiedTypeMapElementClass::init_21_ (GGS_typeDefinition::class_func_unsolved (SOURCE_FILE ("unified-type-map.galgas3", 51)), inCompiler COMMA_HERE) ;
      {
      ioObject.setter_internalInsertKey (constinArgument_inLKey, var_newElement_2307, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas3", 52)) ;
      }
      outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_newElement_2307  COMMA_SOURCE_FILE ("unified-type-map.galgas3", 53)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap makeEntryFromString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntryFromString (GGS_unifiedTypeMap & ioObject,
                                          const GGS_string constinArgument_inKey,
                                          GGS_unifiedTypeMapEntry & outArgument_outEntry,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntry.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inKey.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas3", 61)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unifiedTypeMap temp_2 = ioObject ;
      const GGS_unifiedTypeMap_2E_element var_node_2722 = temp_2.readSubscript__3F_ (constinArgument_inKey, inCompiler COMMA_HERE).unwrappedValue () ;
      if (!temp_2.readSubscript__3F_ (constinArgument_inKey, inCompiler COMMA_HERE).isValuated ()) {
        test_1 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_1) {
        outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_node_2722.readProperty_mElement ()  COMMA_SOURCE_FILE ("unified-type-map.galgas3", 63)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GGS_unifiedTypeMapElementClass var_newElement_2823 = GGS_unifiedTypeMapElementClass::init_21_ (GGS_typeDefinition::class_func_unsolved (SOURCE_FILE ("unified-type-map.galgas3", 65)), inCompiler COMMA_HERE) ;
      {
      ioObject.setter_internalInsertKey (GGS_lstring::init_21__21_ (constinArgument_inKey, GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas3", 66)), inCompiler COMMA_HERE), var_newElement_2823, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas3", 66)) ;
      }
      outArgument_outEntry = GGS_unifiedTypeMapEntry::class_func_element (var_newElement_2823  COMMA_SOURCE_FILE ("unified-type-map.galgas3", 67)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//  Extension Getter '@unifiedTypeMap typeMapEntryForLKey'
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry extensionGetter_typeMapEntryForLKey (const GGS_unifiedTypeMap & inObject,
                                                             const GGS_lstring & constinArgument_inLKey,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inLKey.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas3", 75)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unifiedTypeMap temp_2 = inObject ;
      const GGS_unifiedTypeMap_2E_element var_node_3252 = temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_1 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_1) {
        result_result = GGS_unifiedTypeMapEntry::class_func_element (var_node_3252.readProperty_mElement ()  COMMA_SOURCE_FILE ("unified-type-map.galgas3", 77)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inLKey.readProperty_location (), GGS_string ("there is no '@").add_operation (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas3", 79)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas3", 79)), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas3", 79)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@unifiedTypeMap typeMapEntryOrNullForLKey'
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry extensionGetter_typeMapEntryOrNullForLKey (const GGS_unifiedTypeMap & inObject,
                                                                   const GGS_lstring & constinArgument_inLKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inLKey.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas3", 87)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unifiedTypeMap temp_2 = inObject ;
      const GGS_unifiedTypeMap_2E_element var_node_3677 = temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!temp_2.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_1 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_1) {
        result_result = GGS_unifiedTypeMapEntry::class_func_element (var_node_3677.readProperty_mElement ()  COMMA_SOURCE_FILE ("unified-type-map.galgas3", 89)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      result_result = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas3", 91)) ;
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap insertType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertType (GGS_unifiedTypeMap & ioObject,
                                 const GGS_lstring constinArgument_inTypeName,
                                 const GGS_unifiedTypeDefinition constinArgument_inTypeDefinition,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_unifiedTypeMap temp_1 = ioObject ;
    const GGS_unifiedTypeMap_2E_element var_node_4004 = temp_1.readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      switch (var_node_4004.readProperty_mElement ().readProperty_mDefinition ().enumValue ()) {
      case GGS_typeDefinition::Enumeration::invalid:
        break ;
      case GGS_typeDefinition::Enumeration::enum_solved:
        {
          GGS_unifiedTypeDefinition extractedValue_4093__0 ;
          var_node_4004.readProperty_mElement ().readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_4093__0) ;
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("type already defined"), fixItArray2  COMMA_SOURCE_FILE ("unified-type-map.galgas3", 101)) ;
        }
        break ;
      case GGS_typeDefinition::Enumeration::enum_unsolved:
        {
          GGS_unifiedTypeMapElementClass var_e_4184 = var_node_4004.readProperty_mElement () ;
          var_e_4184.setProperty_mDefinition (GGS_typeDefinition::class_func_solved (constinArgument_inTypeDefinition  COMMA_SOURCE_FILE ("unified-type-map.galgas3", 104))) ;
        }
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_unifiedTypeMapElementClass var_newElement_4295 = GGS_unifiedTypeMapElementClass::init_21_ (GGS_typeDefinition::class_func_solved (constinArgument_inTypeDefinition  COMMA_SOURCE_FILE ("unified-type-map.galgas3", 107)), inCompiler COMMA_HERE) ;
    {
    ioObject.setter_internalInsertKey (constinArgument_inTypeName, var_newElement_4295, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas3", 108)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//  Extension Getter '@unifiedTypeMap typeDefinition'
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition extensionGetter_typeDefinition (const GGS_unifiedTypeMap & inObject,
                                                          const GGS_lstring & constinArgument_inLKey,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeDefinition result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_unifiedTypeMap temp_1 = inObject ;
    const GGS_unifiedTypeMap_2E_element var_node_4633 = temp_1.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readSubscript__3F_ (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      switch (var_node_4633.readProperty_mElement ().readProperty_mDefinition ().enumValue ()) {
      case GGS_typeDefinition::Enumeration::invalid:
        break ;
      case GGS_typeDefinition::Enumeration::enum_solved:
        {
          GGS_unifiedTypeDefinition extractedValue_4718_definition_0 ;
          var_node_4633.readProperty_mElement ().readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_4718_definition_0) ;
          result_result = extractedValue_4718_definition_0 ;
        }
        break ;
      case GGS_typeDefinition::Enumeration::enum_unsolved:
        {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inLKey.readProperty_location (), GGS_string ("unsolved type"), fixItArray2  COMMA_SOURCE_FILE ("unified-type-map.galgas3", 120)) ;
          result_result.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GenericArray <FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_inLKey.readProperty_location (), GGS_string ("there is no '@").add_operation (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas3", 123)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas3", 123)), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas3", 123)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Enum typeDefinition
//--------------------------------------------------------------------------------------------------

GGS_typeDefinition::GGS_typeDefinition (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeDefinition GGS_typeDefinition::class_func_unsolved (UNUSED_LOCATION_ARGS) {
  GGS_typeDefinition result ;
  result.mEnum = Enumeration::enum_unsolved ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition GGS_typeDefinition::class_func_solved (const GGS_unifiedTypeDefinition & inAssociatedValue0
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeDefinition result ;
  result.mEnum = Enumeration::enum_solved ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeDefinition_2E_solved (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition::method_extractSolved (GGS_unifiedTypeDefinition & outAssociatedValue_definition,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_solved) {
    outAssociatedValue_definition.drop () ;
    String s ;
    s.appendCString ("method @typeDefinition.solved invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeDefinition_2E_solved *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_definition = ptr->mProperty_definition ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition_2E_solved_3F_ GGS_typeDefinition::getter_getSolved (UNUSED_LOCATION_ARGS) const {
  GGS_typeDefinition_2E_solved_3F_ result ;
  if (mEnum == Enumeration::enum_solved) {
    const auto ptr = (const GGS_typeDefinition_2E_solved *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeDefinition_2E_solved (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition::getAssociatedValuesFor_solved (GGS_unifiedTypeDefinition & out_definition) const {
  const auto ptr = (const GGS_typeDefinition_2E_solved *) mAssociatedValues.associatedValuesPointer () ;
  out_definition = ptr->mProperty_definition ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_typeDefinition [3] = {
  "(not built)",
  "unsolved",
  "solved"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeDefinition::getter_isUnsolved (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_unsolved == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeDefinition::getter_isSolved (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_solved == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDefinition::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("<enum @typeDefinition: ") ;
  ioString.appendCString (gEnumNameArrayFor_typeDefinition [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @typeDefinition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDefinition ("typeDefinition",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDefinition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeDefinition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition GGS_typeDefinition::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_typeDefinition result ;
  const GGS_typeDefinition * p = (const GGS_typeDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapElementClass_2E_weak::objectCompare (const GGS_unifiedTypeMapElementClass_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_2E_weak::GGS_unifiedTypeMapElementClass_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_2E_weak & GGS_unifiedTypeMapElementClass_2E_weak::operator = (const GGS_unifiedTypeMapElementClass & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_2E_weak::GGS_unifiedTypeMapElementClass_2E_weak (const GGS_unifiedTypeMapElementClass & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_2E_weak GGS_unifiedTypeMapElementClass_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_unifiedTypeMapElementClass_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMapElementClass_2E_weak::unwrappedValue (void) const {
  GGS_unifiedTypeMapElementClass result ;
  if (isValid ()) {
    const cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) ptr () ;
    if (nullptr != p) {
      result = GGS_unifiedTypeMapElementClass (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMapElementClass_2E_weak::bang_unifiedTypeMapElementClass_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapElementClass result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unifiedTypeMapElementClass) ;
      result = GGS_unifiedTypeMapElementClass ((cPtr_unifiedTypeMapElementClass *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @unifiedTypeMapElementClass.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2E_weak ("unifiedTypeMapElementClass.weak",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMapElementClass_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapElementClass_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapElementClass_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass_2E_weak GGS_unifiedTypeMapElementClass_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapElementClass_2E_weak result ;
  const GGS_unifiedTypeMapElementClass_2E_weak * p = (const GGS_unifiedTypeMapElementClass_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapElementClass_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapElementClass.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@unifiedTypeMapEntry definition'
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition extensionGetter_definition (const GGS_unifiedTypeMapEntry & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeDefinition result_result ; // Returned variable
  const GGS_unifiedTypeMapEntry temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_unifiedTypeMapEntry::Enumeration::invalid:
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
    {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas3", 182)), GGS_string ("null type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas3", 182)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
    {
      GGS_unifiedTypeMapElementClass_2E_weak extractedValue_6932_weakElement_0 ;
      temp_0.getAssociatedValuesFor_element (extractedValue_6932_weakElement_0) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_unifiedTypeMapElementClass var_type_6960 = extractedValue_6932_weakElement_0.unwrappedValue () ;
        if (!extractedValue_6932_weakElement_0.isValuated ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          switch (var_type_6960.readProperty_mDefinition ().enumValue ()) {
          case GGS_typeDefinition::Enumeration::invalid:
            break ;
          case GGS_typeDefinition::Enumeration::enum_unsolved:
            {
              GenericArray <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas3", 187)), GGS_string ("unsolved type"), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas3", 187)) ;
              result_result.drop () ; // Release error dropped variable
            }
            break ;
          case GGS_typeDefinition::Enumeration::enum_solved:
            {
              GGS_unifiedTypeDefinition extractedValue_7119_definition_0 ;
              var_type_6960.readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_7119_definition_0) ;
              result_result = extractedValue_7119_definition_0 ;
            }
            break ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas3", 192)), GGS_string ("nil type"), fixItArray4  COMMA_SOURCE_FILE ("unified-type-map.galgas3", 192)) ;
        result_result.drop () ; // Release error dropped variable
      }
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@unifiedTypeMapEntry identifierRepresentation'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_identifierRepresentation (const GGS_unifiedTypeMapEntry & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_unifiedTypeMapEntry temp_0 = inObject ;
  result_result = extensionGetter_definition (temp_0, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas3", 200)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-type-map.galgas3", 200)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@unifiedTypeMapEntry typeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_typeName (const GGS_unifiedTypeMapEntry & inObject,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_unifiedTypeMapEntry temp_0 = inObject ;
  result_result = extensionGetter_definition (temp_0, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas3", 206)).readProperty_typeName ().readProperty_string () ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@unifiedTypeMapEntry baseType'
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry extensionGetter_baseType (const GGS_unifiedTypeMapEntry & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry result_outBaseType ; // Returned variable
  const GGS_unifiedTypeMapEntry temp_0 = inObject ;
  result_outBaseType = temp_0 ;
  bool loop_7846 = true ;
  while (loop_7846) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = extensionGetter_definition (result_outBaseType, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas3", 213)).readProperty_superType ().getter_isNull (SOURCE_FILE ("unified-type-map.galgas3", 213)).operator_not (SOURCE_FILE ("unified-type-map.galgas3", 213)).boolEnum () ;
      loop_7846 = test_1 == GalgasBool::boolTrue ;
      if (loop_7846) {
        result_outBaseType = extensionGetter_definition (result_outBaseType, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas3", 214)).readProperty_superType () ;
      }
    }
  }
//---
  return result_outBaseType ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMapEntry addHeaderFileName'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName (const GGS_unifiedTypeMapEntry inObject,
                                        GGS_stringset & ioArgument_ioInclusions,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unifiedTypeMapEntry temp_0 = inObject ;
  GGS_unifiedTypeDefinition var_typeDefinition_8133 = extensionGetter_definition (temp_0, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas3", 221)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_typeDefinition_8133.readProperty_isPredefined ().operator_not (SOURCE_FILE ("unified-type-map.galgas3", 222)).operator_and (GGS_bool (ComparisonKind::notEqual, var_typeDefinition_8133.readProperty_headerKind ().objectCompare (GGS_headerKind::class_func_noHeader (SOURCE_FILE ("unified-type-map.galgas3", 222)))) COMMA_SOURCE_FILE ("unified-type-map.galgas3", 222)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioInclusions.plusPlusAssignOperation (var_typeDefinition_8133.readProperty_headerFileName ()  COMMA_SOURCE_FILE ("unified-type-map.galgas3", 223)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMapEntry addHeaderFileName1'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName_31_ (const GGS_unifiedTypeMapEntry inObject,
                                            GGS_stringset & ioArgument_ioInclusions,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unifiedTypeMapEntry temp_0 = inObject ;
  GGS_unifiedTypeDefinition var_typeDefinition_8485 = extensionGetter_definition (temp_0, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas3", 230)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_typeDefinition_8485.readProperty_isPredefined ().operator_not (SOURCE_FILE ("unified-type-map.galgas3", 231)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      switch (var_typeDefinition_8485.readProperty_headerKind ().enumValue ()) {
      case GGS_headerKind::Enumeration::invalid:
        break ;
      case GGS_headerKind::Enumeration::enum_noHeader:
        break ;
      case GGS_headerKind::Enumeration::enum_oneHeader:
        {
          ioArgument_ioInclusions.plusPlusAssignOperation (var_typeDefinition_8485.readProperty_headerFileName ()  COMMA_SOURCE_FILE ("unified-type-map.galgas3", 235)) ;
        }
        break ;
      case GGS_headerKind::Enumeration::enum_twoHeaders:
        {
          ioArgument_ioInclusions.plusPlusAssignOperation (var_typeDefinition_8485.readProperty_headerFileName ().add_operation (GGS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas3", 237))  COMMA_SOURCE_FILE ("unified-type-map.galgas3", 237)) ;
        }
        break ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary GGS_syntaxExtensionsDictionary::builtDictionary (LOCATION_ARGS) {
  GGS_syntaxExtensionsDictionary result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary GGS_syntaxExtensionsDictionary::init (Compiler * COMMA_LOCATION_ARGS) {
  return GGS_syntaxExtensionsDictionary::builtDictionary (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<dict @") ;
  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  if (isValid ()) {
    ioString.appendSigned (count ()) ;
    ioString.appendCString (" node(s)") ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_syntaxExtensionsDictionary::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element_3F_ GGS_syntaxExtensionsDictionary::
readSubscript__3F_ (const class GGS_string & inKey,
                    Compiler * /* inCompiler */
                    COMMA_UNUSED_LOCATION_ARGS) const {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_syntaxExtensionsDictionary_2E_element> object = infoForKey (inKey) ;
    if (object.isNotNil ()) {
      return GGS_syntaxExtensionsDictionary_2E_element_3F_ (object.value ()) ;
    }else{
      return GGS_syntaxExtensionsDictionary_2E_element_3F_::init_nil () ;
    }
  }else{
    return GGS_syntaxExtensionsDictionary_2E_element_3F_ () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::plusPlusAssignOperation (const GGS_syntaxExtensionsDictionary_2E_element & inValue
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inValue.mProperty_key.isValid ()) {
    insertOrReplace (inValue.mProperty_key, inValue COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::addAssignOperation (const GGS_string & inKey,
                                                         const GGS_galgas_33_SyntaxExtensionListAST & inArgument0,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  GGS_syntaxExtensionsDictionary_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    insertOrReplace (inKey, newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::setter_insert (const GGS_string inKey,
                                                    const GGS_galgas_33_SyntaxExtensionListAST inArgument0,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  GGS_syntaxExtensionsDictionary_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    insertOrReplace (inKey, newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_syntaxExtensionsDictionary::getter_hasKey (const GGS_string & inKey
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (hasKey (inKey)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::method_searchKey (GGS_string inKey,
                                                       GGS_galgas_33_SyntaxExtensionListAST & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_syntaxExtensionsDictionary_2E_element> object = infoForKey (inKey) ;
    if (object.isNil ()) {
    //--- Build error message
      const String message = "cannot search in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop out arguments
      outArgument0.drop () ;
    }else{
      outArgument0 = object->mProperty_extensionList ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::setter_removeKey (GGS_string inKey,
                                                       GGS_galgas_33_SyntaxExtensionListAST & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_syntaxExtensionsDictionary_2E_element> removedObject
                    = removeAndReturnRemovedInfo (inKey COMMA_THERE) ;
    if (removedObject.isNil ()) { // Not found
    //--- Build error message
      const String message = "cannot remove in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop output arguments
      outArgument0.drop () ;
    }else{
    //--- Assign output arguments
      outArgument0 = removedObject->mProperty_extensionList ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_syntaxExtensionsDictionary::getter_extensionListForKey (const GGS_string & inKey,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxExtensionListAST result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_syntaxExtensionsDictionary_2E_element> object = infoForKey (inKey) ;
    if (object.isNil ()) { // Not found
    //--- Build error message
      const String message = "cannot get extensionList ForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = object->mProperty_extensionList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensionsDictionary::setter_setExtensionListForKey (GGS_galgas_33_SyntaxExtensionListAST inPropertyValue,
                                                                    GGS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    OptionalSharedRef <GenericDictionaryNode <GGS_string, GGS_syntaxExtensionsDictionary_2E_element>> modifiedNode = nodeForKey (inKey) ;
    if (modifiedNode.isNil ()) { // Not found
    //--- Build error message
     const String message = "cannot setExtensionListForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      modifiedNode->mSharedInfo->mProperty_extensionList = inPropertyValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @syntaxExtensionsDictionary
//--------------------------------------------------------------------------------------------------

UpEnumerator_syntaxExtensionsDictionary::UpEnumerator_syntaxExtensionsDictionary (const GGS_syntaxExtensionsDictionary & inOperand) :
mInfoArray (inOperand.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_syntaxExtensionsDictionary::current_key (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST UpEnumerator_syntaxExtensionsDictionary::current_extensionList (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_extensionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element UpEnumerator_syntaxExtensionsDictionary::current (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE).value () ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @syntaxExtensionsDictionary
//--------------------------------------------------------------------------------------------------

DownEnumerator_syntaxExtensionsDictionary::DownEnumerator_syntaxExtensionsDictionary (const GGS_syntaxExtensionsDictionary & inOperand) :
mInfoArray (inOperand.sortedInfoArray ()),
mIndex () {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_syntaxExtensionsDictionary::current_key (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST DownEnumerator_syntaxExtensionsDictionary::current_extensionList (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_extensionList ;
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary_2E_element DownEnumerator_syntaxExtensionsDictionary::current (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE).value () ;
}
//--------------------------------------------------------------------------------------------------
//     @syntaxExtensionsDictionary generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxExtensionsDictionary ("syntaxExtensionsDictionary",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxExtensionsDictionary::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxExtensionsDictionary ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxExtensionsDictionary::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxExtensionsDictionary (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensionsDictionary GGS_syntaxExtensionsDictionary::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_syntaxExtensionsDictionary result ;
  const GGS_syntaxExtensionsDictionary * p = (const GGS_syntaxExtensionsDictionary *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxExtensionsDictionary *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxExtensionsDictionary", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@galgas_33_SyntaxExtensionListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_galgas_33_SyntaxExtensionListAST : public CollectionElementPtr {
  public: GGS_galgas_33_SyntaxExtensionListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_galgas_33_SyntaxExtensionListAST (const GGS_lstring & in_mSyntaxComponentName,
                                                                 const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                 const GGS_syntaxRuleListAST & in_mRuleList
                                                                 COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_galgas_33_SyntaxExtensionListAST (const GGS_galgas_33_SyntaxExtensionListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_galgas_33_SyntaxExtensionListAST::CollectionElementPtr_galgas_33_SyntaxExtensionListAST (const GGS_lstring & in_mSyntaxComponentName,
                                                                                                              const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                                                              const GGS_syntaxRuleListAST & in_mRuleList
                                                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mSyntaxComponentName, in_mNonterminalDeclarationList, in_mRuleList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_galgas_33_SyntaxExtensionListAST::CollectionElementPtr_galgas_33_SyntaxExtensionListAST (const GGS_galgas_33_SyntaxExtensionListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mSyntaxComponentName, inElement.mProperty_mNonterminalDeclarationList, inElement.mProperty_mRuleList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_galgas_33_SyntaxExtensionListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_galgas_33_SyntaxExtensionListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_galgas_33_SyntaxExtensionListAST (mObject.mProperty_mSyntaxComponentName, mObject.mProperty_mNonterminalDeclarationList, mObject.mProperty_mRuleList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @galgas_33_SyntaxExtensionListAST
//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST::GGS_galgas_33_SyntaxExtensionListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST::GGS_galgas_33_SyntaxExtensionListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_galgas_33_SyntaxExtensionListAST * p = (CollectionElementPtr_galgas_33_SyntaxExtensionListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_galgas_33_SyntaxExtensionListAST) ;
    const GGS_galgas_33_SyntaxExtensionListAST_2E_element element (p->mObject.mProperty_mSyntaxComponentName, p->mObject.mProperty_mNonterminalDeclarationList, p->mObject.mProperty_mRuleList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                      const GGS_lstring & in_mSyntaxComponentName,
                                                                      const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                      const GGS_syntaxRuleListAST & in_mRuleList
                                                                      COMMA_LOCATION_ARGS) {
  CollectionElementPtr_galgas_33_SyntaxExtensionListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_galgas_33_SyntaxExtensionListAST (in_mSyntaxComponentName, in_mNonterminalDeclarationList, in_mRuleList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_galgas_33_SyntaxExtensionListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_galgas_33_SyntaxExtensionListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSyntaxComponentName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSyntaxComponentName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mNonterminalDeclarationList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mNonterminalDeclarationList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mRuleList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRuleList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxExtensionListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::plusPlusAssignOperation (const GGS_galgas_33_SyntaxExtensionListAST_2E_element & inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                     const GGS_nonterminalDeclarationListAST & inOperand1,
                                                                                                     const GGS_syntaxRuleListAST & inOperand2
                                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxExtensionListAST_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_galgas_33_SyntaxExtensionListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                               const GGS_nonterminalDeclarationListAST & inOperand1,
                                                               const GGS_syntaxRuleListAST & inOperand2
                                                               COMMA_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxExtensionListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_append (const GGS_lstring inOperand0,
                                                          const GGS_nonterminalDeclarationListAST inOperand1,
                                                          const GGS_syntaxRuleListAST inOperand2,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxExtensionListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                 const GGS_nonterminalDeclarationListAST inOperand1,
                                                                 const GGS_syntaxRuleListAST inOperand2,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxExtensionListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                 GGS_nonterminalDeclarationListAST & outOperand1,
                                                                 GGS_syntaxRuleListAST & outOperand2,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSyntaxComponentName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mNonterminalDeclarationList ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mRuleList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                            GGS_nonterminalDeclarationListAST & outOperand1,
                                                            GGS_syntaxRuleListAST & outOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSyntaxComponentName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mNonterminalDeclarationList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mRuleList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_popLast (GGS_lstring & outOperand0,
                                                           GGS_nonterminalDeclarationListAST & outOperand1,
                                                           GGS_syntaxRuleListAST & outOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSyntaxComponentName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mNonterminalDeclarationList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mRuleList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::method_first (GGS_lstring & outOperand0,
                                                         GGS_nonterminalDeclarationListAST & outOperand1,
                                                         GGS_syntaxRuleListAST & outOperand2,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSyntaxComponentName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mNonterminalDeclarationList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mRuleList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::method_last (GGS_lstring & outOperand0,
                                                        GGS_nonterminalDeclarationListAST & outOperand1,
                                                        GGS_syntaxRuleListAST & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSyntaxComponentName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mNonterminalDeclarationList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mRuleList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::add_operation (const GGS_galgas_33_SyntaxExtensionListAST & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxExtensionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::subList (const int32_t inStart,
                                                                                    const int32_t inLength,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxExtensionListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxExtensionListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxExtensionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxExtensionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::plusAssignOperation (const GGS_galgas_33_SyntaxExtensionListAST inList,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_setMSyntaxComponentNameAtIndex (GGS_lstring inOperand,
                                                                                  GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxComponentName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_galgas_33_SyntaxExtensionListAST::getter_mSyntaxComponentNameAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxComponentName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_setMNonterminalDeclarationListAtIndex (GGS_nonterminalDeclarationListAST inOperand,
                                                                                         GGS_uint inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mNonterminalDeclarationList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_nonterminalDeclarationListAST GGS_galgas_33_SyntaxExtensionListAST::getter_mNonterminalDeclarationListAtIndex (const GGS_uint & inIndex,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_nonterminalDeclarationListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mNonterminalDeclarationList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxExtensionListAST::setter_setMRuleListAtIndex (GGS_syntaxRuleListAST inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRuleList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_syntaxRuleListAST GGS_galgas_33_SyntaxExtensionListAST::getter_mRuleListAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_syntaxRuleListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRuleList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @galgas_33_SyntaxExtensionListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_galgas_33_SyntaxExtensionListAST::DownEnumerator_galgas_33_SyntaxExtensionListAST (const GGS_galgas_33_SyntaxExtensionListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST_2E_element DownEnumerator_galgas_33_SyntaxExtensionListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_galgas_33_SyntaxExtensionListAST::current_mSyntaxComponentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxComponentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST DownEnumerator_galgas_33_SyntaxExtensionListAST::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mNonterminalDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST DownEnumerator_galgas_33_SyntaxExtensionListAST::current_mRuleList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRuleList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @galgas_33_SyntaxExtensionListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_galgas_33_SyntaxExtensionListAST::UpEnumerator_galgas_33_SyntaxExtensionListAST (const GGS_galgas_33_SyntaxExtensionListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST_2E_element UpEnumerator_galgas_33_SyntaxExtensionListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_galgas_33_SyntaxExtensionListAST::current_mSyntaxComponentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxComponentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST UpEnumerator_galgas_33_SyntaxExtensionListAST::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mNonterminalDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST UpEnumerator_galgas_33_SyntaxExtensionListAST::current_mRuleList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRuleList ;
}




//--------------------------------------------------------------------------------------------------
//     @galgas3SyntaxExtensionListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST ("galgas3SyntaxExtensionListAST",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_SyntaxExtensionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_SyntaxExtensionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_SyntaxExtensionListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST GGS_galgas_33_SyntaxExtensionListAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxExtensionListAST result ;
  const GGS_galgas_33_SyntaxExtensionListAST * p = (const GGS_galgas_33_SyntaxExtensionListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_SyntaxExtensionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxExtensionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensions::GGS_syntaxExtensions (void) :
mProperty_dictionary () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensions::GGS_syntaxExtensions (const GGS_syntaxExtensions & inSource) :
mProperty_dictionary (inSource.mProperty_dictionary) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensions & GGS_syntaxExtensions::operator = (const GGS_syntaxExtensions & inSource) {
  mProperty_dictionary = inSource.mProperty_dictionary ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_syntaxExtensions GGS_syntaxExtensions::init (Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxExtensions result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensions::setInitializedProperties (Compiler * inCompiler) {
  mProperty_dictionary = GGS_syntaxExtensionsDictionary::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensions::GGS_syntaxExtensions (const GGS_syntaxExtensionsDictionary & inOperand0) :
mProperty_dictionary (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxExtensions::isValid (void) const {
  return mProperty_dictionary.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensions::drop (void) {
  mProperty_dictionary.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxExtensions::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxExtensions:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_dictionary.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxExtensions generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxExtensions ("syntaxExtensions",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxExtensions::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxExtensions ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxExtensions::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxExtensions (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxExtensions GGS_syntaxExtensions::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_syntaxExtensions result ;
  const GGS_syntaxExtensions * p = (const GGS_syntaxExtensions *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxExtensions *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxExtensions", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@syntaxExtensions listForKey'
//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxExtensionListAST extensionGetter_listForKey (const GGS_syntaxExtensions & inObject,
                                                                 const GGS_string & constinArgument_inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxExtensionListAST result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_syntaxExtensions temp_1 = inObject ;
    test_0 = temp_1.readProperty_dictionary ().getter_hasKey (constinArgument_inKey COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas3", 56)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_syntaxExtensions temp_2 = inObject ;
      temp_2.readProperty_dictionary ().method_searchKey (constinArgument_inKey, result_result, inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas3", 57)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_galgas_33_SyntaxExtensionListAST::init (inCompiler COMMA_HERE) ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticExpressionAST_2E_weak::objectCompare (const GGS_semanticExpressionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST_2E_weak::GGS_semanticExpressionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST_2E_weak & GGS_semanticExpressionAST_2E_weak::operator = (const GGS_semanticExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST_2E_weak::GGS_semanticExpressionAST_2E_weak (const GGS_semanticExpressionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST_2E_weak GGS_semanticExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_semanticExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_semanticExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_semanticExpressionAST result ;
  if (isValid ()) {
    const cPtr_semanticExpressionAST * p = (cPtr_semanticExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_semanticExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_semanticExpressionAST_2E_weak::bang_semanticExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_semanticExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticExpressionAST) ;
      result = GGS_semanticExpressionAST ((cPtr_semanticExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak ("semanticExpressionAST.weak",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST_2E_weak GGS_semanticExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_semanticExpressionAST_2E_weak result ;
  const GGS_semanticExpressionAST_2E_weak * p = (const GGS_semanticExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@formalArgumentPassingModeAST string'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_string (const GGS_formalArgumentPassingModeAST & inObject,
                                   Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    {
      result_result = GGS_string ("\?let") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
    {
      result_result = GGS_string ("\?") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
    {
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
    {
      result_result = GGS_string ("\?!") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@formalArgumentPassingModeAST formalArgumentMessage'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_formalArgumentMessage (const GGS_formalArgumentPassingModeAST & inObject,
                                                  Compiler *
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    {
      result_result = GGS_string ("a constant input (\?let) formal argument") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
    {
      result_result = GGS_string ("an input (\?) formal argument") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
    {
      result_result = GGS_string ("an output (!) formal argument") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
    {
      result_result = GGS_string ("an input/output (\?!) formal argument") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@formalParameterListAST keyRepresentation'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_keyRepresentation (const GGS_formalParameterListAST & inObject,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("(") ;
  const GGS_formalParameterListAST temp_0 = inObject ;
  UpEnumerator_formalParameterListAST enumerator_4911 (temp_0) ;
  while (enumerator_4911.hasCurrentObject ()) {
    switch (enumerator_4911.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        result_result.plusAssignOperation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas3", 126)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        result_result.plusAssignOperation(GGS_string ("\?!"), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas3", 128)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        result_result.plusAssignOperation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas3", 130)) ;
      }
      break ;
    }
    result_result.plusAssignOperation(enumerator_4911.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas3", 132)) ;
    enumerator_4911.gotoNextObject () ;
    if (enumerator_4911.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas3", 134)) ;
    }
  }
  result_result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas3", 136)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@formalInputParameterListAST initializerSignature'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_initializerSignature (const GGS_formalInputParameterListAST & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("init") ;
  const GGS_formalInputParameterListAST temp_0 = inObject ;
  UpEnumerator_formalInputParameterListAST enumerator_5832 (temp_0) ;
  while (enumerator_5832.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("!").add_operation (enumerator_5832.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas3", 157)), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas3", 157)) ;
    enumerator_5832.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @abstractInputParameter reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractInputParameter::objectCompare (const GGS_abstractInputParameter & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInputParameter::GGS_abstractInputParameter (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractInputParameter::
abstractInputParameter_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInputParameter::GGS_abstractInputParameter (const cPtr_abstractInputParameter * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractInputParameter) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractInputParameter class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractInputParameter::cPtr_abstractInputParameter (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractInputParameter::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractInputParameter generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractInputParameter ("abstractInputParameter",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractInputParameter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractInputParameter ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractInputParameter::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractInputParameter (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInputParameter GGS_abstractInputParameter::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_abstractInputParameter result ;
  const GGS_abstractInputParameter * p = (const GGS_abstractInputParameter *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractInputParameter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractInputParameter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractInputParameter_2E_weak::objectCompare (const GGS_abstractInputParameter_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInputParameter_2E_weak::GGS_abstractInputParameter_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInputParameter_2E_weak & GGS_abstractInputParameter_2E_weak::operator = (const GGS_abstractInputParameter & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInputParameter_2E_weak::GGS_abstractInputParameter_2E_weak (const GGS_abstractInputParameter & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractInputParameter_2E_weak GGS_abstractInputParameter_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractInputParameter_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInputParameter GGS_abstractInputParameter_2E_weak::unwrappedValue (void) const {
  GGS_abstractInputParameter result ;
  if (isValid ()) {
    const cPtr_abstractInputParameter * p = (cPtr_abstractInputParameter *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractInputParameter (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInputParameter GGS_abstractInputParameter_2E_weak::bang_abstractInputParameter_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractInputParameter result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractInputParameter) ;
      result = GGS_abstractInputParameter ((cPtr_abstractInputParameter *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractInputParameter.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractInputParameter_2E_weak ("abstractInputParameter.weak",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractInputParameter_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractInputParameter_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractInputParameter_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractInputParameter_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractInputParameter_2E_weak GGS_abstractInputParameter_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_abstractInputParameter_2E_weak result ;
  const GGS_abstractInputParameter_2E_weak * p = (const GGS_abstractInputParameter_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractInputParameter_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractInputParameter.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputParameterAnonymousVariable reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputParameterAnonymousVariable::objectCompare (const GGS_inputParameterAnonymousVariable & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterAnonymousVariable::GGS_inputParameterAnonymousVariable (void) :
GGS_abstractInputParameter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputParameterAnonymousVariable GGS_inputParameterAnonymousVariable::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_inputParameterAnonymousVariable * object = nullptr ;
  macroMyNew (object, cPtr_inputParameterAnonymousVariable (inCompiler COMMA_THERE)) ;
  object->inputParameterAnonymousVariable_init (inCompiler) ;
  const GGS_inputParameterAnonymousVariable result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterAnonymousVariable::
inputParameterAnonymousVariable_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterAnonymousVariable::GGS_inputParameterAnonymousVariable (const cPtr_inputParameterAnonymousVariable * inSourcePtr) :
GGS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterAnonymousVariable) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterAnonymousVariable class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_inputParameterAnonymousVariable::cPtr_inputParameterAnonymousVariable (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inputParameterAnonymousVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterAnonymousVariable ;
}

void cPtr_inputParameterAnonymousVariable::description (String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@inputParameterAnonymousVariable]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_inputParameterAnonymousVariable::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputParameterAnonymousVariable (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputParameterAnonymousVariable::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInputParameter::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputParameterAnonymousVariable generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterAnonymousVariable ("inputParameterAnonymousVariable",
                                                                                    & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputParameterAnonymousVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterAnonymousVariable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputParameterAnonymousVariable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputParameterAnonymousVariable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterAnonymousVariable GGS_inputParameterAnonymousVariable::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_inputParameterAnonymousVariable result ;
  const GGS_inputParameterAnonymousVariable * p = (const GGS_inputParameterAnonymousVariable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputParameterAnonymousVariable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterAnonymousVariable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputParameterAnonymousVariable_2E_weak::objectCompare (const GGS_inputParameterAnonymousVariable_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterAnonymousVariable_2E_weak::GGS_inputParameterAnonymousVariable_2E_weak (void) :
GGS_abstractInputParameter_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterAnonymousVariable_2E_weak & GGS_inputParameterAnonymousVariable_2E_weak::operator = (const GGS_inputParameterAnonymousVariable & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterAnonymousVariable_2E_weak::GGS_inputParameterAnonymousVariable_2E_weak (const GGS_inputParameterAnonymousVariable & inSource) :
GGS_abstractInputParameter_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputParameterAnonymousVariable_2E_weak GGS_inputParameterAnonymousVariable_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputParameterAnonymousVariable_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterAnonymousVariable GGS_inputParameterAnonymousVariable_2E_weak::unwrappedValue (void) const {
  GGS_inputParameterAnonymousVariable result ;
  if (isValid ()) {
    const cPtr_inputParameterAnonymousVariable * p = (cPtr_inputParameterAnonymousVariable *) ptr () ;
    if (nullptr != p) {
      result = GGS_inputParameterAnonymousVariable (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterAnonymousVariable GGS_inputParameterAnonymousVariable_2E_weak::bang_inputParameterAnonymousVariable_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputParameterAnonymousVariable result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputParameterAnonymousVariable) ;
      result = GGS_inputParameterAnonymousVariable ((cPtr_inputParameterAnonymousVariable *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inputParameterAnonymousVariable.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterAnonymousVariable_2E_weak ("inputParameterAnonymousVariable.weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractInputParameter_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputParameterAnonymousVariable_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterAnonymousVariable_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputParameterAnonymousVariable_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputParameterAnonymousVariable_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterAnonymousVariable_2E_weak GGS_inputParameterAnonymousVariable_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_inputParameterAnonymousVariable_2E_weak result ;
  const GGS_inputParameterAnonymousVariable_2E_weak * p = (const GGS_inputParameterAnonymousVariable_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputParameterAnonymousVariable_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterAnonymousVariable.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputParameterVariable_2E_weak::objectCompare (const GGS_inputParameterVariable_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterVariable_2E_weak::GGS_inputParameterVariable_2E_weak (void) :
GGS_abstractInputParameter_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterVariable_2E_weak & GGS_inputParameterVariable_2E_weak::operator = (const GGS_inputParameterVariable & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterVariable_2E_weak::GGS_inputParameterVariable_2E_weak (const GGS_inputParameterVariable & inSource) :
GGS_abstractInputParameter_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputParameterVariable_2E_weak GGS_inputParameterVariable_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputParameterVariable_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterVariable GGS_inputParameterVariable_2E_weak::unwrappedValue (void) const {
  GGS_inputParameterVariable result ;
  if (isValid ()) {
    const cPtr_inputParameterVariable * p = (cPtr_inputParameterVariable *) ptr () ;
    if (nullptr != p) {
      result = GGS_inputParameterVariable (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterVariable GGS_inputParameterVariable_2E_weak::bang_inputParameterVariable_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputParameterVariable result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputParameterVariable) ;
      result = GGS_inputParameterVariable ((cPtr_inputParameterVariable *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inputParameterVariable.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterVariable_2E_weak ("inputParameterVariable.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractInputParameter_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputParameterVariable_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputParameterVariable_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputParameterVariable_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterVariable_2E_weak GGS_inputParameterVariable_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_inputParameterVariable_2E_weak result ;
  const GGS_inputParameterVariable_2E_weak * p = (const GGS_inputParameterVariable_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputParameterVariable_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterVariable.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputParameterDeclaredVariable_2E_weak::objectCompare (const GGS_inputParameterDeclaredVariable_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredVariable_2E_weak::GGS_inputParameterDeclaredVariable_2E_weak (void) :
GGS_abstractInputParameter_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredVariable_2E_weak & GGS_inputParameterDeclaredVariable_2E_weak::operator = (const GGS_inputParameterDeclaredVariable & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredVariable_2E_weak::GGS_inputParameterDeclaredVariable_2E_weak (const GGS_inputParameterDeclaredVariable & inSource) :
GGS_abstractInputParameter_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredVariable_2E_weak GGS_inputParameterDeclaredVariable_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputParameterDeclaredVariable_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredVariable GGS_inputParameterDeclaredVariable_2E_weak::unwrappedValue (void) const {
  GGS_inputParameterDeclaredVariable result ;
  if (isValid ()) {
    const cPtr_inputParameterDeclaredVariable * p = (cPtr_inputParameterDeclaredVariable *) ptr () ;
    if (nullptr != p) {
      result = GGS_inputParameterDeclaredVariable (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredVariable GGS_inputParameterDeclaredVariable_2E_weak::bang_inputParameterDeclaredVariable_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputParameterDeclaredVariable result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputParameterDeclaredVariable) ;
      result = GGS_inputParameterDeclaredVariable ((cPtr_inputParameterDeclaredVariable *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inputParameterDeclaredVariable.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterDeclaredVariable_2E_weak ("inputParameterDeclaredVariable.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractInputParameter_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputParameterDeclaredVariable_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredVariable_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputParameterDeclaredVariable_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputParameterDeclaredVariable_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredVariable_2E_weak GGS_inputParameterDeclaredVariable_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_inputParameterDeclaredVariable_2E_weak result ;
  const GGS_inputParameterDeclaredVariable_2E_weak * p = (const GGS_inputParameterDeclaredVariable_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputParameterDeclaredVariable_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterDeclaredVariable.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputParameterDeclaredConstant_2E_weak::objectCompare (const GGS_inputParameterDeclaredConstant_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredConstant_2E_weak::GGS_inputParameterDeclaredConstant_2E_weak (void) :
GGS_abstractInputParameter_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredConstant_2E_weak & GGS_inputParameterDeclaredConstant_2E_weak::operator = (const GGS_inputParameterDeclaredConstant & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredConstant_2E_weak::GGS_inputParameterDeclaredConstant_2E_weak (const GGS_inputParameterDeclaredConstant & inSource) :
GGS_abstractInputParameter_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredConstant_2E_weak GGS_inputParameterDeclaredConstant_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_inputParameterDeclaredConstant_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredConstant GGS_inputParameterDeclaredConstant_2E_weak::unwrappedValue (void) const {
  GGS_inputParameterDeclaredConstant result ;
  if (isValid ()) {
    const cPtr_inputParameterDeclaredConstant * p = (cPtr_inputParameterDeclaredConstant *) ptr () ;
    if (nullptr != p) {
      result = GGS_inputParameterDeclaredConstant (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredConstant GGS_inputParameterDeclaredConstant_2E_weak::bang_inputParameterDeclaredConstant_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_inputParameterDeclaredConstant result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputParameterDeclaredConstant) ;
      result = GGS_inputParameterDeclaredConstant ((cPtr_inputParameterDeclaredConstant *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @inputParameterDeclaredConstant.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterDeclaredConstant_2E_weak ("inputParameterDeclaredConstant.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractInputParameter_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputParameterDeclaredConstant_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredConstant_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputParameterDeclaredConstant_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputParameterDeclaredConstant_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredConstant_2E_weak GGS_inputParameterDeclaredConstant_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_inputParameterDeclaredConstant_2E_weak result ;
  const GGS_inputParameterDeclaredConstant_2E_weak * p = (const GGS_inputParameterDeclaredConstant_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputParameterDeclaredConstant_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterDeclaredConstant.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externFunctionDeclarationAST_2E_weak::objectCompare (const GGS_externFunctionDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationAST_2E_weak::GGS_externFunctionDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationAST_2E_weak & GGS_externFunctionDeclarationAST_2E_weak::operator = (const GGS_externFunctionDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationAST_2E_weak::GGS_externFunctionDeclarationAST_2E_weak (const GGS_externFunctionDeclarationAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationAST_2E_weak GGS_externFunctionDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_externFunctionDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationAST GGS_externFunctionDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_externFunctionDeclarationAST result ;
  if (isValid ()) {
    const cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_externFunctionDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationAST GGS_externFunctionDeclarationAST_2E_weak::bang_externFunctionDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_externFunctionDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_externFunctionDeclarationAST) ;
      result = GGS_externFunctionDeclarationAST ((cPtr_externFunctionDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @externFunctionDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externFunctionDeclarationAST_2E_weak ("externFunctionDeclarationAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externFunctionDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externFunctionDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externFunctionDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationAST_2E_weak GGS_externFunctionDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_externFunctionDeclarationAST_2E_weak result ;
  const GGS_externFunctionDeclarationAST_2E_weak * p = (const GGS_externFunctionDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externFunctionDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionDeclarationAST_2E_weak::objectCompare (const GGS_functionDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST_2E_weak::GGS_functionDeclarationAST_2E_weak (void) :
GGS_externFunctionDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST_2E_weak & GGS_functionDeclarationAST_2E_weak::operator = (const GGS_functionDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST_2E_weak::GGS_functionDeclarationAST_2E_weak (const GGS_functionDeclarationAST & inSource) :
GGS_externFunctionDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST_2E_weak GGS_functionDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_functionDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST GGS_functionDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_functionDeclarationAST result ;
  if (isValid ()) {
    const cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_functionDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST GGS_functionDeclarationAST_2E_weak::bang_functionDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_functionDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionDeclarationAST) ;
      result = GGS_functionDeclarationAST ((cPtr_functionDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @functionDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionDeclarationAST_2E_weak ("functionDeclarationAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_externFunctionDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST_2E_weak GGS_functionDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_functionDeclarationAST_2E_weak result ;
  const GGS_functionDeclarationAST_2E_weak * p = (const GGS_functionDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_onceFunctionDeclarationAST_2E_weak::objectCompare (const GGS_onceFunctionDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST_2E_weak::GGS_onceFunctionDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST_2E_weak & GGS_onceFunctionDeclarationAST_2E_weak::operator = (const GGS_onceFunctionDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST_2E_weak::GGS_onceFunctionDeclarationAST_2E_weak (const GGS_onceFunctionDeclarationAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST_2E_weak GGS_onceFunctionDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_onceFunctionDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST GGS_onceFunctionDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_onceFunctionDeclarationAST result ;
  if (isValid ()) {
    const cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_onceFunctionDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST GGS_onceFunctionDeclarationAST_2E_weak::bang_onceFunctionDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_onceFunctionDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_onceFunctionDeclarationAST) ;
      result = GGS_onceFunctionDeclarationAST ((cPtr_onceFunctionDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @onceFunctionDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST_2E_weak ("onceFunctionDeclarationAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_onceFunctionDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_onceFunctionDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_onceFunctionDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST_2E_weak GGS_onceFunctionDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_onceFunctionDeclarationAST_2E_weak result ;
  const GGS_onceFunctionDeclarationAST_2E_weak * p = (const GGS_onceFunctionDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_onceFunctionDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@formalTemplateInputParameterListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_formalTemplateInputParameterListAST : public CollectionElementPtr {
  public: GGS_formalTemplateInputParameterListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_formalTemplateInputParameterListAST (const GGS_lstring & in_mFormalTemplateSelector,
                                                                    const GGS_lstring & in_mFormalArgumentTypeName,
                                                                    const GGS_lstring & in_mFormalArgumentName,
                                                                    const GGS_bool & in_mIsUnused
                                                                    COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_formalTemplateInputParameterListAST (const GGS_formalTemplateInputParameterListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_formalTemplateInputParameterListAST::CollectionElementPtr_formalTemplateInputParameterListAST (const GGS_lstring & in_mFormalTemplateSelector,
                                                                                                                    const GGS_lstring & in_mFormalArgumentTypeName,
                                                                                                                    const GGS_lstring & in_mFormalArgumentName,
                                                                                                                    const GGS_bool & in_mIsUnused
                                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mFormalTemplateSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName, in_mIsUnused) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_formalTemplateInputParameterListAST::CollectionElementPtr_formalTemplateInputParameterListAST (const GGS_formalTemplateInputParameterListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mFormalTemplateSelector, inElement.mProperty_mFormalArgumentTypeName, inElement.mProperty_mFormalArgumentName, inElement.mProperty_mIsUnused) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_formalTemplateInputParameterListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_formalTemplateInputParameterListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_formalTemplateInputParameterListAST (mObject.mProperty_mFormalTemplateSelector, mObject.mProperty_mFormalArgumentTypeName, mObject.mProperty_mFormalArgumentName, mObject.mProperty_mIsUnused COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @formalTemplateInputParameterListAST
//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST::GGS_formalTemplateInputParameterListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST::GGS_formalTemplateInputParameterListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_formalTemplateInputParameterListAST * p = (CollectionElementPtr_formalTemplateInputParameterListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_formalTemplateInputParameterListAST) ;
    const GGS_formalTemplateInputParameterListAST_2E_element element (p->mObject.mProperty_mFormalTemplateSelector, p->mObject.mProperty_mFormalArgumentTypeName, p->mObject.mProperty_mFormalArgumentName, p->mObject.mProperty_mIsUnused) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                         const GGS_lstring & in_mFormalTemplateSelector,
                                                                         const GGS_lstring & in_mFormalArgumentTypeName,
                                                                         const GGS_lstring & in_mFormalArgumentName,
                                                                         const GGS_bool & in_mIsUnused
                                                                         COMMA_LOCATION_ARGS) {
  CollectionElementPtr_formalTemplateInputParameterListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_formalTemplateInputParameterListAST (in_mFormalTemplateSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName, in_mIsUnused COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_formalTemplateInputParameterListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_formalTemplateInputParameterListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalTemplateSelector:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalTemplateSelector.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalArgumentTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalArgumentName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mIsUnused:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mIsUnused.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST GGS_formalTemplateInputParameterListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalTemplateInputParameterListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::plusPlusAssignOperation (const GGS_formalTemplateInputParameterListAST_2E_element & inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST GGS_formalTemplateInputParameterListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                           const GGS_lstring & inOperand1,
                                                                                                           const GGS_lstring & inOperand2,
                                                                                                           const GGS_bool & inOperand3
                                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_formalTemplateInputParameterListAST_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_formalTemplateInputParameterListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                                  const GGS_lstring & inOperand1,
                                                                  const GGS_lstring & inOperand2,
                                                                  const GGS_bool & inOperand3
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_formalTemplateInputParameterListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::setter_append (const GGS_lstring inOperand0,
                                                             const GGS_lstring inOperand1,
                                                             const GGS_lstring inOperand2,
                                                             const GGS_bool inOperand3,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  const GGS_formalTemplateInputParameterListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                    const GGS_lstring inOperand1,
                                                                    const GGS_lstring inOperand2,
                                                                    const GGS_bool inOperand3,
                                                                    const GGS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_formalTemplateInputParameterListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                    GGS_lstring & outOperand1,
                                                                    GGS_lstring & outOperand2,
                                                                    GGS_bool & outOperand3,
                                                                    const GGS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mFormalTemplateSelector ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentTypeName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentName ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mIsUnused ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                               GGS_lstring & outOperand1,
                                                               GGS_lstring & outOperand2,
                                                               GGS_bool & outOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFormalTemplateSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentTypeName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentName ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mIsUnused ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::setter_popLast (GGS_lstring & outOperand0,
                                                              GGS_lstring & outOperand1,
                                                              GGS_lstring & outOperand2,
                                                              GGS_bool & outOperand3,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFormalTemplateSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalArgumentTypeName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFormalArgumentName ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mIsUnused ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::method_first (GGS_lstring & outOperand0,
                                                            GGS_lstring & outOperand1,
                                                            GGS_lstring & outOperand2,
                                                            GGS_bool & outOperand3,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFormalTemplateSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentTypeName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentName ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mIsUnused ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::method_last (GGS_lstring & outOperand0,
                                                           GGS_lstring & outOperand1,
                                                           GGS_lstring & outOperand2,
                                                           GGS_bool & outOperand3,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFormalTemplateSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalArgumentTypeName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFormalArgumentName ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mIsUnused ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST GGS_formalTemplateInputParameterListAST::add_operation (const GGS_formalTemplateInputParameterListAST & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_formalTemplateInputParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST GGS_formalTemplateInputParameterListAST::subList (const int32_t inStart,
                                                                                          const int32_t inLength,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_formalTemplateInputParameterListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST GGS_formalTemplateInputParameterListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_formalTemplateInputParameterListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST GGS_formalTemplateInputParameterListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_formalTemplateInputParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST GGS_formalTemplateInputParameterListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_formalTemplateInputParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::plusAssignOperation (const GGS_formalTemplateInputParameterListAST inList,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::setter_setMFormalTemplateSelectorAtIndex (GGS_lstring inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalTemplateSelector = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_formalTemplateInputParameterListAST::getter_mFormalTemplateSelectorAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalTemplateSelector ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::setter_setMFormalArgumentTypeNameAtIndex (GGS_lstring inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentTypeName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_formalTemplateInputParameterListAST::getter_mFormalArgumentTypeNameAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentTypeName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::setter_setMFormalArgumentNameAtIndex (GGS_lstring inOperand,
                                                                                    GGS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_formalTemplateInputParameterListAST::getter_mFormalArgumentNameAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_formalTemplateInputParameterListAST::setter_setMIsUnusedAtIndex (GGS_bool inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mIsUnused = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_formalTemplateInputParameterListAST::getter_mIsUnusedAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mIsUnused ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @formalTemplateInputParameterListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_formalTemplateInputParameterListAST::DownEnumerator_formalTemplateInputParameterListAST (const GGS_formalTemplateInputParameterListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST_2E_element DownEnumerator_formalTemplateInputParameterListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_formalTemplateInputParameterListAST::current_mFormalTemplateSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalTemplateSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_formalTemplateInputParameterListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_formalTemplateInputParameterListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_formalTemplateInputParameterListAST::current_mIsUnused (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsUnused ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @formalTemplateInputParameterListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_formalTemplateInputParameterListAST::UpEnumerator_formalTemplateInputParameterListAST (const GGS_formalTemplateInputParameterListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST_2E_element UpEnumerator_formalTemplateInputParameterListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_formalTemplateInputParameterListAST::current_mFormalTemplateSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalTemplateSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_formalTemplateInputParameterListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_formalTemplateInputParameterListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_formalTemplateInputParameterListAST::current_mIsUnused (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsUnused ;
}




//--------------------------------------------------------------------------------------------------
//     @formalTemplateInputParameterListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST ("formalTemplateInputParameterListAST",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formalTemplateInputParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_formalTemplateInputParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formalTemplateInputParameterListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST GGS_formalTemplateInputParameterListAST::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_formalTemplateInputParameterListAST result ;
  const GGS_formalTemplateInputParameterListAST * p = (const GGS_formalTemplateInputParameterListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formalTemplateInputParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalTemplateInputParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@filewrapperTemplateListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_filewrapperTemplateListAST : public CollectionElementPtr {
  public: GGS_filewrapperTemplateListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_filewrapperTemplateListAST (const GGS_lstring & in_mFilewrapperTemplateName,
                                                           const GGS_lstring & in_mFilewrapperTemplatePath,
                                                           const GGS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters
                                                           COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_filewrapperTemplateListAST (const GGS_filewrapperTemplateListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_filewrapperTemplateListAST::CollectionElementPtr_filewrapperTemplateListAST (const GGS_lstring & in_mFilewrapperTemplateName,
                                                                                                  const GGS_lstring & in_mFilewrapperTemplatePath,
                                                                                                  const GGS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters
                                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mFilewrapperTemplateName, in_mFilewrapperTemplatePath, in_mFilewrapperTemplateFormalInputParameters) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_filewrapperTemplateListAST::CollectionElementPtr_filewrapperTemplateListAST (const GGS_filewrapperTemplateListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mFilewrapperTemplateName, inElement.mProperty_mFilewrapperTemplatePath, inElement.mProperty_mFilewrapperTemplateFormalInputParameters) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_filewrapperTemplateListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_filewrapperTemplateListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_filewrapperTemplateListAST (mObject.mProperty_mFilewrapperTemplateName, mObject.mProperty_mFilewrapperTemplatePath, mObject.mProperty_mFilewrapperTemplateFormalInputParameters COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @filewrapperTemplateListAST
//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST::GGS_filewrapperTemplateListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST::GGS_filewrapperTemplateListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_filewrapperTemplateListAST * p = (CollectionElementPtr_filewrapperTemplateListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_filewrapperTemplateListAST) ;
    const GGS_filewrapperTemplateListAST_2E_element element (p->mObject.mProperty_mFilewrapperTemplateName, p->mObject.mProperty_mFilewrapperTemplatePath, p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                const GGS_lstring & in_mFilewrapperTemplateName,
                                                                const GGS_lstring & in_mFilewrapperTemplatePath,
                                                                const GGS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters
                                                                COMMA_LOCATION_ARGS) {
  CollectionElementPtr_filewrapperTemplateListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_filewrapperTemplateListAST (in_mFilewrapperTemplateName, in_mFilewrapperTemplatePath, in_mFilewrapperTemplateFormalInputParameters COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_filewrapperTemplateListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_filewrapperTemplateListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFilewrapperTemplateName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFilewrapperTemplateName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFilewrapperTemplatePath:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFilewrapperTemplatePath.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFilewrapperTemplateFormalInputParameters:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST GGS_filewrapperTemplateListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapperTemplateListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::plusPlusAssignOperation (const GGS_filewrapperTemplateListAST_2E_element & inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST GGS_filewrapperTemplateListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                         const GGS_lstring & inOperand1,
                                                                                         const GGS_formalTemplateInputParameterListAST & inOperand2
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_filewrapperTemplateListAST_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_filewrapperTemplateListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                         const GGS_lstring & inOperand1,
                                                         const GGS_formalTemplateInputParameterListAST & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  const GGS_filewrapperTemplateListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::setter_append (const GGS_lstring inOperand0,
                                                    const GGS_lstring inOperand1,
                                                    const GGS_formalTemplateInputParameterListAST inOperand2,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  const GGS_filewrapperTemplateListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                           const GGS_lstring inOperand1,
                                                           const GGS_formalTemplateInputParameterListAST inOperand2,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_filewrapperTemplateListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                           GGS_lstring & outOperand1,
                                                           GGS_formalTemplateInputParameterListAST & outOperand2,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mFilewrapperTemplateName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFilewrapperTemplatePath ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mFilewrapperTemplateFormalInputParameters ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      GGS_formalTemplateInputParameterListAST & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFilewrapperTemplateName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFilewrapperTemplatePath ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFilewrapperTemplateFormalInputParameters ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::setter_popLast (GGS_lstring & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     GGS_formalTemplateInputParameterListAST & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFilewrapperTemplateName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFilewrapperTemplatePath ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFilewrapperTemplateFormalInputParameters ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::method_first (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   GGS_formalTemplateInputParameterListAST & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFilewrapperTemplateName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFilewrapperTemplatePath ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFilewrapperTemplateFormalInputParameters ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::method_last (GGS_lstring & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  GGS_formalTemplateInputParameterListAST & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFilewrapperTemplateName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFilewrapperTemplatePath ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFilewrapperTemplateFormalInputParameters ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST GGS_filewrapperTemplateListAST::add_operation (const GGS_filewrapperTemplateListAST & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST GGS_filewrapperTemplateListAST::subList (const int32_t inStart,
                                                                        const int32_t inLength,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST GGS_filewrapperTemplateListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST GGS_filewrapperTemplateListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST GGS_filewrapperTemplateListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::plusAssignOperation (const GGS_filewrapperTemplateListAST inList,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::setter_setMFilewrapperTemplateNameAtIndex (GGS_lstring inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFilewrapperTemplateName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_filewrapperTemplateListAST::getter_mFilewrapperTemplateNameAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFilewrapperTemplateName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::setter_setMFilewrapperTemplatePathAtIndex (GGS_lstring inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFilewrapperTemplatePath = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_filewrapperTemplateListAST::getter_mFilewrapperTemplatePathAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFilewrapperTemplatePath ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListAST::setter_setMFilewrapperTemplateFormalInputParametersAtIndex (GGS_formalTemplateInputParameterListAST inOperand,
                                                                                                 GGS_uint inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFilewrapperTemplateFormalInputParameters = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_formalTemplateInputParameterListAST GGS_filewrapperTemplateListAST::getter_mFilewrapperTemplateFormalInputParametersAtIndex (const GGS_uint & inIndex,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_formalTemplateInputParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFilewrapperTemplateFormalInputParameters ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @filewrapperTemplateListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_filewrapperTemplateListAST::DownEnumerator_filewrapperTemplateListAST (const GGS_filewrapperTemplateListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST_2E_element DownEnumerator_filewrapperTemplateListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_filewrapperTemplateListAST::current_mFilewrapperTemplateName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFilewrapperTemplateName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_filewrapperTemplateListAST::current_mFilewrapperTemplatePath (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFilewrapperTemplatePath ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST DownEnumerator_filewrapperTemplateListAST::current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFilewrapperTemplateFormalInputParameters ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @filewrapperTemplateListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_filewrapperTemplateListAST::UpEnumerator_filewrapperTemplateListAST (const GGS_filewrapperTemplateListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST_2E_element UpEnumerator_filewrapperTemplateListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_filewrapperTemplateListAST::current_mFilewrapperTemplateName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFilewrapperTemplateName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_filewrapperTemplateListAST::current_mFilewrapperTemplatePath (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFilewrapperTemplatePath ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalTemplateInputParameterListAST UpEnumerator_filewrapperTemplateListAST::current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFilewrapperTemplateFormalInputParameters ;
}




//--------------------------------------------------------------------------------------------------
//     @filewrapperTemplateListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateListAST ("filewrapperTemplateListAST",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperTemplateListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperTemplateListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperTemplateListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST GGS_filewrapperTemplateListAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateListAST result ;
  const GGS_filewrapperTemplateListAST * p = (const GGS_filewrapperTemplateListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperTemplateListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperDeclarationAST_2E_weak::objectCompare (const GGS_filewrapperDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationAST_2E_weak::GGS_filewrapperDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationAST_2E_weak & GGS_filewrapperDeclarationAST_2E_weak::operator = (const GGS_filewrapperDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationAST_2E_weak::GGS_filewrapperDeclarationAST_2E_weak (const GGS_filewrapperDeclarationAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationAST_2E_weak GGS_filewrapperDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_filewrapperDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationAST GGS_filewrapperDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_filewrapperDeclarationAST result ;
  if (isValid ()) {
    const cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_filewrapperDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationAST GGS_filewrapperDeclarationAST_2E_weak::bang_filewrapperDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_filewrapperDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperDeclarationAST) ;
      result = GGS_filewrapperDeclarationAST ((cPtr_filewrapperDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST_2E_weak ("filewrapperDeclarationAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationAST_2E_weak GGS_filewrapperDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_filewrapperDeclarationAST_2E_weak result ;
  const GGS_filewrapperDeclarationAST_2E_weak * p = (const GGS_filewrapperDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@nonTerminalLabelListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_nonTerminalLabelListAST : public CollectionElementPtr {
  public: GGS_nonTerminalLabelListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_nonTerminalLabelListAST (const GGS_lstring & in_mLabelName,
                                                        const GGS_formalParameterListAST & in_mFormalArgumentList,
                                                        const GGS_location & in_mEndOfArgumentLocation
                                                        COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_nonTerminalLabelListAST (const GGS_nonTerminalLabelListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_nonTerminalLabelListAST::CollectionElementPtr_nonTerminalLabelListAST (const GGS_lstring & in_mLabelName,
                                                                                            const GGS_formalParameterListAST & in_mFormalArgumentList,
                                                                                            const GGS_location & in_mEndOfArgumentLocation
                                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mLabelName, in_mFormalArgumentList, in_mEndOfArgumentLocation) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_nonTerminalLabelListAST::CollectionElementPtr_nonTerminalLabelListAST (const GGS_nonTerminalLabelListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mLabelName, inElement.mProperty_mFormalArgumentList, inElement.mProperty_mEndOfArgumentLocation) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_nonTerminalLabelListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_nonTerminalLabelListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_nonTerminalLabelListAST (mObject.mProperty_mLabelName, mObject.mProperty_mFormalArgumentList, mObject.mProperty_mEndOfArgumentLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @nonTerminalLabelListAST
//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST::GGS_nonTerminalLabelListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST::GGS_nonTerminalLabelListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_nonTerminalLabelListAST * p = (CollectionElementPtr_nonTerminalLabelListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_nonTerminalLabelListAST) ;
    const GGS_nonTerminalLabelListAST_2E_element element (p->mObject.mProperty_mLabelName, p->mObject.mProperty_mFormalArgumentList, p->mObject.mProperty_mEndOfArgumentLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                             const GGS_lstring & in_mLabelName,
                                                             const GGS_formalParameterListAST & in_mFormalArgumentList,
                                                             const GGS_location & in_mEndOfArgumentLocation
                                                             COMMA_LOCATION_ARGS) {
  CollectionElementPtr_nonTerminalLabelListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_nonTerminalLabelListAST (in_mLabelName, in_mFormalArgumentList, in_mEndOfArgumentLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonTerminalLabelListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_nonTerminalLabelListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLabelName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLabelName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalArgumentList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfArgumentLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfArgumentLocation.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST GGS_nonTerminalLabelListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonTerminalLabelListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::plusPlusAssignOperation (const GGS_nonTerminalLabelListAST_2E_element & inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST GGS_nonTerminalLabelListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                   const GGS_formalParameterListAST & inOperand1,
                                                                                   const GGS_location & inOperand2
                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_nonTerminalLabelListAST_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_nonTerminalLabelListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                      const GGS_formalParameterListAST & inOperand1,
                                                      const GGS_location & inOperand2
                                                      COMMA_LOCATION_ARGS) {
  const GGS_nonTerminalLabelListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::setter_append (const GGS_lstring inOperand0,
                                                 const GGS_formalParameterListAST inOperand1,
                                                 const GGS_location inOperand2,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  const GGS_nonTerminalLabelListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                        const GGS_formalParameterListAST inOperand1,
                                                        const GGS_location inOperand2,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  const GGS_nonTerminalLabelListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                        GGS_formalParameterListAST & outOperand1,
                                                        GGS_location & outOperand2,
                                                        const GGS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mLabelName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentList ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mEndOfArgumentLocation ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                   GGS_formalParameterListAST & outOperand1,
                                                   GGS_location & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLabelName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mEndOfArgumentLocation ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::setter_popLast (GGS_lstring & outOperand0,
                                                  GGS_formalParameterListAST & outOperand1,
                                                  GGS_location & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLabelName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalArgumentList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mEndOfArgumentLocation ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::method_first (GGS_lstring & outOperand0,
                                                GGS_formalParameterListAST & outOperand1,
                                                GGS_location & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLabelName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mEndOfArgumentLocation ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::method_last (GGS_lstring & outOperand0,
                                               GGS_formalParameterListAST & outOperand1,
                                               GGS_location & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLabelName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalArgumentList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mEndOfArgumentLocation ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST GGS_nonTerminalLabelListAST::add_operation (const GGS_nonTerminalLabelListAST & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_nonTerminalLabelListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST GGS_nonTerminalLabelListAST::subList (const int32_t inStart,
                                                                  const int32_t inLength,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalLabelListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST GGS_nonTerminalLabelListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalLabelListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST GGS_nonTerminalLabelListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST GGS_nonTerminalLabelListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::plusAssignOperation (const GGS_nonTerminalLabelListAST inList,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::setter_setMLabelNameAtIndex (GGS_lstring inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLabelName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_nonTerminalLabelListAST::getter_mLabelNameAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLabelName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::setter_setMFormalArgumentListAtIndex (GGS_formalParameterListAST inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_formalParameterListAST GGS_nonTerminalLabelListAST::getter_mFormalArgumentListAtIndex (const GGS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_formalParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalLabelListAST::setter_setMEndOfArgumentLocationAtIndex (GGS_location inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfArgumentLocation = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_location GGS_nonTerminalLabelListAST::getter_mEndOfArgumentLocationAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfArgumentLocation ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @nonTerminalLabelListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_nonTerminalLabelListAST::DownEnumerator_nonTerminalLabelListAST (const GGS_nonTerminalLabelListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST_2E_element DownEnumerator_nonTerminalLabelListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_nonTerminalLabelListAST::current_mLabelName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLabelName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST DownEnumerator_nonTerminalLabelListAST::current_mFormalArgumentList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_nonTerminalLabelListAST::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfArgumentLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @nonTerminalLabelListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_nonTerminalLabelListAST::UpEnumerator_nonTerminalLabelListAST (const GGS_nonTerminalLabelListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST_2E_element UpEnumerator_nonTerminalLabelListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_nonTerminalLabelListAST::current_mLabelName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLabelName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST UpEnumerator_nonTerminalLabelListAST::current_mFormalArgumentList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_nonTerminalLabelListAST::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfArgumentLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @nonTerminalLabelListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalLabelListAST ("nonTerminalLabelListAST",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonTerminalLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalLabelListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonTerminalLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonTerminalLabelListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST GGS_nonTerminalLabelListAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_nonTerminalLabelListAST result ;
  const GGS_nonTerminalLabelListAST * p = (const GGS_nonTerminalLabelListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonTerminalLabelListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalLabelListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@syntaxRuleLabelListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_syntaxRuleLabelListAST : public CollectionElementPtr {
  public: GGS_syntaxRuleLabelListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_syntaxRuleLabelListAST (const GGS_lstring & in_mLabelName,
                                                       const GGS_formalParameterListAST & in_mFormalArguments,
                                                       const GGS_location & in_mEndOfArgumentLocation,
                                                       const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                       const GGS_location & in_mEndOfInstructionList
                                                       COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_syntaxRuleLabelListAST (const GGS_syntaxRuleLabelListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_syntaxRuleLabelListAST::CollectionElementPtr_syntaxRuleLabelListAST (const GGS_lstring & in_mLabelName,
                                                                                          const GGS_formalParameterListAST & in_mFormalArguments,
                                                                                          const GGS_location & in_mEndOfArgumentLocation,
                                                                                          const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                                          const GGS_location & in_mEndOfInstructionList
                                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mLabelName, in_mFormalArguments, in_mEndOfArgumentLocation, in_mSyntaxInstructionList, in_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_syntaxRuleLabelListAST::CollectionElementPtr_syntaxRuleLabelListAST (const GGS_syntaxRuleLabelListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mLabelName, inElement.mProperty_mFormalArguments, inElement.mProperty_mEndOfArgumentLocation, inElement.mProperty_mSyntaxInstructionList, inElement.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_syntaxRuleLabelListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_syntaxRuleLabelListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_syntaxRuleLabelListAST (mObject.mProperty_mLabelName, mObject.mProperty_mFormalArguments, mObject.mProperty_mEndOfArgumentLocation, mObject.mProperty_mSyntaxInstructionList, mObject.mProperty_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @syntaxRuleLabelListAST
//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST::GGS_syntaxRuleLabelListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST::GGS_syntaxRuleLabelListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_syntaxRuleLabelListAST * p = (CollectionElementPtr_syntaxRuleLabelListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_syntaxRuleLabelListAST) ;
    const GGS_syntaxRuleLabelListAST_2E_element element (p->mObject.mProperty_mLabelName, p->mObject.mProperty_mFormalArguments, p->mObject.mProperty_mEndOfArgumentLocation, p->mObject.mProperty_mSyntaxInstructionList, p->mObject.mProperty_mEndOfInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                            const GGS_lstring & in_mLabelName,
                                                            const GGS_formalParameterListAST & in_mFormalArguments,
                                                            const GGS_location & in_mEndOfArgumentLocation,
                                                            const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                            const GGS_location & in_mEndOfInstructionList
                                                            COMMA_LOCATION_ARGS) {
  CollectionElementPtr_syntaxRuleLabelListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_syntaxRuleLabelListAST (in_mLabelName, in_mFormalArguments, in_mEndOfArgumentLocation, in_mSyntaxInstructionList, in_mEndOfInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_syntaxRuleLabelListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_syntaxRuleLabelListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLabelName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLabelName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalArguments:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArguments.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfArgumentLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfArgumentLocation.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSyntaxInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSyntaxInstructionList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfInstructionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST GGS_syntaxRuleLabelListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxRuleLabelListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::plusPlusAssignOperation (const GGS_syntaxRuleLabelListAST_2E_element & inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST GGS_syntaxRuleLabelListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                 const GGS_formalParameterListAST & inOperand1,
                                                                                 const GGS_location & inOperand2,
                                                                                 const GGS_syntaxInstructionList & inOperand3,
                                                                                 const GGS_location & inOperand4
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_syntaxRuleLabelListAST_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  GGS_syntaxRuleLabelListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                     const GGS_formalParameterListAST & inOperand1,
                                                     const GGS_location & inOperand2,
                                                     const GGS_syntaxInstructionList & inOperand3,
                                                     const GGS_location & inOperand4
                                                     COMMA_LOCATION_ARGS) {
  const GGS_syntaxRuleLabelListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::setter_append (const GGS_lstring inOperand0,
                                                const GGS_formalParameterListAST inOperand1,
                                                const GGS_location inOperand2,
                                                const GGS_syntaxInstructionList inOperand3,
                                                const GGS_location inOperand4,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  const GGS_syntaxRuleLabelListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                       const GGS_formalParameterListAST inOperand1,
                                                       const GGS_location inOperand2,
                                                       const GGS_syntaxInstructionList inOperand3,
                                                       const GGS_location inOperand4,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_syntaxRuleLabelListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                       GGS_formalParameterListAST & outOperand1,
                                                       GGS_location & outOperand2,
                                                       GGS_syntaxInstructionList & outOperand3,
                                                       GGS_location & outOperand4,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mLabelName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFormalArguments ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mEndOfArgumentLocation ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mSyntaxInstructionList ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mEndOfInstructionList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                  GGS_formalParameterListAST & outOperand1,
                                                  GGS_location & outOperand2,
                                                  GGS_syntaxInstructionList & outOperand3,
                                                  GGS_location & outOperand4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLabelName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalArguments ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mEndOfArgumentLocation ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mSyntaxInstructionList ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mEndOfInstructionList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::setter_popLast (GGS_lstring & outOperand0,
                                                 GGS_formalParameterListAST & outOperand1,
                                                 GGS_location & outOperand2,
                                                 GGS_syntaxInstructionList & outOperand3,
                                                 GGS_location & outOperand4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLabelName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalArguments ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mEndOfArgumentLocation ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mSyntaxInstructionList ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mEndOfInstructionList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::method_first (GGS_lstring & outOperand0,
                                               GGS_formalParameterListAST & outOperand1,
                                               GGS_location & outOperand2,
                                               GGS_syntaxInstructionList & outOperand3,
                                               GGS_location & outOperand4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLabelName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalArguments ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mEndOfArgumentLocation ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mSyntaxInstructionList ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mEndOfInstructionList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::method_last (GGS_lstring & outOperand0,
                                              GGS_formalParameterListAST & outOperand1,
                                              GGS_location & outOperand2,
                                              GGS_syntaxInstructionList & outOperand3,
                                              GGS_location & outOperand4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLabelName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalArguments ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mEndOfArgumentLocation ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mSyntaxInstructionList ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mEndOfInstructionList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST GGS_syntaxRuleLabelListAST::add_operation (const GGS_syntaxRuleLabelListAST & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_syntaxRuleLabelListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST GGS_syntaxRuleLabelListAST::subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_syntaxRuleLabelListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST GGS_syntaxRuleLabelListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_syntaxRuleLabelListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST GGS_syntaxRuleLabelListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_syntaxRuleLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST GGS_syntaxRuleLabelListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_syntaxRuleLabelListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::plusAssignOperation (const GGS_syntaxRuleLabelListAST inList,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::setter_setMLabelNameAtIndex (GGS_lstring inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLabelName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_syntaxRuleLabelListAST::getter_mLabelNameAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLabelName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::setter_setMFormalArgumentsAtIndex (GGS_formalParameterListAST inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArguments = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_formalParameterListAST GGS_syntaxRuleLabelListAST::getter_mFormalArgumentsAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_formalParameterListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArguments ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::setter_setMEndOfArgumentLocationAtIndex (GGS_location inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfArgumentLocation = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_location GGS_syntaxRuleLabelListAST::getter_mEndOfArgumentLocationAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfArgumentLocation ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::setter_setMSyntaxInstructionListAtIndex (GGS_syntaxInstructionList inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_syntaxInstructionList GGS_syntaxRuleLabelListAST::getter_mSyntaxInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleLabelListAST::setter_setMEndOfInstructionListAtIndex (GGS_location inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_location GGS_syntaxRuleLabelListAST::getter_mEndOfInstructionListAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @syntaxRuleLabelListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_syntaxRuleLabelListAST::DownEnumerator_syntaxRuleLabelListAST (const GGS_syntaxRuleLabelListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST_2E_element DownEnumerator_syntaxRuleLabelListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_syntaxRuleLabelListAST::current_mLabelName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLabelName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST DownEnumerator_syntaxRuleLabelListAST::current_mFormalArguments (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArguments ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_syntaxRuleLabelListAST::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfArgumentLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList DownEnumerator_syntaxRuleLabelListAST::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_syntaxRuleLabelListAST::current_mEndOfInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @syntaxRuleLabelListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_syntaxRuleLabelListAST::UpEnumerator_syntaxRuleLabelListAST (const GGS_syntaxRuleLabelListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST_2E_element UpEnumerator_syntaxRuleLabelListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_syntaxRuleLabelListAST::current_mLabelName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLabelName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST UpEnumerator_syntaxRuleLabelListAST::current_mFormalArguments (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArguments ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_syntaxRuleLabelListAST::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfArgumentLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList UpEnumerator_syntaxRuleLabelListAST::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_syntaxRuleLabelListAST::current_mEndOfInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @syntaxRuleLabelListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxRuleLabelListAST ("syntaxRuleLabelListAST",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxRuleLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxRuleLabelListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxRuleLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxRuleLabelListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleLabelListAST GGS_syntaxRuleLabelListAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_syntaxRuleLabelListAST result ;
  const GGS_syntaxRuleLabelListAST * p = (const GGS_syntaxRuleLabelListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxRuleLabelListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxRuleLabelListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_galgas_33_SyntaxComponentAST_2E_weak::objectCompare (const GGS_galgas_33_SyntaxComponentAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST_2E_weak::GGS_galgas_33_SyntaxComponentAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST_2E_weak & GGS_galgas_33_SyntaxComponentAST_2E_weak::operator = (const GGS_galgas_33_SyntaxComponentAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST_2E_weak::GGS_galgas_33_SyntaxComponentAST_2E_weak (const GGS_galgas_33_SyntaxComponentAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST_2E_weak GGS_galgas_33_SyntaxComponentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_galgas_33_SyntaxComponentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST GGS_galgas_33_SyntaxComponentAST_2E_weak::unwrappedValue (void) const {
  GGS_galgas_33_SyntaxComponentAST result ;
  if (isValid ()) {
    const cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_galgas_33_SyntaxComponentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST GGS_galgas_33_SyntaxComponentAST_2E_weak::bang_galgas_33_SyntaxComponentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxComponentAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_galgas_33_SyntaxComponentAST) ;
      result = GGS_galgas_33_SyntaxComponentAST ((cPtr_galgas_33_SyntaxComponentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @galgas3SyntaxComponentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST_2E_weak ("galgas3SyntaxComponentAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_SyntaxComponentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_SyntaxComponentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_SyntaxComponentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST_2E_weak GGS_galgas_33_SyntaxComponentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxComponentAST_2E_weak result ;
  const GGS_galgas_33_SyntaxComponentAST_2E_weak * p = (const GGS_galgas_33_SyntaxComponentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_SyntaxComponentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxComponentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_galgas_33_GrammarComponentAST_2E_weak::objectCompare (const GGS_galgas_33_GrammarComponentAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST_2E_weak::GGS_galgas_33_GrammarComponentAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST_2E_weak & GGS_galgas_33_GrammarComponentAST_2E_weak::operator = (const GGS_galgas_33_GrammarComponentAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST_2E_weak::GGS_galgas_33_GrammarComponentAST_2E_weak (const GGS_galgas_33_GrammarComponentAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST_2E_weak GGS_galgas_33_GrammarComponentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_galgas_33_GrammarComponentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST GGS_galgas_33_GrammarComponentAST_2E_weak::unwrappedValue (void) const {
  GGS_galgas_33_GrammarComponentAST result ;
  if (isValid ()) {
    const cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_galgas_33_GrammarComponentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST GGS_galgas_33_GrammarComponentAST_2E_weak::bang_galgas_33_GrammarComponentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_GrammarComponentAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_galgas_33_GrammarComponentAST) ;
      result = GGS_galgas_33_GrammarComponentAST ((cPtr_galgas_33_GrammarComponentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @galgas3GrammarComponentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST_2E_weak ("galgas3GrammarComponentAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_GrammarComponentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_GrammarComponentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_GrammarComponentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST_2E_weak GGS_galgas_33_GrammarComponentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_galgas_33_GrammarComponentAST_2E_weak result ;
  const GGS_galgas_33_GrammarComponentAST_2E_weak * p = (const GGS_galgas_33_GrammarComponentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_GrammarComponentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3GrammarComponentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@galgas_33_SyntaxComponentListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_galgas_33_SyntaxComponentListAST : public CollectionElementPtr {
  public: GGS_galgas_33_SyntaxComponentListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_galgas_33_SyntaxComponentListAST (const GGS_lstring & in_mSyntaxComponentName,
                                                                 const GGS_lstring & in_mImportedLexiqueFilePath,
                                                                 const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                 const GGS_syntaxRuleListAST & in_mRuleList,
                                                                 const GGS_bool & in_mHasTranslateFeature
                                                                 COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_galgas_33_SyntaxComponentListAST (const GGS_galgas_33_SyntaxComponentListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_galgas_33_SyntaxComponentListAST::CollectionElementPtr_galgas_33_SyntaxComponentListAST (const GGS_lstring & in_mSyntaxComponentName,
                                                                                                              const GGS_lstring & in_mImportedLexiqueFilePath,
                                                                                                              const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                                                              const GGS_syntaxRuleListAST & in_mRuleList,
                                                                                                              const GGS_bool & in_mHasTranslateFeature
                                                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mSyntaxComponentName, in_mImportedLexiqueFilePath, in_mNonterminalDeclarationList, in_mRuleList, in_mHasTranslateFeature) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_galgas_33_SyntaxComponentListAST::CollectionElementPtr_galgas_33_SyntaxComponentListAST (const GGS_galgas_33_SyntaxComponentListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mSyntaxComponentName, inElement.mProperty_mImportedLexiqueFilePath, inElement.mProperty_mNonterminalDeclarationList, inElement.mProperty_mRuleList, inElement.mProperty_mHasTranslateFeature) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_galgas_33_SyntaxComponentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_galgas_33_SyntaxComponentListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_galgas_33_SyntaxComponentListAST (mObject.mProperty_mSyntaxComponentName, mObject.mProperty_mImportedLexiqueFilePath, mObject.mProperty_mNonterminalDeclarationList, mObject.mProperty_mRuleList, mObject.mProperty_mHasTranslateFeature COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @galgas_33_SyntaxComponentListAST
//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST::GGS_galgas_33_SyntaxComponentListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST::GGS_galgas_33_SyntaxComponentListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_galgas_33_SyntaxComponentListAST * p = (CollectionElementPtr_galgas_33_SyntaxComponentListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_galgas_33_SyntaxComponentListAST) ;
    const GGS_galgas_33_SyntaxComponentListAST_2E_element element (p->mObject.mProperty_mSyntaxComponentName, p->mObject.mProperty_mImportedLexiqueFilePath, p->mObject.mProperty_mNonterminalDeclarationList, p->mObject.mProperty_mRuleList, p->mObject.mProperty_mHasTranslateFeature) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                      const GGS_lstring & in_mSyntaxComponentName,
                                                                      const GGS_lstring & in_mImportedLexiqueFilePath,
                                                                      const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                      const GGS_syntaxRuleListAST & in_mRuleList,
                                                                      const GGS_bool & in_mHasTranslateFeature
                                                                      COMMA_LOCATION_ARGS) {
  CollectionElementPtr_galgas_33_SyntaxComponentListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_galgas_33_SyntaxComponentListAST (in_mSyntaxComponentName, in_mImportedLexiqueFilePath, in_mNonterminalDeclarationList, in_mRuleList, in_mHasTranslateFeature COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_galgas_33_SyntaxComponentListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_galgas_33_SyntaxComponentListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSyntaxComponentName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSyntaxComponentName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mImportedLexiqueFilePath:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mImportedLexiqueFilePath.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mNonterminalDeclarationList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mNonterminalDeclarationList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mRuleList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRuleList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mHasTranslateFeature:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mHasTranslateFeature.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxComponentListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::plusPlusAssignOperation (const GGS_galgas_33_SyntaxComponentListAST_2E_element & inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                     const GGS_lstring & inOperand1,
                                                                                                     const GGS_nonterminalDeclarationListAST & inOperand2,
                                                                                                     const GGS_syntaxRuleListAST & inOperand3,
                                                                                                     const GGS_bool & inOperand4
                                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxComponentListAST_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  GGS_galgas_33_SyntaxComponentListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                               const GGS_lstring & inOperand1,
                                                               const GGS_nonterminalDeclarationListAST & inOperand2,
                                                               const GGS_syntaxRuleListAST & inOperand3,
                                                               const GGS_bool & inOperand4
                                                               COMMA_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxComponentListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_append (const GGS_lstring inOperand0,
                                                          const GGS_lstring inOperand1,
                                                          const GGS_nonterminalDeclarationListAST inOperand2,
                                                          const GGS_syntaxRuleListAST inOperand3,
                                                          const GGS_bool inOperand4,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxComponentListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                 const GGS_lstring inOperand1,
                                                                 const GGS_nonterminalDeclarationListAST inOperand2,
                                                                 const GGS_syntaxRuleListAST inOperand3,
                                                                 const GGS_bool inOperand4,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxComponentListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                 GGS_lstring & outOperand1,
                                                                 GGS_nonterminalDeclarationListAST & outOperand2,
                                                                 GGS_syntaxRuleListAST & outOperand3,
                                                                 GGS_bool & outOperand4,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSyntaxComponentName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mImportedLexiqueFilePath ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mNonterminalDeclarationList ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mRuleList ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mHasTranslateFeature ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                            GGS_lstring & outOperand1,
                                                            GGS_nonterminalDeclarationListAST & outOperand2,
                                                            GGS_syntaxRuleListAST & outOperand3,
                                                            GGS_bool & outOperand4,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSyntaxComponentName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mImportedLexiqueFilePath ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mNonterminalDeclarationList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mRuleList ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mHasTranslateFeature ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_popLast (GGS_lstring & outOperand0,
                                                           GGS_lstring & outOperand1,
                                                           GGS_nonterminalDeclarationListAST & outOperand2,
                                                           GGS_syntaxRuleListAST & outOperand3,
                                                           GGS_bool & outOperand4,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSyntaxComponentName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mImportedLexiqueFilePath ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mNonterminalDeclarationList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mRuleList ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mHasTranslateFeature ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::method_first (GGS_lstring & outOperand0,
                                                         GGS_lstring & outOperand1,
                                                         GGS_nonterminalDeclarationListAST & outOperand2,
                                                         GGS_syntaxRuleListAST & outOperand3,
                                                         GGS_bool & outOperand4,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSyntaxComponentName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mImportedLexiqueFilePath ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mNonterminalDeclarationList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mRuleList ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mHasTranslateFeature ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::method_last (GGS_lstring & outOperand0,
                                                        GGS_lstring & outOperand1,
                                                        GGS_nonterminalDeclarationListAST & outOperand2,
                                                        GGS_syntaxRuleListAST & outOperand3,
                                                        GGS_bool & outOperand4,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSyntaxComponentName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mImportedLexiqueFilePath ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mNonterminalDeclarationList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mRuleList ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mHasTranslateFeature ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::add_operation (const GGS_galgas_33_SyntaxComponentListAST & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxComponentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::subList (const int32_t inStart,
                                                                                    const int32_t inLength,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxComponentListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxComponentListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxComponentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_SyntaxComponentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::plusAssignOperation (const GGS_galgas_33_SyntaxComponentListAST inList,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_setMSyntaxComponentNameAtIndex (GGS_lstring inOperand,
                                                                                  GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxComponentName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_galgas_33_SyntaxComponentListAST::getter_mSyntaxComponentNameAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxComponentName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_setMImportedLexiqueFilePathAtIndex (GGS_lstring inOperand,
                                                                                      GGS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mImportedLexiqueFilePath = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_galgas_33_SyntaxComponentListAST::getter_mImportedLexiqueFilePathAtIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mImportedLexiqueFilePath ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_setMNonterminalDeclarationListAtIndex (GGS_nonterminalDeclarationListAST inOperand,
                                                                                         GGS_uint inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mNonterminalDeclarationList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_nonterminalDeclarationListAST GGS_galgas_33_SyntaxComponentListAST::getter_mNonterminalDeclarationListAtIndex (const GGS_uint & inIndex,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_nonterminalDeclarationListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mNonterminalDeclarationList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_setMRuleListAtIndex (GGS_syntaxRuleListAST inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRuleList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_syntaxRuleListAST GGS_galgas_33_SyntaxComponentListAST::getter_mRuleListAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_syntaxRuleListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRuleList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_SyntaxComponentListAST::setter_setMHasTranslateFeatureAtIndex (GGS_bool inOperand,
                                                                                  GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mHasTranslateFeature = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_galgas_33_SyntaxComponentListAST::getter_mHasTranslateFeatureAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mHasTranslateFeature ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @galgas_33_SyntaxComponentListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_galgas_33_SyntaxComponentListAST::DownEnumerator_galgas_33_SyntaxComponentListAST (const GGS_galgas_33_SyntaxComponentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST_2E_element DownEnumerator_galgas_33_SyntaxComponentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_galgas_33_SyntaxComponentListAST::current_mSyntaxComponentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxComponentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_galgas_33_SyntaxComponentListAST::current_mImportedLexiqueFilePath (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mImportedLexiqueFilePath ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST DownEnumerator_galgas_33_SyntaxComponentListAST::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mNonterminalDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST DownEnumerator_galgas_33_SyntaxComponentListAST::current_mRuleList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRuleList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_galgas_33_SyntaxComponentListAST::current_mHasTranslateFeature (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mHasTranslateFeature ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @galgas_33_SyntaxComponentListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_galgas_33_SyntaxComponentListAST::UpEnumerator_galgas_33_SyntaxComponentListAST (const GGS_galgas_33_SyntaxComponentListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST_2E_element UpEnumerator_galgas_33_SyntaxComponentListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_galgas_33_SyntaxComponentListAST::current_mSyntaxComponentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxComponentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_galgas_33_SyntaxComponentListAST::current_mImportedLexiqueFilePath (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mImportedLexiqueFilePath ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST UpEnumerator_galgas_33_SyntaxComponentListAST::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mNonterminalDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST UpEnumerator_galgas_33_SyntaxComponentListAST::current_mRuleList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRuleList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_galgas_33_SyntaxComponentListAST::current_mHasTranslateFeature (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mHasTranslateFeature ;
}




//--------------------------------------------------------------------------------------------------
//     @galgas3SyntaxComponentListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST ("galgas3SyntaxComponentListAST",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_SyntaxComponentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_SyntaxComponentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_SyntaxComponentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentListAST GGS_galgas_33_SyntaxComponentListAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxComponentListAST result ;
  const GGS_galgas_33_SyntaxComponentListAST * p = (const GGS_galgas_33_SyntaxComponentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_SyntaxComponentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxComponentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@prologueEpilogueList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_prologueEpilogueList : public CollectionElementPtr {
  public: GGS_prologueEpilogueList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_prologueEpilogueList (const GGS_semanticInstructionListAST & in_mInstructionList,
                                                     const GGS_location & in_mEndOfInstructionList
                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_prologueEpilogueList (const GGS_prologueEpilogueList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_prologueEpilogueList::CollectionElementPtr_prologueEpilogueList (const GGS_semanticInstructionListAST & in_mInstructionList,
                                                                                      const GGS_location & in_mEndOfInstructionList
                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstructionList, in_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_prologueEpilogueList::CollectionElementPtr_prologueEpilogueList (const GGS_prologueEpilogueList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_prologueEpilogueList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_prologueEpilogueList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_prologueEpilogueList (mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @prologueEpilogueList
//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList::GGS_prologueEpilogueList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList::GGS_prologueEpilogueList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_prologueEpilogueList * p = (CollectionElementPtr_prologueEpilogueList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_prologueEpilogueList) ;
    const GGS_prologueEpilogueList_2E_element element (p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                          const GGS_semanticInstructionListAST & in_mInstructionList,
                                                          const GGS_location & in_mEndOfInstructionList
                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_prologueEpilogueList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_prologueEpilogueList (in_mInstructionList, in_mEndOfInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_prologueEpilogueList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_prologueEpilogueList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfInstructionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_prologueEpilogueList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::plusPlusAssignOperation (const GGS_prologueEpilogueList_2E_element & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::class_func_listWithValue (const GGS_semanticInstructionListAST & inOperand0,
                                                                             const GGS_location & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_prologueEpilogueList_2E_element element (inOperand0, inOperand1) ;
  GGS_prologueEpilogueList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::addAssignOperation (const GGS_semanticInstructionListAST & inOperand0,
                                                   const GGS_location & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  const GGS_prologueEpilogueList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::setter_append (const GGS_semanticInstructionListAST inOperand0,
                                              const GGS_location inOperand1,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  const GGS_prologueEpilogueList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::setter_insertAtIndex (const GGS_semanticInstructionListAST inOperand0,
                                                     const GGS_location inOperand1,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_prologueEpilogueList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::setter_removeAtIndex (GGS_semanticInstructionListAST & outOperand0,
                                                     GGS_location & outOperand1,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstructionList ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mEndOfInstructionList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::setter_popFirst (GGS_semanticInstructionListAST & outOperand0,
                                                GGS_location & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mEndOfInstructionList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::setter_popLast (GGS_semanticInstructionListAST & outOperand0,
                                               GGS_location & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mEndOfInstructionList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::method_first (GGS_semanticInstructionListAST & outOperand0,
                                             GGS_location & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mEndOfInstructionList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::method_last (GGS_semanticInstructionListAST & outOperand0,
                                            GGS_location & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mEndOfInstructionList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::add_operation (const GGS_prologueEpilogueList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_prologueEpilogueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_prologueEpilogueList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_prologueEpilogueList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_prologueEpilogueList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_prologueEpilogueList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::plusAssignOperation (const GGS_prologueEpilogueList inList,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::setter_setMInstructionListAtIndex (GGS_semanticInstructionListAST inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_semanticInstructionListAST GGS_prologueEpilogueList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueList::setter_setMEndOfInstructionListAtIndex (GGS_location inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_location GGS_prologueEpilogueList::getter_mEndOfInstructionListAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @prologueEpilogueList
//--------------------------------------------------------------------------------------------------

DownEnumerator_prologueEpilogueList::DownEnumerator_prologueEpilogueList (const GGS_prologueEpilogueList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList_2E_element DownEnumerator_prologueEpilogueList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST DownEnumerator_prologueEpilogueList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_prologueEpilogueList::current_mEndOfInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @prologueEpilogueList
//--------------------------------------------------------------------------------------------------

UpEnumerator_prologueEpilogueList::UpEnumerator_prologueEpilogueList (const GGS_prologueEpilogueList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList_2E_element UpEnumerator_prologueEpilogueList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST UpEnumerator_prologueEpilogueList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_prologueEpilogueList::current_mEndOfInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @prologueEpilogueList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prologueEpilogueList ("prologueEpilogueList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prologueEpilogueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prologueEpilogueList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prologueEpilogueList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prologueEpilogueList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueList GGS_prologueEpilogueList::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_prologueEpilogueList result ;
  const GGS_prologueEpilogueList * p = (const GGS_prologueEpilogueList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prologueEpilogueList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prologueEpilogueList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@programRuleList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_programRuleList : public CollectionElementPtr {
  public: GGS_programRuleList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_programRuleList (const GGS_lstring & in_mSourceFileExtension,
                                                const GGS_lstring & in_mSourceFileHelp,
                                                const GGS_lstring & in_mSourceFileVariableName,
                                                const GGS_bool & in_mSourceFileVariableNameIsUnused,
                                                const GGS_lstring & in_mReferenceGrammar,
                                                const GGS_semanticInstructionListAST & in_mInstructionList,
                                                const GGS_location & in_mEndOfInstructionList
                                                COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_programRuleList (const GGS_programRuleList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_programRuleList::CollectionElementPtr_programRuleList (const GGS_lstring & in_mSourceFileExtension,
                                                                            const GGS_lstring & in_mSourceFileHelp,
                                                                            const GGS_lstring & in_mSourceFileVariableName,
                                                                            const GGS_bool & in_mSourceFileVariableNameIsUnused,
                                                                            const GGS_lstring & in_mReferenceGrammar,
                                                                            const GGS_semanticInstructionListAST & in_mInstructionList,
                                                                            const GGS_location & in_mEndOfInstructionList
                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mSourceFileExtension, in_mSourceFileHelp, in_mSourceFileVariableName, in_mSourceFileVariableNameIsUnused, in_mReferenceGrammar, in_mInstructionList, in_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_programRuleList::CollectionElementPtr_programRuleList (const GGS_programRuleList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mSourceFileExtension, inElement.mProperty_mSourceFileHelp, inElement.mProperty_mSourceFileVariableName, inElement.mProperty_mSourceFileVariableNameIsUnused, inElement.mProperty_mReferenceGrammar, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_programRuleList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_programRuleList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_programRuleList (mObject.mProperty_mSourceFileExtension, mObject.mProperty_mSourceFileHelp, mObject.mProperty_mSourceFileVariableName, mObject.mProperty_mSourceFileVariableNameIsUnused, mObject.mProperty_mReferenceGrammar, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @programRuleList
//--------------------------------------------------------------------------------------------------

GGS_programRuleList::GGS_programRuleList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList::GGS_programRuleList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_programRuleList * p = (CollectionElementPtr_programRuleList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_programRuleList) ;
    const GGS_programRuleList_2E_element element (p->mObject.mProperty_mSourceFileExtension, p->mObject.mProperty_mSourceFileHelp, p->mObject.mProperty_mSourceFileVariableName, p->mObject.mProperty_mSourceFileVariableNameIsUnused, p->mObject.mProperty_mReferenceGrammar, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                     const GGS_lstring & in_mSourceFileExtension,
                                                     const GGS_lstring & in_mSourceFileHelp,
                                                     const GGS_lstring & in_mSourceFileVariableName,
                                                     const GGS_bool & in_mSourceFileVariableNameIsUnused,
                                                     const GGS_lstring & in_mReferenceGrammar,
                                                     const GGS_semanticInstructionListAST & in_mInstructionList,
                                                     const GGS_location & in_mEndOfInstructionList
                                                     COMMA_LOCATION_ARGS) {
  CollectionElementPtr_programRuleList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_programRuleList (in_mSourceFileExtension, in_mSourceFileHelp, in_mSourceFileVariableName, in_mSourceFileVariableNameIsUnused, in_mReferenceGrammar, in_mInstructionList, in_mEndOfInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_programRuleList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_programRuleList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSourceFileExtension:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSourceFileExtension.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSourceFileHelp:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSourceFileHelp.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSourceFileVariableName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSourceFileVariableName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSourceFileVariableNameIsUnused:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSourceFileVariableNameIsUnused.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mReferenceGrammar:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mReferenceGrammar.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfInstructionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_programRuleList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::plusPlusAssignOperation (const GGS_programRuleList_2E_element & inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                   const GGS_lstring & inOperand1,
                                                                   const GGS_lstring & inOperand2,
                                                                   const GGS_bool & inOperand3,
                                                                   const GGS_lstring & inOperand4,
                                                                   const GGS_semanticInstructionListAST & inOperand5,
                                                                   const GGS_location & inOperand6
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_programRuleList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  GGS_programRuleList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::addAssignOperation (const GGS_lstring & inOperand0,
                                              const GGS_lstring & inOperand1,
                                              const GGS_lstring & inOperand2,
                                              const GGS_bool & inOperand3,
                                              const GGS_lstring & inOperand4,
                                              const GGS_semanticInstructionListAST & inOperand5,
                                              const GGS_location & inOperand6
                                              COMMA_LOCATION_ARGS) {
  const GGS_programRuleList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_append (const GGS_lstring inOperand0,
                                         const GGS_lstring inOperand1,
                                         const GGS_lstring inOperand2,
                                         const GGS_bool inOperand3,
                                         const GGS_lstring inOperand4,
                                         const GGS_semanticInstructionListAST inOperand5,
                                         const GGS_location inOperand6,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  const GGS_programRuleList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                const GGS_lstring inOperand1,
                                                const GGS_lstring inOperand2,
                                                const GGS_bool inOperand3,
                                                const GGS_lstring inOperand4,
                                                const GGS_semanticInstructionListAST inOperand5,
                                                const GGS_location inOperand6,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_programRuleList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                GGS_lstring & outOperand2,
                                                GGS_bool & outOperand3,
                                                GGS_lstring & outOperand4,
                                                GGS_semanticInstructionListAST & outOperand5,
                                                GGS_location & outOperand6,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSourceFileExtension ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSourceFileHelp ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mSourceFileVariableName ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mSourceFileVariableNameIsUnused ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mReferenceGrammar ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_mInstructionList ;
      outOperand6 = mArray (idx COMMA_HERE).mProperty_mEndOfInstructionList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_popFirst (GGS_lstring & outOperand0,
                                           GGS_lstring & outOperand1,
                                           GGS_lstring & outOperand2,
                                           GGS_bool & outOperand3,
                                           GGS_lstring & outOperand4,
                                           GGS_semanticInstructionListAST & outOperand5,
                                           GGS_location & outOperand6,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSourceFileExtension ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSourceFileHelp ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mSourceFileVariableName ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mSourceFileVariableNameIsUnused ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mReferenceGrammar ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mEndOfInstructionList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_popLast (GGS_lstring & outOperand0,
                                          GGS_lstring & outOperand1,
                                          GGS_lstring & outOperand2,
                                          GGS_bool & outOperand3,
                                          GGS_lstring & outOperand4,
                                          GGS_semanticInstructionListAST & outOperand5,
                                          GGS_location & outOperand6,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSourceFileExtension ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSourceFileHelp ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mSourceFileVariableName ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mSourceFileVariableNameIsUnused ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mReferenceGrammar ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mEndOfInstructionList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::method_first (GGS_lstring & outOperand0,
                                        GGS_lstring & outOperand1,
                                        GGS_lstring & outOperand2,
                                        GGS_bool & outOperand3,
                                        GGS_lstring & outOperand4,
                                        GGS_semanticInstructionListAST & outOperand5,
                                        GGS_location & outOperand6,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSourceFileExtension ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSourceFileHelp ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mSourceFileVariableName ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mSourceFileVariableNameIsUnused ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mReferenceGrammar ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mEndOfInstructionList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::method_last (GGS_lstring & outOperand0,
                                       GGS_lstring & outOperand1,
                                       GGS_lstring & outOperand2,
                                       GGS_bool & outOperand3,
                                       GGS_lstring & outOperand4,
                                       GGS_semanticInstructionListAST & outOperand5,
                                       GGS_location & outOperand6,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSourceFileExtension ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSourceFileHelp ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mSourceFileVariableName ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mSourceFileVariableNameIsUnused ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mReferenceGrammar ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mEndOfInstructionList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::add_operation (const GGS_programRuleList & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_programRuleList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_programRuleList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_programRuleList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_programRuleList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_programRuleList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::plusAssignOperation (const GGS_programRuleList inList,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_setMSourceFileExtensionAtIndex (GGS_lstring inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSourceFileExtension = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_programRuleList::getter_mSourceFileExtensionAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSourceFileExtension ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_setMSourceFileHelpAtIndex (GGS_lstring inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSourceFileHelp = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_programRuleList::getter_mSourceFileHelpAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSourceFileHelp ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_setMSourceFileVariableNameAtIndex (GGS_lstring inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSourceFileVariableName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_programRuleList::getter_mSourceFileVariableNameAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSourceFileVariableName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_setMSourceFileVariableNameIsUnusedAtIndex (GGS_bool inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSourceFileVariableNameIsUnused = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_programRuleList::getter_mSourceFileVariableNameIsUnusedAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSourceFileVariableNameIsUnused ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_setMReferenceGrammarAtIndex (GGS_lstring inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mReferenceGrammar = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_programRuleList::getter_mReferenceGrammarAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mReferenceGrammar ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_setMInstructionListAtIndex (GGS_semanticInstructionListAST inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_semanticInstructionListAST GGS_programRuleList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_programRuleList::setter_setMEndOfInstructionListAtIndex (GGS_location inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_location GGS_programRuleList::getter_mEndOfInstructionListAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @programRuleList
//--------------------------------------------------------------------------------------------------

DownEnumerator_programRuleList::DownEnumerator_programRuleList (const GGS_programRuleList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList_2E_element DownEnumerator_programRuleList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_programRuleList::current_mSourceFileExtension (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSourceFileExtension ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_programRuleList::current_mSourceFileHelp (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSourceFileHelp ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_programRuleList::current_mSourceFileVariableName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSourceFileVariableName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_programRuleList::current_mSourceFileVariableNameIsUnused (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSourceFileVariableNameIsUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_programRuleList::current_mReferenceGrammar (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mReferenceGrammar ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST DownEnumerator_programRuleList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_programRuleList::current_mEndOfInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @programRuleList
//--------------------------------------------------------------------------------------------------

UpEnumerator_programRuleList::UpEnumerator_programRuleList (const GGS_programRuleList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList_2E_element UpEnumerator_programRuleList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_programRuleList::current_mSourceFileExtension (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSourceFileExtension ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_programRuleList::current_mSourceFileHelp (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSourceFileHelp ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_programRuleList::current_mSourceFileVariableName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSourceFileVariableName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_programRuleList::current_mSourceFileVariableNameIsUnused (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSourceFileVariableNameIsUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_programRuleList::current_mReferenceGrammar (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mReferenceGrammar ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST UpEnumerator_programRuleList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_programRuleList::current_mEndOfInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @programRuleList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programRuleList ("programRuleList",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_programRuleList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programRuleList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_programRuleList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_programRuleList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programRuleList GGS_programRuleList::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_programRuleList result ;
  const GGS_programRuleList * p = (const GGS_programRuleList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_programRuleList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programRuleList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasDeclarationAST::GGS_galgasDeclarationAST (void) :
mProperty_mDeclarationList (),
mProperty_implicitTypeDeclarationSet (),
mProperty_mSyntaxComponentList (),
mProperty_mSyntaxExtensions (),
mProperty_mGUIComponentList (),
mProperty_mPrologueDeclarationList (),
mProperty_mSourceRuleList (),
mProperty_mEpilogueDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasDeclarationAST::GGS_galgasDeclarationAST (const GGS_galgasDeclarationAST & inSource) :
mProperty_mDeclarationList (inSource.mProperty_mDeclarationList),
mProperty_implicitTypeDeclarationSet (inSource.mProperty_implicitTypeDeclarationSet),
mProperty_mSyntaxComponentList (inSource.mProperty_mSyntaxComponentList),
mProperty_mSyntaxExtensions (inSource.mProperty_mSyntaxExtensions),
mProperty_mGUIComponentList (inSource.mProperty_mGUIComponentList),
mProperty_mPrologueDeclarationList (inSource.mProperty_mPrologueDeclarationList),
mProperty_mSourceRuleList (inSource.mProperty_mSourceRuleList),
mProperty_mEpilogueDeclarationList (inSource.mProperty_mEpilogueDeclarationList) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasDeclarationAST & GGS_galgasDeclarationAST::operator = (const GGS_galgasDeclarationAST & inSource) {
  mProperty_mDeclarationList = inSource.mProperty_mDeclarationList ;
  mProperty_implicitTypeDeclarationSet = inSource.mProperty_implicitTypeDeclarationSet ;
  mProperty_mSyntaxComponentList = inSource.mProperty_mSyntaxComponentList ;
  mProperty_mSyntaxExtensions = inSource.mProperty_mSyntaxExtensions ;
  mProperty_mGUIComponentList = inSource.mProperty_mGUIComponentList ;
  mProperty_mPrologueDeclarationList = inSource.mProperty_mPrologueDeclarationList ;
  mProperty_mSourceRuleList = inSource.mProperty_mSourceRuleList ;
  mProperty_mEpilogueDeclarationList = inSource.mProperty_mEpilogueDeclarationList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_galgasDeclarationAST GGS_galgasDeclarationAST::init (Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgasDeclarationAST result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasDeclarationAST::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mDeclarationList = GGS_semanticDeclarationListAST::init (inCompiler COMMA_HERE) ;
  mProperty_implicitTypeDeclarationSet = GGS_stringset::init (inCompiler COMMA_HERE) ;
  mProperty_mSyntaxComponentList = GGS_galgas_33_SyntaxComponentListAST::init (inCompiler COMMA_HERE) ;
  mProperty_mSyntaxExtensions = GGS_syntaxExtensions::init (inCompiler COMMA_HERE) ;
  mProperty_mGUIComponentList = GGS_galgasGUIComponentListAST::init (inCompiler COMMA_HERE) ;
  mProperty_mPrologueDeclarationList = GGS_prologueEpilogueList::init (inCompiler COMMA_HERE) ;
  mProperty_mSourceRuleList = GGS_programRuleList::init (inCompiler COMMA_HERE) ;
  mProperty_mEpilogueDeclarationList = GGS_prologueEpilogueList::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasDeclarationAST::GGS_galgasDeclarationAST (const GGS_semanticDeclarationListAST & inOperand0,
                                                    const GGS_stringset & inOperand1,
                                                    const GGS_galgas_33_SyntaxComponentListAST & inOperand2,
                                                    const GGS_syntaxExtensions & inOperand3,
                                                    const GGS_galgasGUIComponentListAST & inOperand4,
                                                    const GGS_prologueEpilogueList & inOperand5,
                                                    const GGS_programRuleList & inOperand6,
                                                    const GGS_prologueEpilogueList & inOperand7) :
mProperty_mDeclarationList (inOperand0),
mProperty_implicitTypeDeclarationSet (inOperand1),
mProperty_mSyntaxComponentList (inOperand2),
mProperty_mSyntaxExtensions (inOperand3),
mProperty_mGUIComponentList (inOperand4),
mProperty_mPrologueDeclarationList (inOperand5),
mProperty_mSourceRuleList (inOperand6),
mProperty_mEpilogueDeclarationList (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_galgasDeclarationAST::isValid (void) const {
  return mProperty_mDeclarationList.isValid () && mProperty_implicitTypeDeclarationSet.isValid () && mProperty_mSyntaxComponentList.isValid () && mProperty_mSyntaxExtensions.isValid () && mProperty_mGUIComponentList.isValid () && mProperty_mPrologueDeclarationList.isValid () && mProperty_mSourceRuleList.isValid () && mProperty_mEpilogueDeclarationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasDeclarationAST::drop (void) {
  mProperty_mDeclarationList.drop () ;
  mProperty_implicitTypeDeclarationSet.drop () ;
  mProperty_mSyntaxComponentList.drop () ;
  mProperty_mSyntaxExtensions.drop () ;
  mProperty_mGUIComponentList.drop () ;
  mProperty_mPrologueDeclarationList.drop () ;
  mProperty_mSourceRuleList.drop () ;
  mProperty_mEpilogueDeclarationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasDeclarationAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @galgasDeclarationAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDeclarationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_implicitTypeDeclarationSet.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSyntaxComponentList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSyntaxExtensions.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGUIComponentList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPrologueDeclarationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSourceRuleList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEpilogueDeclarationList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @galgasDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgasDeclarationAST ("galgasDeclarationAST",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgasDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgasDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgasDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgasDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasDeclarationAST GGS_galgasDeclarationAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_galgasDeclarationAST result ;
  const GGS_galgasDeclarationAST * p = (const GGS_galgasDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgasDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgasDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalExpressionAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateSwiftCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaConditionCode (in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaRoutineOrFunctionArgument (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalSendDefaultActionAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateSwiftCocoaDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                  const GGS_string in_inScannerClassName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaDefaultSendCode (in_inScannerClassName, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateSwiftCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                  const GGS_string in_inScannerClassName,
                                                                  const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaInstructionCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateSwiftCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                       const GGS_string in_inScannerClassName,
                                                       const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForGeneration::objectCompare (const GGS_templateInstructionForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration::GGS_templateInstructionForGeneration (void) :
AC_GALGAS_reference_class () {
}


void cPtr_templateInstructionForGeneration::
templateInstructionForGeneration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration::GGS_templateInstructionForGeneration (const cPtr_templateInstructionForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionForGeneration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForGeneration::cPtr_templateInstructionForGeneration (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForGeneration ("templateInstructionForGeneration",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration GGS_templateInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForGeneration result ;
  const GGS_templateInstructionForGeneration * p = (const GGS_templateInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionAST::objectCompare (const GGS_templateInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionAST::GGS_templateInstructionAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_templateInstructionAST::
templateInstructionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionAST::GGS_templateInstructionAST (const cPtr_templateInstructionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionAST::cPtr_templateInstructionAST (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionAST::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionAST ("templateInstructionAST",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionAST GGS_templateInstructionAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_templateInstructionAST result ;
  const GGS_templateInstructionAST * p = (const GGS_templateInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateExpressionAST::objectCompare (const GGS_templateExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST::GGS_templateExpressionAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_templateExpressionAST::
templateExpressionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST::GGS_templateExpressionAST (const cPtr_templateExpressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @templateExpressionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_templateExpressionAST::cPtr_templateExpressionAST (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateExpressionAST::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateExpressionAST ("templateExpressionAST",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateExpressionAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_templateExpressionAST result ;
  const GGS_templateExpressionAST * p = (const GGS_templateExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@templateInstructionListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_templateInstructionListAST : public CollectionElementPtr {
  public: GGS_templateInstructionListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_templateInstructionListAST (const GGS_templateInstructionAST & in_mInstruction
                                                           COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_templateInstructionListAST (const GGS_templateInstructionListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_templateInstructionListAST::CollectionElementPtr_templateInstructionListAST (const GGS_templateInstructionAST & in_mInstruction
                                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_templateInstructionListAST::CollectionElementPtr_templateInstructionListAST (const GGS_templateInstructionListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_templateInstructionListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_templateInstructionListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_templateInstructionListAST (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @templateInstructionListAST
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST::GGS_templateInstructionListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST::GGS_templateInstructionListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_templateInstructionListAST * p = (CollectionElementPtr_templateInstructionListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_templateInstructionListAST) ;
    const GGS_templateInstructionListAST_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                const GGS_templateInstructionAST & in_mInstruction
                                                                COMMA_LOCATION_ARGS) {
  CollectionElementPtr_templateInstructionListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_templateInstructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_templateInstructionListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_templateInstructionListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstruction:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstruction.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::plusPlusAssignOperation (const GGS_templateInstructionListAST_2E_element & inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionListAST::class_func_listWithValue (const GGS_templateInstructionAST & inOperand0
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionListAST_2E_element element (inOperand0) ;
  GGS_templateInstructionListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::addAssignOperation (const GGS_templateInstructionAST & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionListAST_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::setter_append (const GGS_templateInstructionAST inOperand0,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionListAST_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::setter_insertAtIndex (const GGS_templateInstructionAST inOperand0,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionListAST_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::setter_removeAtIndex (GGS_templateInstructionAST & outOperand0,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstruction ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::setter_popFirst (GGS_templateInstructionAST & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::setter_popLast (GGS_templateInstructionAST & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::method_first (GGS_templateInstructionAST & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::method_last (GGS_templateInstructionAST & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionListAST::add_operation (const GGS_templateInstructionListAST & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_templateInstructionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionListAST::subList (const int32_t inStart,
                                                                        const int32_t inLength,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::plusAssignOperation (const GGS_templateInstructionListAST inList,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListAST::setter_setMInstructionAtIndex (GGS_templateInstructionAST inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_templateInstructionAST GGS_templateInstructionListAST::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @templateInstructionListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_templateInstructionListAST::DownEnumerator_templateInstructionListAST (const GGS_templateInstructionListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST_2E_element DownEnumerator_templateInstructionListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionAST DownEnumerator_templateInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @templateInstructionListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_templateInstructionListAST::UpEnumerator_templateInstructionListAST (const GGS_templateInstructionListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST_2E_element UpEnumerator_templateInstructionListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionAST UpEnumerator_templateInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @templateInstructionListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionListAST ("templateInstructionListAST",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionListAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateInstructionListAST result ;
  const GGS_templateInstructionListAST * p = (const GGS_templateInstructionListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionAST_2E_weak::objectCompare (const GGS_templateInstructionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionAST_2E_weak::GGS_templateInstructionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionAST_2E_weak & GGS_templateInstructionAST_2E_weak::operator = (const GGS_templateInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionAST_2E_weak::GGS_templateInstructionAST_2E_weak (const GGS_templateInstructionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionAST_2E_weak GGS_templateInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionAST GGS_templateInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionAST result ;
  if (isValid ()) {
    const cPtr_templateInstructionAST * p = (cPtr_templateInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionAST GGS_templateInstructionAST_2E_weak::bang_templateInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionAST) ;
      result = GGS_templateInstructionAST ((cPtr_templateInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionAST_2E_weak ("templateInstructionAST.weak",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionAST_2E_weak GGS_templateInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_templateInstructionAST_2E_weak result ;
  const GGS_templateInstructionAST_2E_weak * p = (const GGS_templateInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@templateInstructionListForGeneration' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_templateInstructionListForGeneration : public CollectionElementPtr {
  public: GGS_templateInstructionListForGeneration_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_templateInstructionListForGeneration (const GGS_templateInstructionForGeneration & in_mInstruction
                                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_templateInstructionListForGeneration (const GGS_templateInstructionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_templateInstructionListForGeneration::CollectionElementPtr_templateInstructionListForGeneration (const GGS_templateInstructionForGeneration & in_mInstruction
                                                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_templateInstructionListForGeneration::CollectionElementPtr_templateInstructionListForGeneration (const GGS_templateInstructionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_templateInstructionListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_templateInstructionListForGeneration::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_templateInstructionListForGeneration (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @templateInstructionListForGeneration
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration::GGS_templateInstructionListForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration::GGS_templateInstructionListForGeneration (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_templateInstructionListForGeneration * p = (CollectionElementPtr_templateInstructionListForGeneration *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_templateInstructionListForGeneration) ;
    const GGS_templateInstructionListForGeneration_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                          const GGS_templateInstructionForGeneration & in_mInstruction
                                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_templateInstructionListForGeneration * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_templateInstructionListForGeneration (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_templateInstructionListForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_templateInstructionListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstruction:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstruction.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionListForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::plusPlusAssignOperation (const GGS_templateInstructionListForGeneration_2E_element & inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::class_func_listWithValue (const GGS_templateInstructionForGeneration & inOperand0
                                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionListForGeneration_2E_element element (inOperand0) ;
  GGS_templateInstructionListForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::addAssignOperation (const GGS_templateInstructionForGeneration & inOperand0
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionListForGeneration_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::setter_append (const GGS_templateInstructionForGeneration inOperand0,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionListForGeneration_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::setter_insertAtIndex (const GGS_templateInstructionForGeneration inOperand0,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionListForGeneration_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::setter_removeAtIndex (GGS_templateInstructionForGeneration & outOperand0,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstruction ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::setter_popFirst (GGS_templateInstructionForGeneration & outOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::setter_popLast (GGS_templateInstructionForGeneration & outOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::method_first (GGS_templateInstructionForGeneration & outOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::method_last (GGS_templateInstructionForGeneration & outOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::add_operation (const GGS_templateInstructionListForGeneration & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_templateInstructionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::subList (const int32_t inStart,
                                                                                            const int32_t inLength,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionListForGeneration result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::plusAssignOperation (const GGS_templateInstructionListForGeneration inList,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::setter_setMInstructionAtIndex (GGS_templateInstructionForGeneration inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_templateInstructionForGeneration GGS_templateInstructionListForGeneration::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @templateInstructionListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_templateInstructionListForGeneration::DownEnumerator_templateInstructionListForGeneration (const GGS_templateInstructionListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration_2E_element DownEnumerator_templateInstructionListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration DownEnumerator_templateInstructionListForGeneration::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @templateInstructionListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_templateInstructionListForGeneration::UpEnumerator_templateInstructionListForGeneration (const GGS_templateInstructionListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration_2E_element UpEnumerator_templateInstructionListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration UpEnumerator_templateInstructionListForGeneration::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @templateInstructionListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionListForGeneration ("templateInstructionListForGeneration",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_templateInstructionListForGeneration result ;
  const GGS_templateInstructionListForGeneration * p = (const GGS_templateInstructionListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForGeneration_2E_weak::objectCompare (const GGS_templateInstructionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration_2E_weak::GGS_templateInstructionForGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration_2E_weak & GGS_templateInstructionForGeneration_2E_weak::operator = (const GGS_templateInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration_2E_weak::GGS_templateInstructionForGeneration_2E_weak (const GGS_templateInstructionForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration_2E_weak GGS_templateInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration GGS_templateInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_templateInstructionForGeneration * p = (cPtr_templateInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration GGS_templateInstructionForGeneration_2E_weak::bang_templateInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionForGeneration) ;
      result = GGS_templateInstructionForGeneration ((cPtr_templateInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak ("templateInstructionForGeneration.weak",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration_2E_weak GGS_templateInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForGeneration_2E_weak result ;
  const GGS_templateInstructionForGeneration_2E_weak * p = (const GGS_templateInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionStringForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionStringForGeneration::objectCompare (const GGS_templateInstructionStringForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionStringForGeneration::GGS_templateInstructionStringForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionStringForGeneration GGS_templateInstructionStringForGeneration::
init_21_ (const GGS_string & in_mTemplateString,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionStringForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionStringForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionStringForGeneration_init_21_ (in_mTemplateString, inCompiler) ;
  const GGS_templateInstructionStringForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringForGeneration::
templateInstructionStringForGeneration_init_21_ (const GGS_string & in_mTemplateString,
                                                 Compiler * /* inCompiler */) {
  mProperty_mTemplateString = in_mTemplateString ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionStringForGeneration::GGS_templateInstructionStringForGeneration (const cPtr_templateInstructionStringForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionStringForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_templateInstructionStringForGeneration::readProperty_mTemplateString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_templateInstructionStringForGeneration * p = (cPtr_templateInstructionStringForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionStringForGeneration) ;
    return p->mProperty_mTemplateString ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionStringForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionStringForGeneration::cPtr_templateInstructionStringForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTemplateString () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionStringForGeneration::cPtr_templateInstructionStringForGeneration (const GGS_string & in_mTemplateString,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTemplateString () {
  mProperty_mTemplateString = in_mTemplateString ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateInstructionStringForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ;
}

void cPtr_templateInstructionStringForGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionStringForGeneration:") ;
  mProperty_mTemplateString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateInstructionStringForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionStringForGeneration (mProperty_mTemplateString, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionStringForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mTemplateString.printNonNullClassInstanceProperties ("mTemplateString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionStringForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ("templateInstructionStringForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionStringForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionStringForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionStringForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionStringForGeneration GGS_templateInstructionStringForGeneration::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_templateInstructionStringForGeneration result ;
  const GGS_templateInstructionStringForGeneration * p = (const GGS_templateInstructionStringForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionStringForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionStringForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionStringForGeneration_2E_weak::objectCompare (const GGS_templateInstructionStringForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionStringForGeneration_2E_weak::GGS_templateInstructionStringForGeneration_2E_weak (void) :
GGS_templateInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionStringForGeneration_2E_weak & GGS_templateInstructionStringForGeneration_2E_weak::operator = (const GGS_templateInstructionStringForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionStringForGeneration_2E_weak::GGS_templateInstructionStringForGeneration_2E_weak (const GGS_templateInstructionStringForGeneration & inSource) :
GGS_templateInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionStringForGeneration_2E_weak GGS_templateInstructionStringForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionStringForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionStringForGeneration GGS_templateInstructionStringForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionStringForGeneration result ;
  if (isValid ()) {
    const cPtr_templateInstructionStringForGeneration * p = (cPtr_templateInstructionStringForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionStringForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionStringForGeneration GGS_templateInstructionStringForGeneration_2E_weak::bang_templateInstructionStringForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionStringForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionStringForGeneration) ;
      result = GGS_templateInstructionStringForGeneration ((cPtr_templateInstructionStringForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionStringForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionStringForGeneration_2E_weak ("templateInstructionStringForGeneration.weak",
                                                                                                   & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionStringForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionStringForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionStringForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionStringForGeneration_2E_weak GGS_templateInstructionStringForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_templateInstructionStringForGeneration_2E_weak result ;
  const GGS_templateInstructionStringForGeneration_2E_weak * p = (const GGS_templateInstructionStringForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionStringForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionStringForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionExpressionForGeneration_2E_weak::objectCompare (const GGS_templateInstructionExpressionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration_2E_weak::GGS_templateInstructionExpressionForGeneration_2E_weak (void) :
GGS_templateInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration_2E_weak & GGS_templateInstructionExpressionForGeneration_2E_weak::operator = (const GGS_templateInstructionExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration_2E_weak::GGS_templateInstructionExpressionForGeneration_2E_weak (const GGS_templateInstructionExpressionForGeneration & inSource) :
GGS_templateInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration_2E_weak GGS_templateInstructionExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration GGS_templateInstructionExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_templateInstructionExpressionForGeneration * p = (cPtr_templateInstructionExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration GGS_templateInstructionExpressionForGeneration_2E_weak::bang_templateInstructionExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionExpressionForGeneration) ;
      result = GGS_templateInstructionExpressionForGeneration ((cPtr_templateInstructionExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration_2E_weak ("templateInstructionExpressionForGeneration.weak",
                                                                                                       & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration_2E_weak GGS_templateInstructionExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateInstructionExpressionForGeneration_2E_weak result ;
  const GGS_templateInstructionExpressionForGeneration_2E_weak * p = (const GGS_templateInstructionExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateBlockInstructionForGeneration_2E_weak::objectCompare (const GGS_templateBlockInstructionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration_2E_weak::GGS_templateBlockInstructionForGeneration_2E_weak (void) :
GGS_templateInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration_2E_weak & GGS_templateBlockInstructionForGeneration_2E_weak::operator = (const GGS_templateBlockInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration_2E_weak::GGS_templateBlockInstructionForGeneration_2E_weak (const GGS_templateBlockInstructionForGeneration & inSource) :
GGS_templateInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration_2E_weak GGS_templateBlockInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateBlockInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration GGS_templateBlockInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_templateBlockInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_templateBlockInstructionForGeneration * p = (cPtr_templateBlockInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateBlockInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration GGS_templateBlockInstructionForGeneration_2E_weak::bang_templateBlockInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateBlockInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateBlockInstructionForGeneration) ;
      result = GGS_templateBlockInstructionForGeneration ((cPtr_templateBlockInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateBlockInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration_2E_weak ("templateBlockInstructionForGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateBlockInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateBlockInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateBlockInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration_2E_weak GGS_templateBlockInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_templateBlockInstructionForGeneration_2E_weak result ;
  const GGS_templateBlockInstructionForGeneration_2E_weak * p = (const GGS_templateBlockInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateBlockInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateBlockInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionGetColumnLocationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionGetColumnLocationForGeneration::objectCompare (const GGS_templateInstructionGetColumnLocationForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration::GGS_templateInstructionGetColumnLocationForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration GGS_templateInstructionGetColumnLocationForGeneration::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionGetColumnLocationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionGetColumnLocationForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionGetColumnLocationForGeneration_init (inCompiler) ;
  const GGS_templateInstructionGetColumnLocationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationForGeneration::
templateInstructionGetColumnLocationForGeneration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration::GGS_templateInstructionGetColumnLocationForGeneration (const cPtr_templateInstructionGetColumnLocationForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionGetColumnLocationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionGetColumnLocationForGeneration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionGetColumnLocationForGeneration::cPtr_templateInstructionGetColumnLocationForGeneration (Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateInstructionGetColumnLocationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration ;
}

void cPtr_templateInstructionGetColumnLocationForGeneration::description (String & ioString,
                                                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@templateInstructionGetColumnLocationForGeneration]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateInstructionGetColumnLocationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionGetColumnLocationForGeneration (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionGetColumnLocationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionGetColumnLocationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration ("templateInstructionGetColumnLocationForGeneration",
                                                                                                      & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionGetColumnLocationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionGetColumnLocationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionGetColumnLocationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration GGS_templateInstructionGetColumnLocationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_templateInstructionGetColumnLocationForGeneration result ;
  const GGS_templateInstructionGetColumnLocationForGeneration * p = (const GGS_templateInstructionGetColumnLocationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionGetColumnLocationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGetColumnLocationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionGetColumnLocationForGeneration_2E_weak::objectCompare (const GGS_templateInstructionGetColumnLocationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration_2E_weak::GGS_templateInstructionGetColumnLocationForGeneration_2E_weak (void) :
GGS_templateInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration_2E_weak & GGS_templateInstructionGetColumnLocationForGeneration_2E_weak::operator = (const GGS_templateInstructionGetColumnLocationForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration_2E_weak::GGS_templateInstructionGetColumnLocationForGeneration_2E_weak (const GGS_templateInstructionGetColumnLocationForGeneration & inSource) :
GGS_templateInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration_2E_weak GGS_templateInstructionGetColumnLocationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionGetColumnLocationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration GGS_templateInstructionGetColumnLocationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionGetColumnLocationForGeneration result ;
  if (isValid ()) {
    const cPtr_templateInstructionGetColumnLocationForGeneration * p = (cPtr_templateInstructionGetColumnLocationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionGetColumnLocationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration GGS_templateInstructionGetColumnLocationForGeneration_2E_weak::bang_templateInstructionGetColumnLocationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionGetColumnLocationForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionGetColumnLocationForGeneration) ;
      result = GGS_templateInstructionGetColumnLocationForGeneration ((cPtr_templateInstructionGetColumnLocationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionGetColumnLocationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration_2E_weak ("templateInstructionGetColumnLocationForGeneration.weak",
                                                                                                              & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionGetColumnLocationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionGetColumnLocationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionGetColumnLocationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration_2E_weak GGS_templateInstructionGetColumnLocationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_templateInstructionGetColumnLocationForGeneration_2E_weak result ;
  const GGS_templateInstructionGetColumnLocationForGeneration_2E_weak * p = (const GGS_templateInstructionGetColumnLocationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionGetColumnLocationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGetColumnLocationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionGotoColumnLocationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionGotoColumnLocationForGeneration::objectCompare (const GGS_templateInstructionGotoColumnLocationForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration::GGS_templateInstructionGotoColumnLocationForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration GGS_templateInstructionGotoColumnLocationForGeneration::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionGotoColumnLocationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionGotoColumnLocationForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionGotoColumnLocationForGeneration_init (inCompiler) ;
  const GGS_templateInstructionGotoColumnLocationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationForGeneration::
templateInstructionGotoColumnLocationForGeneration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration::GGS_templateInstructionGotoColumnLocationForGeneration (const cPtr_templateInstructionGotoColumnLocationForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionGotoColumnLocationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionGotoColumnLocationForGeneration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionGotoColumnLocationForGeneration::cPtr_templateInstructionGotoColumnLocationForGeneration (Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateInstructionGotoColumnLocationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration ;
}

void cPtr_templateInstructionGotoColumnLocationForGeneration::description (String & ioString,
                                                                           const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@templateInstructionGotoColumnLocationForGeneration]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateInstructionGotoColumnLocationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionGotoColumnLocationForGeneration (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionGotoColumnLocationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionGotoColumnLocationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration ("templateInstructionGotoColumnLocationForGeneration",
                                                                                                       & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionGotoColumnLocationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionGotoColumnLocationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionGotoColumnLocationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration GGS_templateInstructionGotoColumnLocationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateInstructionGotoColumnLocationForGeneration result ;
  const GGS_templateInstructionGotoColumnLocationForGeneration * p = (const GGS_templateInstructionGotoColumnLocationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionGotoColumnLocationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGotoColumnLocationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak::objectCompare (const GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak::GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak (void) :
GGS_templateInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak & GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak::operator = (const GGS_templateInstructionGotoColumnLocationForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak::GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak (const GGS_templateInstructionGotoColumnLocationForGeneration & inSource) :
GGS_templateInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionGotoColumnLocationForGeneration result ;
  if (isValid ()) {
    const cPtr_templateInstructionGotoColumnLocationForGeneration * p = (cPtr_templateInstructionGotoColumnLocationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionGotoColumnLocationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak::bang_templateInstructionGotoColumnLocationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionGotoColumnLocationForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionGotoColumnLocationForGeneration) ;
      result = GGS_templateInstructionGotoColumnLocationForGeneration ((cPtr_templateInstructionGotoColumnLocationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionGotoColumnLocationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration_2E_weak ("templateInstructionGotoColumnLocationForGeneration.weak",
                                                                                                               & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak result ;
  const GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak * p = (const GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGotoColumnLocationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@templateInstructionIfBranchListForGeneration' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_templateInstructionIfBranchListForGeneration : public CollectionElementPtr {
  public: GGS_templateInstructionIfBranchListForGeneration_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_templateInstructionIfBranchListForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                             const GGS_templateInstructionListForGeneration & in_mInstructionList
                                                                             COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_templateInstructionIfBranchListForGeneration (const GGS_templateInstructionIfBranchListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_templateInstructionIfBranchListForGeneration::CollectionElementPtr_templateInstructionIfBranchListForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                                                                      const GGS_templateInstructionListForGeneration & in_mInstructionList
                                                                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mExpression, in_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_templateInstructionIfBranchListForGeneration::CollectionElementPtr_templateInstructionIfBranchListForGeneration (const GGS_templateInstructionIfBranchListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mExpression, inElement.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_templateInstructionIfBranchListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_templateInstructionIfBranchListForGeneration::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_templateInstructionIfBranchListForGeneration (mObject.mProperty_mExpression, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @templateInstructionIfBranchListForGeneration
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration::GGS_templateInstructionIfBranchListForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration::GGS_templateInstructionIfBranchListForGeneration (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_templateInstructionIfBranchListForGeneration * p = (CollectionElementPtr_templateInstructionIfBranchListForGeneration *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_templateInstructionIfBranchListForGeneration) ;
    const GGS_templateInstructionIfBranchListForGeneration_2E_element element (p->mObject.mProperty_mExpression, p->mObject.mProperty_mInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                                  const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                  const GGS_templateInstructionListForGeneration & in_mInstructionList
                                                                                  COMMA_LOCATION_ARGS) {
  CollectionElementPtr_templateInstructionIfBranchListForGeneration * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_templateInstructionIfBranchListForGeneration (in_mExpression, in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_templateInstructionIfBranchListForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_templateInstructionIfBranchListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExpression.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration GGS_templateInstructionIfBranchListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionIfBranchListForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::plusPlusAssignOperation (const GGS_templateInstructionIfBranchListForGeneration_2E_element & inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration GGS_templateInstructionIfBranchListForGeneration::class_func_listWithValue (const GGS_semanticExpressionForGeneration & inOperand0,
                                                                                                                             const GGS_templateInstructionListForGeneration & inOperand1
                                                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionIfBranchListForGeneration_2E_element element (inOperand0, inOperand1) ;
  GGS_templateInstructionIfBranchListForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::addAssignOperation (const GGS_semanticExpressionForGeneration & inOperand0,
                                                                           const GGS_templateInstructionListForGeneration & inOperand1
                                                                           COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionIfBranchListForGeneration_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::setter_append (const GGS_semanticExpressionForGeneration inOperand0,
                                                                      const GGS_templateInstructionListForGeneration inOperand1,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionIfBranchListForGeneration_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::setter_insertAtIndex (const GGS_semanticExpressionForGeneration inOperand0,
                                                                             const GGS_templateInstructionListForGeneration inOperand1,
                                                                             const GGS_uint inInsertionIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionIfBranchListForGeneration_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::setter_removeAtIndex (GGS_semanticExpressionForGeneration & outOperand0,
                                                                             GGS_templateInstructionListForGeneration & outOperand1,
                                                                             const GGS_uint inRemoveIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mExpression ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mInstructionList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::setter_popFirst (GGS_semanticExpressionForGeneration & outOperand0,
                                                                        GGS_templateInstructionListForGeneration & outOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mExpression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::setter_popLast (GGS_semanticExpressionForGeneration & outOperand0,
                                                                       GGS_templateInstructionListForGeneration & outOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mExpression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::method_first (GGS_semanticExpressionForGeneration & outOperand0,
                                                                     GGS_templateInstructionListForGeneration & outOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mExpression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::method_last (GGS_semanticExpressionForGeneration & outOperand0,
                                                                    GGS_templateInstructionListForGeneration & outOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mExpression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mInstructionList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration GGS_templateInstructionIfBranchListForGeneration::add_operation (const GGS_templateInstructionIfBranchListForGeneration & inOperand,
                                                                                                                  Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_templateInstructionIfBranchListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration GGS_templateInstructionIfBranchListForGeneration::subList (const int32_t inStart,
                                                                                                            const int32_t inLength,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionIfBranchListForGeneration result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration GGS_templateInstructionIfBranchListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionIfBranchListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration GGS_templateInstructionIfBranchListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionIfBranchListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration GGS_templateInstructionIfBranchListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionIfBranchListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::plusAssignOperation (const GGS_templateInstructionIfBranchListForGeneration inList,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::setter_setMExpressionAtIndex (GGS_semanticExpressionForGeneration inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_semanticExpressionForGeneration GGS_templateInstructionIfBranchListForGeneration::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_semanticExpressionForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::setter_setMInstructionListAtIndex (GGS_templateInstructionListForGeneration inOperand,
                                                                                          GGS_uint inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_templateInstructionListForGeneration GGS_templateInstructionIfBranchListForGeneration::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @templateInstructionIfBranchListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_templateInstructionIfBranchListForGeneration::DownEnumerator_templateInstructionIfBranchListForGeneration (const GGS_templateInstructionIfBranchListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration_2E_element DownEnumerator_templateInstructionIfBranchListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration DownEnumerator_templateInstructionIfBranchListForGeneration::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration DownEnumerator_templateInstructionIfBranchListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @templateInstructionIfBranchListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_templateInstructionIfBranchListForGeneration::UpEnumerator_templateInstructionIfBranchListForGeneration (const GGS_templateInstructionIfBranchListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration_2E_element UpEnumerator_templateInstructionIfBranchListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration UpEnumerator_templateInstructionIfBranchListForGeneration::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration UpEnumerator_templateInstructionIfBranchListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @templateInstructionIfBranchListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration ("templateInstructionIfBranchListForGeneration",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionIfBranchListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionIfBranchListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionIfBranchListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration GGS_templateInstructionIfBranchListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_templateInstructionIfBranchListForGeneration result ;
  const GGS_templateInstructionIfBranchListForGeneration * p = (const GGS_templateInstructionIfBranchListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionIfBranchListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfBranchListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionIfForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionIfForGeneration::objectCompare (const GGS_templateInstructionIfForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfForGeneration::GGS_templateInstructionIfForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionIfForGeneration GGS_templateInstructionIfForGeneration::
init_21__21_ (const GGS_templateInstructionIfBranchListForGeneration & in_mTemplateInstructionIfBranchList,
              const GGS_templateInstructionListForGeneration & in_mElseInstructionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionIfForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionIfForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionIfForGeneration_init_21__21_ (in_mTemplateInstructionIfBranchList, in_mElseInstructionList, inCompiler) ;
  const GGS_templateInstructionIfForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfForGeneration::
templateInstructionIfForGeneration_init_21__21_ (const GGS_templateInstructionIfBranchListForGeneration & in_mTemplateInstructionIfBranchList,
                                                 const GGS_templateInstructionListForGeneration & in_mElseInstructionList,
                                                 Compiler * /* inCompiler */) {
  mProperty_mTemplateInstructionIfBranchList = in_mTemplateInstructionIfBranchList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfForGeneration::GGS_templateInstructionIfForGeneration (const cPtr_templateInstructionIfForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionIfForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration GGS_templateInstructionIfForGeneration::readProperty_mTemplateInstructionIfBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionIfBranchListForGeneration () ;
  }else{
    cPtr_templateInstructionIfForGeneration * p = (cPtr_templateInstructionIfForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfForGeneration) ;
    return p->mProperty_mTemplateInstructionIfBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionIfForGeneration::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionIfForGeneration * p = (cPtr_templateInstructionIfForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfForGeneration) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionIfForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionIfForGeneration::cPtr_templateInstructionIfForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTemplateInstructionIfBranchList (),
mProperty_mElseInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionIfForGeneration::cPtr_templateInstructionIfForGeneration (const GGS_templateInstructionIfBranchListForGeneration & in_mTemplateInstructionIfBranchList,
                                                                                  const GGS_templateInstructionListForGeneration & in_mElseInstructionList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTemplateInstructionIfBranchList (),
mProperty_mElseInstructionList () {
  mProperty_mTemplateInstructionIfBranchList = in_mTemplateInstructionIfBranchList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateInstructionIfForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfForGeneration ;
}

void cPtr_templateInstructionIfForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionIfForGeneration:") ;
  mProperty_mTemplateInstructionIfBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateInstructionIfForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionIfForGeneration (mProperty_mTemplateInstructionIfBranchList, mProperty_mElseInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionIfForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mTemplateInstructionIfBranchList.printNonNullClassInstanceProperties ("mTemplateInstructionIfBranchList") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionIfForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionIfForGeneration ("templateInstructionIfForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionIfForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionIfForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionIfForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfForGeneration GGS_templateInstructionIfForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateInstructionIfForGeneration result ;
  const GGS_templateInstructionIfForGeneration * p = (const GGS_templateInstructionIfForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionIfForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionIfForGeneration_2E_weak::objectCompare (const GGS_templateInstructionIfForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfForGeneration_2E_weak::GGS_templateInstructionIfForGeneration_2E_weak (void) :
GGS_templateInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfForGeneration_2E_weak & GGS_templateInstructionIfForGeneration_2E_weak::operator = (const GGS_templateInstructionIfForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfForGeneration_2E_weak::GGS_templateInstructionIfForGeneration_2E_weak (const GGS_templateInstructionIfForGeneration & inSource) :
GGS_templateInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfForGeneration_2E_weak GGS_templateInstructionIfForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionIfForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfForGeneration GGS_templateInstructionIfForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionIfForGeneration result ;
  if (isValid ()) {
    const cPtr_templateInstructionIfForGeneration * p = (cPtr_templateInstructionIfForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionIfForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfForGeneration GGS_templateInstructionIfForGeneration_2E_weak::bang_templateInstructionIfForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionIfForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionIfForGeneration) ;
      result = GGS_templateInstructionIfForGeneration ((cPtr_templateInstructionIfForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionIfForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionIfForGeneration_2E_weak ("templateInstructionIfForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionIfForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionIfForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionIfForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfForGeneration_2E_weak GGS_templateInstructionIfForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateInstructionIfForGeneration_2E_weak result ;
  const GGS_templateInstructionIfForGeneration_2E_weak * p = (const GGS_templateInstructionIfForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionIfForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @templateVariableMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap::GGS_templateVariableMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap::~ GGS_templateVariableMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap::GGS_templateVariableMap (const GGS_templateVariableMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap & GGS_templateVariableMap::operator = (const GGS_templateVariableMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap GGS_templateVariableMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_templateVariableMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_templateVariableMap::getter_hasKey (const GGS_string & inKey
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_templateVariableMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                        const GGS_uint & inLevel
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_templateVariableMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_templateVariableMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateVariableMap::getter_locationForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_templateVariableMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_templateVariableMap::getter_keyList (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateVariableMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateVariableMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateVariableMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_templateVariableMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateVariableMap::performInsert (const GGS_templateVariableMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_templateVariableMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_templateVariableMap_2E_element>
GGS_templateVariableMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_templateVariableMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_templateVariableMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_templateVariableMap_2E_element>>
GGS_templateVariableMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_templateVariableMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_templateVariableMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateVariableMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap_2E_element_3F_ GGS_templateVariableMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_templateVariableMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_templateVariableMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_templateVariableMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_templateVariableMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mType = info->mProperty_mType ;
      element.mProperty_mCppName = info->mProperty_mCppName ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap GGS_templateVariableMap::class_func_mapWithMapToOverride (const GGS_templateVariableMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_templateVariableMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_templateVariableMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap GGS_templateVariableMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_templateVariableMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateVariableMap::setter_insertKey (GGS_lstring inLKey,
                                                GGS_unifiedTypeMapEntry inArgument0,
                                                GGS_string inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_templateVariableMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' variable is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateVariableMap::method_searchKey (GGS_lstring inLKey,
                                                GGS_unifiedTypeMapEntry & outArgument0,
                                                GGS_string & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_templateVariableMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' variable is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mType ;
    outArgument1 = info->mProperty_mCppName ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_templateVariableMap::getter_mTypeForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_templateVariableMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_templateVariableMap::getter_mCppNameForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_templateVariableMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mCppName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_templateVariableMap::setter_setMTypeForKey (GGS_unifiedTypeMapEntry inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_templateVariableMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_templateVariableMap::setter_setMCppNameForKey (GGS_string inValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_templateVariableMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mCppName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_templateVariableMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_templateVariableMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mType:") ;
    inArray (i COMMA_HERE)->mProperty_mType.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mCppName:") ;
    inArray (i COMMA_HERE)->mProperty_mCppName.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateVariableMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_templateVariableMap_2E_element>> array = sortedInfoArray () ;
    GGS_templateVariableMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_templateVariableMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_templateVariableMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @templateVariableMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_templateVariableMap::DownEnumerator_templateVariableMap (const GGS_templateVariableMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap_2E_element DownEnumerator_templateVariableMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_templateVariableMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_templateVariableMap::current_mType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_templateVariableMap::current_mCppName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mCppName ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @templateVariableMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_templateVariableMap::UpEnumerator_templateVariableMap (const GGS_templateVariableMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap_2E_element UpEnumerator_templateVariableMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_templateVariableMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_templateVariableMap::current_mType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_templateVariableMap::current_mCppName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mCppName ;
}


//--------------------------------------------------------------------------------------------------
//     @templateVariableMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateVariableMap ("templateVariableMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateVariableMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVariableMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateVariableMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateVariableMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap GGS_templateVariableMap::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_templateVariableMap result ;
  const GGS_templateVariableMap * p = (const GGS_templateVariableMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateVariableMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateVariableMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@templateExpressionAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_templateExpressionAnalysis (cPtr_templateExpressionAST * inObject,
                                                     const GGS_lstring constin_inUsefulnessCallerEntityName,
                                                     GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const GGS_templateAnalysisContext constin_inAnalysisContext,
                                                     GGS_unifiedTypeMap & io_ioTypeMap,
                                                     GGS_semanticExpressionForGeneration & out_outExpression,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outExpression.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_templateExpressionAST) ;
    inObject->method_templateExpressionAnalysis (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, out_outExpression, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//Class for element of '@templateExpressionListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_templateExpressionListAST : public CollectionElementPtr {
  public: GGS_templateExpressionListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_templateExpressionListAST (const GGS_lstring & in_mActualSelector,
                                                          const GGS_templateExpressionAST & in_mExpression,
                                                          const GGS_location & in_mEndOfExpressionLocation
                                                          COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_templateExpressionListAST (const GGS_templateExpressionListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_templateExpressionListAST::CollectionElementPtr_templateExpressionListAST (const GGS_lstring & in_mActualSelector,
                                                                                                const GGS_templateExpressionAST & in_mExpression,
                                                                                                const GGS_location & in_mEndOfExpressionLocation
                                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mActualSelector, in_mExpression, in_mEndOfExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_templateExpressionListAST::CollectionElementPtr_templateExpressionListAST (const GGS_templateExpressionListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mActualSelector, inElement.mProperty_mExpression, inElement.mProperty_mEndOfExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_templateExpressionListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_templateExpressionListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_templateExpressionListAST (mObject.mProperty_mActualSelector, mObject.mProperty_mExpression, mObject.mProperty_mEndOfExpressionLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @templateExpressionListAST
//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST::GGS_templateExpressionListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST::GGS_templateExpressionListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_templateExpressionListAST * p = (CollectionElementPtr_templateExpressionListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_templateExpressionListAST) ;
    const GGS_templateExpressionListAST_2E_element element (p->mObject.mProperty_mActualSelector, p->mObject.mProperty_mExpression, p->mObject.mProperty_mEndOfExpressionLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateExpressionListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                               const GGS_lstring & in_mActualSelector,
                                                               const GGS_templateExpressionAST & in_mExpression,
                                                               const GGS_location & in_mEndOfExpressionLocation
                                                               COMMA_LOCATION_ARGS) {
  CollectionElementPtr_templateExpressionListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_templateExpressionListAST (in_mActualSelector, in_mExpression, in_mEndOfExpressionLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_templateExpressionListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_templateExpressionListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateExpressionListAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mActualSelector:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mActualSelector.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExpression.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfExpressionLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfExpressionLocation.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateExpressionListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateExpressionListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateExpressionListAST::plusPlusAssignOperation (const GGS_templateExpressionListAST_2E_element & inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateExpressionListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                       const GGS_templateExpressionAST & inOperand1,
                                                                                       const GGS_location & inOperand2
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_templateExpressionListAST_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_templateExpressionListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateExpressionListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                        const GGS_templateExpressionAST & inOperand1,
                                                        const GGS_location & inOperand2
                                                        COMMA_LOCATION_ARGS) {
  const GGS_templateExpressionListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateExpressionListAST::setter_append (const GGS_lstring inOperand0,
                                                   const GGS_templateExpressionAST inOperand1,
                                                   const GGS_location inOperand2,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  const GGS_templateExpressionListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateExpressionListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                          const GGS_templateExpressionAST inOperand1,
                                                          const GGS_location inOperand2,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_templateExpressionListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateExpressionListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                          GGS_templateExpressionAST & outOperand1,
                                                          GGS_location & outOperand2,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mActualSelector ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mExpression ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mEndOfExpressionLocation ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateExpressionListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                     GGS_templateExpressionAST & outOperand1,
                                                     GGS_location & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mActualSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mExpression ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mEndOfExpressionLocation ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateExpressionListAST::setter_popLast (GGS_lstring & outOperand0,
                                                    GGS_templateExpressionAST & outOperand1,
                                                    GGS_location & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mActualSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mExpression ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mEndOfExpressionLocation ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateExpressionListAST::method_first (GGS_lstring & outOperand0,
                                                  GGS_templateExpressionAST & outOperand1,
                                                  GGS_location & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mActualSelector ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mExpression ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mEndOfExpressionLocation ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateExpressionListAST::method_last (GGS_lstring & outOperand0,
                                                 GGS_templateExpressionAST & outOperand1,
                                                 GGS_location & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mActualSelector ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mExpression ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mEndOfExpressionLocation ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateExpressionListAST::add_operation (const GGS_templateExpressionListAST & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_templateExpressionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateExpressionListAST::subList (const int32_t inStart,
                                                                      const int32_t inLength,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_templateExpressionListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateExpressionListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_templateExpressionListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateExpressionListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_templateExpressionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateExpressionListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_templateExpressionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateExpressionListAST::plusAssignOperation (const GGS_templateExpressionListAST inList,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateExpressionListAST::setter_setMActualSelectorAtIndex (GGS_lstring inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mActualSelector = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_templateExpressionListAST::getter_mActualSelectorAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mActualSelector ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_templateExpressionListAST::setter_setMExpressionAtIndex (GGS_templateExpressionAST inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_templateExpressionAST GGS_templateExpressionListAST::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_templateExpressionAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_templateExpressionListAST::setter_setMEndOfExpressionLocationAtIndex (GGS_location inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfExpressionLocation = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_location GGS_templateExpressionListAST::getter_mEndOfExpressionLocationAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfExpressionLocation ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @templateExpressionListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_templateExpressionListAST::DownEnumerator_templateExpressionListAST (const GGS_templateExpressionListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST_2E_element DownEnumerator_templateExpressionListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_templateExpressionListAST::current_mActualSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mActualSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST DownEnumerator_templateExpressionListAST::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_templateExpressionListAST::current_mEndOfExpressionLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfExpressionLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @templateExpressionListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_templateExpressionListAST::UpEnumerator_templateExpressionListAST (const GGS_templateExpressionListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST_2E_element UpEnumerator_templateExpressionListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_templateExpressionListAST::current_mActualSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mActualSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST UpEnumerator_templateExpressionListAST::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_templateExpressionListAST::current_mEndOfExpressionLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfExpressionLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @templateExpressionListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateExpressionListAST ("templateExpressionListAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateExpressionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExpressionListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateExpressionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateExpressionListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateExpressionListAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_templateExpressionListAST result ;
  const GGS_templateExpressionListAST * p = (const GGS_templateExpressionListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateExpressionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateExpressionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

