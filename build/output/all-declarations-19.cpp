#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-19.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertUsedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertUsedLocalConstant (GGS_localVarManager & ioObject,
                                              const GGS_lstring constinArgument_inVarName,
                                              const GGS_unifiedTypeMapEntry constinArgument_inType,
                                              const GGS_string constinArgument_inCppName,
                                              const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 71)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 71)) COMMA_SOURCE_FILE ("variable-manager.galgas", 71)), GGS_localVarValuation::class_func_read (SOURCE_FILE ("variable-manager.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 66)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInitializedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalConstant (GGS_localVarManager & ioObject,
                                                     const GGS_lstring constinArgument_inVarName,
                                                     const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                     const GGS_string constinArgument_inCppName,
                                                     const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 87)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 87)) COMMA_SOURCE_FILE ("variable-manager.galgas", 87)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 82)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertDeclaredLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertDeclaredLocalConstant (GGS_localVarManager & ioObject,
                                                  const GGS_lstring constinArgument_inVarName,
                                                  const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                  const GGS_string constinArgument_inCppName,
                                                  const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 103)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 103)) COMMA_SOURCE_FILE ("variable-manager.galgas", 103)), GGS_localVarValuation::class_func_declared (GGS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 98)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgumentDeclaredAsUnused (GGS_localVarManager & ioObject,
                                                                const GGS_lstring constinArgument_inVarName,
                                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GGS_string constinArgument_inCppName,
                                                                const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 121)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 121)) COMMA_SOURCE_FILE ("variable-manager.galgas", 121)).operator_or (GGS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas", 121)) COMMA_SOURCE_FILE ("variable-manager.galgas", 121)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 116)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgument (GGS_localVarManager & ioObject,
                                                const GGS_lstring constinArgument_inVarName,
                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                const GGS_string constinArgument_inCppName,
                                                const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 137)).operator_or (GGS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas", 137)) COMMA_SOURCE_FILE ("variable-manager.galgas", 137)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 132)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertConstantInputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (GGS_localVarManager & ioObject,
                                                                        const GGS_lstring constinArgument_inVarName,
                                                                        const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                        const GGS_string constinArgument_inCppName,
                                                                        const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 153)).operator_or (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 153)) COMMA_SOURCE_FILE ("variable-manager.galgas", 153)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 153)) COMMA_SOURCE_FILE ("variable-manager.galgas", 153)).operator_or (GGS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas", 153)) COMMA_SOURCE_FILE ("variable-manager.galgas", 153)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 148)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertConstantInputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgument (GGS_localVarManager & ioObject,
                                                        const GGS_lstring constinArgument_inVarName,
                                                        const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                        const GGS_string constinArgument_inCppName,
                                                        const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 169)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 169)) COMMA_SOURCE_FILE ("variable-manager.galgas", 169)).operator_or (GGS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas", 169)) COMMA_SOURCE_FILE ("variable-manager.galgas", 169)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 164)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertOutputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertOutputFormalArgument (GGS_localVarManager & ioObject,
                                                 const GGS_lstring constinArgument_inVarName,
                                                 const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                 const GGS_string constinArgument_inCppName,
                                                 const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectDeclaredStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 187)).operator_or (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 187)) COMMA_SOURCE_FILE ("variable-manager.galgas", 187)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 187)) COMMA_SOURCE_FILE ("variable-manager.galgas", 187)), GGS_localVarValuation::class_func_declared (GGS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 182)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputOutputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (GGS_localVarManager & ioObject,
                                                                      const GGS_lstring constinArgument_inVarName,
                                                                      const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                      const GGS_string constinArgument_inCppName,
                                                                      const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 205)).operator_or (GGS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas", 205)) COMMA_SOURCE_FILE ("variable-manager.galgas", 205)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 200)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputOutputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgument (GGS_localVarManager & ioObject,
                                                      const GGS_lstring constinArgument_inVarName,
                                                      const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                      const GGS_string constinArgument_inCppName,
                                                      const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 221)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 221)) COMMA_SOURCE_FILE ("variable-manager.galgas", 221)).operator_or (GGS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas", 222)) COMMA_SOURCE_FILE ("variable-manager.galgas", 221)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 216)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertNonMutableProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertNonMutableProperty (GGS_localVarManager & ioObject,
                                               const GGS_lstring constinArgument_inVarName,
                                               const GGS_unifiedTypeMapEntry constinArgument_inType,
                                               const GGS_string constinArgument_inCppName,
                                               const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 240)).operator_or (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 241)) COMMA_SOURCE_FILE ("variable-manager.galgas", 240)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 241)) COMMA_SOURCE_FILE ("variable-manager.galgas", 241)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 235)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertMutableProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertMutableProperty (GGS_localVarManager & ioObject,
                                            const GGS_lstring constinArgument_inVarName,
                                            const GGS_unifiedTypeMapEntry constinArgument_inType,
                                            const GGS_string constinArgument_inCppName,
                                            const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 257)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 257)) COMMA_SOURCE_FILE ("variable-manager.galgas", 257)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 252)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInitializerSelfProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializerSelfProperty (GGS_localVarManager & ioObject,
                                                    const GGS_string constinArgument_inPropertyName,
                                                    const GGS_location constinArgument_inErrorLocation,
                                                    const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                    const GGS_string constinArgument_inCppName,
                                                    const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                    const GGS_bool constinArgument_inInitialized,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_varName_12567 = GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 273)), constinArgument_inErrorLocation, inCompiler COMMA_HERE) ;
  {
  GGS_localVarValuation temp_0 ;
  const GalgasBool test_1 = constinArgument_inInitialized.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 281)) ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_localVarValuation::class_func_declared (GGS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas", 281)) ;
  }
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, var_varName_12567, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectDeclaredStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 279)).operator_or (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 280)) COMMA_SOURCE_FILE ("variable-manager.galgas", 279)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 280)) COMMA_SOURCE_FILE ("variable-manager.galgas", 280)), temp_0, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 274)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager openOverrideForSelectBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForSelectBlock (GGS_localVarManager & ioObject,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVarManager temp_0 = ioObject ;
  ioObject.mProperty_mOverridenManagers.addAssignOperation (GGS_overrideKind::class_func_selectOverrideFirstBranch (temp_0.readProperty_mCurrentManager ()  COMMA_SOURCE_FILE ("variable-manager.galgas", 290))  COMMA_SOURCE_FILE ("variable-manager.galgas", 290)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager openOverrideForRepeatBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForRepeatBlock (GGS_localVarManager & ioObject,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mOverridenManagers.addAssignOperation (GGS_overrideKind::class_func_repeatOverride (SOURCE_FILE ("variable-manager.galgas", 296))  COMMA_SOURCE_FILE ("variable-manager.galgas", 296)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager closeOverride'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeOverride (GGS_localVarManager & ioObject,
                                    const GGS_location /* constinArgument_inEndOfBranchLocation */,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_localVarManager temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mOverridenManagers ().getter_count (SOURCE_FILE ("variable-manager.galgas", 302)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_overrideKind var_savedManager_13815 ;
      {
      ioObject.mProperty_mOverridenManagers.setter_popLast (var_savedManager_13815, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 303)) ;
      }
      switch (var_savedManager_13815.enumValue ()) {
      case GGS_overrideKind::Enumeration::invalid:
        break ;
      case GGS_overrideKind::Enumeration::enum_selectOverrideFirstBranch:
        break ;
      case GGS_overrideKind::Enumeration::enum_selectOverrideNextBranches:
        {
          GGS_currentVarManager extractedValue_13994_savedManager_0 ;
          GGS_currentVarManager extractedValue_14026_referenceManager_1 ;
          var_savedManager_13815.getAssociatedValuesFor_selectOverrideNextBranches (extractedValue_13994_savedManager_0, extractedValue_14026_referenceManager_1) ;
          ioObject.mProperty_mCurrentManager = extractedValue_14026_referenceManager_1 ;
        }
        break ;
      case GGS_overrideKind::Enumeration::enum_repeatOverride:
        break ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager openBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (GGS_localVarManager & ioObject,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_openScope (ioObject.mProperty_mCurrentManager, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 316)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager closeBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeBranch (GGS_localVarManager & ioObject,
                                  const GGS_location constinArgument_inEndOfBranchLocation,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_closeScope (ioObject.mProperty_mCurrentManager, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 322)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_localVarManager temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mOverridenManagers ().getter_count (SOURCE_FILE ("variable-manager.galgas", 324)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_overrideKind var_savedManager_14648 ;
      {
      ioObject.mProperty_mOverridenManagers.setter_popLast (var_savedManager_14648, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 325)) ;
      }
      switch (var_savedManager_14648.enumValue ()) {
      case GGS_overrideKind::Enumeration::invalid:
        break ;
      case GGS_overrideKind::Enumeration::enum_selectOverrideFirstBranch:
        {
          GGS_currentVarManager extractedValue_14741_savedManager_0 ;
          var_savedManager_14648.getAssociatedValuesFor_selectOverrideFirstBranch (extractedValue_14741_savedManager_0) ;
          const GGS_localVarManager temp_2 = ioObject ;
          ioObject.mProperty_mOverridenManagers.addAssignOperation (GGS_overrideKind::class_func_selectOverrideNextBranches (extractedValue_14741_savedManager_0, temp_2.readProperty_mCurrentManager ()  COMMA_SOURCE_FILE ("variable-manager.galgas", 328))  COMMA_SOURCE_FILE ("variable-manager.galgas", 328)) ;
          ioObject.mProperty_mCurrentManager = extractedValue_14741_savedManager_0 ;
        }
        break ;
      case GGS_overrideKind::Enumeration::enum_selectOverrideNextBranches:
        {
          GGS_currentVarManager extractedValue_14987_savedManager_0 ;
          GGS_currentVarManager extractedValue_15019_referenceManager_1 ;
          var_savedManager_14648.getAssociatedValuesFor_selectOverrideNextBranches (extractedValue_14987_savedManager_0, extractedValue_15019_referenceManager_1) ;
          const GGS_localVarManager temp_3 = ioObject ;
          GGS_currentVarManager var_newReferenceManager_15049 = temp_3.readProperty_mCurrentManager () ;
          {
          extensionSetter_combineManagerWith (var_newReferenceManager_15049, extractedValue_15019_referenceManager_1, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 332)) ;
          }
          ioObject.mProperty_mOverridenManagers.addAssignOperation (GGS_overrideKind::class_func_selectOverrideNextBranches (extractedValue_14987_savedManager_0, var_newReferenceManager_15049  COMMA_SOURCE_FILE ("variable-manager.galgas", 333))  COMMA_SOURCE_FILE ("variable-manager.galgas", 333)) ;
          ioObject.mProperty_mCurrentManager = extractedValue_14987_savedManager_0 ;
        }
        break ;
      case GGS_overrideKind::Enumeration::enum_repeatOverride:
        {
          ioObject.mProperty_mOverridenManagers.addAssignOperation (var_savedManager_14648  COMMA_SOURCE_FILE ("variable-manager.galgas", 336)) ;
        }
        break ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager checkSelfObjectIsFullyInitialized'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSelfObjectIsFullyInitialized (const GGS_localVarManager inObject,
                                                        const GGS_location constinArgument_inErrorLocation,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVarManager temp_0 = inObject ;
  extensionMethod_checkSelfObjectIsFullyInitialized (temp_0.readProperty_mCurrentManager (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 416)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (GGS_localVarManager & ioObject,
                                    const GGS_lstring constinArgument_inVarName,
                                    GGS_unifiedTypeMapEntry & outArgument_outType,
                                    GGS_string & outArgument_outCppName,
                                    GGS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_neutralAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 442)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForDropAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForDropAccess (GGS_localVarManager & ioObject,
                                          const GGS_lstring constinArgument_inVarName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_searchForDropAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 500)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForWriteAccess (GGS_localVarManager & ioObject,
                                           const GGS_lstring constinArgument_inVarName,
                                           GGS_unifiedTypeMapEntry & outArgument_outType,
                                           GGS_string & outArgument_outCppName,
                                           GGS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_searchForWriteAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 535)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForReadAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadAccess (GGS_localVarManager & ioObject,
                                          const GGS_lstring constinArgument_inVarName,
                                          GGS_unifiedTypeMapEntry & outArgument_outType,
                                          GGS_string & outArgument_outCppName,
                                          GGS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_searchForReadAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 647)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForReadWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadWriteAccess (GGS_localVarManager & ioObject,
                                               const GGS_lstring constinArgument_inVarName,
                                               GGS_unifiedTypeMapEntry & outArgument_outType,
                                               GGS_string & outArgument_outCppName,
                                               GGS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_searchForReadWriteAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 731)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager checkAutomatonStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkAutomatonStates (const GGS_localVarManager inObject,
                                           const GGS_location constinArgument_inErrorLocation,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVarManager temp_0 = inObject ;
  extensionMethod_checkAutomatonStates (temp_0.readProperty_mCurrentManager (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 887)) ;
}


//--------------------------------------------------------------------------------------------------
//  Extension Getter '@unifiedTypeMap unsolvedEntryList'
//--------------------------------------------------------------------------------------------------

GGS_lstringlist extensionGetter_unsolvedEntryList (const GGS_unifiedTypeMap & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstringlist result_result ; // Returned variable
  result_result = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  const GGS_unifiedTypeMap temp_0 = inObject ;
  UpEnumerator_unifiedTypeMap enumerator_1851 (temp_0) ;
  while (enumerator_1851.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = enumerator_1851.current_mElement (HERE).readProperty_mDefinition ().getter_isUnsolved (SOURCE_FILE ("unified-type-map.galgas", 37)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        result_result.addAssignOperation (enumerator_1851.current_lkey (HERE)  COMMA_SOURCE_FILE ("unified-type-map.galgas", 38)) ;
      }
    }
    enumerator_1851.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @unifiedTypeMapElementClass reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapElementClass::objectCompare (const GGS_unifiedTypeMapElementClass & inOperand) const {
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

GGS_unifiedTypeMapElementClass::GGS_unifiedTypeMapElementClass (void) :
AC_GALGAS_reference_class () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMapElementClass::
init_21_ (const GGS_typeDefinition & in_mDefinition,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_unifiedTypeMapElementClass * object = nullptr ;
  macroMyNew (object, cPtr_unifiedTypeMapElementClass (inCompiler COMMA_THERE)) ;
  object->unifiedTypeMapElementClass_init_21_ (in_mDefinition, inCompiler) ;
  const GGS_unifiedTypeMapElementClass result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_unifiedTypeMapElementClass::
unifiedTypeMapElementClass_init_21_ (const GGS_typeDefinition & in_mDefinition,
                                     Compiler * /* inCompiler */) {
  mProperty_mDefinition = in_mDefinition ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass::GGS_unifiedTypeMapElementClass (const cPtr_unifiedTypeMapElementClass * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unifiedTypeMapElementClass) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMapElementClass::class_func_new (const GGS_typeDefinition & in_mDefinition,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapElementClass result ;
  macroMyNew (result.mObjectPtr, cPtr_unifiedTypeMapElementClass (in_mDefinition,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDefinition GGS_unifiedTypeMapElementClass::readProperty_mDefinition (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typeDefinition () ;
  }else{
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    return p->mProperty_mDefinition ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapElementClass::setProperty_mDefinition (const GGS_typeDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    p->mProperty_mDefinition = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unifiedTypeMapElementClass class
//--------------------------------------------------------------------------------------------------

cPtr_unifiedTypeMapElementClass::cPtr_unifiedTypeMapElementClass (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mDefinition () {
}

//--------------------------------------------------------------------------------------------------

cPtr_unifiedTypeMapElementClass::cPtr_unifiedTypeMapElementClass (const GGS_typeDefinition & in_mDefinition,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mDefinition () {
  mProperty_mDefinition = in_mDefinition ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_unifiedTypeMapElementClass::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;
}

void cPtr_unifiedTypeMapElementClass::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@unifiedTypeMapElementClass:") ;
  mProperty_mDefinition.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_unifiedTypeMapElementClass::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unifiedTypeMapElementClass (mProperty_mDefinition, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unifiedTypeMapElementClass::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mDefinition.printNonNullClassInstanceProperties ("mDefinition") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @unifiedTypeMapElementClass generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ("unifiedTypeMapElementClass",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unifiedTypeMapElementClass::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapElementClass::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapElementClass (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMapElementClass::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapElementClass result ;
  const GGS_unifiedTypeMapElementClass * p = (const GGS_unifiedTypeMapElementClass *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapElementClass *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapElementClass", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass definition'
//
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition cPtr_unifiedTypeMapElementClass::getter_definition (Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_unifiedTypeDefinition result_result ; // Returned variable
  const GGS_unifiedTypeMapElementClass temp_0 = this ;
  switch (temp_0.readProperty_mDefinition ().enumValue ()) {
  case GGS_typeDefinition::Enumeration::invalid:
    break ;
  case GGS_typeDefinition::Enumeration::enum_unsolved:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 167)), GGS_string ("unsolved type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas", 167)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeDefinition::Enumeration::enum_solved:
    {
      GGS_unifiedTypeDefinition extractedValue_6465_definition_0 ;
      temp_0.readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_6465_definition_0) ;
      result_result = extractedValue_6465_definition_0 ;
    }
    break ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition callExtensionGetter_definition (const cPtr_unifiedTypeMapElementClass * inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeDefinition result ;
  if (nullptr != inObject) {
    result = inObject->getter_definition (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@actualParameterListAST analyzeRoutineArguments'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeRoutineArguments (const GGS_actualParameterListAST inObject,
                                              const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                              const GGS_lstring constinArgument_inRoutineName,
                                              const GGS_string constinArgument_inInvokedEntityName,
                                              const GGS_formalParameterSignature constinArgument_inRoutineSignature,
                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                              GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                              GGS_actualParameterListForGeneration & outArgument_outActualParameterListForGeneration,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActualParameterListForGeneration.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_actualParameterListAST temp_1 = inObject ;
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inRoutineSignature.getter_count (SOURCE_FILE ("actual-parameters.galgas", 38)).objectCompare (temp_1.getter_count (SOURCE_FILE ("actual-parameters.galgas", 38)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string temp_2 ;
      const GalgasBool test_3 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inRoutineSignature.getter_count (SOURCE_FILE ("actual-parameters.galgas", 41)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        temp_2 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_3) {
        temp_2 = GGS_string::makeEmptyString () ;
      }
      const GGS_actualParameterListAST temp_4 = inObject ;
      const GGS_actualParameterListAST temp_5 = inObject ;
      GGS_string temp_6 ;
      const GalgasBool test_7 = GGS_bool (ComparisonKind::greaterThan, temp_5.getter_count (SOURCE_FILE ("actual-parameters.galgas", 43)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        temp_6 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_7) {
        temp_6 = GGS_string::makeEmptyString () ;
      }
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GGS_string ("the ").add_operation (constinArgument_inInvokedEntityName, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 40)).add_operation (GGS_string (" defines "), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 40)).add_operation (constinArgument_inRoutineSignature.getter_count (SOURCE_FILE ("actual-parameters.galgas", 40)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 40)).add_operation (GGS_string (" formal argument"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 40)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 41)).add_operation (GGS_string (" but this invocation names "), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 41)).add_operation (temp_4.getter_count (SOURCE_FILE ("actual-parameters.galgas", 43)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 42)).add_operation (GGS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 43)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 43)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 39)) ;
      outArgument_outActualParameterListForGeneration.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outActualParameterListForGeneration = GGS_actualParameterListForGeneration::init (inCompiler COMMA_HERE) ;
    GGS_stringset var_exclusiveVariableSet_2795 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    const GGS_actualParameterListAST temp_9 = inObject ;
    UpEnumerator_formalParameterSignature enumerator_2850 (constinArgument_inRoutineSignature) ;
    UpEnumerator_actualParameterListAST enumerator_2871 (temp_9) ;
    while (enumerator_2850.hasCurrentObject () && enumerator_2871.hasCurrentObject ()) {
      callExtensionMethod_checkAgainstFormalArgument ((cPtr_actualParameterAST *) enumerator_2871.current_mActualParameter (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_2850.current (HERE).readProperty_mFormalSelector (), enumerator_2850.current (HERE).readProperty_mFormalArgumentType (), enumerator_2850.current (HERE).readProperty_mFormalArgumentPassingMode (), ioArgument_ioVariableMap, outArgument_outActualParameterListForGeneration, var_exclusiveVariableSet_2795, ioArgument_ioInstructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 49)) ;
      enumerator_2850.gotoNextObject () ;
      enumerator_2871.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// @outputActualParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputActualParameterAST::objectCompare (const GGS_outputActualParameterAST & inOperand) const {
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

GGS_outputActualParameterAST::GGS_outputActualParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_outputActualParameterAST GGS_outputActualParameterAST::
init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                  const GGS_semanticExpressionAST & in_mOutputActualParameterExpression,
                  const GGS_location & in_mEndOfExpressionLocation,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_outputActualParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_outputActualParameterAST (inCompiler COMMA_THERE)) ;
  object->outputActualParameterAST_init_21__21__21_ (in_mActualSelector, in_mOutputActualParameterExpression, in_mEndOfExpressionLocation, inCompiler) ;
  const GGS_outputActualParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::
outputActualParameterAST_init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                                           const GGS_semanticExpressionAST & in_mOutputActualParameterExpression,
                                           const GGS_location & in_mEndOfExpressionLocation,
                                           Compiler * /* inCompiler */) {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mOutputActualParameterExpression = in_mOutputActualParameterExpression ;
  mProperty_mEndOfExpressionLocation = in_mEndOfExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterAST::GGS_outputActualParameterAST (const cPtr_outputActualParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputActualParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterAST GGS_outputActualParameterAST::class_func_new (const GGS_lstring & in_mActualSelector,
                                                                           const GGS_semanticExpressionAST & in_mOutputActualParameterExpression,
                                                                           const GGS_location & in_mEndOfExpressionLocation,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_outputActualParameterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_outputActualParameterAST (in_mActualSelector, in_mOutputActualParameterExpression, in_mEndOfExpressionLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_outputActualParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_outputActualParameterAST * p = (cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_outputActualParameterAST::readProperty_mOutputActualParameterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_outputActualParameterAST * p = (cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    return p->mProperty_mOutputActualParameterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_outputActualParameterAST::readProperty_mEndOfExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_outputActualParameterAST * p = (cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    return p->mProperty_mEndOfExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputActualParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_outputActualParameterAST::cPtr_outputActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mOutputActualParameterExpression (),
mProperty_mEndOfExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_outputActualParameterAST::cPtr_outputActualParameterAST (const GGS_lstring & in_mActualSelector,
                                                              const GGS_semanticExpressionAST & in_mOutputActualParameterExpression,
                                                              const GGS_location & in_mEndOfExpressionLocation,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mOutputActualParameterExpression (),
mProperty_mEndOfExpressionLocation () {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mOutputActualParameterExpression = in_mOutputActualParameterExpression ;
  mProperty_mEndOfExpressionLocation = in_mEndOfExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outputActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterAST ;
}

void cPtr_outputActualParameterAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@outputActualParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutputActualParameterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputActualParameterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputActualParameterAST (mProperty_mActualSelector, mProperty_mOutputActualParameterExpression, mProperty_mEndOfExpressionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputActualParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mOutputActualParameterExpression.printNonNullClassInstanceProperties ("mOutputActualParameterExpression") ;
    mProperty_mEndOfExpressionLocation.printNonNullClassInstanceProperties ("mEndOfExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @outputActualParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterAST ("outputActualParameterAST",
                                                                                & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outputActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputActualParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterAST GGS_outputActualParameterAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_outputActualParameterAST result ;
  const GGS_outputActualParameterAST * p = (const GGS_outputActualParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @outputInputActualParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputInputActualParameterAST::objectCompare (const GGS_outputInputActualParameterAST & inOperand) const {
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

GGS_outputInputActualParameterAST::GGS_outputInputActualParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_outputInputActualParameterAST GGS_outputInputActualParameterAST::
init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                  const GGS_lstring & in_mOutputInputActualParameterName,
                  const GGS_lstringlist & in_mStructAttributeList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_outputInputActualParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_outputInputActualParameterAST (inCompiler COMMA_THERE)) ;
  object->outputInputActualParameterAST_init_21__21__21_ (in_mActualSelector, in_mOutputInputActualParameterName, in_mStructAttributeList, inCompiler) ;
  const GGS_outputInputActualParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::
outputInputActualParameterAST_init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                                                const GGS_lstring & in_mOutputInputActualParameterName,
                                                const GGS_lstringlist & in_mStructAttributeList,
                                                Compiler * /* inCompiler */) {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mOutputInputActualParameterName = in_mOutputInputActualParameterName ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterAST::GGS_outputInputActualParameterAST (const cPtr_outputInputActualParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputActualParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterAST GGS_outputInputActualParameterAST::class_func_new (const GGS_lstring & in_mActualSelector,
                                                                                     const GGS_lstring & in_mOutputInputActualParameterName,
                                                                                     const GGS_lstringlist & in_mStructAttributeList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_outputInputActualParameterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_outputInputActualParameterAST (in_mActualSelector, in_mOutputInputActualParameterName, in_mStructAttributeList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_outputInputActualParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_outputInputActualParameterAST * p = (cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_outputInputActualParameterAST::readProperty_mOutputInputActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_outputInputActualParameterAST * p = (cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    return p->mProperty_mOutputInputActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_outputInputActualParameterAST::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_outputInputActualParameterAST * p = (cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputInputActualParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_outputInputActualParameterAST::cPtr_outputInputActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mOutputInputActualParameterName (),
mProperty_mStructAttributeList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_outputInputActualParameterAST::cPtr_outputInputActualParameterAST (const GGS_lstring & in_mActualSelector,
                                                                        const GGS_lstring & in_mOutputInputActualParameterName,
                                                                        const GGS_lstringlist & in_mStructAttributeList,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mOutputInputActualParameterName (),
mProperty_mStructAttributeList () {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mOutputInputActualParameterName = in_mOutputInputActualParameterName ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outputInputActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterAST ;
}

void cPtr_outputInputActualParameterAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@outputInputActualParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutputInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputInputActualParameterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputInputActualParameterAST (mProperty_mActualSelector, mProperty_mOutputInputActualParameterName, mProperty_mStructAttributeList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputInputActualParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mOutputInputActualParameterName.printNonNullClassInstanceProperties ("mOutputInputActualParameterName") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @outputInputActualParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputActualParameterAST ("outputInputActualParameterAST",
                                                                                     & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outputInputActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputInputActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputInputActualParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterAST GGS_outputInputActualParameterAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_outputInputActualParameterAST result ;
  const GGS_outputInputActualParameterAST * p = (const GGS_outputInputActualParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputInputActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @outputInputJokerParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputInputJokerParameterAST::objectCompare (const GGS_outputInputJokerParameterAST & inOperand) const {
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

GGS_outputInputJokerParameterAST::GGS_outputInputJokerParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_outputInputJokerParameterAST GGS_outputInputJokerParameterAST::
init_21__21_ (const GGS_lstring & in_mActualSelector,
              const GGS_semanticExpressionAST & in_expression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_outputInputJokerParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_outputInputJokerParameterAST (inCompiler COMMA_THERE)) ;
  object->outputInputJokerParameterAST_init_21__21_ (in_mActualSelector, in_expression, inCompiler) ;
  const GGS_outputInputJokerParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::
outputInputJokerParameterAST_init_21__21_ (const GGS_lstring & in_mActualSelector,
                                           const GGS_semanticExpressionAST & in_expression,
                                           Compiler * /* inCompiler */) {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_expression = in_expression ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputJokerParameterAST::GGS_outputInputJokerParameterAST (const cPtr_outputInputJokerParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputJokerParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_outputInputJokerParameterAST GGS_outputInputJokerParameterAST::class_func_new (const GGS_lstring & in_mActualSelector,
                                                                                   const GGS_semanticExpressionAST & in_expression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_outputInputJokerParameterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_outputInputJokerParameterAST (in_mActualSelector, in_expression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_outputInputJokerParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_outputInputJokerParameterAST * p = (cPtr_outputInputJokerParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputJokerParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_outputInputJokerParameterAST::readProperty_expression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_outputInputJokerParameterAST * p = (cPtr_outputInputJokerParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputJokerParameterAST) ;
    return p->mProperty_expression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputInputJokerParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_outputInputJokerParameterAST::cPtr_outputInputJokerParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_expression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_outputInputJokerParameterAST::cPtr_outputInputJokerParameterAST (const GGS_lstring & in_mActualSelector,
                                                                      const GGS_semanticExpressionAST & in_expression,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_expression () {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_expression = in_expression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outputInputJokerParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputJokerParameterAST ;
}

void cPtr_outputInputJokerParameterAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@outputInputJokerParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_expression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputInputJokerParameterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputInputJokerParameterAST (mProperty_mActualSelector, mProperty_expression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputInputJokerParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_expression.printNonNullClassInstanceProperties ("expression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @outputInputJokerParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputJokerParameterAST ("outputInputJokerParameterAST",
                                                                                    & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outputInputJokerParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputJokerParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputInputJokerParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputInputJokerParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputJokerParameterAST GGS_outputInputJokerParameterAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_outputInputJokerParameterAST result ;
  const GGS_outputInputJokerParameterAST * p = (const GGS_outputInputJokerParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputInputJokerParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputJokerParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @outputInputSelfParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputInputSelfParameterAST::objectCompare (const GGS_outputInputSelfParameterAST & inOperand) const {
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

GGS_outputInputSelfParameterAST::GGS_outputInputSelfParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_outputInputSelfParameterAST GGS_outputInputSelfParameterAST::
init_21_ (const GGS_lstring & in_mActualSelector,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_outputInputSelfParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_outputInputSelfParameterAST (inCompiler COMMA_THERE)) ;
  object->outputInputSelfParameterAST_init_21_ (in_mActualSelector, inCompiler) ;
  const GGS_outputInputSelfParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::
outputInputSelfParameterAST_init_21_ (const GGS_lstring & in_mActualSelector,
                                      Compiler * /* inCompiler */) {
  mProperty_mActualSelector = in_mActualSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputSelfParameterAST::GGS_outputInputSelfParameterAST (const cPtr_outputInputSelfParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputSelfParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_outputInputSelfParameterAST GGS_outputInputSelfParameterAST::class_func_new (const GGS_lstring & in_mActualSelector,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_outputInputSelfParameterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_outputInputSelfParameterAST (in_mActualSelector,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_outputInputSelfParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_outputInputSelfParameterAST * p = (cPtr_outputInputSelfParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputSelfParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputInputSelfParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_outputInputSelfParameterAST::cPtr_outputInputSelfParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector () {
}

//--------------------------------------------------------------------------------------------------

cPtr_outputInputSelfParameterAST::cPtr_outputInputSelfParameterAST (const GGS_lstring & in_mActualSelector,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector () {
  mProperty_mActualSelector = in_mActualSelector ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outputInputSelfParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputSelfParameterAST ;
}

void cPtr_outputInputSelfParameterAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@outputInputSelfParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputInputSelfParameterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputInputSelfParameterAST (mProperty_mActualSelector, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputInputSelfParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @outputInputSelfParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputSelfParameterAST ("outputInputSelfParameterAST",
                                                                                   & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outputInputSelfParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputSelfParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputInputSelfParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputInputSelfParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputSelfParameterAST GGS_outputInputSelfParameterAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_outputInputSelfParameterAST result ;
  const GGS_outputInputSelfParameterAST * p = (const GGS_outputInputSelfParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputInputSelfParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputSelfParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputActualExistingVariableParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualExistingVariableParameterAST::objectCompare (const GGS_inputActualExistingVariableParameterAST & inOperand) const {
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

GGS_inputActualExistingVariableParameterAST::GGS_inputActualExistingVariableParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputActualExistingVariableParameterAST GGS_inputActualExistingVariableParameterAST::
init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                  const GGS_lstring & in_mInputActualParameterName,
                  const GGS_lstringlist & in_mPoisonedVarNameList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_inputActualExistingVariableParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputActualExistingVariableParameterAST (inCompiler COMMA_THERE)) ;
  object->inputActualExistingVariableParameterAST_init_21__21__21_ (in_mActualSelector, in_mInputActualParameterName, in_mPoisonedVarNameList, inCompiler) ;
  const GGS_inputActualExistingVariableParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::
inputActualExistingVariableParameterAST_init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                                                          const GGS_lstring & in_mInputActualParameterName,
                                                          const GGS_lstringlist & in_mPoisonedVarNameList,
                                                          Compiler * /* inCompiler */) {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mInputActualParameterName = in_mInputActualParameterName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualExistingVariableParameterAST::GGS_inputActualExistingVariableParameterAST (const cPtr_inputActualExistingVariableParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualExistingVariableParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_inputActualExistingVariableParameterAST GGS_inputActualExistingVariableParameterAST::class_func_new (const GGS_lstring & in_mActualSelector,
                                                                                                         const GGS_lstring & in_mInputActualParameterName,
                                                                                                         const GGS_lstringlist & in_mPoisonedVarNameList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_inputActualExistingVariableParameterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_inputActualExistingVariableParameterAST (in_mActualSelector, in_mInputActualParameterName, in_mPoisonedVarNameList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualExistingVariableParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualExistingVariableParameterAST * p = (cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualExistingVariableParameterAST::readProperty_mInputActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualExistingVariableParameterAST * p = (cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
    return p->mProperty_mInputActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_inputActualExistingVariableParameterAST::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_inputActualExistingVariableParameterAST * p = (cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputActualExistingVariableParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualExistingVariableParameterAST::cPtr_inputActualExistingVariableParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mInputActualParameterName (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputActualExistingVariableParameterAST::cPtr_inputActualExistingVariableParameterAST (const GGS_lstring & in_mActualSelector,
                                                                                            const GGS_lstring & in_mInputActualParameterName,
                                                                                            const GGS_lstringlist & in_mPoisonedVarNameList,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mInputActualParameterName (),
mProperty_mPoisonedVarNameList () {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mInputActualParameterName = in_mInputActualParameterName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputActualExistingVariableParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ;
}

void cPtr_inputActualExistingVariableParameterAST::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@inputActualExistingVariableParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputActualExistingVariableParameterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputActualExistingVariableParameterAST (mProperty_mActualSelector, mProperty_mInputActualParameterName, mProperty_mPoisonedVarNameList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputActualExistingVariableParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mInputActualParameterName.printNonNullClassInstanceProperties ("mInputActualParameterName") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputActualExistingVariableParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ("inputActualExistingVariableParameterAST",
                                                                                               & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputActualExistingVariableParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualExistingVariableParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualExistingVariableParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualExistingVariableParameterAST GGS_inputActualExistingVariableParameterAST::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_inputActualExistingVariableParameterAST result ;
  const GGS_inputActualExistingVariableParameterAST * p = (const GGS_inputActualExistingVariableParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualExistingVariableParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualExistingVariableParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputActualSelfPropertyParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualSelfPropertyParameterAST::objectCompare (const GGS_inputActualSelfPropertyParameterAST & inOperand) const {
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

GGS_inputActualSelfPropertyParameterAST::GGS_inputActualSelfPropertyParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputActualSelfPropertyParameterAST GGS_inputActualSelfPropertyParameterAST::
init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                  const GGS_lstring & in_mInputActualSelfPropertyName,
                  const GGS_lstringlist & in_mPoisonedVarNameList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_inputActualSelfPropertyParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputActualSelfPropertyParameterAST (inCompiler COMMA_THERE)) ;
  object->inputActualSelfPropertyParameterAST_init_21__21__21_ (in_mActualSelector, in_mInputActualSelfPropertyName, in_mPoisonedVarNameList, inCompiler) ;
  const GGS_inputActualSelfPropertyParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::
inputActualSelfPropertyParameterAST_init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                                                      const GGS_lstring & in_mInputActualSelfPropertyName,
                                                      const GGS_lstringlist & in_mPoisonedVarNameList,
                                                      Compiler * /* inCompiler */) {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mInputActualSelfPropertyName = in_mInputActualSelfPropertyName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfPropertyParameterAST::GGS_inputActualSelfPropertyParameterAST (const cPtr_inputActualSelfPropertyParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualSelfPropertyParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfPropertyParameterAST GGS_inputActualSelfPropertyParameterAST::class_func_new (const GGS_lstring & in_mActualSelector,
                                                                                                 const GGS_lstring & in_mInputActualSelfPropertyName,
                                                                                                 const GGS_lstringlist & in_mPoisonedVarNameList,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_inputActualSelfPropertyParameterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_inputActualSelfPropertyParameterAST (in_mActualSelector, in_mInputActualSelfPropertyName, in_mPoisonedVarNameList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualSelfPropertyParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualSelfPropertyParameterAST * p = (cPtr_inputActualSelfPropertyParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfPropertyParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualSelfPropertyParameterAST::readProperty_mInputActualSelfPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualSelfPropertyParameterAST * p = (cPtr_inputActualSelfPropertyParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfPropertyParameterAST) ;
    return p->mProperty_mInputActualSelfPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_inputActualSelfPropertyParameterAST::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_inputActualSelfPropertyParameterAST * p = (cPtr_inputActualSelfPropertyParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfPropertyParameterAST) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputActualSelfPropertyParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualSelfPropertyParameterAST::cPtr_inputActualSelfPropertyParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mInputActualSelfPropertyName (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputActualSelfPropertyParameterAST::cPtr_inputActualSelfPropertyParameterAST (const GGS_lstring & in_mActualSelector,
                                                                                    const GGS_lstring & in_mInputActualSelfPropertyName,
                                                                                    const GGS_lstringlist & in_mPoisonedVarNameList,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mInputActualSelfPropertyName (),
mProperty_mPoisonedVarNameList () {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mInputActualSelfPropertyName = in_mInputActualSelfPropertyName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputActualSelfPropertyParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST ;
}

void cPtr_inputActualSelfPropertyParameterAST::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@inputActualSelfPropertyParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputActualSelfPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputActualSelfPropertyParameterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputActualSelfPropertyParameterAST (mProperty_mActualSelector, mProperty_mInputActualSelfPropertyName, mProperty_mPoisonedVarNameList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputActualSelfPropertyParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mInputActualSelfPropertyName.printNonNullClassInstanceProperties ("mInputActualSelfPropertyName") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputActualSelfPropertyParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST ("inputActualSelfPropertyParameterAST",
                                                                                           & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputActualSelfPropertyParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualSelfPropertyParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualSelfPropertyParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfPropertyParameterAST GGS_inputActualSelfPropertyParameterAST::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_inputActualSelfPropertyParameterAST result ;
  const GGS_inputActualSelfPropertyParameterAST * p = (const GGS_inputActualSelfPropertyParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualSelfPropertyParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualSelfPropertyParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputActualSelfParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualSelfParameterAST::objectCompare (const GGS_inputActualSelfParameterAST & inOperand) const {
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

GGS_inputActualSelfParameterAST::GGS_inputActualSelfParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputActualSelfParameterAST GGS_inputActualSelfParameterAST::
init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                  const GGS_location & in_mSelfLocation,
                  const GGS_lstringlist & in_mPoisonedVarNameList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_inputActualSelfParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputActualSelfParameterAST (inCompiler COMMA_THERE)) ;
  object->inputActualSelfParameterAST_init_21__21__21_ (in_mActualSelector, in_mSelfLocation, in_mPoisonedVarNameList, inCompiler) ;
  const GGS_inputActualSelfParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::
inputActualSelfParameterAST_init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                                              const GGS_location & in_mSelfLocation,
                                              const GGS_lstringlist & in_mPoisonedVarNameList,
                                              Compiler * /* inCompiler */) {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mSelfLocation = in_mSelfLocation ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfParameterAST::GGS_inputActualSelfParameterAST (const cPtr_inputActualSelfParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualSelfParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfParameterAST GGS_inputActualSelfParameterAST::class_func_new (const GGS_lstring & in_mActualSelector,
                                                                                 const GGS_location & in_mSelfLocation,
                                                                                 const GGS_lstringlist & in_mPoisonedVarNameList,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_inputActualSelfParameterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_inputActualSelfParameterAST (in_mActualSelector, in_mSelfLocation, in_mPoisonedVarNameList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualSelfParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualSelfParameterAST * p = (cPtr_inputActualSelfParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_inputActualSelfParameterAST::readProperty_mSelfLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_inputActualSelfParameterAST * p = (cPtr_inputActualSelfParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfParameterAST) ;
    return p->mProperty_mSelfLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_inputActualSelfParameterAST::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_inputActualSelfParameterAST * p = (cPtr_inputActualSelfParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfParameterAST) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputActualSelfParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualSelfParameterAST::cPtr_inputActualSelfParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mSelfLocation (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputActualSelfParameterAST::cPtr_inputActualSelfParameterAST (const GGS_lstring & in_mActualSelector,
                                                                    const GGS_location & in_mSelfLocation,
                                                                    const GGS_lstringlist & in_mPoisonedVarNameList,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mSelfLocation (),
mProperty_mPoisonedVarNameList () {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mSelfLocation = in_mSelfLocation ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputActualSelfParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualSelfParameterAST ;
}

void cPtr_inputActualSelfParameterAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@inputActualSelfParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelfLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputActualSelfParameterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputActualSelfParameterAST (mProperty_mActualSelector, mProperty_mSelfLocation, mProperty_mPoisonedVarNameList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputActualSelfParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mSelfLocation.printNonNullClassInstanceProperties ("mSelfLocation") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputActualSelfParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualSelfParameterAST ("inputActualSelfParameterAST",
                                                                                   & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputActualSelfParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualSelfParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualSelfParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualSelfParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfParameterAST GGS_inputActualSelfParameterAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_inputActualSelfParameterAST result ;
  const GGS_inputActualSelfParameterAST * p = (const GGS_inputActualSelfParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualSelfParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualSelfParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputActualNewVariableParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualNewVariableParameterAST::objectCompare (const GGS_inputActualNewVariableParameterAST & inOperand) const {
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

GGS_inputActualNewVariableParameterAST::GGS_inputActualNewVariableParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputActualNewVariableParameterAST GGS_inputActualNewVariableParameterAST::
init_21__21__21__21_ (const GGS_lstring & in_mActualSelector,
                      const GGS_lstring & in_mInputOptionalActualTypeName,
                      const GGS_lstring & in_mInputActualParameterName,
                      const GGS_lstringlist & in_mPoisonedVarNameList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_inputActualNewVariableParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputActualNewVariableParameterAST (inCompiler COMMA_THERE)) ;
  object->inputActualNewVariableParameterAST_init_21__21__21__21_ (in_mActualSelector, in_mInputOptionalActualTypeName, in_mInputActualParameterName, in_mPoisonedVarNameList, inCompiler) ;
  const GGS_inputActualNewVariableParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::
inputActualNewVariableParameterAST_init_21__21__21__21_ (const GGS_lstring & in_mActualSelector,
                                                         const GGS_lstring & in_mInputOptionalActualTypeName,
                                                         const GGS_lstring & in_mInputActualParameterName,
                                                         const GGS_lstringlist & in_mPoisonedVarNameList,
                                                         Compiler * /* inCompiler */) {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mInputOptionalActualTypeName = in_mInputOptionalActualTypeName ;
  mProperty_mInputActualParameterName = in_mInputActualParameterName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewVariableParameterAST::GGS_inputActualNewVariableParameterAST (const cPtr_inputActualNewVariableParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualNewVariableParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_inputActualNewVariableParameterAST GGS_inputActualNewVariableParameterAST::class_func_new (const GGS_lstring & in_mActualSelector,
                                                                                               const GGS_lstring & in_mInputOptionalActualTypeName,
                                                                                               const GGS_lstring & in_mInputActualParameterName,
                                                                                               const GGS_lstringlist & in_mPoisonedVarNameList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_inputActualNewVariableParameterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_inputActualNewVariableParameterAST (in_mActualSelector, in_mInputOptionalActualTypeName, in_mInputActualParameterName, in_mPoisonedVarNameList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualNewVariableParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualNewVariableParameterAST::readProperty_mInputOptionalActualTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    return p->mProperty_mInputOptionalActualTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualNewVariableParameterAST::readProperty_mInputActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    return p->mProperty_mInputActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_inputActualNewVariableParameterAST::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputActualNewVariableParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualNewVariableParameterAST::cPtr_inputActualNewVariableParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mInputOptionalActualTypeName (),
mProperty_mInputActualParameterName (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputActualNewVariableParameterAST::cPtr_inputActualNewVariableParameterAST (const GGS_lstring & in_mActualSelector,
                                                                                  const GGS_lstring & in_mInputOptionalActualTypeName,
                                                                                  const GGS_lstring & in_mInputActualParameterName,
                                                                                  const GGS_lstringlist & in_mPoisonedVarNameList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mInputOptionalActualTypeName (),
mProperty_mInputActualParameterName (),
mProperty_mPoisonedVarNameList () {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mInputOptionalActualTypeName = in_mInputOptionalActualTypeName ;
  mProperty_mInputActualParameterName = in_mInputActualParameterName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputActualNewVariableParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ;
}

void cPtr_inputActualNewVariableParameterAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@inputActualNewVariableParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputOptionalActualTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputActualNewVariableParameterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputActualNewVariableParameterAST (mProperty_mActualSelector, mProperty_mInputOptionalActualTypeName, mProperty_mInputActualParameterName, mProperty_mPoisonedVarNameList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputActualNewVariableParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mInputOptionalActualTypeName.printNonNullClassInstanceProperties ("mInputOptionalActualTypeName") ;
    mProperty_mInputActualParameterName.printNonNullClassInstanceProperties ("mInputActualParameterName") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputActualNewVariableParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ("inputActualNewVariableParameterAST",
                                                                                          & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputActualNewVariableParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualNewVariableParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualNewVariableParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewVariableParameterAST GGS_inputActualNewVariableParameterAST::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_inputActualNewVariableParameterAST result ;
  const GGS_inputActualNewVariableParameterAST * p = (const GGS_inputActualNewVariableParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualNewVariableParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualNewVariableParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputActualNewConstantParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualNewConstantParameterAST::objectCompare (const GGS_inputActualNewConstantParameterAST & inOperand) const {
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

GGS_inputActualNewConstantParameterAST::GGS_inputActualNewConstantParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputActualNewConstantParameterAST GGS_inputActualNewConstantParameterAST::
init_21__21__21__21__21_ (const GGS_lstring & in_mActualSelector,
                          const GGS_lstring & in_mInputOptionalActualTypeName,
                          const GGS_lstring & in_mInputActualParameterName,
                          const GGS_bool & in_mMarkedAsUnused,
                          const GGS_lstringlist & in_mPoisonedVarNameList,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_inputActualNewConstantParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputActualNewConstantParameterAST (inCompiler COMMA_THERE)) ;
  object->inputActualNewConstantParameterAST_init_21__21__21__21__21_ (in_mActualSelector, in_mInputOptionalActualTypeName, in_mInputActualParameterName, in_mMarkedAsUnused, in_mPoisonedVarNameList, inCompiler) ;
  const GGS_inputActualNewConstantParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::
inputActualNewConstantParameterAST_init_21__21__21__21__21_ (const GGS_lstring & in_mActualSelector,
                                                             const GGS_lstring & in_mInputOptionalActualTypeName,
                                                             const GGS_lstring & in_mInputActualParameterName,
                                                             const GGS_bool & in_mMarkedAsUnused,
                                                             const GGS_lstringlist & in_mPoisonedVarNameList,
                                                             Compiler * /* inCompiler */) {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mInputOptionalActualTypeName = in_mInputOptionalActualTypeName ;
  mProperty_mInputActualParameterName = in_mInputActualParameterName ;
  mProperty_mMarkedAsUnused = in_mMarkedAsUnused ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewConstantParameterAST::GGS_inputActualNewConstantParameterAST (const cPtr_inputActualNewConstantParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualNewConstantParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_inputActualNewConstantParameterAST GGS_inputActualNewConstantParameterAST::class_func_new (const GGS_lstring & in_mActualSelector,
                                                                                               const GGS_lstring & in_mInputOptionalActualTypeName,
                                                                                               const GGS_lstring & in_mInputActualParameterName,
                                                                                               const GGS_bool & in_mMarkedAsUnused,
                                                                                               const GGS_lstringlist & in_mPoisonedVarNameList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_inputActualNewConstantParameterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_inputActualNewConstantParameterAST (in_mActualSelector, in_mInputOptionalActualTypeName, in_mInputActualParameterName, in_mMarkedAsUnused, in_mPoisonedVarNameList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualNewConstantParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualNewConstantParameterAST::readProperty_mInputOptionalActualTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    return p->mProperty_mInputOptionalActualTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualNewConstantParameterAST::readProperty_mInputActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    return p->mProperty_mInputActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_inputActualNewConstantParameterAST::readProperty_mMarkedAsUnused (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    return p->mProperty_mMarkedAsUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_inputActualNewConstantParameterAST::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputActualNewConstantParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualNewConstantParameterAST::cPtr_inputActualNewConstantParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mInputOptionalActualTypeName (),
mProperty_mInputActualParameterName (),
mProperty_mMarkedAsUnused (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputActualNewConstantParameterAST::cPtr_inputActualNewConstantParameterAST (const GGS_lstring & in_mActualSelector,
                                                                                  const GGS_lstring & in_mInputOptionalActualTypeName,
                                                                                  const GGS_lstring & in_mInputActualParameterName,
                                                                                  const GGS_bool & in_mMarkedAsUnused,
                                                                                  const GGS_lstringlist & in_mPoisonedVarNameList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mInputOptionalActualTypeName (),
mProperty_mInputActualParameterName (),
mProperty_mMarkedAsUnused (),
mProperty_mPoisonedVarNameList () {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mInputOptionalActualTypeName = in_mInputOptionalActualTypeName ;
  mProperty_mInputActualParameterName = in_mInputActualParameterName ;
  mProperty_mMarkedAsUnused = in_mMarkedAsUnused ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputActualNewConstantParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ;
}

void cPtr_inputActualNewConstantParameterAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@inputActualNewConstantParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputOptionalActualTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMarkedAsUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputActualNewConstantParameterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputActualNewConstantParameterAST (mProperty_mActualSelector, mProperty_mInputOptionalActualTypeName, mProperty_mInputActualParameterName, mProperty_mMarkedAsUnused, mProperty_mPoisonedVarNameList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputActualNewConstantParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mInputOptionalActualTypeName.printNonNullClassInstanceProperties ("mInputOptionalActualTypeName") ;
    mProperty_mInputActualParameterName.printNonNullClassInstanceProperties ("mInputActualParameterName") ;
    mProperty_mMarkedAsUnused.printNonNullClassInstanceProperties ("mMarkedAsUnused") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputActualNewConstantParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ("inputActualNewConstantParameterAST",
                                                                                          & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputActualNewConstantParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualNewConstantParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualNewConstantParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewConstantParameterAST GGS_inputActualNewConstantParameterAST::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_inputActualNewConstantParameterAST result ;
  const GGS_inputActualNewConstantParameterAST * p = (const GGS_inputActualNewConstantParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualNewConstantParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualNewConstantParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputSingleJokerActualParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputSingleJokerActualParameterAST::objectCompare (const GGS_inputSingleJokerActualParameterAST & inOperand) const {
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

GGS_inputSingleJokerActualParameterAST::GGS_inputSingleJokerActualParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputSingleJokerActualParameterAST GGS_inputSingleJokerActualParameterAST::
init_21__21_ (const GGS_lstring & in_mActualSelector,
              const GGS_lstringlist & in_mPoisonedVarNameList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_inputSingleJokerActualParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputSingleJokerActualParameterAST (inCompiler COMMA_THERE)) ;
  object->inputSingleJokerActualParameterAST_init_21__21_ (in_mActualSelector, in_mPoisonedVarNameList, inCompiler) ;
  const GGS_inputSingleJokerActualParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::
inputSingleJokerActualParameterAST_init_21__21_ (const GGS_lstring & in_mActualSelector,
                                                 const GGS_lstringlist & in_mPoisonedVarNameList,
                                                 Compiler * /* inCompiler */) {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputSingleJokerActualParameterAST::GGS_inputSingleJokerActualParameterAST (const cPtr_inputSingleJokerActualParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputSingleJokerActualParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_inputSingleJokerActualParameterAST GGS_inputSingleJokerActualParameterAST::class_func_new (const GGS_lstring & in_mActualSelector,
                                                                                               const GGS_lstringlist & in_mPoisonedVarNameList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_inputSingleJokerActualParameterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_inputSingleJokerActualParameterAST (in_mActualSelector, in_mPoisonedVarNameList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputSingleJokerActualParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputSingleJokerActualParameterAST * p = (cPtr_inputSingleJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputSingleJokerActualParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_inputSingleJokerActualParameterAST::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_inputSingleJokerActualParameterAST * p = (cPtr_inputSingleJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputSingleJokerActualParameterAST) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputSingleJokerActualParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputSingleJokerActualParameterAST::cPtr_inputSingleJokerActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputSingleJokerActualParameterAST::cPtr_inputSingleJokerActualParameterAST (const GGS_lstring & in_mActualSelector,
                                                                                  const GGS_lstringlist & in_mPoisonedVarNameList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mPoisonedVarNameList () {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputSingleJokerActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ;
}

void cPtr_inputSingleJokerActualParameterAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@inputSingleJokerActualParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputSingleJokerActualParameterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputSingleJokerActualParameterAST (mProperty_mActualSelector, mProperty_mPoisonedVarNameList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputSingleJokerActualParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputSingleJokerActualParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ("inputSingleJokerActualParameterAST",
                                                                                          & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputSingleJokerActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputSingleJokerActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputSingleJokerActualParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputSingleJokerActualParameterAST GGS_inputSingleJokerActualParameterAST::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_inputSingleJokerActualParameterAST result ;
  const GGS_inputSingleJokerActualParameterAST * p = (const GGS_inputSingleJokerActualParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputSingleJokerActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputSingleJokerActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @externProcedureDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externProcedureDeclarationAST::objectCompare (const GGS_externProcedureDeclarationAST & inOperand) const {
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

GGS_externProcedureDeclarationAST::GGS_externProcedureDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_externProcedureDeclarationAST GGS_externProcedureDeclarationAST::
init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (const GGS_bool & in_isPredefined,
                                                                   const GGS_bool & in_isFilePrivate,
                                                                   const GGS_lstring & in_mRoutineName,
                                                                   const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                   const GGS_bool & in_usefullProcedure,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cPtr_externProcedureDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_externProcedureDeclarationAST (inCompiler COMMA_THERE)) ;
  object->externProcedureDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (in_isPredefined, in_isFilePrivate, in_mRoutineName, in_mFormalArgumentListAST, in_usefullProcedure, inCompiler) ;
  const GGS_externProcedureDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_externProcedureDeclarationAST::
externProcedureDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (const GGS_bool & in_isPredefined,
                                                                                                 const GGS_bool & in_isFilePrivate,
                                                                                                 const GGS_lstring & in_mRoutineName,
                                                                                                 const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                                                 const GGS_bool & in_usefullProcedure,
                                                                                                 Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_isFilePrivate = in_isFilePrivate ;
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mFormalArgumentListAST = in_mFormalArgumentListAST ;
  mProperty_usefullProcedure = in_usefullProcedure ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureDeclarationAST::GGS_externProcedureDeclarationAST (const cPtr_externProcedureDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externProcedureDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_externProcedureDeclarationAST GGS_externProcedureDeclarationAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                                     const GGS_bool & in_isFilePrivate,
                                                                                     const GGS_lstring & in_mRoutineName,
                                                                                     const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                                     const GGS_bool & in_usefullProcedure,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_externProcedureDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_externProcedureDeclarationAST (in_isPredefined, in_isFilePrivate, in_mRoutineName, in_mFormalArgumentListAST, in_usefullProcedure,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_externProcedureDeclarationAST::readProperty_isFilePrivate (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externProcedureDeclarationAST) ;
    return p->mProperty_isFilePrivate ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_externProcedureDeclarationAST::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externProcedureDeclarationAST) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST GGS_externProcedureDeclarationAST::readProperty_mFormalArgumentListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListAST () ;
  }else{
    cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externProcedureDeclarationAST) ;
    return p->mProperty_mFormalArgumentListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_externProcedureDeclarationAST::readProperty_usefullProcedure (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externProcedureDeclarationAST) ;
    return p->mProperty_usefullProcedure ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externProcedureDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_externProcedureDeclarationAST::cPtr_externProcedureDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_isFilePrivate (),
mProperty_mRoutineName (),
mProperty_mFormalArgumentListAST (),
mProperty_usefullProcedure () {
}

//--------------------------------------------------------------------------------------------------

cPtr_externProcedureDeclarationAST::cPtr_externProcedureDeclarationAST (const GGS_bool & in_isPredefined,
                                                                        const GGS_bool & in_isFilePrivate,
                                                                        const GGS_lstring & in_mRoutineName,
                                                                        const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                        const GGS_bool & in_usefullProcedure,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_isFilePrivate (),
mProperty_mRoutineName (),
mProperty_mFormalArgumentListAST (),
mProperty_usefullProcedure () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_isFilePrivate = in_isFilePrivate ;
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mFormalArgumentListAST = in_mFormalArgumentListAST ;
  mProperty_usefullProcedure = in_usefullProcedure ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_externProcedureDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureDeclarationAST ;
}

void cPtr_externProcedureDeclarationAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@externProcedureDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isFilePrivate.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullProcedure.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_externProcedureDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externProcedureDeclarationAST (mProperty_isPredefined, mProperty_isFilePrivate, mProperty_mRoutineName, mProperty_mFormalArgumentListAST, mProperty_usefullProcedure, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_externProcedureDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_isFilePrivate.printNonNullClassInstanceProperties ("isFilePrivate") ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mFormalArgumentListAST.printNonNullClassInstanceProperties ("mFormalArgumentListAST") ;
    mProperty_usefullProcedure.printNonNullClassInstanceProperties ("usefullProcedure") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @externProcedureDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureDeclarationAST ("externProcedureDeclarationAST",
                                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_externProcedureDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externProcedureDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externProcedureDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureDeclarationAST GGS_externProcedureDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_externProcedureDeclarationAST result ;
  const GGS_externProcedureDeclarationAST * p = (const GGS_externProcedureDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externProcedureDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @routinePrototypeDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_routinePrototypeDeclarationForGeneration::objectCompare (const GGS_routinePrototypeDeclarationForGeneration & inOperand) const {
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

GGS_routinePrototypeDeclarationForGeneration::GGS_routinePrototypeDeclarationForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration GGS_routinePrototypeDeclarationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21_ (const GGS_bool & in_generateHeader,
                                                                               const GGS_string & in_implementationCppFileName,
                                                                               const GGS_string & in_routineMangledName,
                                                                               const GGS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cPtr_routinePrototypeDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_routinePrototypeDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->routinePrototypeDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21_ (in_generateHeader, in_implementationCppFileName, in_routineMangledName, in_mFormalArgumentList, inCompiler) ;
  const GGS_routinePrototypeDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_routinePrototypeDeclarationForGeneration::
routinePrototypeDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21_ (const GGS_bool & in_generateHeader,
                                                                                                                        const GGS_string & in_implementationCppFileName,
                                                                                                                        const GGS_string & in_routineMangledName,
                                                                                                                        const GGS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                                                        Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_routineMangledName = in_routineMangledName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration::GGS_routinePrototypeDeclarationForGeneration (const cPtr_routinePrototypeDeclarationForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_routinePrototypeDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration GGS_routinePrototypeDeclarationForGeneration::class_func_new (const GGS_bool & in_generateHeader,
                                                                                                           const GGS_string & in_implementationCppFileName,
                                                                                                           const GGS_string & in_routineMangledName,
                                                                                                           const GGS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) {
  GGS_routinePrototypeDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_routinePrototypeDeclarationForGeneration (in_generateHeader, in_implementationCppFileName, in_routineMangledName, in_mFormalArgumentList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_routinePrototypeDeclarationForGeneration::readProperty_routineMangledName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_routinePrototypeDeclarationForGeneration * p = (cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
    return p->mProperty_routineMangledName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_routinePrototypeDeclarationForGeneration::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListForGeneration () ;
  }else{
    cPtr_routinePrototypeDeclarationForGeneration * p = (cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @routinePrototypeDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_routinePrototypeDeclarationForGeneration::cPtr_routinePrototypeDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_routineMangledName (),
mProperty_mFormalArgumentList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_routinePrototypeDeclarationForGeneration::cPtr_routinePrototypeDeclarationForGeneration (const GGS_bool & in_generateHeader,
                                                                                              const GGS_string & in_implementationCppFileName,
                                                                                              const GGS_string & in_routineMangledName,
                                                                                              const GGS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_routineMangledName (),
mProperty_mFormalArgumentList () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_routineMangledName = in_routineMangledName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_routinePrototypeDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ;
}

void cPtr_routinePrototypeDeclarationForGeneration::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@routinePrototypeDeclarationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_routineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_routinePrototypeDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_routinePrototypeDeclarationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_routineMangledName, mProperty_mFormalArgumentList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_routinePrototypeDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_routineMangledName.printNonNullClassInstanceProperties ("routineMangledName") ;
    mProperty_mFormalArgumentList.printNonNullClassInstanceProperties ("mFormalArgumentList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @routinePrototypeDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ("routinePrototypeDeclarationForGeneration",
                                                                                                & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_routinePrototypeDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routinePrototypeDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routinePrototypeDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration GGS_routinePrototypeDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_routinePrototypeDeclarationForGeneration result ;
  const GGS_routinePrototypeDeclarationForGeneration * p = (const GGS_routinePrototypeDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routinePrototypeDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routinePrototypeDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_routinePrototypeDeclarationForGeneration_2E_weak::objectCompare (const GGS_routinePrototypeDeclarationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_routinePrototypeDeclarationForGeneration_2E_weak::GGS_routinePrototypeDeclarationForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration_2E_weak & GGS_routinePrototypeDeclarationForGeneration_2E_weak::operator = (const GGS_routinePrototypeDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration_2E_weak::GGS_routinePrototypeDeclarationForGeneration_2E_weak (const GGS_routinePrototypeDeclarationForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration_2E_weak GGS_routinePrototypeDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_routinePrototypeDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration GGS_routinePrototypeDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_routinePrototypeDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_routinePrototypeDeclarationForGeneration * p = (cPtr_routinePrototypeDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_routinePrototypeDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration GGS_routinePrototypeDeclarationForGeneration_2E_weak::bang_routinePrototypeDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_routinePrototypeDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_routinePrototypeDeclarationForGeneration) ;
      result = GGS_routinePrototypeDeclarationForGeneration ((cPtr_routinePrototypeDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @routinePrototypeDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2E_weak ("routinePrototypeDeclarationForGeneration.weak",
                                                                                                        & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_routinePrototypeDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routinePrototypeDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routinePrototypeDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration_2E_weak GGS_routinePrototypeDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_routinePrototypeDeclarationForGeneration_2E_weak result ;
  const GGS_routinePrototypeDeclarationForGeneration_2E_weak * p = (const GGS_routinePrototypeDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routinePrototypeDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routinePrototypeDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @procDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_procDeclarationAST::objectCompare (const GGS_procDeclarationAST & inOperand) const {
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

GGS_procDeclarationAST::GGS_procDeclarationAST (void) :
GGS_externProcedureDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_procDeclarationAST GGS_procDeclarationAST::
init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (const GGS_bool & in_isPredefined,
                                                                           const GGS_bool & in_isFilePrivate,
                                                                           const GGS_lstring & in_mRoutineName,
                                                                           const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                           const GGS_bool & in_usefullProcedure,
                                                                           const GGS_semanticInstructionListAST & in_mRoutineInstructionList,
                                                                           const GGS_location & in_mEndOfRoutineInstructionList,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cPtr_procDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_procDeclarationAST (inCompiler COMMA_THERE)) ;
  object->procDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (in_isPredefined, in_isFilePrivate, in_mRoutineName, in_mFormalArgumentListAST, in_usefullProcedure, in_mRoutineInstructionList, in_mEndOfRoutineInstructionList, inCompiler) ;
  const GGS_procDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::
procDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (const GGS_bool & in_isPredefined,
                                                                                              const GGS_bool & in_isFilePrivate,
                                                                                              const GGS_lstring & in_mRoutineName,
                                                                                              const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                                              const GGS_bool & in_usefullProcedure,
                                                                                              const GGS_semanticInstructionListAST & in_mRoutineInstructionList,
                                                                                              const GGS_location & in_mEndOfRoutineInstructionList,
                                                                                              Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_isFilePrivate = in_isFilePrivate ;
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mFormalArgumentListAST = in_mFormalArgumentListAST ;
  mProperty_usefullProcedure = in_usefullProcedure ;
  mProperty_mRoutineInstructionList = in_mRoutineInstructionList ;
  mProperty_mEndOfRoutineInstructionList = in_mEndOfRoutineInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_procDeclarationAST::GGS_procDeclarationAST (const cPtr_procDeclarationAST * inSourcePtr) :
GGS_externProcedureDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_procDeclarationAST GGS_procDeclarationAST::class_func_new (const GGS_bool & in_isPredefined,
                                                               const GGS_bool & in_isFilePrivate,
                                                               const GGS_lstring & in_mRoutineName,
                                                               const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                                               const GGS_bool & in_usefullProcedure,
                                                               const GGS_semanticInstructionListAST & in_mRoutineInstructionList,
                                                               const GGS_location & in_mEndOfRoutineInstructionList,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_procDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_procDeclarationAST (in_isPredefined, in_isFilePrivate, in_mRoutineName, in_mFormalArgumentListAST, in_usefullProcedure, in_mRoutineInstructionList, in_mEndOfRoutineInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_procDeclarationAST::readProperty_mRoutineInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_procDeclarationAST * p = (cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    return p->mProperty_mRoutineInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_procDeclarationAST::readProperty_mEndOfRoutineInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_procDeclarationAST * p = (cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    return p->mProperty_mEndOfRoutineInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @procDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_procDeclarationAST::cPtr_procDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_externProcedureDeclarationAST (inCompiler COMMA_THERE),
mProperty_mRoutineInstructionList (),
mProperty_mEndOfRoutineInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_procDeclarationAST::cPtr_procDeclarationAST (const GGS_bool & in_isPredefined,
                                                  const GGS_bool & in_isFilePrivate,
                                                  const GGS_lstring & in_mRoutineName,
                                                  const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                                  const GGS_bool & in_usefullProcedure,
                                                  const GGS_semanticInstructionListAST & in_mRoutineInstructionList,
                                                  const GGS_location & in_mEndOfRoutineInstructionList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_externProcedureDeclarationAST (in_isPredefined, in_isFilePrivate, in_mRoutineName, in_mFormalArgumentListAST, in_usefullProcedure, inCompiler COMMA_THERE),
mProperty_mRoutineInstructionList (),
mProperty_mEndOfRoutineInstructionList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_isFilePrivate = in_isFilePrivate ;
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mFormalArgumentListAST = in_mFormalArgumentListAST ;
  mProperty_usefullProcedure = in_usefullProcedure ;
  mProperty_mRoutineInstructionList = in_mRoutineInstructionList ;
  mProperty_mEndOfRoutineInstructionList = in_mEndOfRoutineInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_procDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procDeclarationAST ;
}

void cPtr_procDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@procDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isFilePrivate.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullProcedure.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_procDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_procDeclarationAST (mProperty_isPredefined, mProperty_isFilePrivate, mProperty_mRoutineName, mProperty_mFormalArgumentListAST, mProperty_usefullProcedure, mProperty_mRoutineInstructionList, mProperty_mEndOfRoutineInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_procDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_externProcedureDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineInstructionList.printNonNullClassInstanceProperties ("mRoutineInstructionList") ;
    mProperty_mEndOfRoutineInstructionList.printNonNullClassInstanceProperties ("mEndOfRoutineInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @procDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procDeclarationAST ("procDeclarationAST",
                                                                          & kTypeDescriptor_GALGAS_externProcedureDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_procDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_procDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procDeclarationAST GGS_procDeclarationAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_procDeclarationAST result ;
  const GGS_procDeclarationAST * p = (const GGS_procDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @routineImplementationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_routineImplementationForGeneration::objectCompare (const GGS_routineImplementationForGeneration & inOperand) const {
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

GGS_routineImplementationForGeneration::GGS_routineImplementationForGeneration (void) :
GGS_routinePrototypeDeclarationForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_routineImplementationForGeneration GGS_routineImplementationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                       const GGS_string & in_implementationCppFileName,
                                                                                       const GGS_string & in_routineMangledName,
                                                                                       const GGS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                       const GGS_bool & in_mGenerateStatic,
                                                                                       const GGS_semanticInstructionListForGeneration & in_mRoutineInstructionList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cPtr_routineImplementationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_routineImplementationForGeneration (inCompiler COMMA_THERE)) ;
  object->routineImplementationForGeneration_init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (in_generateHeader, in_implementationCppFileName, in_routineMangledName, in_mFormalArgumentList, in_mGenerateStatic, in_mRoutineInstructionList, inCompiler) ;
  const GGS_routineImplementationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_routineImplementationForGeneration::
routineImplementationForGeneration_init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                                          const GGS_string & in_implementationCppFileName,
                                                                                                                          const GGS_string & in_routineMangledName,
                                                                                                                          const GGS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                                                          const GGS_bool & in_mGenerateStatic,
                                                                                                                          const GGS_semanticInstructionListForGeneration & in_mRoutineInstructionList,
                                                                                                                          Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_routineMangledName = in_routineMangledName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mGenerateStatic = in_mGenerateStatic ;
  mProperty_mRoutineInstructionList = in_mRoutineInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration::GGS_routineImplementationForGeneration (const cPtr_routineImplementationForGeneration * inSourcePtr) :
GGS_routinePrototypeDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_routineImplementationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration GGS_routineImplementationForGeneration::class_func_new (const GGS_bool & in_generateHeader,
                                                                                               const GGS_string & in_implementationCppFileName,
                                                                                               const GGS_string & in_routineMangledName,
                                                                                               const GGS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                               const GGS_bool & in_mGenerateStatic,
                                                                                               const GGS_semanticInstructionListForGeneration & in_mRoutineInstructionList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_routineImplementationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_routineImplementationForGeneration (in_generateHeader, in_implementationCppFileName, in_routineMangledName, in_mFormalArgumentList, in_mGenerateStatic, in_mRoutineInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineImplementationForGeneration::readProperty_mGenerateStatic (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_routineImplementationForGeneration * p = (cPtr_routineImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
    return p->mProperty_mGenerateStatic ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_routineImplementationForGeneration::readProperty_mRoutineInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_routineImplementationForGeneration * p = (cPtr_routineImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
    return p->mProperty_mRoutineInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @routineImplementationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_routineImplementationForGeneration::cPtr_routineImplementationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_routinePrototypeDeclarationForGeneration (inCompiler COMMA_THERE),
mProperty_mGenerateStatic (),
mProperty_mRoutineInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_routineImplementationForGeneration::cPtr_routineImplementationForGeneration (const GGS_bool & in_generateHeader,
                                                                                  const GGS_string & in_implementationCppFileName,
                                                                                  const GGS_string & in_routineMangledName,
                                                                                  const GGS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                  const GGS_bool & in_mGenerateStatic,
                                                                                  const GGS_semanticInstructionListForGeneration & in_mRoutineInstructionList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_routinePrototypeDeclarationForGeneration (in_generateHeader, in_implementationCppFileName, in_routineMangledName, in_mFormalArgumentList, inCompiler COMMA_THERE),
mProperty_mGenerateStatic (),
mProperty_mRoutineInstructionList () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_routineMangledName = in_routineMangledName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mGenerateStatic = in_mGenerateStatic ;
  mProperty_mRoutineInstructionList = in_mRoutineInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_routineImplementationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineImplementationForGeneration ;
}

void cPtr_routineImplementationForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@routineImplementationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_routineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateStatic.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_routineImplementationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_routineImplementationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_routineMangledName, mProperty_mFormalArgumentList, mProperty_mGenerateStatic, mProperty_mRoutineInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_routineImplementationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_routinePrototypeDeclarationForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mGenerateStatic.printNonNullClassInstanceProperties ("mGenerateStatic") ;
    mProperty_mRoutineInstructionList.printNonNullClassInstanceProperties ("mRoutineInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @routineImplementationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineImplementationForGeneration ("routineImplementationForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_routineImplementationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineImplementationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineImplementationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineImplementationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration GGS_routineImplementationForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_routineImplementationForGeneration result ;
  const GGS_routineImplementationForGeneration * p = (const GGS_routineImplementationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineImplementationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineImplementationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_routineImplementationForGeneration_2E_weak::objectCompare (const GGS_routineImplementationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_routineImplementationForGeneration_2E_weak::GGS_routineImplementationForGeneration_2E_weak (void) :
GGS_routinePrototypeDeclarationForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration_2E_weak & GGS_routineImplementationForGeneration_2E_weak::operator = (const GGS_routineImplementationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration_2E_weak::GGS_routineImplementationForGeneration_2E_weak (const GGS_routineImplementationForGeneration & inSource) :
GGS_routinePrototypeDeclarationForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration_2E_weak GGS_routineImplementationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_routineImplementationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration GGS_routineImplementationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_routineImplementationForGeneration result ;
  if (isValid ()) {
    const cPtr_routineImplementationForGeneration * p = (cPtr_routineImplementationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_routineImplementationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration GGS_routineImplementationForGeneration_2E_weak::bang_routineImplementationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_routineImplementationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_routineImplementationForGeneration) ;
      result = GGS_routineImplementationForGeneration ((cPtr_routineImplementationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @routineImplementationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineImplementationForGeneration_2E_weak ("routineImplementationForGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_routineImplementationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineImplementationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineImplementationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineImplementationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration_2E_weak GGS_routineImplementationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_routineImplementationForGeneration_2E_weak result ;
  const GGS_routineImplementationForGeneration_2E_weak * p = (const GGS_routineImplementationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineImplementationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineImplementationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@syntaxExtensions insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (GGS_syntaxExtensions & ioObject,
                                const GGS_string constinArgument_inKey,
                                const GGS_lstring constinArgument_inSyntaxComponentName,
                                const GGS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                const GGS_syntaxRuleListAST constinArgument_inRuleList,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_syntaxExtensions temp_1 = ioObject ;
    test_0 = temp_1.readProperty_dictionary ().getter_hasKey (constinArgument_inKey COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 44)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_galgas_33_SyntaxExtensionListAST var_aList_2262 ;
      const GGS_syntaxExtensions temp_2 = ioObject ;
      temp_2.readProperty_dictionary ().method_searchKey (constinArgument_inKey, var_aList_2262, inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 45)) ;
      {
      var_aList_2262.setter_append (constinArgument_inSyntaxComponentName, constinArgument_inNonterminalDeclarationList, constinArgument_inRuleList, inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 46)) ;
      }
      ioObject.mProperty_dictionary.addAssignOperation (constinArgument_inKey, var_aList_2262, inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 47)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_galgas_33_SyntaxExtensionListAST temp_3 = GGS_galgas_33_SyntaxExtensionListAST::init (inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 49)) ;
    temp_3.plusPlusAssignOperation (GGS_galgas_33_SyntaxExtensionListAST_2E_element::init_21__21__21_ (constinArgument_inSyntaxComponentName, constinArgument_inNonterminalDeclarationList, constinArgument_inRuleList, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 49)) ;
    ioObject.mProperty_dictionary.addAssignOperation (constinArgument_inKey, temp_3, inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 49)) ;
  }
}


//--------------------------------------------------------------------------------------------------
// @inputParameterVariable reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputParameterVariable::objectCompare (const GGS_inputParameterVariable & inOperand) const {
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

GGS_inputParameterVariable::GGS_inputParameterVariable (void) :
GGS_abstractInputParameter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputParameterVariable GGS_inputParameterVariable::
init_21_ (const GGS_lstring & in_mActualParameterName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_inputParameterVariable * object = nullptr ;
  macroMyNew (object, cPtr_inputParameterVariable (inCompiler COMMA_THERE)) ;
  object->inputParameterVariable_init_21_ (in_mActualParameterName, inCompiler) ;
  const GGS_inputParameterVariable result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterVariable::
inputParameterVariable_init_21_ (const GGS_lstring & in_mActualParameterName,
                                 Compiler * /* inCompiler */) {
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterVariable::GGS_inputParameterVariable (const cPtr_inputParameterVariable * inSourcePtr) :
GGS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterVariable) ;
}
//--------------------------------------------------------------------------------------------------

GGS_inputParameterVariable GGS_inputParameterVariable::class_func_new (const GGS_lstring & in_mActualParameterName,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_inputParameterVariable result ;
  macroMyNew (result.mObjectPtr, cPtr_inputParameterVariable (in_mActualParameterName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputParameterVariable::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputParameterVariable * p = (cPtr_inputParameterVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterVariable) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterVariable class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterVariable::cPtr_inputParameterVariable (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputParameterVariable::cPtr_inputParameterVariable (const GGS_lstring & in_mActualParameterName,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterName () {
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputParameterVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable ;
}

void cPtr_inputParameterVariable::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@inputParameterVariable:") ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputParameterVariable::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputParameterVariable (mProperty_mActualParameterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputParameterVariable::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInputParameter::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputParameterVariable generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterVariable ("inputParameterVariable",
                                                                              & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputParameterVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputParameterVariable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputParameterVariable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterVariable GGS_inputParameterVariable::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_inputParameterVariable result ;
  const GGS_inputParameterVariable * p = (const GGS_inputParameterVariable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputParameterVariable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterVariable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputParameterDeclaredVariable reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputParameterDeclaredVariable::objectCompare (const GGS_inputParameterDeclaredVariable & inOperand) const {
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

GGS_inputParameterDeclaredVariable::GGS_inputParameterDeclaredVariable (void) :
GGS_abstractInputParameter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputParameterDeclaredVariable GGS_inputParameterDeclaredVariable::
init_21__21_ (const GGS_lstring & in_mActualParameterTypeName,
              const GGS_lstring & in_mActualParameterName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_inputParameterDeclaredVariable * object = nullptr ;
  macroMyNew (object, cPtr_inputParameterDeclaredVariable (inCompiler COMMA_THERE)) ;
  object->inputParameterDeclaredVariable_init_21__21_ (in_mActualParameterTypeName, in_mActualParameterName, inCompiler) ;
  const GGS_inputParameterDeclaredVariable result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredVariable::
inputParameterDeclaredVariable_init_21__21_ (const GGS_lstring & in_mActualParameterTypeName,
                                             const GGS_lstring & in_mActualParameterName,
                                             Compiler * /* inCompiler */) {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredVariable::GGS_inputParameterDeclaredVariable (const cPtr_inputParameterDeclaredVariable * inSourcePtr) :
GGS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterDeclaredVariable) ;
}
//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredVariable GGS_inputParameterDeclaredVariable::class_func_new (const GGS_lstring & in_mActualParameterTypeName,
                                                                                       const GGS_lstring & in_mActualParameterName,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_inputParameterDeclaredVariable result ;
  macroMyNew (result.mObjectPtr, cPtr_inputParameterDeclaredVariable (in_mActualParameterTypeName, in_mActualParameterName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputParameterDeclaredVariable::readProperty_mActualParameterTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredVariable * p = (cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputParameterDeclaredVariable::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredVariable * p = (cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterDeclaredVariable class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredVariable::cPtr_inputParameterDeclaredVariable (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredVariable::cPtr_inputParameterDeclaredVariable (const GGS_lstring & in_mActualParameterTypeName,
                                                                          const GGS_lstring & in_mActualParameterName,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputParameterDeclaredVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;
}

void cPtr_inputParameterDeclaredVariable::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@inputParameterDeclaredVariable:") ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputParameterDeclaredVariable::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputParameterDeclaredVariable (mProperty_mActualParameterTypeName, mProperty_mActualParameterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputParameterDeclaredVariable::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInputParameter::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterTypeName.printNonNullClassInstanceProperties ("mActualParameterTypeName") ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputParameterDeclaredVariable generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ("inputParameterDeclaredVariable",
                                                                                      & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputParameterDeclaredVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputParameterDeclaredVariable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputParameterDeclaredVariable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredVariable GGS_inputParameterDeclaredVariable::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_inputParameterDeclaredVariable result ;
  const GGS_inputParameterDeclaredVariable * p = (const GGS_inputParameterDeclaredVariable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputParameterDeclaredVariable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterDeclaredVariable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputParameterDeclaredConstant reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputParameterDeclaredConstant::objectCompare (const GGS_inputParameterDeclaredConstant & inOperand) const {
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

GGS_inputParameterDeclaredConstant::GGS_inputParameterDeclaredConstant (void) :
GGS_abstractInputParameter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputParameterDeclaredConstant GGS_inputParameterDeclaredConstant::
init_21__21_ (const GGS_lstring & in_mActualParameterTypeName,
              const GGS_lstring & in_mActualParameterName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_inputParameterDeclaredConstant * object = nullptr ;
  macroMyNew (object, cPtr_inputParameterDeclaredConstant (inCompiler COMMA_THERE)) ;
  object->inputParameterDeclaredConstant_init_21__21_ (in_mActualParameterTypeName, in_mActualParameterName, inCompiler) ;
  const GGS_inputParameterDeclaredConstant result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredConstant::
inputParameterDeclaredConstant_init_21__21_ (const GGS_lstring & in_mActualParameterTypeName,
                                             const GGS_lstring & in_mActualParameterName,
                                             Compiler * /* inCompiler */) {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredConstant::GGS_inputParameterDeclaredConstant (const cPtr_inputParameterDeclaredConstant * inSourcePtr) :
GGS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterDeclaredConstant) ;
}
//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredConstant GGS_inputParameterDeclaredConstant::class_func_new (const GGS_lstring & in_mActualParameterTypeName,
                                                                                       const GGS_lstring & in_mActualParameterName,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_inputParameterDeclaredConstant result ;
  macroMyNew (result.mObjectPtr, cPtr_inputParameterDeclaredConstant (in_mActualParameterTypeName, in_mActualParameterName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputParameterDeclaredConstant::readProperty_mActualParameterTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredConstant * p = (cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputParameterDeclaredConstant::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredConstant * p = (cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterDeclaredConstant class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredConstant::cPtr_inputParameterDeclaredConstant (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredConstant::cPtr_inputParameterDeclaredConstant (const GGS_lstring & in_mActualParameterTypeName,
                                                                          const GGS_lstring & in_mActualParameterName,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputParameterDeclaredConstant::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;
}

void cPtr_inputParameterDeclaredConstant::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@inputParameterDeclaredConstant:") ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputParameterDeclaredConstant::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputParameterDeclaredConstant (mProperty_mActualParameterTypeName, mProperty_mActualParameterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputParameterDeclaredConstant::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInputParameter::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterTypeName.printNonNullClassInstanceProperties ("mActualParameterTypeName") ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputParameterDeclaredConstant generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ("inputParameterDeclaredConstant",
                                                                                      & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputParameterDeclaredConstant::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputParameterDeclaredConstant::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputParameterDeclaredConstant (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredConstant GGS_inputParameterDeclaredConstant::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_inputParameterDeclaredConstant result ;
  const GGS_inputParameterDeclaredConstant * p = (const GGS_inputParameterDeclaredConstant *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputParameterDeclaredConstant *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterDeclaredConstant", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @externFunctionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externFunctionDeclarationAST::objectCompare (const GGS_externFunctionDeclarationAST & inOperand) const {
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

GGS_externFunctionDeclarationAST::GGS_externFunctionDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_externFunctionDeclarationAST GGS_externFunctionDeclarationAST::
init_21_isPredefined_21__21__21__21_usefullFunc (const GGS_bool & in_isPredefined,
                                                 const GGS_lstring & in_mFunctionName,
                                                 const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                 const GGS_lstring & in_mResultTypeName,
                                                 const GGS_bool & in_usefullFunc,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cPtr_externFunctionDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_externFunctionDeclarationAST (inCompiler COMMA_THERE)) ;
  object->externFunctionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc (in_isPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_usefullFunc, inCompiler) ;
  const GGS_externFunctionDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::
externFunctionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc (const GGS_bool & in_isPredefined,
                                                                              const GGS_lstring & in_mFunctionName,
                                                                              const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                              const GGS_lstring & in_mResultTypeName,
                                                                              const GGS_bool & in_usefullFunc,
                                                                              Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_usefullFunc = in_usefullFunc ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationAST::GGS_externFunctionDeclarationAST (const cPtr_externFunctionDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externFunctionDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationAST GGS_externFunctionDeclarationAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                                   const GGS_lstring & in_mFunctionName,
                                                                                   const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                                   const GGS_lstring & in_mResultTypeName,
                                                                                   const GGS_bool & in_usefullFunc,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_externFunctionDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_externFunctionDeclarationAST (in_isPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_usefullFunc,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_externFunctionDeclarationAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST GGS_externFunctionDeclarationAST::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalInputParameterListAST () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_externFunctionDeclarationAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_externFunctionDeclarationAST::readProperty_usefullFunc (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_usefullFunc ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externFunctionDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_externFunctionDeclarationAST::cPtr_externFunctionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFormalArgumentList (),
mProperty_mResultTypeName (),
mProperty_usefullFunc () {
}

//--------------------------------------------------------------------------------------------------

cPtr_externFunctionDeclarationAST::cPtr_externFunctionDeclarationAST (const GGS_bool & in_isPredefined,
                                                                      const GGS_lstring & in_mFunctionName,
                                                                      const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                      const GGS_lstring & in_mResultTypeName,
                                                                      const GGS_bool & in_usefullFunc,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFormalArgumentList (),
mProperty_mResultTypeName (),
mProperty_usefullFunc () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_usefullFunc = in_usefullFunc ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_externFunctionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;
}

void cPtr_externFunctionDeclarationAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@externFunctionDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullFunc.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_externFunctionDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externFunctionDeclarationAST (mProperty_isPredefined, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mResultTypeName, mProperty_usefullFunc, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_externFunctionDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mFormalArgumentList.printNonNullClassInstanceProperties ("mFormalArgumentList") ;
    mProperty_mResultTypeName.printNonNullClassInstanceProperties ("mResultTypeName") ;
    mProperty_usefullFunc.printNonNullClassInstanceProperties ("usefullFunc") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @externFunctionDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionDeclarationAST ("externFunctionDeclarationAST",
                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_externFunctionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externFunctionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externFunctionDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationAST GGS_externFunctionDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_externFunctionDeclarationAST result ;
  const GGS_externFunctionDeclarationAST * p = (const GGS_externFunctionDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externFunctionDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @functionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionDeclarationAST::objectCompare (const GGS_functionDeclarationAST & inOperand) const {
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

GGS_functionDeclarationAST::GGS_functionDeclarationAST (void) :
GGS_externFunctionDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_functionDeclarationAST GGS_functionDeclarationAST::
init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                 const GGS_lstring & in_mFunctionName,
                                                                 const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                 const GGS_lstring & in_mResultTypeName,
                                                                 const GGS_bool & in_usefullFunc,
                                                                 const GGS_lstring & in_mResultVariableName,
                                                                 const GGS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                                 const GGS_location & in_mEndOfFunctionInstructionList,
                                                                 const GGS_bool & in_mIsInternal,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cPtr_functionDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_functionDeclarationAST (inCompiler COMMA_THERE)) ;
  object->functionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (in_isPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_usefullFunc, in_mResultVariableName, in_mFunctionInstructionList, in_mEndOfFunctionInstructionList, in_mIsInternal, inCompiler) ;
  const GGS_functionDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::
functionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                                        const GGS_lstring & in_mFunctionName,
                                                                                        const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                                        const GGS_lstring & in_mResultTypeName,
                                                                                        const GGS_bool & in_usefullFunc,
                                                                                        const GGS_lstring & in_mResultVariableName,
                                                                                        const GGS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                                                        const GGS_location & in_mEndOfFunctionInstructionList,
                                                                                        const GGS_bool & in_mIsInternal,
                                                                                        Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_usefullFunc = in_usefullFunc ;
  mProperty_mResultVariableName = in_mResultVariableName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  mProperty_mEndOfFunctionInstructionList = in_mEndOfFunctionInstructionList ;
  mProperty_mIsInternal = in_mIsInternal ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST::GGS_functionDeclarationAST (const cPtr_functionDeclarationAST * inSourcePtr) :
GGS_externFunctionDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST GGS_functionDeclarationAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                       const GGS_lstring & in_mFunctionName,
                                                                       const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                       const GGS_lstring & in_mResultTypeName,
                                                                       const GGS_bool & in_usefullFunc,
                                                                       const GGS_lstring & in_mResultVariableName,
                                                                       const GGS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                                       const GGS_location & in_mEndOfFunctionInstructionList,
                                                                       const GGS_bool & in_mIsInternal,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_functionDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_functionDeclarationAST (in_isPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_usefullFunc, in_mResultVariableName, in_mFunctionInstructionList, in_mEndOfFunctionInstructionList, in_mIsInternal,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_functionDeclarationAST::readProperty_mResultVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mResultVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_functionDeclarationAST::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_functionDeclarationAST::readProperty_mEndOfFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mEndOfFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_functionDeclarationAST::readProperty_mIsInternal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_functionDeclarationAST::cPtr_functionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_externFunctionDeclarationAST (inCompiler COMMA_THERE),
mProperty_mResultVariableName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionInstructionList (),
mProperty_mIsInternal () {
}

//--------------------------------------------------------------------------------------------------

cPtr_functionDeclarationAST::cPtr_functionDeclarationAST (const GGS_bool & in_isPredefined,
                                                          const GGS_lstring & in_mFunctionName,
                                                          const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                          const GGS_lstring & in_mResultTypeName,
                                                          const GGS_bool & in_usefullFunc,
                                                          const GGS_lstring & in_mResultVariableName,
                                                          const GGS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                          const GGS_location & in_mEndOfFunctionInstructionList,
                                                          const GGS_bool & in_mIsInternal,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_externFunctionDeclarationAST (in_isPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_usefullFunc, inCompiler COMMA_THERE),
mProperty_mResultVariableName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionInstructionList (),
mProperty_mIsInternal () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_usefullFunc = in_usefullFunc ;
  mProperty_mResultVariableName = in_mResultVariableName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  mProperty_mEndOfFunctionInstructionList = in_mEndOfFunctionInstructionList ;
  mProperty_mIsInternal = in_mIsInternal ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_functionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST ;
}

void cPtr_functionDeclarationAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@functionDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullFunc.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_functionDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionDeclarationAST (mProperty_isPredefined, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mResultTypeName, mProperty_usefullFunc, mProperty_mResultVariableName, mProperty_mFunctionInstructionList, mProperty_mEndOfFunctionInstructionList, mProperty_mIsInternal, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_functionDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_externFunctionDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mResultVariableName.printNonNullClassInstanceProperties ("mResultVariableName") ;
    mProperty_mFunctionInstructionList.printNonNullClassInstanceProperties ("mFunctionInstructionList") ;
    mProperty_mEndOfFunctionInstructionList.printNonNullClassInstanceProperties ("mEndOfFunctionInstructionList") ;
    mProperty_mIsInternal.printNonNullClassInstanceProperties ("mIsInternal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @functionDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationAST ("functionDeclarationAST",
                                                                              & kTypeDescriptor_GALGAS_externFunctionDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_functionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST GGS_functionDeclarationAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_functionDeclarationAST result ;
  const GGS_functionDeclarationAST * p = (const GGS_functionDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @onceFunctionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_onceFunctionDeclarationAST::objectCompare (const GGS_onceFunctionDeclarationAST & inOperand) const {
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

GGS_onceFunctionDeclarationAST::GGS_onceFunctionDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_onceFunctionDeclarationAST GGS_onceFunctionDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_mFunctionName,
                                                  const GGS_lstring & in_mResultTypeName,
                                                  const GGS_lstring & in_mResultVariableName,
                                                  const GGS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                  const GGS_location & in_mEndOfFunctionInstructionList,
                                                  const GGS_bool & in_mIsInternal,
                                                  const GGS_bool & in_mIsUsefull,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_onceFunctionDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_onceFunctionDeclarationAST (inCompiler COMMA_THERE)) ;
  object->onceFunctionDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (in_isPredefined, in_mFunctionName, in_mResultTypeName, in_mResultVariableName, in_mFunctionInstructionList, in_mEndOfFunctionInstructionList, in_mIsInternal, in_mIsUsefull, inCompiler) ;
  const GGS_onceFunctionDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::
onceFunctionDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                             const GGS_lstring & in_mFunctionName,
                                                                             const GGS_lstring & in_mResultTypeName,
                                                                             const GGS_lstring & in_mResultVariableName,
                                                                             const GGS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                                             const GGS_location & in_mEndOfFunctionInstructionList,
                                                                             const GGS_bool & in_mIsInternal,
                                                                             const GGS_bool & in_mIsUsefull,
                                                                             Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_mResultVariableName = in_mResultVariableName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  mProperty_mEndOfFunctionInstructionList = in_mEndOfFunctionInstructionList ;
  mProperty_mIsInternal = in_mIsInternal ;
  mProperty_mIsUsefull = in_mIsUsefull ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST::GGS_onceFunctionDeclarationAST (const cPtr_onceFunctionDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_onceFunctionDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST GGS_onceFunctionDeclarationAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                               const GGS_lstring & in_mFunctionName,
                                                                               const GGS_lstring & in_mResultTypeName,
                                                                               const GGS_lstring & in_mResultVariableName,
                                                                               const GGS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                                               const GGS_location & in_mEndOfFunctionInstructionList,
                                                                               const GGS_bool & in_mIsInternal,
                                                                               const GGS_bool & in_mIsUsefull,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_onceFunctionDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_onceFunctionDeclarationAST (in_isPredefined, in_mFunctionName, in_mResultTypeName, in_mResultVariableName, in_mFunctionInstructionList, in_mEndOfFunctionInstructionList, in_mIsInternal, in_mIsUsefull,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_onceFunctionDeclarationAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_onceFunctionDeclarationAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_onceFunctionDeclarationAST::readProperty_mResultVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mResultVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_onceFunctionDeclarationAST::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_onceFunctionDeclarationAST::readProperty_mEndOfFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mEndOfFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_onceFunctionDeclarationAST::readProperty_mIsInternal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_onceFunctionDeclarationAST::readProperty_mIsUsefull (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mIsUsefull ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @onceFunctionDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationAST::cPtr_onceFunctionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mResultTypeName (),
mProperty_mResultVariableName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionInstructionList (),
mProperty_mIsInternal (),
mProperty_mIsUsefull () {
}

//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationAST::cPtr_onceFunctionDeclarationAST (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mFunctionName,
                                                                  const GGS_lstring & in_mResultTypeName,
                                                                  const GGS_lstring & in_mResultVariableName,
                                                                  const GGS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                                  const GGS_location & in_mEndOfFunctionInstructionList,
                                                                  const GGS_bool & in_mIsInternal,
                                                                  const GGS_bool & in_mIsUsefull,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mResultTypeName (),
mProperty_mResultVariableName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionInstructionList (),
mProperty_mIsInternal (),
mProperty_mIsUsefull () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_mResultVariableName = in_mResultVariableName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  mProperty_mEndOfFunctionInstructionList = in_mEndOfFunctionInstructionList ;
  mProperty_mIsInternal = in_mIsInternal ;
  mProperty_mIsUsefull = in_mIsUsefull ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_onceFunctionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;
}

void cPtr_onceFunctionDeclarationAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@onceFunctionDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsUsefull.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_onceFunctionDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_onceFunctionDeclarationAST (mProperty_isPredefined, mProperty_mFunctionName, mProperty_mResultTypeName, mProperty_mResultVariableName, mProperty_mFunctionInstructionList, mProperty_mEndOfFunctionInstructionList, mProperty_mIsInternal, mProperty_mIsUsefull, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_onceFunctionDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mResultTypeName.printNonNullClassInstanceProperties ("mResultTypeName") ;
    mProperty_mResultVariableName.printNonNullClassInstanceProperties ("mResultVariableName") ;
    mProperty_mFunctionInstructionList.printNonNullClassInstanceProperties ("mFunctionInstructionList") ;
    mProperty_mEndOfFunctionInstructionList.printNonNullClassInstanceProperties ("mEndOfFunctionInstructionList") ;
    mProperty_mIsInternal.printNonNullClassInstanceProperties ("mIsInternal") ;
    mProperty_mIsUsefull.printNonNullClassInstanceProperties ("mIsUsefull") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @onceFunctionDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ("onceFunctionDeclarationAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_onceFunctionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_onceFunctionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_onceFunctionDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST GGS_onceFunctionDeclarationAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_onceFunctionDeclarationAST result ;
  const GGS_onceFunctionDeclarationAST * p = (const GGS_onceFunctionDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_onceFunctionDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperDeclarationAST::objectCompare (const GGS_filewrapperDeclarationAST & inOperand) const {
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

GGS_filewrapperDeclarationAST::GGS_filewrapperDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_filewrapperDeclarationAST GGS_filewrapperDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                  const GGS_bool & in_mIsInternal,
                                                  const GGS_string & in_mSourceFileAbsolutePath,
                                                  const GGS_lstring & in_mFilewrapperName,
                                                  const GGS_lstring & in_mFilewrapperPath,
                                                  const GGS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                                  const GGS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                                  const GGS_filewrapperTemplateListAST & in_mFilewrapperTemplateList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_filewrapperDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperDeclarationAST (inCompiler COMMA_THERE)) ;
  object->filewrapperDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (in_isPredefined, in_mIsInternal, in_mSourceFileAbsolutePath, in_mFilewrapperName, in_mFilewrapperPath, in_mFilewrapperTextFileExtensionList, in_mFilewrapperBinaryFileExtensionList, in_mFilewrapperTemplateList, inCompiler) ;
  const GGS_filewrapperDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::
filewrapperDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                            const GGS_bool & in_mIsInternal,
                                                                            const GGS_string & in_mSourceFileAbsolutePath,
                                                                            const GGS_lstring & in_mFilewrapperName,
                                                                            const GGS_lstring & in_mFilewrapperPath,
                                                                            const GGS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                                                            const GGS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                                                            const GGS_filewrapperTemplateListAST & in_mFilewrapperTemplateList,
                                                                            Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mIsInternal = in_mIsInternal ;
  mProperty_mSourceFileAbsolutePath = in_mSourceFileAbsolutePath ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperPath = in_mFilewrapperPath ;
  mProperty_mFilewrapperTextFileExtensionList = in_mFilewrapperTextFileExtensionList ;
  mProperty_mFilewrapperBinaryFileExtensionList = in_mFilewrapperBinaryFileExtensionList ;
  mProperty_mFilewrapperTemplateList = in_mFilewrapperTemplateList ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationAST::GGS_filewrapperDeclarationAST (const cPtr_filewrapperDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationAST GGS_filewrapperDeclarationAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                             const GGS_bool & in_mIsInternal,
                                                                             const GGS_string & in_mSourceFileAbsolutePath,
                                                                             const GGS_lstring & in_mFilewrapperName,
                                                                             const GGS_lstring & in_mFilewrapperPath,
                                                                             const GGS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                                                             const GGS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                                                             const GGS_filewrapperTemplateListAST & in_mFilewrapperTemplateList,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  GGS_filewrapperDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_filewrapperDeclarationAST (in_isPredefined, in_mIsInternal, in_mSourceFileAbsolutePath, in_mFilewrapperName, in_mFilewrapperPath, in_mFilewrapperTextFileExtensionList, in_mFilewrapperBinaryFileExtensionList, in_mFilewrapperTemplateList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_filewrapperDeclarationAST::readProperty_mIsInternal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapperDeclarationAST::readProperty_mSourceFileAbsolutePath (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mSourceFileAbsolutePath ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperDeclarationAST::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperDeclarationAST::readProperty_mFilewrapperPath (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperPath ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_filewrapperDeclarationAST::readProperty_mFilewrapperTextFileExtensionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperTextFileExtensionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_filewrapperDeclarationAST::readProperty_mFilewrapperBinaryFileExtensionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperBinaryFileExtensionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST GGS_filewrapperDeclarationAST::readProperty_mFilewrapperTemplateList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_filewrapperTemplateListAST () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperTemplateList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperDeclarationAST::cPtr_filewrapperDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mIsInternal (),
mProperty_mSourceFileAbsolutePath (),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperPath (),
mProperty_mFilewrapperTextFileExtensionList (),
mProperty_mFilewrapperBinaryFileExtensionList (),
mProperty_mFilewrapperTemplateList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_filewrapperDeclarationAST::cPtr_filewrapperDeclarationAST (const GGS_bool & in_isPredefined,
                                                                const GGS_bool & in_mIsInternal,
                                                                const GGS_string & in_mSourceFileAbsolutePath,
                                                                const GGS_lstring & in_mFilewrapperName,
                                                                const GGS_lstring & in_mFilewrapperPath,
                                                                const GGS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                                                const GGS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                                                const GGS_filewrapperTemplateListAST & in_mFilewrapperTemplateList,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mIsInternal (),
mProperty_mSourceFileAbsolutePath (),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperPath (),
mProperty_mFilewrapperTextFileExtensionList (),
mProperty_mFilewrapperBinaryFileExtensionList (),
mProperty_mFilewrapperTemplateList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mIsInternal = in_mIsInternal ;
  mProperty_mSourceFileAbsolutePath = in_mSourceFileAbsolutePath ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperPath = in_mFilewrapperPath ;
  mProperty_mFilewrapperTextFileExtensionList = in_mFilewrapperTextFileExtensionList ;
  mProperty_mFilewrapperBinaryFileExtensionList = in_mFilewrapperBinaryFileExtensionList ;
  mProperty_mFilewrapperTemplateList = in_mFilewrapperTemplateList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_filewrapperDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;
}

void cPtr_filewrapperDeclarationAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceFileAbsolutePath.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperPath.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperTextFileExtensionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperBinaryFileExtensionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperTemplateList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperDeclarationAST (mProperty_isPredefined, mProperty_mIsInternal, mProperty_mSourceFileAbsolutePath, mProperty_mFilewrapperName, mProperty_mFilewrapperPath, mProperty_mFilewrapperTextFileExtensionList, mProperty_mFilewrapperBinaryFileExtensionList, mProperty_mFilewrapperTemplateList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsInternal.printNonNullClassInstanceProperties ("mIsInternal") ;
    mProperty_mSourceFileAbsolutePath.printNonNullClassInstanceProperties ("mSourceFileAbsolutePath") ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
    mProperty_mFilewrapperPath.printNonNullClassInstanceProperties ("mFilewrapperPath") ;
    mProperty_mFilewrapperTextFileExtensionList.printNonNullClassInstanceProperties ("mFilewrapperTextFileExtensionList") ;
    mProperty_mFilewrapperBinaryFileExtensionList.printNonNullClassInstanceProperties ("mFilewrapperBinaryFileExtensionList") ;
    mProperty_mFilewrapperTemplateList.printNonNullClassInstanceProperties ("mFilewrapperTemplateList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @filewrapperDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST ("filewrapperDeclarationAST",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_filewrapperDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationAST GGS_filewrapperDeclarationAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_filewrapperDeclarationAST result ;
  const GGS_filewrapperDeclarationAST * p = (const GGS_filewrapperDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @galgas_33_SyntaxComponentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_galgas_33_SyntaxComponentAST::objectCompare (const GGS_galgas_33_SyntaxComponentAST & inOperand) const {
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

GGS_galgas_33_SyntaxComponentAST::GGS_galgas_33_SyntaxComponentAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST GGS_galgas_33_SyntaxComponentAST::
init_21_isPredefined_21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                          const GGS_lstring & in_mSyntaxComponentName,
                                          const GGS_lstring & in_mLexiqueName,
                                          const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                          const GGS_syntaxRuleListAST & in_mRuleList,
                                          const GGS_bool & in_mHasTranslateFeature,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_galgas_33_SyntaxComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_galgas_33_SyntaxComponentAST (inCompiler COMMA_THERE)) ;
  object->galgas_33_SyntaxComponentAST_init_21_isPredefined_21__21__21__21__21_ (in_isPredefined, in_mSyntaxComponentName, in_mLexiqueName, in_mNonterminalDeclarationList, in_mRuleList, in_mHasTranslateFeature, inCompiler) ;
  const GGS_galgas_33_SyntaxComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::
galgas_33_SyntaxComponentAST_init_21_isPredefined_21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                       const GGS_lstring & in_mSyntaxComponentName,
                                                                       const GGS_lstring & in_mLexiqueName,
                                                                       const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                       const GGS_syntaxRuleListAST & in_mRuleList,
                                                                       const GGS_bool & in_mHasTranslateFeature,
                                                                       Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonterminalDeclarationList = in_mNonterminalDeclarationList ;
  mProperty_mRuleList = in_mRuleList ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST::GGS_galgas_33_SyntaxComponentAST (const cPtr_galgas_33_SyntaxComponentAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_galgas_33_SyntaxComponentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST GGS_galgas_33_SyntaxComponentAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                                   const GGS_lstring & in_mSyntaxComponentName,
                                                                                   const GGS_lstring & in_mLexiqueName,
                                                                                   const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                                   const GGS_syntaxRuleListAST & in_mRuleList,
                                                                                   const GGS_bool & in_mHasTranslateFeature,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxComponentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_galgas_33_SyntaxComponentAST (in_isPredefined, in_mSyntaxComponentName, in_mLexiqueName, in_mNonterminalDeclarationList, in_mRuleList, in_mHasTranslateFeature,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_SyntaxComponentAST::readProperty_mSyntaxComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_SyntaxComponentAST::readProperty_mLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST GGS_galgas_33_SyntaxComponentAST::readProperty_mNonterminalDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_nonterminalDeclarationListAST () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mNonterminalDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST GGS_galgas_33_SyntaxComponentAST::readProperty_mRuleList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_syntaxRuleListAST () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mRuleList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_galgas_33_SyntaxComponentAST::readProperty_mHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @galgas3SyntaxComponentAST class
//--------------------------------------------------------------------------------------------------

cPtr_galgas_33_SyntaxComponentAST::cPtr_galgas_33_SyntaxComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mLexiqueName (),
mProperty_mNonterminalDeclarationList (),
mProperty_mRuleList (),
mProperty_mHasTranslateFeature () {
}

//--------------------------------------------------------------------------------------------------

cPtr_galgas_33_SyntaxComponentAST::cPtr_galgas_33_SyntaxComponentAST (const GGS_bool & in_isPredefined,
                                                                      const GGS_lstring & in_mSyntaxComponentName,
                                                                      const GGS_lstring & in_mLexiqueName,
                                                                      const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                      const GGS_syntaxRuleListAST & in_mRuleList,
                                                                      const GGS_bool & in_mHasTranslateFeature,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mLexiqueName (),
mProperty_mNonterminalDeclarationList (),
mProperty_mRuleList (),
mProperty_mHasTranslateFeature () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonterminalDeclarationList = in_mNonterminalDeclarationList ;
  mProperty_mRuleList = in_mRuleList ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_galgas_33_SyntaxComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;
}

void cPtr_galgas_33_SyntaxComponentAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@galgas3SyntaxComponentAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRuleList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_galgas_33_SyntaxComponentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_galgas_33_SyntaxComponentAST (mProperty_isPredefined, mProperty_mSyntaxComponentName, mProperty_mLexiqueName, mProperty_mNonterminalDeclarationList, mProperty_mRuleList, mProperty_mHasTranslateFeature, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_galgas_33_SyntaxComponentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mSyntaxComponentName.printNonNullClassInstanceProperties ("mSyntaxComponentName") ;
    mProperty_mLexiqueName.printNonNullClassInstanceProperties ("mLexiqueName") ;
    mProperty_mNonterminalDeclarationList.printNonNullClassInstanceProperties ("mNonterminalDeclarationList") ;
    mProperty_mRuleList.printNonNullClassInstanceProperties ("mRuleList") ;
    mProperty_mHasTranslateFeature.printNonNullClassInstanceProperties ("mHasTranslateFeature") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @galgas3SyntaxComponentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ("galgas3SyntaxComponentAST",
                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_galgas_33_SyntaxComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_SyntaxComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_SyntaxComponentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST GGS_galgas_33_SyntaxComponentAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxComponentAST result ;
  const GGS_galgas_33_SyntaxComponentAST * p = (const GGS_galgas_33_SyntaxComponentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_SyntaxComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @galgas_33_GrammarComponentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_galgas_33_GrammarComponentAST::objectCompare (const GGS_galgas_33_GrammarComponentAST & inOperand) const {
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

GGS_galgas_33_GrammarComponentAST::GGS_galgas_33_GrammarComponentAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST GGS_galgas_33_GrammarComponentAST::
init_21_isPredefined_21__21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                      const GGS_lbool & in_mHasIndexing,
                                                      const GGS_lstring & in_mGrammarComponentName,
                                                      const GGS_lstring & in_mGrammarClass,
                                                      const GGS_lstringlist & in_mSyntaxComponents,
                                                      const GGS_lstring & in_mStartSymbolName,
                                                      const GGS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                      const GGS_lstringlist & in_mUnusedNonterminalList,
                                                      const GGS_bool & in_mHasTranslateFeature,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cPtr_galgas_33_GrammarComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_galgas_33_GrammarComponentAST (inCompiler COMMA_THERE)) ;
  object->galgas_33_GrammarComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21_ (in_isPredefined, in_mHasIndexing, in_mGrammarComponentName, in_mGrammarClass, in_mSyntaxComponents, in_mStartSymbolName, in_mStartSymbolLabelList, in_mUnusedNonterminalList, in_mHasTranslateFeature, inCompiler) ;
  const GGS_galgas_33_GrammarComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::
galgas_33_GrammarComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                                    const GGS_lbool & in_mHasIndexing,
                                                                                    const GGS_lstring & in_mGrammarComponentName,
                                                                                    const GGS_lstring & in_mGrammarClass,
                                                                                    const GGS_lstringlist & in_mSyntaxComponents,
                                                                                    const GGS_lstring & in_mStartSymbolName,
                                                                                    const GGS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                                                    const GGS_lstringlist & in_mUnusedNonterminalList,
                                                                                    const GGS_bool & in_mHasTranslateFeature,
                                                                                    Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mHasIndexing = in_mHasIndexing ;
  mProperty_mGrammarComponentName = in_mGrammarComponentName ;
  mProperty_mGrammarClass = in_mGrammarClass ;
  mProperty_mSyntaxComponents = in_mSyntaxComponents ;
  mProperty_mStartSymbolName = in_mStartSymbolName ;
  mProperty_mStartSymbolLabelList = in_mStartSymbolLabelList ;
  mProperty_mUnusedNonterminalList = in_mUnusedNonterminalList ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST::GGS_galgas_33_GrammarComponentAST (const cPtr_galgas_33_GrammarComponentAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_galgas_33_GrammarComponentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST GGS_galgas_33_GrammarComponentAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                                     const GGS_lbool & in_mHasIndexing,
                                                                                     const GGS_lstring & in_mGrammarComponentName,
                                                                                     const GGS_lstring & in_mGrammarClass,
                                                                                     const GGS_lstringlist & in_mSyntaxComponents,
                                                                                     const GGS_lstring & in_mStartSymbolName,
                                                                                     const GGS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                                                     const GGS_lstringlist & in_mUnusedNonterminalList,
                                                                                     const GGS_bool & in_mHasTranslateFeature,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_galgas_33_GrammarComponentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_galgas_33_GrammarComponentAST (in_isPredefined, in_mHasIndexing, in_mGrammarComponentName, in_mGrammarClass, in_mSyntaxComponents, in_mStartSymbolName, in_mStartSymbolLabelList, in_mUnusedNonterminalList, in_mHasTranslateFeature,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbool GGS_galgas_33_GrammarComponentAST::readProperty_mHasIndexing (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbool () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mHasIndexing ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_GrammarComponentAST::readProperty_mGrammarComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mGrammarComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_GrammarComponentAST::readProperty_mGrammarClass (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mGrammarClass ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_galgas_33_GrammarComponentAST::readProperty_mSyntaxComponents (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mSyntaxComponents ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_GrammarComponentAST::readProperty_mStartSymbolName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mStartSymbolName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST GGS_galgas_33_GrammarComponentAST::readProperty_mStartSymbolLabelList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_nonTerminalLabelListAST () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mStartSymbolLabelList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_galgas_33_GrammarComponentAST::readProperty_mUnusedNonterminalList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mUnusedNonterminalList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_galgas_33_GrammarComponentAST::readProperty_mHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @galgas3GrammarComponentAST class
//--------------------------------------------------------------------------------------------------

cPtr_galgas_33_GrammarComponentAST::cPtr_galgas_33_GrammarComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mHasIndexing (),
mProperty_mGrammarComponentName (),
mProperty_mGrammarClass (),
mProperty_mSyntaxComponents (),
mProperty_mStartSymbolName (),
mProperty_mStartSymbolLabelList (),
mProperty_mUnusedNonterminalList (),
mProperty_mHasTranslateFeature () {
}

//--------------------------------------------------------------------------------------------------

cPtr_galgas_33_GrammarComponentAST::cPtr_galgas_33_GrammarComponentAST (const GGS_bool & in_isPredefined,
                                                                        const GGS_lbool & in_mHasIndexing,
                                                                        const GGS_lstring & in_mGrammarComponentName,
                                                                        const GGS_lstring & in_mGrammarClass,
                                                                        const GGS_lstringlist & in_mSyntaxComponents,
                                                                        const GGS_lstring & in_mStartSymbolName,
                                                                        const GGS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                                        const GGS_lstringlist & in_mUnusedNonterminalList,
                                                                        const GGS_bool & in_mHasTranslateFeature,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mHasIndexing (),
mProperty_mGrammarComponentName (),
mProperty_mGrammarClass (),
mProperty_mSyntaxComponents (),
mProperty_mStartSymbolName (),
mProperty_mStartSymbolLabelList (),
mProperty_mUnusedNonterminalList (),
mProperty_mHasTranslateFeature () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mHasIndexing = in_mHasIndexing ;
  mProperty_mGrammarComponentName = in_mGrammarComponentName ;
  mProperty_mGrammarClass = in_mGrammarClass ;
  mProperty_mSyntaxComponents = in_mSyntaxComponents ;
  mProperty_mStartSymbolName = in_mStartSymbolName ;
  mProperty_mStartSymbolLabelList = in_mStartSymbolLabelList ;
  mProperty_mUnusedNonterminalList = in_mUnusedNonterminalList ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_galgas_33_GrammarComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;
}

void cPtr_galgas_33_GrammarComponentAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@galgas3GrammarComponentAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasIndexing.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarClass.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxComponents.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStartSymbolName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStartSymbolLabelList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUnusedNonterminalList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_galgas_33_GrammarComponentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_galgas_33_GrammarComponentAST (mProperty_isPredefined, mProperty_mHasIndexing, mProperty_mGrammarComponentName, mProperty_mGrammarClass, mProperty_mSyntaxComponents, mProperty_mStartSymbolName, mProperty_mStartSymbolLabelList, mProperty_mUnusedNonterminalList, mProperty_mHasTranslateFeature, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_galgas_33_GrammarComponentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mHasIndexing.printNonNullClassInstanceProperties ("mHasIndexing") ;
    mProperty_mGrammarComponentName.printNonNullClassInstanceProperties ("mGrammarComponentName") ;
    mProperty_mGrammarClass.printNonNullClassInstanceProperties ("mGrammarClass") ;
    mProperty_mSyntaxComponents.printNonNullClassInstanceProperties ("mSyntaxComponents") ;
    mProperty_mStartSymbolName.printNonNullClassInstanceProperties ("mStartSymbolName") ;
    mProperty_mStartSymbolLabelList.printNonNullClassInstanceProperties ("mStartSymbolLabelList") ;
    mProperty_mUnusedNonterminalList.printNonNullClassInstanceProperties ("mUnusedNonterminalList") ;
    mProperty_mHasTranslateFeature.printNonNullClassInstanceProperties ("mHasTranslateFeature") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @galgas3GrammarComponentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ("galgas3GrammarComponentAST",
                                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_galgas_33_GrammarComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_GrammarComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_GrammarComponentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST GGS_galgas_33_GrammarComponentAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_galgas_33_GrammarComponentAST result ;
  const GGS_galgas_33_GrammarComponentAST * p = (const GGS_galgas_33_GrammarComponentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_GrammarComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3GrammarComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@galgasDeclarationAST getOptionalTypeName'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_getOptionalTypeName (GGS_galgasDeclarationAST & ioObject,
                                          GGS_lstring & outArgument_outOptionalTypeName,
                                          const GGS_lstring constinArgument_inTypeName,
                                          const GGS_bool constinArgument_inPredefined,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptionalTypeName.drop () ; // Release 'out' argument
  outArgument_outOptionalTypeName = function_makeOptionalTypeLName (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 435)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_galgasDeclarationAST temp_1 = ioObject ;
    test_0 = temp_1.readProperty_implicitTypeDeclarationSet ().getter_hasKey (outArgument_outOptionalTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 436)).operator_not (SOURCE_FILE ("semanticsTypesForAST.galgas", 436)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioObject.mProperty_implicitTypeDeclarationSet.plusPlusAssignOperation (outArgument_outOptionalTypeName.readProperty_string ()  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 437)) ;
      ioObject.mProperty_mDeclarationList.addAssignOperation (GGS_optionalTypeDeclarationAST::init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull (constinArgument_inPredefined, outArgument_outOptionalTypeName, constinArgument_inTypeName, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 438)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------

GGS_routineMap::GGS_routineMap (void) :
mProperty_mInternalRoutineMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap::GGS_routineMap (const GGS_routineMap & inSource) :
mProperty_mInternalRoutineMap (inSource.mProperty_mInternalRoutineMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap & GGS_routineMap::operator = (const GGS_routineMap & inSource) {
  mProperty_mInternalRoutineMap = inSource.mProperty_mInternalRoutineMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_routineMap GGS_routineMap::init (Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mInternalRoutineMap = GGS_internalRoutineMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap::GGS_routineMap (const GGS_internalRoutineMap & inOperand0) :
mProperty_mInternalRoutineMap (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap GGS_routineMap::class_func_new (Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineMap::isValid (void) const {
  return mProperty_mInternalRoutineMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap::drop (void) {
  mProperty_mInternalRoutineMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap::description (String & ioString,
                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineMap:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInternalRoutineMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @routineMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMap ("routineMap",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_routineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap GGS_routineMap::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_routineMap result ;
  const GGS_routineMap * p = (const GGS_routineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineMap searchKey'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchKey (const GGS_routineMap inObject,
                                const GGS_lstring constinArgument_inRoutineName,
                                const GGS_actualParameterListAST constinArgument_inActualParameterList,
                                GGS_formalParameterSignature & outArgument_outRoutineSignature,
                                GGS_bool & outArgument_outIsFilePrivate,
                                GGS_lstring & outArgument_outRoutineMangledName,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  outArgument_outIsFilePrivate.drop () ; // Release 'out' argument
  outArgument_outRoutineMangledName.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_routineMap temp_1 = inObject ;
    const GGS_internalRoutineMap_2E_element var_routine_4077 = temp_1.readProperty_mInternalRoutineMap ().readSubscript__3F_ (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readProperty_mInternalRoutineMap ().readSubscript__3F_ (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outIsFilePrivate = GGS_bool (false) ;
      outArgument_outRoutineSignature = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
      UpEnumerator_routineArgumentMap enumerator_4224 (var_routine_4077.readProperty_mArgumentMap ()) ;
      while (enumerator_4224.hasCurrentObject ()) {
        outArgument_outIsFilePrivate = enumerator_4224.current (HERE).readProperty_mIsFilePrivate () ;
        outArgument_outRoutineSignature = enumerator_4224.current (HERE).readProperty_mRoutineSignature () ;
        enumerator_4224.gotoNextObject () ;
      }
      GGS_acceptableParameterList var_acceptableParameterList_4387 = GGS_acceptableParameterList::init (inCompiler COMMA_HERE) ;
      UpEnumerator_routineArgumentMap enumerator_4444 (var_routine_4077.readProperty_mArgumentMap ()) ;
      while (enumerator_4444.hasCurrentObject ()) {
        GGS_bool var_accept_4472 = GGS_bool (ComparisonKind::equal, constinArgument_inActualParameterList.getter_count (SOURCE_FILE ("routineMap.galgas", 106)).objectCompare (enumerator_4444.current (HERE).readProperty_mRoutineSignature ().getter_count (SOURCE_FILE ("routineMap.galgas", 106)))) ;
        UpEnumerator_formalParameterSignature enumerator_4583 (enumerator_4444.current (HERE).readProperty_mRoutineSignature ()) ;
        UpEnumerator_actualParameterListAST enumerator_4603 (constinArgument_inActualParameterList) ;
        bool bool_2 = var_accept_4472.isValidAndTrue () ;
        if (enumerator_4583.hasCurrentObject () && enumerator_4603.hasCurrentObject () && bool_2) {
          while (enumerator_4583.hasCurrentObject () && enumerator_4603.hasCurrentObject () && bool_2) {
            var_accept_4472 = callExtensionGetter_isCompatibleWith ((const cPtr_actualParameterAST *) enumerator_4603.current_mActualParameter (HERE).ptr (), enumerator_4583.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_4583.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 108)) ;
            enumerator_4583.gotoNextObject () ;
            enumerator_4603.gotoNextObject () ;
            if (enumerator_4583.hasCurrentObject () && enumerator_4603.hasCurrentObject ()) {
              bool_2 = var_accept_4472.isValidAndTrue () ;
            }
          }
        }
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = var_accept_4472.boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            var_acceptableParameterList_4387.addAssignOperation (enumerator_4444.current (HERE).readProperty_mRoutineSignature (), enumerator_4444.current (HERE).readProperty_mIsFilePrivate ()  COMMA_SOURCE_FILE ("routineMap.galgas", 114)) ;
          }
        }
        enumerator_4444.gotoNextObject () ;
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_acceptableParameterList_4387.getter_count (SOURCE_FILE ("routineMap.galgas", 117)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          var_acceptableParameterList_4387.method_first (outArgument_outRoutineSignature, outArgument_outIsFilePrivate, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 118)) ;
          outArgument_outRoutineMangledName = function_routineMangledName (constinArgument_inRoutineName, outArgument_outRoutineSignature, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 119)) ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::equal, var_acceptableParameterList_4387.getter_count (SOURCE_FILE ("routineMap.galgas", 120)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GGS_string ("cannot find any procedure with compatible formal argument list"), fixItArray6  COMMA_SOURCE_FILE ("routineMap.galgas", 121)) ;
            outArgument_outRoutineSignature.drop () ; // Release error dropped variable
            outArgument_outIsFilePrivate.drop () ; // Release error dropped variable
            outArgument_outRoutineMangledName.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_5) {
          GGS_string var_s_5438 = GGS_string ("ambiguity, several procedures with compatible formal argument list:") ;
          UpEnumerator_acceptableParameterList enumerator_5535 (var_acceptableParameterList_4387) ;
          while (enumerator_5535.hasCurrentObject ()) {
            var_s_5438.plusAssignOperation(GGS_string ("\n  - ").add_operation (function_routineArgumentFromFormalParameters (enumerator_5535.current (HERE).readProperty_mRoutineSignature (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 127)) ;
            enumerator_5535.gotoNextObject () ;
          }
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), var_s_5438, fixItArray7  COMMA_SOURCE_FILE ("routineMap.galgas", 129)) ;
          outArgument_outRoutineSignature.drop () ; // Release error dropped variable
          outArgument_outIsFilePrivate.drop () ; // Release error dropped variable
          outArgument_outRoutineMangledName.drop () ; // Release error dropped variable
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    TC_Array <FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 135)).add_operation (GGS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 135)), fixItArray8  COMMA_SOURCE_FILE ("routineMap.galgas", 134)) ;
    outArgument_outRoutineSignature.drop () ; // Release error dropped variable
    outArgument_outIsFilePrivate.drop () ; // Release error dropped variable
    outArgument_outRoutineMangledName.drop () ; // Release error dropped variable
  }
}


//--------------------------------------------------------------------------------------------------
//  Extension Getter '@routineMap locationForKey'
//--------------------------------------------------------------------------------------------------

GGS_location extensionGetter_locationForKey (const GGS_routineMap & inObject,
                                             const GGS_string & constinArgument_inKey,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_location result_result ; // Returned variable
  const GGS_routineMap temp_0 = inObject ;
  result_result = temp_0.readProperty_mInternalRoutineMap ().getter_locationForKey (constinArgument_inKey, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 143)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateExpression (cPtr_semanticExpressionForGeneration * inObject,
                                             GGS_string & io_ioGeneratedCode,
                                             GGS_stringset & io_ioInclusionSet,
                                             GGS_uint & io_ioTemporaryVariableIndex,
                                             GGS_stringset & io_ioUnusedVariableCppNameSet,
                                             GGS_string & out_outCppExpression,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCppExpression.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionForGeneration) ;
    inObject->method_generateExpression (io_ioGeneratedCode, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, out_outCppExpression, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @castInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_castInExpressionForGeneration::objectCompare (const GGS_castInExpressionForGeneration & inOperand) const {
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

GGS_castInExpressionForGeneration::GGS_castInExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_castInExpressionForGeneration GGS_castInExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                          const GGS_string & in_mTypeName,
                          const GGS_unifiedTypeMapEntry & in_mCastType,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_castInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_castInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->castInExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mReceiverExpression, in_mTypeName, in_mCastType, inCompiler) ;
  const GGS_castInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionForGeneration::
castInExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                        const GGS_location & in_mLocation,
                                                        const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                        const GGS_string & in_mTypeName,
                                                        const GGS_unifiedTypeMapEntry & in_mCastType,
                                                        Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mCastType = in_mCastType ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration::GGS_castInExpressionForGeneration (const cPtr_castInExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_castInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration GGS_castInExpressionForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                     const GGS_location & in_mLocation,
                                                                                     const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                     const GGS_string & in_mTypeName,
                                                                                     const GGS_unifiedTypeMapEntry & in_mCastType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_castInExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_castInExpressionForGeneration (in_mResultType, in_mLocation, in_mReceiverExpression, in_mTypeName, in_mCastType,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_castInExpressionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_castInExpressionForGeneration::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_castInExpressionForGeneration::readProperty_mCastType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mCastType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @castInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_castInExpressionForGeneration::cPtr_castInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mTypeName (),
mProperty_mCastType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_castInExpressionForGeneration::cPtr_castInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                        const GGS_location & in_mLocation,
                                                                        const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                        const GGS_string & in_mTypeName,
                                                                        const GGS_unifiedTypeMapEntry & in_mCastType,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mTypeName (),
mProperty_mCastType () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mCastType = in_mCastType ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_castInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionForGeneration ;
}

void cPtr_castInExpressionForGeneration::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@castInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCastType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_castInExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_castInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mReceiverExpression, mProperty_mTypeName, mProperty_mCastType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_castInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mCastType.printNonNullClassInstanceProperties ("mCastType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @castInExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionForGeneration ("castInExpressionForGeneration",
                                                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_castInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_castInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_castInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration GGS_castInExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_castInExpressionForGeneration result ;
  const GGS_castInExpressionForGeneration * p = (const GGS_castInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_castInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @outputActualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputActualParameterForGeneration::objectCompare (const GGS_outputActualParameterForGeneration & inOperand) const {
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

GGS_outputActualParameterForGeneration::GGS_outputActualParameterForGeneration (void) :
GGS_actualParameterForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_outputActualParameterForGeneration GGS_outputActualParameterForGeneration::
init_21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
              const GGS_semanticExpressionForGeneration & in_mOutputActualParameterExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_outputActualParameterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_outputActualParameterForGeneration (inCompiler COMMA_THERE)) ;
  object->outputActualParameterForGeneration_init_21__21_ (in_mFormalArgumentType, in_mOutputActualParameterExpression, inCompiler) ;
  const GGS_outputActualParameterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterForGeneration::
outputActualParameterForGeneration_init_21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                 const GGS_semanticExpressionForGeneration & in_mOutputActualParameterExpression,
                                                 Compiler * /* inCompiler */) {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mOutputActualParameterExpression = in_mOutputActualParameterExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration::GGS_outputActualParameterForGeneration (const cPtr_outputActualParameterForGeneration * inSourcePtr) :
GGS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputActualParameterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration GGS_outputActualParameterForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                               const GGS_semanticExpressionForGeneration & in_mOutputActualParameterExpression,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_outputActualParameterForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_outputActualParameterForGeneration (in_mFormalArgumentType, in_mOutputActualParameterExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_outputActualParameterForGeneration::readProperty_mOutputActualParameterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_outputActualParameterForGeneration * p = (cPtr_outputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterForGeneration) ;
    return p->mProperty_mOutputActualParameterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputActualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_outputActualParameterForGeneration::cPtr_outputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (inCompiler COMMA_THERE),
mProperty_mOutputActualParameterExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_outputActualParameterForGeneration::cPtr_outputActualParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                  const GGS_semanticExpressionForGeneration & in_mOutputActualParameterExpression,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType, inCompiler COMMA_THERE),
mProperty_mOutputActualParameterExpression () {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mOutputActualParameterExpression = in_mOutputActualParameterExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;
}

void cPtr_outputActualParameterForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@outputActualParameterForGeneration:") ;
  mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutputActualParameterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputActualParameterForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputActualParameterForGeneration (mProperty_mFormalArgumentType, mProperty_mOutputActualParameterExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputActualParameterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOutputActualParameterExpression.printNonNullClassInstanceProperties ("mOutputActualParameterExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @outputActualParameterForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterForGeneration ("outputActualParameterForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration GGS_outputActualParameterForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_outputActualParameterForGeneration result ;
  const GGS_outputActualParameterForGeneration * p = (const GGS_outputActualParameterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputActualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @outputInputActualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputInputActualParameterForGeneration::objectCompare (const GGS_outputInputActualParameterForGeneration & inOperand) const {
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

GGS_outputInputActualParameterForGeneration::GGS_outputInputActualParameterForGeneration (void) :
GGS_actualParameterForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration GGS_outputInputActualParameterForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                      const GGS_string & in_mOutputInputVariableCppName,
                      const GGS_lstringlist & in_mStructAttributeList,
                      const GGS_unifiedTypeMapEntryList & in_mTypeList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_outputInputActualParameterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_outputInputActualParameterForGeneration (inCompiler COMMA_THERE)) ;
  object->outputInputActualParameterForGeneration_init_21__21__21__21_ (in_mFormalArgumentType, in_mOutputInputVariableCppName, in_mStructAttributeList, in_mTypeList, inCompiler) ;
  const GGS_outputInputActualParameterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterForGeneration::
outputInputActualParameterForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                              const GGS_string & in_mOutputInputVariableCppName,
                                                              const GGS_lstringlist & in_mStructAttributeList,
                                                              const GGS_unifiedTypeMapEntryList & in_mTypeList,
                                                              Compiler * /* inCompiler */) {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mOutputInputVariableCppName = in_mOutputInputVariableCppName ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mTypeList = in_mTypeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration::GGS_outputInputActualParameterForGeneration (const cPtr_outputInputActualParameterForGeneration * inSourcePtr) :
GGS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputActualParameterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration GGS_outputInputActualParameterForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                                         const GGS_string & in_mOutputInputVariableCppName,
                                                                                                         const GGS_lstringlist & in_mStructAttributeList,
                                                                                                         const GGS_unifiedTypeMapEntryList & in_mTypeList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_outputInputActualParameterForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_outputInputActualParameterForGeneration (in_mFormalArgumentType, in_mOutputInputVariableCppName, in_mStructAttributeList, in_mTypeList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_outputInputActualParameterForGeneration::readProperty_mOutputInputVariableCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    return p->mProperty_mOutputInputVariableCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_outputInputActualParameterForGeneration::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList GGS_outputInputActualParameterForGeneration::readProperty_mTypeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntryList () ;
  }else{
    cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    return p->mProperty_mTypeList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputInputActualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_outputInputActualParameterForGeneration::cPtr_outputInputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (inCompiler COMMA_THERE),
mProperty_mOutputInputVariableCppName (),
mProperty_mStructAttributeList (),
mProperty_mTypeList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_outputInputActualParameterForGeneration::cPtr_outputInputActualParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                            const GGS_string & in_mOutputInputVariableCppName,
                                                                                            const GGS_lstringlist & in_mStructAttributeList,
                                                                                            const GGS_unifiedTypeMapEntryList & in_mTypeList,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType, inCompiler COMMA_THERE),
mProperty_mOutputInputVariableCppName (),
mProperty_mStructAttributeList (),
mProperty_mTypeList () {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mOutputInputVariableCppName = in_mOutputInputVariableCppName ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mTypeList = in_mTypeList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outputInputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ;
}

void cPtr_outputInputActualParameterForGeneration::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@outputInputActualParameterForGeneration:") ;
  mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutputInputVariableCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputInputActualParameterForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputInputActualParameterForGeneration (mProperty_mFormalArgumentType, mProperty_mOutputInputVariableCppName, mProperty_mStructAttributeList, mProperty_mTypeList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputInputActualParameterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOutputInputVariableCppName.printNonNullClassInstanceProperties ("mOutputInputVariableCppName") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mTypeList.printNonNullClassInstanceProperties ("mTypeList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @outputInputActualParameterForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ("outputInputActualParameterForGeneration",
                                                                                               & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outputInputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputInputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputInputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration GGS_outputInputActualParameterForGeneration::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_outputInputActualParameterForGeneration result ;
  const GGS_outputInputActualParameterForGeneration * p = (const GGS_outputInputActualParameterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputInputActualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputActualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputActualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualParameterForGeneration::objectCompare (const GGS_inputActualParameterForGeneration & inOperand) const {
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

GGS_inputActualParameterForGeneration::GGS_inputActualParameterForGeneration (void) :
GGS_actualParameterForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputActualParameterForGeneration GGS_inputActualParameterForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                  const GGS_string & in_mInputActualCppName,
                  const GGS__32_stringlist & in_mPoisonedVarNameList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_inputActualParameterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_inputActualParameterForGeneration (inCompiler COMMA_THERE)) ;
  object->inputActualParameterForGeneration_init_21__21__21_ (in_mFormalArgumentType, in_mInputActualCppName, in_mPoisonedVarNameList, inCompiler) ;
  const GGS_inputActualParameterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputActualParameterForGeneration::
inputActualParameterForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                    const GGS_string & in_mInputActualCppName,
                                                    const GGS__32_stringlist & in_mPoisonedVarNameList,
                                                    Compiler * /* inCompiler */) {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mInputActualCppName = in_mInputActualCppName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualParameterForGeneration::GGS_inputActualParameterForGeneration (const cPtr_inputActualParameterForGeneration * inSourcePtr) :
GGS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualParameterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_inputActualParameterForGeneration GGS_inputActualParameterForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                             const GGS_string & in_mInputActualCppName,
                                                                                             const GGS__32_stringlist & in_mPoisonedVarNameList,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_inputActualParameterForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_inputActualParameterForGeneration (in_mFormalArgumentType, in_mInputActualCppName, in_mPoisonedVarNameList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_inputActualParameterForGeneration::readProperty_mInputActualCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_inputActualParameterForGeneration * p = (cPtr_inputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualParameterForGeneration) ;
    return p->mProperty_mInputActualCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS_inputActualParameterForGeneration::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__32_stringlist () ;
  }else{
    cPtr_inputActualParameterForGeneration * p = (cPtr_inputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualParameterForGeneration) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputActualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualParameterForGeneration::cPtr_inputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (inCompiler COMMA_THERE),
mProperty_mInputActualCppName (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputActualParameterForGeneration::cPtr_inputActualParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                const GGS_string & in_mInputActualCppName,
                                                                                const GGS__32_stringlist & in_mPoisonedVarNameList,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType, inCompiler COMMA_THERE),
mProperty_mInputActualCppName (),
mProperty_mPoisonedVarNameList () {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mInputActualCppName = in_mInputActualCppName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualParameterForGeneration ;
}

void cPtr_inputActualParameterForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@inputActualParameterForGeneration:") ;
  mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputActualCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputActualParameterForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputActualParameterForGeneration (mProperty_mFormalArgumentType, mProperty_mInputActualCppName, mProperty_mPoisonedVarNameList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputActualParameterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInputActualCppName.printNonNullClassInstanceProperties ("mInputActualCppName") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputActualParameterForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualParameterForGeneration ("inputActualParameterForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_inputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualParameterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualParameterForGeneration GGS_inputActualParameterForGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_inputActualParameterForGeneration result ;
  const GGS_inputActualParameterForGeneration * p = (const GGS_inputActualParameterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexiqueDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexiqueDeclarationForGeneration::objectCompare (const GGS_lexiqueDeclarationForGeneration & inOperand) const {
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

GGS_lexiqueDeclarationForGeneration::GGS_lexiqueDeclarationForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration GGS_lexiqueDeclarationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                 const GGS_string & in_implementationCppFileName,
                                                                                 const GGS_string & in_mLexiqueName,
                                                                                 const GGS_string & in_mSuperLexiqueName,
                                                                                 const GGS_string & in_mHeaderContents,
                                                                                 const GGS_string & in_mCppContents,
                                                                                 const GGS_string & in_mObjcCocoaHeader,
                                                                                 const GGS_string & in_mObjcCocoaImplementation,
                                                                                 const GGS_string & in_mSwiftCocoaImplementation,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cPtr_lexiqueDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_lexiqueDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->lexiqueDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mLexiqueName, in_mSuperLexiqueName, in_mHeaderContents, in_mCppContents, in_mObjcCocoaHeader, in_mObjcCocoaImplementation, in_mSwiftCocoaImplementation, inCompiler) ;
  const GGS_lexiqueDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::
lexiqueDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                                 const GGS_string & in_implementationCppFileName,
                                                                                                                 const GGS_string & in_mLexiqueName,
                                                                                                                 const GGS_string & in_mSuperLexiqueName,
                                                                                                                 const GGS_string & in_mHeaderContents,
                                                                                                                 const GGS_string & in_mCppContents,
                                                                                                                 const GGS_string & in_mObjcCocoaHeader,
                                                                                                                 const GGS_string & in_mObjcCocoaImplementation,
                                                                                                                 const GGS_string & in_mSwiftCocoaImplementation,
                                                                                                                 Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mSuperLexiqueName = in_mSuperLexiqueName ;
  mProperty_mHeaderContents = in_mHeaderContents ;
  mProperty_mCppContents = in_mCppContents ;
  mProperty_mObjcCocoaHeader = in_mObjcCocoaHeader ;
  mProperty_mObjcCocoaImplementation = in_mObjcCocoaImplementation ;
  mProperty_mSwiftCocoaImplementation = in_mSwiftCocoaImplementation ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration::GGS_lexiqueDeclarationForGeneration (const cPtr_lexiqueDeclarationForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration GGS_lexiqueDeclarationForGeneration::class_func_new (const GGS_bool & in_generateHeader,
                                                                                         const GGS_string & in_implementationCppFileName,
                                                                                         const GGS_string & in_mLexiqueName,
                                                                                         const GGS_string & in_mSuperLexiqueName,
                                                                                         const GGS_string & in_mHeaderContents,
                                                                                         const GGS_string & in_mCppContents,
                                                                                         const GGS_string & in_mObjcCocoaHeader,
                                                                                         const GGS_string & in_mObjcCocoaImplementation,
                                                                                         const GGS_string & in_mSwiftCocoaImplementation,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_lexiqueDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_lexiqueDeclarationForGeneration (in_generateHeader, in_implementationCppFileName, in_mLexiqueName, in_mSuperLexiqueName, in_mHeaderContents, in_mCppContents, in_mObjcCocoaHeader, in_mObjcCocoaImplementation, in_mSwiftCocoaImplementation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexiqueDeclarationForGeneration::readProperty_mLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexiqueDeclarationForGeneration::readProperty_mSuperLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mSuperLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexiqueDeclarationForGeneration::readProperty_mHeaderContents (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mHeaderContents ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexiqueDeclarationForGeneration::readProperty_mCppContents (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mCppContents ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexiqueDeclarationForGeneration::readProperty_mObjcCocoaHeader (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mObjcCocoaHeader ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexiqueDeclarationForGeneration::readProperty_mObjcCocoaImplementation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mObjcCocoaImplementation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexiqueDeclarationForGeneration::readProperty_mSwiftCocoaImplementation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mSwiftCocoaImplementation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexiqueDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_lexiqueDeclarationForGeneration::cPtr_lexiqueDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mLexiqueName (),
mProperty_mSuperLexiqueName (),
mProperty_mHeaderContents (),
mProperty_mCppContents (),
mProperty_mObjcCocoaHeader (),
mProperty_mObjcCocoaImplementation (),
mProperty_mSwiftCocoaImplementation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexiqueDeclarationForGeneration::cPtr_lexiqueDeclarationForGeneration (const GGS_bool & in_generateHeader,
                                                                            const GGS_string & in_implementationCppFileName,
                                                                            const GGS_string & in_mLexiqueName,
                                                                            const GGS_string & in_mSuperLexiqueName,
                                                                            const GGS_string & in_mHeaderContents,
                                                                            const GGS_string & in_mCppContents,
                                                                            const GGS_string & in_mObjcCocoaHeader,
                                                                            const GGS_string & in_mObjcCocoaImplementation,
                                                                            const GGS_string & in_mSwiftCocoaImplementation,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mLexiqueName (),
mProperty_mSuperLexiqueName (),
mProperty_mHeaderContents (),
mProperty_mCppContents (),
mProperty_mObjcCocoaHeader (),
mProperty_mObjcCocoaImplementation (),
mProperty_mSwiftCocoaImplementation () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mSuperLexiqueName = in_mSuperLexiqueName ;
  mProperty_mHeaderContents = in_mHeaderContents ;
  mProperty_mCppContents = in_mCppContents ;
  mProperty_mObjcCocoaHeader = in_mObjcCocoaHeader ;
  mProperty_mObjcCocoaImplementation = in_mObjcCocoaImplementation ;
  mProperty_mSwiftCocoaImplementation = in_mSwiftCocoaImplementation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexiqueDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ;
}

void cPtr_lexiqueDeclarationForGeneration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@lexiqueDeclarationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHeaderContents.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppContents.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mObjcCocoaHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mObjcCocoaImplementation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwiftCocoaImplementation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexiqueDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexiqueDeclarationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mLexiqueName, mProperty_mSuperLexiqueName, mProperty_mHeaderContents, mProperty_mCppContents, mProperty_mObjcCocoaHeader, mProperty_mObjcCocoaImplementation, mProperty_mSwiftCocoaImplementation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexiqueDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLexiqueName.printNonNullClassInstanceProperties ("mLexiqueName") ;
    mProperty_mSuperLexiqueName.printNonNullClassInstanceProperties ("mSuperLexiqueName") ;
    mProperty_mHeaderContents.printNonNullClassInstanceProperties ("mHeaderContents") ;
    mProperty_mCppContents.printNonNullClassInstanceProperties ("mCppContents") ;
    mProperty_mObjcCocoaHeader.printNonNullClassInstanceProperties ("mObjcCocoaHeader") ;
    mProperty_mObjcCocoaImplementation.printNonNullClassInstanceProperties ("mObjcCocoaImplementation") ;
    mProperty_mSwiftCocoaImplementation.printNonNullClassInstanceProperties ("mSwiftCocoaImplementation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexiqueDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ("lexiqueDeclarationForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexiqueDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexiqueDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexiqueDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration GGS_lexiqueDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexiqueDeclarationForGeneration result ;
  const GGS_lexiqueDeclarationForGeneration * p = (const GGS_lexiqueDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexiqueDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexiqueDeclarationForGeneration_2E_weak::objectCompare (const GGS_lexiqueDeclarationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_lexiqueDeclarationForGeneration_2E_weak::GGS_lexiqueDeclarationForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration_2E_weak & GGS_lexiqueDeclarationForGeneration_2E_weak::operator = (const GGS_lexiqueDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration_2E_weak::GGS_lexiqueDeclarationForGeneration_2E_weak (const GGS_lexiqueDeclarationForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration_2E_weak GGS_lexiqueDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexiqueDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration GGS_lexiqueDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_lexiqueDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexiqueDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration GGS_lexiqueDeclarationForGeneration_2E_weak::bang_lexiqueDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexiqueDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexiqueDeclarationForGeneration) ;
      result = GGS_lexiqueDeclarationForGeneration ((cPtr_lexiqueDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexiqueDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration_2E_weak ("lexiqueDeclarationForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexiqueDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexiqueDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexiqueDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration_2E_weak GGS_lexiqueDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexiqueDeclarationForGeneration_2E_weak result ;
  const GGS_lexiqueDeclarationForGeneration_2E_weak * p = (const GGS_lexiqueDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexiqueDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @functionPrototypeDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionPrototypeDeclarationForGeneration::objectCompare (const GGS_functionPrototypeDeclarationForGeneration & inOperand) const {
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

GGS_functionPrototypeDeclarationForGeneration::GGS_functionPrototypeDeclarationForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration GGS_functionPrototypeDeclarationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const GGS_bool & in_generateHeader,
                                                                 const GGS_string & in_implementationCppFileName,
                                                                 const GGS_string & in_mFunctionName,
                                                                 const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                 const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cPtr_functionPrototypeDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_functionPrototypeDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->functionPrototypeDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mFormalArgumentList, in_mReturnType, inCompiler) ;
  const GGS_functionPrototypeDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionPrototypeDeclarationForGeneration::
functionPrototypeDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                           const GGS_string & in_implementationCppFileName,
                                                                                                           const GGS_string & in_mFunctionName,
                                                                                                           const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                           const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                           Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mReturnType = in_mReturnType ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration::GGS_functionPrototypeDeclarationForGeneration (const cPtr_functionPrototypeDeclarationForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionPrototypeDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration GGS_functionPrototypeDeclarationForGeneration::class_func_new (const GGS_bool & in_generateHeader,
                                                                                                             const GGS_string & in_implementationCppFileName,
                                                                                                             const GGS_string & in_mFunctionName,
                                                                                                             const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                             const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_functionPrototypeDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_functionPrototypeDeclarationForGeneration (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mFormalArgumentList, in_mReturnType,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_functionPrototypeDeclarationForGeneration::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration GGS_functionPrototypeDeclarationForGeneration::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalInputParameterListForGeneration () ;
  }else{
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_functionPrototypeDeclarationForGeneration::readProperty_mReturnType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    return p->mProperty_mReturnType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionPrototypeDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_functionPrototypeDeclarationForGeneration::cPtr_functionPrototypeDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFormalArgumentList (),
mProperty_mReturnType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_functionPrototypeDeclarationForGeneration::cPtr_functionPrototypeDeclarationForGeneration (const GGS_bool & in_generateHeader,
                                                                                                const GGS_string & in_implementationCppFileName,
                                                                                                const GGS_string & in_mFunctionName,
                                                                                                const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFormalArgumentList (),
mProperty_mReturnType () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mReturnType = in_mReturnType ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_functionPrototypeDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ;
}

void cPtr_functionPrototypeDeclarationForGeneration::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@functionPrototypeDeclarationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_functionPrototypeDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionPrototypeDeclarationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mReturnType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_functionPrototypeDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mFormalArgumentList.printNonNullClassInstanceProperties ("mFormalArgumentList") ;
    mProperty_mReturnType.printNonNullClassInstanceProperties ("mReturnType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @functionPrototypeDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ("functionPrototypeDeclarationForGeneration",
                                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_functionPrototypeDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionPrototypeDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionPrototypeDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration GGS_functionPrototypeDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_functionPrototypeDeclarationForGeneration result ;
  const GGS_functionPrototypeDeclarationForGeneration * p = (const GGS_functionPrototypeDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionPrototypeDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionPrototypeDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionPrototypeDeclarationForGeneration_2E_weak::objectCompare (const GGS_functionPrototypeDeclarationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_functionPrototypeDeclarationForGeneration_2E_weak::GGS_functionPrototypeDeclarationForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration_2E_weak & GGS_functionPrototypeDeclarationForGeneration_2E_weak::operator = (const GGS_functionPrototypeDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration_2E_weak::GGS_functionPrototypeDeclarationForGeneration_2E_weak (const GGS_functionPrototypeDeclarationForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration_2E_weak GGS_functionPrototypeDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_functionPrototypeDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration GGS_functionPrototypeDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_functionPrototypeDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_functionPrototypeDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration GGS_functionPrototypeDeclarationForGeneration_2E_weak::bang_functionPrototypeDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_functionPrototypeDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionPrototypeDeclarationForGeneration) ;
      result = GGS_functionPrototypeDeclarationForGeneration ((cPtr_functionPrototypeDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @functionPrototypeDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2E_weak ("functionPrototypeDeclarationForGeneration.weak",
                                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_functionPrototypeDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionPrototypeDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionPrototypeDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration_2E_weak GGS_functionPrototypeDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_functionPrototypeDeclarationForGeneration_2E_weak result ;
  const GGS_functionPrototypeDeclarationForGeneration_2E_weak * p = (const GGS_functionPrototypeDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionPrototypeDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionPrototypeDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @functionImplementationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionImplementationForGeneration::objectCompare (const GGS_functionImplementationForGeneration & inOperand) const {
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

GGS_functionImplementationForGeneration::GGS_functionImplementationForGeneration (void) :
GGS_functionPrototypeDeclarationForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_functionImplementationForGeneration GGS_functionImplementationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                         const GGS_string & in_implementationCppFileName,
                                                                         const GGS_string & in_mFunctionName,
                                                                         const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                         const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                         const GGS_string & in_mResultVariableCppName,
                                                                         const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cPtr_functionImplementationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_functionImplementationForGeneration (inCompiler COMMA_THERE)) ;
  object->functionImplementationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mFormalArgumentList, in_mReturnType, in_mResultVariableCppName, in_mFunctionInstructionList, inCompiler) ;
  const GGS_functionImplementationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionImplementationForGeneration::
functionImplementationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                             const GGS_string & in_implementationCppFileName,
                                                                                                             const GGS_string & in_mFunctionName,
                                                                                                             const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                             const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                             const GGS_string & in_mResultVariableCppName,
                                                                                                             const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                                                             Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mReturnType = in_mReturnType ;
  mProperty_mResultVariableCppName = in_mResultVariableCppName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration::GGS_functionImplementationForGeneration (const cPtr_functionImplementationForGeneration * inSourcePtr) :
GGS_functionPrototypeDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionImplementationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration GGS_functionImplementationForGeneration::class_func_new (const GGS_bool & in_generateHeader,
                                                                                                 const GGS_string & in_implementationCppFileName,
                                                                                                 const GGS_string & in_mFunctionName,
                                                                                                 const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                 const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                 const GGS_string & in_mResultVariableCppName,
                                                                                                 const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_functionImplementationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_functionImplementationForGeneration (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mFormalArgumentList, in_mReturnType, in_mResultVariableCppName, in_mFunctionInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_functionImplementationForGeneration::readProperty_mResultVariableCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_functionImplementationForGeneration * p = (cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    return p->mProperty_mResultVariableCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_functionImplementationForGeneration::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_functionImplementationForGeneration * p = (cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionImplementationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_functionImplementationForGeneration::cPtr_functionImplementationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_functionPrototypeDeclarationForGeneration (inCompiler COMMA_THERE),
mProperty_mResultVariableCppName (),
mProperty_mFunctionInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_functionImplementationForGeneration::cPtr_functionImplementationForGeneration (const GGS_bool & in_generateHeader,
                                                                                    const GGS_string & in_implementationCppFileName,
                                                                                    const GGS_string & in_mFunctionName,
                                                                                    const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                    const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                    const GGS_string & in_mResultVariableCppName,
                                                                                    const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_functionPrototypeDeclarationForGeneration (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mFormalArgumentList, in_mReturnType, inCompiler COMMA_THERE),
mProperty_mResultVariableCppName (),
mProperty_mFunctionInstructionList () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mReturnType = in_mReturnType ;
  mProperty_mResultVariableCppName = in_mResultVariableCppName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_functionImplementationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration ;
}

void cPtr_functionImplementationForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@functionImplementationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultVariableCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_functionImplementationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionImplementationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mReturnType, mProperty_mResultVariableCppName, mProperty_mFunctionInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_functionImplementationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_functionPrototypeDeclarationForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mResultVariableCppName.printNonNullClassInstanceProperties ("mResultVariableCppName") ;
    mProperty_mFunctionInstructionList.printNonNullClassInstanceProperties ("mFunctionInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @functionImplementationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionImplementationForGeneration ("functionImplementationForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_functionImplementationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionImplementationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionImplementationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration GGS_functionImplementationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_functionImplementationForGeneration result ;
  const GGS_functionImplementationForGeneration * p = (const GGS_functionImplementationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionImplementationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionImplementationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionImplementationForGeneration_2E_weak::objectCompare (const GGS_functionImplementationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_functionImplementationForGeneration_2E_weak::GGS_functionImplementationForGeneration_2E_weak (void) :
GGS_functionPrototypeDeclarationForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration_2E_weak & GGS_functionImplementationForGeneration_2E_weak::operator = (const GGS_functionImplementationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration_2E_weak::GGS_functionImplementationForGeneration_2E_weak (const GGS_functionImplementationForGeneration & inSource) :
GGS_functionPrototypeDeclarationForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration_2E_weak GGS_functionImplementationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_functionImplementationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration GGS_functionImplementationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_functionImplementationForGeneration result ;
  if (isValid ()) {
    const cPtr_functionImplementationForGeneration * p = (cPtr_functionImplementationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_functionImplementationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration GGS_functionImplementationForGeneration_2E_weak::bang_functionImplementationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_functionImplementationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionImplementationForGeneration) ;
      result = GGS_functionImplementationForGeneration ((cPtr_functionImplementationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @functionImplementationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionImplementationForGeneration_2E_weak ("functionImplementationForGeneration.weak",
                                                                                                   & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_functionImplementationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionImplementationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionImplementationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration_2E_weak GGS_functionImplementationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_functionImplementationForGeneration_2E_weak result ;
  const GGS_functionImplementationForGeneration_2E_weak * p = (const GGS_functionImplementationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionImplementationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionImplementationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @onceFunctionDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_onceFunctionDeclarationForGeneration::objectCompare (const GGS_onceFunctionDeclarationForGeneration & inOperand) const {
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

GGS_onceFunctionDeclarationForGeneration::GGS_onceFunctionDeclarationForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration GGS_onceFunctionDeclarationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                     const GGS_string & in_implementationCppFileName,
                                                                     const GGS_string & in_mFunctionName,
                                                                     const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                     const GGS_string & in_mResultVariableCppName,
                                                                     const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cPtr_onceFunctionDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_onceFunctionDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->onceFunctionDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mReturnType, in_mResultVariableCppName, in_mFunctionInstructionList, inCompiler) ;
  const GGS_onceFunctionDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::
onceFunctionDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                          const GGS_string & in_implementationCppFileName,
                                                                                                          const GGS_string & in_mFunctionName,
                                                                                                          const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                          const GGS_string & in_mResultVariableCppName,
                                                                                                          const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                                                          Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mReturnType = in_mReturnType ;
  mProperty_mResultVariableCppName = in_mResultVariableCppName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration::GGS_onceFunctionDeclarationForGeneration (const cPtr_onceFunctionDeclarationForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_onceFunctionDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration GGS_onceFunctionDeclarationForGeneration::class_func_new (const GGS_bool & in_generateHeader,
                                                                                                   const GGS_string & in_implementationCppFileName,
                                                                                                   const GGS_string & in_mFunctionName,
                                                                                                   const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                   const GGS_string & in_mResultVariableCppName,
                                                                                                   const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_onceFunctionDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_onceFunctionDeclarationForGeneration (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mReturnType, in_mResultVariableCppName, in_mFunctionInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_onceFunctionDeclarationForGeneration::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_onceFunctionDeclarationForGeneration::readProperty_mReturnType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mReturnType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_onceFunctionDeclarationForGeneration::readProperty_mResultVariableCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mResultVariableCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_onceFunctionDeclarationForGeneration::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @onceFunctionDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationForGeneration::cPtr_onceFunctionDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mReturnType (),
mProperty_mResultVariableCppName (),
mProperty_mFunctionInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationForGeneration::cPtr_onceFunctionDeclarationForGeneration (const GGS_bool & in_generateHeader,
                                                                                      const GGS_string & in_implementationCppFileName,
                                                                                      const GGS_string & in_mFunctionName,
                                                                                      const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                      const GGS_string & in_mResultVariableCppName,
                                                                                      const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mReturnType (),
mProperty_mResultVariableCppName (),
mProperty_mFunctionInstructionList () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mReturnType = in_mReturnType ;
  mProperty_mResultVariableCppName = in_mResultVariableCppName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_onceFunctionDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ;
}

void cPtr_onceFunctionDeclarationForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@onceFunctionDeclarationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultVariableCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_onceFunctionDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_onceFunctionDeclarationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mFunctionName, mProperty_mReturnType, mProperty_mResultVariableCppName, mProperty_mFunctionInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_onceFunctionDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mReturnType.printNonNullClassInstanceProperties ("mReturnType") ;
    mProperty_mResultVariableCppName.printNonNullClassInstanceProperties ("mResultVariableCppName") ;
    mProperty_mFunctionInstructionList.printNonNullClassInstanceProperties ("mFunctionInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @onceFunctionDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ("onceFunctionDeclarationForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_onceFunctionDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_onceFunctionDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_onceFunctionDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration GGS_onceFunctionDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_onceFunctionDeclarationForGeneration result ;
  const GGS_onceFunctionDeclarationForGeneration * p = (const GGS_onceFunctionDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_onceFunctionDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_onceFunctionDeclarationForGeneration_2E_weak::objectCompare (const GGS_onceFunctionDeclarationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_onceFunctionDeclarationForGeneration_2E_weak::GGS_onceFunctionDeclarationForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration_2E_weak & GGS_onceFunctionDeclarationForGeneration_2E_weak::operator = (const GGS_onceFunctionDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration_2E_weak::GGS_onceFunctionDeclarationForGeneration_2E_weak (const GGS_onceFunctionDeclarationForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration_2E_weak GGS_onceFunctionDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_onceFunctionDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration GGS_onceFunctionDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_onceFunctionDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_onceFunctionDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration GGS_onceFunctionDeclarationForGeneration_2E_weak::bang_onceFunctionDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_onceFunctionDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_onceFunctionDeclarationForGeneration) ;
      result = GGS_onceFunctionDeclarationForGeneration ((cPtr_onceFunctionDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @onceFunctionDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration_2E_weak ("onceFunctionDeclarationForGeneration.weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_onceFunctionDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_onceFunctionDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_onceFunctionDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration_2E_weak GGS_onceFunctionDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_onceFunctionDeclarationForGeneration_2E_weak result ;
  const GGS_onceFunctionDeclarationForGeneration_2E_weak * p = (const GGS_onceFunctionDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_onceFunctionDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperDeclarationForGeneration::objectCompare (const GGS_filewrapperDeclarationForGeneration & inOperand) const {
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

GGS_filewrapperDeclarationForGeneration::GGS_filewrapperDeclarationForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration GGS_filewrapperDeclarationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                         const GGS_string & in_implementationCppFileName,
                                                                         const GGS_string & in_mFilewrapperName,
                                                                         const GGS_string & in_mFilewrapperAbsolutePath,
                                                                         const GGS_wrapperFileMap & in_mFilewrapperFileMap,
                                                                         const GGS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                                         const GGS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cPtr_filewrapperDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->filewrapperDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mFilewrapperName, in_mFilewrapperAbsolutePath, in_mFilewrapperFileMap, in_mFilewrapperDirectoryMap, in_mFilewrapperTemplateListForGeneration, inCompiler) ;
  const GGS_filewrapperDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::
filewrapperDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                             const GGS_string & in_implementationCppFileName,
                                                                                                             const GGS_string & in_mFilewrapperName,
                                                                                                             const GGS_string & in_mFilewrapperAbsolutePath,
                                                                                                             const GGS_wrapperFileMap & in_mFilewrapperFileMap,
                                                                                                             const GGS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                                                                             const GGS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration,
                                                                                                             Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperAbsolutePath = in_mFilewrapperAbsolutePath ;
  mProperty_mFilewrapperFileMap = in_mFilewrapperFileMap ;
  mProperty_mFilewrapperDirectoryMap = in_mFilewrapperDirectoryMap ;
  mProperty_mFilewrapperTemplateListForGeneration = in_mFilewrapperTemplateListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration::GGS_filewrapperDeclarationForGeneration (const cPtr_filewrapperDeclarationForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration GGS_filewrapperDeclarationForGeneration::class_func_new (const GGS_bool & in_generateHeader,
                                                                                                 const GGS_string & in_implementationCppFileName,
                                                                                                 const GGS_string & in_mFilewrapperName,
                                                                                                 const GGS_string & in_mFilewrapperAbsolutePath,
                                                                                                 const GGS_wrapperFileMap & in_mFilewrapperFileMap,
                                                                                                 const GGS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                                                                 const GGS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_filewrapperDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_filewrapperDeclarationForGeneration (in_generateHeader, in_implementationCppFileName, in_mFilewrapperName, in_mFilewrapperAbsolutePath, in_mFilewrapperFileMap, in_mFilewrapperDirectoryMap, in_mFilewrapperTemplateListForGeneration,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperAbsolutePath (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperAbsolutePath ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap GGS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperFileMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_wrapperFileMap () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperFileMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap GGS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperDirectoryMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_wrapperDirectoryMap () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperDirectoryMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperTemplateListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_filewrapperTemplateListForGeneration () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperTemplateListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperDeclarationForGeneration::cPtr_filewrapperDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperAbsolutePath (),
mProperty_mFilewrapperFileMap (),
mProperty_mFilewrapperDirectoryMap (),
mProperty_mFilewrapperTemplateListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_filewrapperDeclarationForGeneration::cPtr_filewrapperDeclarationForGeneration (const GGS_bool & in_generateHeader,
                                                                                    const GGS_string & in_implementationCppFileName,
                                                                                    const GGS_string & in_mFilewrapperName,
                                                                                    const GGS_string & in_mFilewrapperAbsolutePath,
                                                                                    const GGS_wrapperFileMap & in_mFilewrapperFileMap,
                                                                                    const GGS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                                                    const GGS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperAbsolutePath (),
mProperty_mFilewrapperFileMap (),
mProperty_mFilewrapperDirectoryMap (),
mProperty_mFilewrapperTemplateListForGeneration () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperAbsolutePath = in_mFilewrapperAbsolutePath ;
  mProperty_mFilewrapperFileMap = in_mFilewrapperFileMap ;
  mProperty_mFilewrapperDirectoryMap = in_mFilewrapperDirectoryMap ;
  mProperty_mFilewrapperTemplateListForGeneration = in_mFilewrapperTemplateListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_filewrapperDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ;
}

void cPtr_filewrapperDeclarationForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperDeclarationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperAbsolutePath.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperFileMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperDirectoryMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperTemplateListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperDeclarationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mFilewrapperName, mProperty_mFilewrapperAbsolutePath, mProperty_mFilewrapperFileMap, mProperty_mFilewrapperDirectoryMap, mProperty_mFilewrapperTemplateListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
    mProperty_mFilewrapperAbsolutePath.printNonNullClassInstanceProperties ("mFilewrapperAbsolutePath") ;
    mProperty_mFilewrapperFileMap.printNonNullClassInstanceProperties ("mFilewrapperFileMap") ;
    mProperty_mFilewrapperDirectoryMap.printNonNullClassInstanceProperties ("mFilewrapperDirectoryMap") ;
    mProperty_mFilewrapperTemplateListForGeneration.printNonNullClassInstanceProperties ("mFilewrapperTemplateListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @filewrapperDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ("filewrapperDeclarationForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_filewrapperDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration GGS_filewrapperDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_filewrapperDeclarationForGeneration result ;
  const GGS_filewrapperDeclarationForGeneration * p = (const GGS_filewrapperDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperDeclarationForGeneration_2E_weak::objectCompare (const GGS_filewrapperDeclarationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_filewrapperDeclarationForGeneration_2E_weak::GGS_filewrapperDeclarationForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration_2E_weak & GGS_filewrapperDeclarationForGeneration_2E_weak::operator = (const GGS_filewrapperDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration_2E_weak::GGS_filewrapperDeclarationForGeneration_2E_weak (const GGS_filewrapperDeclarationForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration_2E_weak GGS_filewrapperDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_filewrapperDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration GGS_filewrapperDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_filewrapperDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_filewrapperDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration GGS_filewrapperDeclarationForGeneration_2E_weak::bang_filewrapperDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_filewrapperDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperDeclarationForGeneration) ;
      result = GGS_filewrapperDeclarationForGeneration ((cPtr_filewrapperDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration_2E_weak ("filewrapperDeclarationForGeneration.weak",
                                                                                                   & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_filewrapperDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration_2E_weak GGS_filewrapperDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_filewrapperDeclarationForGeneration_2E_weak result ;
  const GGS_filewrapperDeclarationForGeneration_2E_weak * p = (const GGS_filewrapperDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @programComponentForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_programComponentForGeneration::objectCompare (const GGS_programComponentForGeneration & inOperand) const {
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

GGS_programComponentForGeneration::GGS_programComponentForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_programComponentForGeneration GGS_programComponentForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21_ (const GGS_bool & in_generateHeader,
                                                             const GGS_string & in_implementationCppFileName,
                                                             const GGS_stringset & in_mInclusionSet,
                                                             const GGS_string & in_mImplementationString,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cPtr_programComponentForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_programComponentForGeneration (inCompiler COMMA_THERE)) ;
  object->programComponentForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21_ (in_generateHeader, in_implementationCppFileName, in_mInclusionSet, in_mImplementationString, inCompiler) ;
  const GGS_programComponentForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_programComponentForGeneration::
programComponentForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21_ (const GGS_bool & in_generateHeader,
                                                                                           const GGS_string & in_implementationCppFileName,
                                                                                           const GGS_stringset & in_mInclusionSet,
                                                                                           const GGS_string & in_mImplementationString,
                                                                                           Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mInclusionSet = in_mInclusionSet ;
  mProperty_mImplementationString = in_mImplementationString ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration::GGS_programComponentForGeneration (const cPtr_programComponentForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_programComponentForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration GGS_programComponentForGeneration::class_func_new (const GGS_bool & in_generateHeader,
                                                                                     const GGS_string & in_implementationCppFileName,
                                                                                     const GGS_stringset & in_mInclusionSet,
                                                                                     const GGS_string & in_mImplementationString,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_programComponentForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_programComponentForGeneration (in_generateHeader, in_implementationCppFileName, in_mInclusionSet, in_mImplementationString,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_programComponentForGeneration::readProperty_mInclusionSet (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringset () ;
  }else{
    cPtr_programComponentForGeneration * p = (cPtr_programComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_programComponentForGeneration) ;
    return p->mProperty_mInclusionSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_programComponentForGeneration::readProperty_mImplementationString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_programComponentForGeneration * p = (cPtr_programComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_programComponentForGeneration) ;
    return p->mProperty_mImplementationString ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @programComponentForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_programComponentForGeneration::cPtr_programComponentForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mInclusionSet (),
mProperty_mImplementationString () {
}

//--------------------------------------------------------------------------------------------------

cPtr_programComponentForGeneration::cPtr_programComponentForGeneration (const GGS_bool & in_generateHeader,
                                                                        const GGS_string & in_implementationCppFileName,
                                                                        const GGS_stringset & in_mInclusionSet,
                                                                        const GGS_string & in_mImplementationString,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mInclusionSet (),
mProperty_mImplementationString () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mInclusionSet = in_mInclusionSet ;
  mProperty_mImplementationString = in_mImplementationString ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_programComponentForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programComponentForGeneration ;
}

void cPtr_programComponentForGeneration::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@programComponentForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInclusionSet.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplementationString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_programComponentForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_programComponentForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mInclusionSet, mProperty_mImplementationString, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_programComponentForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInclusionSet.printNonNullClassInstanceProperties ("mInclusionSet") ;
    mProperty_mImplementationString.printNonNullClassInstanceProperties ("mImplementationString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @programComponentForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programComponentForGeneration ("programComponentForGeneration",
                                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_programComponentForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programComponentForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_programComponentForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_programComponentForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration GGS_programComponentForGeneration::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_programComponentForGeneration result ;
  const GGS_programComponentForGeneration * p = (const GGS_programComponentForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_programComponentForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programComponentForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_programComponentForGeneration_2E_weak::objectCompare (const GGS_programComponentForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_programComponentForGeneration_2E_weak::GGS_programComponentForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration_2E_weak & GGS_programComponentForGeneration_2E_weak::operator = (const GGS_programComponentForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration_2E_weak::GGS_programComponentForGeneration_2E_weak (const GGS_programComponentForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration_2E_weak GGS_programComponentForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_programComponentForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration GGS_programComponentForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_programComponentForGeneration result ;
  if (isValid ()) {
    const cPtr_programComponentForGeneration * p = (cPtr_programComponentForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_programComponentForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration GGS_programComponentForGeneration_2E_weak::bang_programComponentForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_programComponentForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_programComponentForGeneration) ;
      result = GGS_programComponentForGeneration ((cPtr_programComponentForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @programComponentForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programComponentForGeneration_2E_weak ("programComponentForGeneration.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_programComponentForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programComponentForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_programComponentForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_programComponentForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration_2E_weak GGS_programComponentForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_programComponentForGeneration_2E_weak result ;
  const GGS_programComponentForGeneration_2E_weak * p = (const GGS_programComponentForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_programComponentForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programComponentForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeGrammarInstructionSDT'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeGrammarInstructionSDT (cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                       const GGS_analysisContext constin_inAnalysisContext,
                                                       GGS_unifiedTypeMap & io_ioTypeMap,
                                                       const GGS_bool constin_inHasTranslateFeature,
                                                       const GGS_string constin_inSyntaxDirectedTranslationResultVarName,
                                                       GGS_stringlist & io_ioAssignementList,
                                                       GGS_localVarManager & io_ioVariableMap,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
    inObject->method_analyzeGrammarInstructionSDT (constin_inAnalysisContext, io_ioTypeMap, constin_inHasTranslateFeature, constin_inSyntaxDirectedTranslationResultVarName, io_ioAssignementList, io_ioVariableMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @grammarForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarForGeneration::objectCompare (const GGS_grammarForGeneration & inOperand) const {
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

GGS_grammarForGeneration::GGS_grammarForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_grammarForGeneration GGS_grammarForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                     const GGS_string & in_implementationCppFileName,
                                                                                     const GGS_string & in_mGrammarName,
                                                                                     const GGS_string & in_mLexiqueName,
                                                                                     const GGS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                                                                     const GGS_nonTerminalToAddList & in_mNonTerminalToAddList,
                                                                                     const GGS_lstringlist & in_mSyntaxComponents,
                                                                                     const GGS_string & in_mStartSymbolName,
                                                                                     const GGS_bool & in_mHasTranslateFeature,
                                                                                     const GGS_string & in_mCppFileContents,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cPtr_grammarForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_grammarForGeneration (inCompiler COMMA_THERE)) ;
  object->grammarForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mGrammarName, in_mLexiqueName, in_mNonTerminalMapForGrammarAnalysis, in_mNonTerminalToAddList, in_mSyntaxComponents, in_mStartSymbolName, in_mHasTranslateFeature, in_mCppFileContents, inCompiler) ;
  const GGS_grammarForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::
grammarForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                          const GGS_string & in_implementationCppFileName,
                                                                                                          const GGS_string & in_mGrammarName,
                                                                                                          const GGS_string & in_mLexiqueName,
                                                                                                          const GGS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                                                                                          const GGS_nonTerminalToAddList & in_mNonTerminalToAddList,
                                                                                                          const GGS_lstringlist & in_mSyntaxComponents,
                                                                                                          const GGS_string & in_mStartSymbolName,
                                                                                                          const GGS_bool & in_mHasTranslateFeature,
                                                                                                          const GGS_string & in_mCppFileContents,
                                                                                                          Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mGrammarName = in_mGrammarName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonTerminalMapForGrammarAnalysis = in_mNonTerminalMapForGrammarAnalysis ;
  mProperty_mNonTerminalToAddList = in_mNonTerminalToAddList ;
  mProperty_mSyntaxComponents = in_mSyntaxComponents ;
  mProperty_mStartSymbolName = in_mStartSymbolName ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
  mProperty_mCppFileContents = in_mCppFileContents ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarForGeneration::GGS_grammarForGeneration (const cPtr_grammarForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_grammarForGeneration GGS_grammarForGeneration::class_func_new (const GGS_bool & in_generateHeader,
                                                                   const GGS_string & in_implementationCppFileName,
                                                                   const GGS_string & in_mGrammarName,
                                                                   const GGS_string & in_mLexiqueName,
                                                                   const GGS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                                                   const GGS_nonTerminalToAddList & in_mNonTerminalToAddList,
                                                                   const GGS_lstringlist & in_mSyntaxComponents,
                                                                   const GGS_string & in_mStartSymbolName,
                                                                   const GGS_bool & in_mHasTranslateFeature,
                                                                   const GGS_string & in_mCppFileContents,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_grammarForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_grammarForGeneration (in_generateHeader, in_implementationCppFileName, in_mGrammarName, in_mLexiqueName, in_mNonTerminalMapForGrammarAnalysis, in_mNonTerminalToAddList, in_mSyntaxComponents, in_mStartSymbolName, in_mHasTranslateFeature, in_mCppFileContents,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarForGeneration::readProperty_mGrammarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mGrammarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarForGeneration::readProperty_mLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis GGS_grammarForGeneration::readProperty_mNonTerminalMapForGrammarAnalysis (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_nonTerminalSymbolMapForGrammarAnalysis () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mNonTerminalMapForGrammarAnalysis ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_grammarForGeneration::readProperty_mNonTerminalToAddList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_nonTerminalToAddList () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mNonTerminalToAddList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_grammarForGeneration::readProperty_mSyntaxComponents (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mSyntaxComponents ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarForGeneration::readProperty_mStartSymbolName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mStartSymbolName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_grammarForGeneration::readProperty_mHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarForGeneration::readProperty_mCppFileContents (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mCppFileContents ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_grammarForGeneration::cPtr_grammarForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mGrammarName (),
mProperty_mLexiqueName (),
mProperty_mNonTerminalMapForGrammarAnalysis (),
mProperty_mNonTerminalToAddList (),
mProperty_mSyntaxComponents (),
mProperty_mStartSymbolName (),
mProperty_mHasTranslateFeature (),
mProperty_mCppFileContents () {
}

//--------------------------------------------------------------------------------------------------

cPtr_grammarForGeneration::cPtr_grammarForGeneration (const GGS_bool & in_generateHeader,
                                                      const GGS_string & in_implementationCppFileName,
                                                      const GGS_string & in_mGrammarName,
                                                      const GGS_string & in_mLexiqueName,
                                                      const GGS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                                      const GGS_nonTerminalToAddList & in_mNonTerminalToAddList,
                                                      const GGS_lstringlist & in_mSyntaxComponents,
                                                      const GGS_string & in_mStartSymbolName,
                                                      const GGS_bool & in_mHasTranslateFeature,
                                                      const GGS_string & in_mCppFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mGrammarName (),
mProperty_mLexiqueName (),
mProperty_mNonTerminalMapForGrammarAnalysis (),
mProperty_mNonTerminalToAddList (),
mProperty_mSyntaxComponents (),
mProperty_mStartSymbolName (),
mProperty_mHasTranslateFeature (),
mProperty_mCppFileContents () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mGrammarName = in_mGrammarName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonTerminalMapForGrammarAnalysis = in_mNonTerminalMapForGrammarAnalysis ;
  mProperty_mNonTerminalToAddList = in_mNonTerminalToAddList ;
  mProperty_mSyntaxComponents = in_mSyntaxComponents ;
  mProperty_mStartSymbolName = in_mStartSymbolName ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
  mProperty_mCppFileContents = in_mCppFileContents ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarForGeneration ;
}

void cPtr_grammarForGeneration::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@grammarForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonTerminalMapForGrammarAnalysis.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonTerminalToAddList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxComponents.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStartSymbolName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppFileContents.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mGrammarName, mProperty_mLexiqueName, mProperty_mNonTerminalMapForGrammarAnalysis, mProperty_mNonTerminalToAddList, mProperty_mSyntaxComponents, mProperty_mStartSymbolName, mProperty_mHasTranslateFeature, mProperty_mCppFileContents, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mGrammarName.printNonNullClassInstanceProperties ("mGrammarName") ;
    mProperty_mLexiqueName.printNonNullClassInstanceProperties ("mLexiqueName") ;
    mProperty_mNonTerminalMapForGrammarAnalysis.printNonNullClassInstanceProperties ("mNonTerminalMapForGrammarAnalysis") ;
    mProperty_mNonTerminalToAddList.printNonNullClassInstanceProperties ("mNonTerminalToAddList") ;
    mProperty_mSyntaxComponents.printNonNullClassInstanceProperties ("mSyntaxComponents") ;
    mProperty_mStartSymbolName.printNonNullClassInstanceProperties ("mStartSymbolName") ;
    mProperty_mHasTranslateFeature.printNonNullClassInstanceProperties ("mHasTranslateFeature") ;
    mProperty_mCppFileContents.printNonNullClassInstanceProperties ("mCppFileContents") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @grammarForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarForGeneration ("grammarForGeneration",
                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarForGeneration GGS_grammarForGeneration::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_grammarForGeneration result ;
  const GGS_grammarForGeneration * p = (const GGS_grammarForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarForGeneration_2E_weak::objectCompare (const GGS_grammarForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_grammarForGeneration_2E_weak::GGS_grammarForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarForGeneration_2E_weak & GGS_grammarForGeneration_2E_weak::operator = (const GGS_grammarForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarForGeneration_2E_weak::GGS_grammarForGeneration_2E_weak (const GGS_grammarForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarForGeneration_2E_weak GGS_grammarForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarForGeneration GGS_grammarForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_grammarForGeneration result ;
  if (isValid ()) {
    const cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarForGeneration GGS_grammarForGeneration_2E_weak::bang_grammarForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarForGeneration) ;
      result = GGS_grammarForGeneration ((cPtr_grammarForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarForGeneration_2E_weak ("grammarForGeneration.weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarForGeneration_2E_weak GGS_grammarForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_grammarForGeneration_2E_weak result ;
  const GGS_grammarForGeneration_2E_weak * p = (const GGS_grammarForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @primitiveTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_primitiveTypeForGeneration::objectCompare (const GGS_primitiveTypeForGeneration & inOperand) const {
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

GGS_primitiveTypeForGeneration::GGS_primitiveTypeForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_primitiveTypeForGeneration GGS_primitiveTypeForGeneration::
init_21__21__21__21_isPackage (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                               const GGS_string & in_mPredefinedTypeName,
                               const GGS_string & in_mCppDeclarationString,
                               const GGS_bool & in_isPackage,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) {
  cPtr_primitiveTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_primitiveTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->primitiveTypeForGeneration_init_21__21__21__21_isPackage (in_mSelfTypeEntry, in_mPredefinedTypeName, in_mCppDeclarationString, in_isPackage, inCompiler) ;
  const GGS_primitiveTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_primitiveTypeForGeneration::
primitiveTypeForGeneration_init_21__21__21__21_isPackage (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                          const GGS_string & in_mPredefinedTypeName,
                                                          const GGS_string & in_mCppDeclarationString,
                                                          const GGS_bool & in_isPackage,
                                                          Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
  mProperty_mCppDeclarationString = in_mCppDeclarationString ;
  mProperty_isPackage = in_isPackage ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveTypeForGeneration::GGS_primitiveTypeForGeneration (const cPtr_primitiveTypeForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_primitiveTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_primitiveTypeForGeneration GGS_primitiveTypeForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                               const GGS_string & in_mPredefinedTypeName,
                                                                               const GGS_string & in_mCppDeclarationString,
                                                                               const GGS_bool & in_isPackage,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_primitiveTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_primitiveTypeForGeneration (in_mSelfTypeEntry, in_mPredefinedTypeName, in_mCppDeclarationString, in_isPackage,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_primitiveTypeForGeneration::readProperty_mPredefinedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_primitiveTypeForGeneration * p = (cPtr_primitiveTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primitiveTypeForGeneration) ;
    return p->mProperty_mPredefinedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_primitiveTypeForGeneration::readProperty_mCppDeclarationString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_primitiveTypeForGeneration * p = (cPtr_primitiveTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primitiveTypeForGeneration) ;
    return p->mProperty_mCppDeclarationString ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_primitiveTypeForGeneration::readProperty_isPackage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_primitiveTypeForGeneration * p = (cPtr_primitiveTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primitiveTypeForGeneration) ;
    return p->mProperty_isPackage ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @primitiveTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_primitiveTypeForGeneration::cPtr_primitiveTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mPredefinedTypeName (),
mProperty_mCppDeclarationString (),
mProperty_isPackage () {
}

//--------------------------------------------------------------------------------------------------

cPtr_primitiveTypeForGeneration::cPtr_primitiveTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                  const GGS_string & in_mPredefinedTypeName,
                                                                  const GGS_string & in_mCppDeclarationString,
                                                                  const GGS_bool & in_isPackage,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_mPredefinedTypeName (),
mProperty_mCppDeclarationString (),
mProperty_isPackage () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
  mProperty_mCppDeclarationString = in_mCppDeclarationString ;
  mProperty_isPackage = in_isPackage ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_primitiveTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveTypeForGeneration ;
}

void cPtr_primitiveTypeForGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@primitiveTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppDeclarationString.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isPackage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_primitiveTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_primitiveTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mPredefinedTypeName, mProperty_mCppDeclarationString, mProperty_isPackage, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_primitiveTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mPredefinedTypeName.printNonNullClassInstanceProperties ("mPredefinedTypeName") ;
    mProperty_mCppDeclarationString.printNonNullClassInstanceProperties ("mCppDeclarationString") ;
    mProperty_isPackage.printNonNullClassInstanceProperties ("isPackage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @primitiveTypeForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primitiveTypeForGeneration ("primitiveTypeForGeneration",
                                                                                  & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_primitiveTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_primitiveTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_primitiveTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveTypeForGeneration GGS_primitiveTypeForGeneration::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_primitiveTypeForGeneration result ;
  const GGS_primitiveTypeForGeneration * p = (const GGS_primitiveTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_primitiveTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primitiveTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_primitiveTypeForGeneration_2E_weak::objectCompare (const GGS_primitiveTypeForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_primitiveTypeForGeneration_2E_weak::GGS_primitiveTypeForGeneration_2E_weak (void) :
GGS_semanticTypeForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveTypeForGeneration_2E_weak & GGS_primitiveTypeForGeneration_2E_weak::operator = (const GGS_primitiveTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveTypeForGeneration_2E_weak::GGS_primitiveTypeForGeneration_2E_weak (const GGS_primitiveTypeForGeneration & inSource) :
GGS_semanticTypeForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_primitiveTypeForGeneration_2E_weak GGS_primitiveTypeForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_primitiveTypeForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveTypeForGeneration GGS_primitiveTypeForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_primitiveTypeForGeneration result ;
  if (isValid ()) {
    const cPtr_primitiveTypeForGeneration * p = (cPtr_primitiveTypeForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_primitiveTypeForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveTypeForGeneration GGS_primitiveTypeForGeneration_2E_weak::bang_primitiveTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_primitiveTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_primitiveTypeForGeneration) ;
      result = GGS_primitiveTypeForGeneration ((cPtr_primitiveTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @primitiveTypeForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primitiveTypeForGeneration_2E_weak ("primitiveTypeForGeneration.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_primitiveTypeForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveTypeForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_primitiveTypeForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_primitiveTypeForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveTypeForGeneration_2E_weak GGS_primitiveTypeForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_primitiveTypeForGeneration_2E_weak result ;
  const GGS_primitiveTypeForGeneration_2E_weak * p = (const GGS_primitiveTypeForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_primitiveTypeForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primitiveTypeForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @binaryOperatorExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_binaryOperatorExpressionForGeneration::objectCompare (const GGS_binaryOperatorExpressionForGeneration & inOperand) const {
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

GGS_binaryOperatorExpressionForGeneration::GGS_binaryOperatorExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration GGS_binaryOperatorExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                          const GGS_binaryOperator & in_mOperator,
                          const GGS_semanticExpressionForGeneration & in_mRightExpression,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_binaryOperatorExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_binaryOperatorExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->binaryOperatorExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mLeftExpression, in_mOperator, in_mRightExpression, inCompiler) ;
  const GGS_binaryOperatorExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperatorExpressionForGeneration::
binaryOperatorExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                const GGS_location & in_mLocation,
                                                                const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                const GGS_binaryOperator & in_mOperator,
                                                                const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                                Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mOperator = in_mOperator ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration::GGS_binaryOperatorExpressionForGeneration (const cPtr_binaryOperatorExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_binaryOperatorExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration GGS_binaryOperatorExpressionForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                     const GGS_location & in_mLocation,
                                                                                                     const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                                     const GGS_binaryOperator & in_mOperator,
                                                                                                     const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_binaryOperatorExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_binaryOperatorExpressionForGeneration (in_mResultType, in_mLocation, in_mLeftExpression, in_mOperator, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_binaryOperatorExpressionForGeneration::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_binaryOperatorExpressionForGeneration * p = (cPtr_binaryOperatorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperatorExpressionForGeneration) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperatorExpressionForGeneration::readProperty_mOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_binaryOperator () ;
  }else{
    cPtr_binaryOperatorExpressionForGeneration * p = (cPtr_binaryOperatorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperatorExpressionForGeneration) ;
    return p->mProperty_mOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_binaryOperatorExpressionForGeneration::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_binaryOperatorExpressionForGeneration * p = (cPtr_binaryOperatorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperatorExpressionForGeneration) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @binaryOperatorExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_binaryOperatorExpressionForGeneration::cPtr_binaryOperatorExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mOperator (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_binaryOperatorExpressionForGeneration::cPtr_binaryOperatorExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                        const GGS_location & in_mLocation,
                                                                                        const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                        const GGS_binaryOperator & in_mOperator,
                                                                                        const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mOperator (),
mProperty_mRightExpression () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mOperator = in_mOperator ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_binaryOperatorExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration ;
}

void cPtr_binaryOperatorExpressionForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@binaryOperatorExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_binaryOperatorExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_binaryOperatorExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mOperator, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_binaryOperatorExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mOperator.printNonNullClassInstanceProperties ("mOperator") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @binaryOperatorExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration ("binaryOperatorExpressionForGeneration",
                                                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_binaryOperatorExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_binaryOperatorExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_binaryOperatorExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration GGS_binaryOperatorExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_binaryOperatorExpressionForGeneration result ;
  const GGS_binaryOperatorExpressionForGeneration * p = (const GGS_binaryOperatorExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_binaryOperatorExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryOperatorExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @andShortExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andShortExpressionForGeneration::objectCompare (const GGS_andShortExpressionForGeneration & inOperand) const {
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

GGS_andShortExpressionForGeneration::GGS_andShortExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_andShortExpressionForGeneration GGS_andShortExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                      const GGS_semanticExpressionForGeneration & in_mRightExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_andShortExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_andShortExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->andShortExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_andShortExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionForGeneration::
andShortExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                      const GGS_location & in_mLocation,
                                                      const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                      const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                      Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionForGeneration::GGS_andShortExpressionForGeneration (const cPtr_andShortExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andShortExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionForGeneration GGS_andShortExpressionForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                         const GGS_location & in_mLocation,
                                                                                         const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                         const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_andShortExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_andShortExpressionForGeneration (in_mResultType, in_mLocation, in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_andShortExpressionForGeneration::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_andShortExpressionForGeneration * p = (cPtr_andShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionForGeneration) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_andShortExpressionForGeneration::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_andShortExpressionForGeneration * p = (cPtr_andShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionForGeneration) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @andShortExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_andShortExpressionForGeneration::cPtr_andShortExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_andShortExpressionForGeneration::cPtr_andShortExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                            const GGS_location & in_mLocation,
                                                                            const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                            const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_andShortExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionForGeneration ;
}

void cPtr_andShortExpressionForGeneration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@andShortExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andShortExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_andShortExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_andShortExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @andShortExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andShortExpressionForGeneration ("andShortExpressionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_andShortExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_andShortExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_andShortExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionForGeneration GGS_andShortExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_andShortExpressionForGeneration result ;
  const GGS_andShortExpressionForGeneration * p = (const GGS_andShortExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_andShortExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andShortExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @testDynamicClassInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_testDynamicClassInExpressionAST::objectCompare (const GGS_testDynamicClassInExpressionAST & inOperand) const {
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

GGS_testDynamicClassInExpressionAST::GGS_testDynamicClassInExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST GGS_testDynamicClassInExpressionAST::
init_21__21__21__21_ (const GGS_semanticExpressionAST & in_mReceiverExpression,
                      const GGS_location & in_mEndOfReceiverExpression,
                      const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                      const GGS_lstring & in_mTypeName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_testDynamicClassInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_testDynamicClassInExpressionAST (inCompiler COMMA_THERE)) ;
  object->testDynamicClassInExpressionAST_init_21__21__21__21_ (in_mReceiverExpression, in_mEndOfReceiverExpression, in_mTypeComparisonKind, in_mTypeName, inCompiler) ;
  const GGS_testDynamicClassInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::
testDynamicClassInExpressionAST_init_21__21__21__21_ (const GGS_semanticExpressionAST & in_mReceiverExpression,
                                                      const GGS_location & in_mEndOfReceiverExpression,
                                                      const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                      const GGS_lstring & in_mTypeName,
                                                      Compiler * /* inCompiler */) {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST::GGS_testDynamicClassInExpressionAST (const cPtr_testDynamicClassInExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testDynamicClassInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST GGS_testDynamicClassInExpressionAST::class_func_new (const GGS_semanticExpressionAST & in_mReceiverExpression,
                                                                                         const GGS_location & in_mEndOfReceiverExpression,
                                                                                         const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                         const GGS_lstring & in_mTypeName,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_testDynamicClassInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_testDynamicClassInExpressionAST (in_mReceiverExpression, in_mEndOfReceiverExpression, in_mTypeComparisonKind, in_mTypeName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_testDynamicClassInExpressionAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_testDynamicClassInExpressionAST::readProperty_mEndOfReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicTypeComparisonKind GGS_testDynamicClassInExpressionAST::readProperty_mTypeComparisonKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_dynamicTypeComparisonKind () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mTypeComparisonKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_testDynamicClassInExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @testDynamicClassInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_testDynamicClassInExpressionAST::cPtr_testDynamicClassInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeComparisonKind (),
mProperty_mTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_testDynamicClassInExpressionAST::cPtr_testDynamicClassInExpressionAST (const GGS_semanticExpressionAST & in_mReceiverExpression,
                                                                            const GGS_location & in_mEndOfReceiverExpression,
                                                                            const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                            const GGS_lstring & in_mTypeName,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeComparisonKind (),
mProperty_mTypeName () {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_testDynamicClassInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ;
}

void cPtr_testDynamicClassInExpressionAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@testDynamicClassInExpressionAST:") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeComparisonKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_testDynamicClassInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_testDynamicClassInExpressionAST (mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mTypeComparisonKind, mProperty_mTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_testDynamicClassInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mEndOfReceiverExpression.printNonNullClassInstanceProperties ("mEndOfReceiverExpression") ;
    mProperty_mTypeComparisonKind.printNonNullClassInstanceProperties ("mTypeComparisonKind") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @testDynamicClassInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ("testDynamicClassInExpressionAST",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_testDynamicClassInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_testDynamicClassInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_testDynamicClassInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST GGS_testDynamicClassInExpressionAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_testDynamicClassInExpressionAST result ;
  const GGS_testDynamicClassInExpressionAST * p = (const GGS_testDynamicClassInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_testDynamicClassInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testDynamicClassInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @castInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_castInExpressionAST::objectCompare (const GGS_castInExpressionAST & inOperand) const {
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

GGS_castInExpressionAST::GGS_castInExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_castInExpressionAST GGS_castInExpressionAST::
init_21__21__21_ (const GGS_semanticExpressionAST & in_mReceiverExpression,
                  const GGS_location & in_mEndOfReceiverExpression,
                  const GGS_lstring & in_mTypeName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_castInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_castInExpressionAST (inCompiler COMMA_THERE)) ;
  object->castInExpressionAST_init_21__21__21_ (in_mReceiverExpression, in_mEndOfReceiverExpression, in_mTypeName, inCompiler) ;
  const GGS_castInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::
castInExpressionAST_init_21__21__21_ (const GGS_semanticExpressionAST & in_mReceiverExpression,
                                      const GGS_location & in_mEndOfReceiverExpression,
                                      const GGS_lstring & in_mTypeName,
                                      Compiler * /* inCompiler */) {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST::GGS_castInExpressionAST (const cPtr_castInExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_castInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST GGS_castInExpressionAST::class_func_new (const GGS_semanticExpressionAST & in_mReceiverExpression,
                                                                 const GGS_location & in_mEndOfReceiverExpression,
                                                                 const GGS_lstring & in_mTypeName,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_castInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_castInExpressionAST (in_mReceiverExpression, in_mEndOfReceiverExpression, in_mTypeName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_castInExpressionAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_castInExpressionAST * p = (cPtr_castInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_castInExpressionAST::readProperty_mEndOfReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_castInExpressionAST * p = (cPtr_castInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_castInExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_castInExpressionAST * p = (cPtr_castInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @castInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_castInExpressionAST::cPtr_castInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_castInExpressionAST::cPtr_castInExpressionAST (const GGS_semanticExpressionAST & in_mReceiverExpression,
                                                    const GGS_location & in_mEndOfReceiverExpression,
                                                    const GGS_lstring & in_mTypeName,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeName () {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_castInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionAST ;
}

void cPtr_castInExpressionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@castInExpressionAST:") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_castInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_castInExpressionAST (mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_castInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mEndOfReceiverExpression.printNonNullClassInstanceProperties ("mEndOfReceiverExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @castInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionAST ("castInExpressionAST",
                                                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_castInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_castInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_castInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST GGS_castInExpressionAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_castInExpressionAST result ;
  const GGS_castInExpressionAST * p = (const GGS_castInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_castInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @testDynamicClassInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_testDynamicClassInExpressionForGeneration::objectCompare (const GGS_testDynamicClassInExpressionForGeneration & inOperand) const {
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

GGS_testDynamicClassInExpressionForGeneration::GGS_testDynamicClassInExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration GGS_testDynamicClassInExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                          const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                          const GGS_unifiedTypeMapEntry & in_mCastType,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_testDynamicClassInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_testDynamicClassInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->testDynamicClassInExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mReceiverExpression, in_mTypeComparisonKind, in_mCastType, inCompiler) ;
  const GGS_testDynamicClassInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionForGeneration::
testDynamicClassInExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                    const GGS_location & in_mLocation,
                                                                    const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                    const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                    const GGS_unifiedTypeMapEntry & in_mCastType,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  mProperty_mCastType = in_mCastType ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration::GGS_testDynamicClassInExpressionForGeneration (const cPtr_testDynamicClassInExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testDynamicClassInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration GGS_testDynamicClassInExpressionForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                             const GGS_location & in_mLocation,
                                                                                                             const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                                             const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                             const GGS_unifiedTypeMapEntry & in_mCastType,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_testDynamicClassInExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_testDynamicClassInExpressionForGeneration (in_mResultType, in_mLocation, in_mReceiverExpression, in_mTypeComparisonKind, in_mCastType,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_testDynamicClassInExpressionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_testDynamicClassInExpressionForGeneration * p = (cPtr_testDynamicClassInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicTypeComparisonKind GGS_testDynamicClassInExpressionForGeneration::readProperty_mTypeComparisonKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_dynamicTypeComparisonKind () ;
  }else{
    cPtr_testDynamicClassInExpressionForGeneration * p = (cPtr_testDynamicClassInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
    return p->mProperty_mTypeComparisonKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_testDynamicClassInExpressionForGeneration::readProperty_mCastType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_testDynamicClassInExpressionForGeneration * p = (cPtr_testDynamicClassInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
    return p->mProperty_mCastType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @testDynamicClassInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_testDynamicClassInExpressionForGeneration::cPtr_testDynamicClassInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mTypeComparisonKind (),
mProperty_mCastType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_testDynamicClassInExpressionForGeneration::cPtr_testDynamicClassInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                const GGS_location & in_mLocation,
                                                                                                const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                                const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                const GGS_unifiedTypeMapEntry & in_mCastType,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mTypeComparisonKind (),
mProperty_mCastType () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  mProperty_mCastType = in_mCastType ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_testDynamicClassInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration ;
}

void cPtr_testDynamicClassInExpressionForGeneration::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@testDynamicClassInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeComparisonKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCastType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_testDynamicClassInExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_testDynamicClassInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mReceiverExpression, mProperty_mTypeComparisonKind, mProperty_mCastType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_testDynamicClassInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mTypeComparisonKind.printNonNullClassInstanceProperties ("mTypeComparisonKind") ;
    mProperty_mCastType.printNonNullClassInstanceProperties ("mCastType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @testDynamicClassInExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration ("testDynamicClassInExpressionForGeneration",
                                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_testDynamicClassInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_testDynamicClassInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_testDynamicClassInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration GGS_testDynamicClassInExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_testDynamicClassInExpressionForGeneration result ;
  const GGS_testDynamicClassInExpressionForGeneration * p = (const GGS_testDynamicClassInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_testDynamicClassInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testDynamicClassInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @extractObjectInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extractObjectInExpressionForGeneration::objectCompare (const GGS_extractObjectInExpressionForGeneration & inOperand) const {
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

GGS_extractObjectInExpressionForGeneration::GGS_extractObjectInExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_extractObjectInExpressionForGeneration GGS_extractObjectInExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                      const GGS_string & in_mTypeName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_extractObjectInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_extractObjectInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->extractObjectInExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mReceiverExpression, in_mTypeName, inCompiler) ;
  const GGS_extractObjectInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_extractObjectInExpressionForGeneration::
extractObjectInExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                             const GGS_location & in_mLocation,
                                                             const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                             const GGS_string & in_mTypeName,
                                                             Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractObjectInExpressionForGeneration::GGS_extractObjectInExpressionForGeneration (const cPtr_extractObjectInExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extractObjectInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_extractObjectInExpressionForGeneration GGS_extractObjectInExpressionForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                       const GGS_location & in_mLocation,
                                                                                                       const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                                       const GGS_string & in_mTypeName,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_extractObjectInExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_extractObjectInExpressionForGeneration (in_mResultType, in_mLocation, in_mReceiverExpression, in_mTypeName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_extractObjectInExpressionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_extractObjectInExpressionForGeneration * p = (cPtr_extractObjectInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extractObjectInExpressionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_extractObjectInExpressionForGeneration::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_extractObjectInExpressionForGeneration * p = (cPtr_extractObjectInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extractObjectInExpressionForGeneration) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @extractObjectInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_extractObjectInExpressionForGeneration::cPtr_extractObjectInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_extractObjectInExpressionForGeneration::cPtr_extractObjectInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                          const GGS_location & in_mLocation,
                                                                                          const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                          const GGS_string & in_mTypeName,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mTypeName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_extractObjectInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration ;
}

void cPtr_extractObjectInExpressionForGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@extractObjectInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extractObjectInExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_extractObjectInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mReceiverExpression, mProperty_mTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_extractObjectInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @extractObjectInExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration ("extractObjectInExpressionForGeneration",
                                                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extractObjectInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extractObjectInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extractObjectInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractObjectInExpressionForGeneration GGS_extractObjectInExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_extractObjectInExpressionForGeneration result ;
  const GGS_extractObjectInExpressionForGeneration * p = (const GGS_extractObjectInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extractObjectInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extractObjectInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @comparisonExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_comparisonExpressionForGeneration::objectCompare (const GGS_comparisonExpressionForGeneration & inOperand) const {
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

GGS_comparisonExpressionForGeneration::GGS_comparisonExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_comparisonExpressionForGeneration GGS_comparisonExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                          const GGS_comparison & in_mComparison,
                          const GGS_semanticExpressionForGeneration & in_mRightExpression,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_comparisonExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_comparisonExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->comparisonExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mLeftExpression, in_mComparison, in_mRightExpression, inCompiler) ;
  const GGS_comparisonExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionForGeneration::
comparisonExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                            const GGS_location & in_mLocation,
                                                            const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                            const GGS_comparison & in_mComparison,
                                                            const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                            Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mComparison = in_mComparison ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionForGeneration::GGS_comparisonExpressionForGeneration (const cPtr_comparisonExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionForGeneration GGS_comparisonExpressionForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                             const GGS_location & in_mLocation,
                                                                                             const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                             const GGS_comparison & in_mComparison,
                                                                                             const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_comparisonExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_comparisonExpressionForGeneration (in_mResultType, in_mLocation, in_mLeftExpression, in_mComparison, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_comparisonExpressionForGeneration::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_comparisonExpressionForGeneration * p = (cPtr_comparisonExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionForGeneration) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparisonExpressionForGeneration::readProperty_mComparison (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_comparison () ;
  }else{
    cPtr_comparisonExpressionForGeneration * p = (cPtr_comparisonExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionForGeneration) ;
    return p->mProperty_mComparison ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_comparisonExpressionForGeneration::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_comparisonExpressionForGeneration * p = (cPtr_comparisonExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionForGeneration) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @comparisonExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_comparisonExpressionForGeneration::cPtr_comparisonExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mComparison (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_comparisonExpressionForGeneration::cPtr_comparisonExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                const GGS_location & in_mLocation,
                                                                                const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                const GGS_comparison & in_mComparison,
                                                                                const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mComparison (),
mProperty_mRightExpression () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mComparison = in_mComparison ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_comparisonExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionForGeneration ;
}

void cPtr_comparisonExpressionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@comparisonExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mComparison.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_comparisonExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_comparisonExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mComparison, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_comparisonExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mComparison.printNonNullClassInstanceProperties ("mComparison") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @comparisonExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonExpressionForGeneration ("comparisonExpressionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_comparisonExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_comparisonExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_comparisonExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionForGeneration GGS_comparisonExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_comparisonExpressionForGeneration result ;
  const GGS_comparisonExpressionForGeneration * p = (const GGS_comparisonExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_comparisonExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @functionCallExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionCallExpressionAST::objectCompare (const GGS_functionCallExpressionAST & inOperand) const {
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

GGS_functionCallExpressionAST::GGS_functionCallExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_functionCallExpressionAST GGS_functionCallExpressionAST::
init_21__21_ (const GGS_lstring & in_mFunctionName,
              const GGS_actualOutputArgumentList & in_mExpressionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_functionCallExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_functionCallExpressionAST (inCompiler COMMA_THERE)) ;
  object->functionCallExpressionAST_init_21__21_ (in_mFunctionName, in_mExpressionList, inCompiler) ;
  const GGS_functionCallExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::
functionCallExpressionAST_init_21__21_ (const GGS_lstring & in_mFunctionName,
                                        const GGS_actualOutputArgumentList & in_mExpressionList,
                                        Compiler * /* inCompiler */) {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionAST::GGS_functionCallExpressionAST (const cPtr_functionCallExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionCallExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionAST GGS_functionCallExpressionAST::class_func_new (const GGS_lstring & in_mFunctionName,
                                                                             const GGS_actualOutputArgumentList & in_mExpressionList,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  GGS_functionCallExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_functionCallExpressionAST (in_mFunctionName, in_mExpressionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_functionCallExpressionAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_functionCallExpressionAST * p = (cPtr_functionCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_functionCallExpressionAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualOutputArgumentList () ;
  }else{
    cPtr_functionCallExpressionAST * p = (cPtr_functionCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionCallExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_functionCallExpressionAST::cPtr_functionCallExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_functionCallExpressionAST::cPtr_functionCallExpressionAST (const GGS_lstring & in_mFunctionName,
                                                                const GGS_actualOutputArgumentList & in_mExpressionList,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressionList () {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_functionCallExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionAST ;
}

void cPtr_functionCallExpressionAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@functionCallExpressionAST:") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_functionCallExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionCallExpressionAST (mProperty_mFunctionName, mProperty_mExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_functionCallExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @functionCallExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallExpressionAST ("functionCallExpressionAST",
                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_functionCallExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionCallExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionCallExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionAST GGS_functionCallExpressionAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_functionCallExpressionAST result ;
  const GGS_functionCallExpressionAST * p = (const GGS_functionCallExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionCallExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @functionCallExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionCallExpressionForGeneration::objectCompare (const GGS_functionCallExpressionForGeneration & inOperand) const {
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

GGS_functionCallExpressionForGeneration::GGS_functionCallExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_functionCallExpressionForGeneration GGS_functionCallExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_string & in_mFunctionName,
                      const GGS_semanticExpressionListForGeneration & in_mExpressions,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_functionCallExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_functionCallExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->functionCallExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mFunctionName, in_mExpressions, inCompiler) ;
  const GGS_functionCallExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionForGeneration::
functionCallExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                          const GGS_location & in_mLocation,
                                                          const GGS_string & in_mFunctionName,
                                                          const GGS_semanticExpressionListForGeneration & in_mExpressions,
                                                          Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressions = in_mExpressions ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionForGeneration::GGS_functionCallExpressionForGeneration (const cPtr_functionCallExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionCallExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionForGeneration GGS_functionCallExpressionForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                 const GGS_location & in_mLocation,
                                                                                                 const GGS_string & in_mFunctionName,
                                                                                                 const GGS_semanticExpressionListForGeneration & in_mExpressions,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_functionCallExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_functionCallExpressionForGeneration (in_mResultType, in_mLocation, in_mFunctionName, in_mExpressions,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_functionCallExpressionForGeneration::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_functionCallExpressionForGeneration * p = (cPtr_functionCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionForGeneration) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_functionCallExpressionForGeneration::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_functionCallExpressionForGeneration * p = (cPtr_functionCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionForGeneration) ;
    return p->mProperty_mExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionCallExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_functionCallExpressionForGeneration::cPtr_functionCallExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressions () {
}

//--------------------------------------------------------------------------------------------------

cPtr_functionCallExpressionForGeneration::cPtr_functionCallExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                    const GGS_location & in_mLocation,
                                                                                    const GGS_string & in_mFunctionName,
                                                                                    const GGS_semanticExpressionListForGeneration & in_mExpressions,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressions () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressions = in_mExpressions ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_functionCallExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionForGeneration ;
}

void cPtr_functionCallExpressionForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@functionCallExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_functionCallExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionCallExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mFunctionName, mProperty_mExpressions, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_functionCallExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mExpressions.printNonNullClassInstanceProperties ("mExpressions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @functionCallExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallExpressionForGeneration ("functionCallExpressionForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_functionCallExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionCallExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionCallExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionForGeneration GGS_functionCallExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_functionCallExpressionForGeneration result ;
  const GGS_functionCallExpressionForGeneration * p = (const GGS_functionCallExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionCallExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @getterCallExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getterCallExpressionAST::objectCompare (const GGS_getterCallExpressionAST & inOperand) const {
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

GGS_getterCallExpressionAST::GGS_getterCallExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_getterCallExpressionAST GGS_getterCallExpressionAST::
init_21_errorOnGetterCallInsteadOfPropertyRead_21__21__21__21_ (const GGS_bool & in_errorOnGetterCallInsteadOfPropertyRead,
                                                                const GGS_semanticExpressionAST & in_mReceiver,
                                                                const GGS_lstring & in_mGetterName,
                                                                const GGS_actualOutputArgumentList & in_mActualArgumentList,
                                                                const GGS_location & in_mExpressionLocation,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cPtr_getterCallExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_getterCallExpressionAST (inCompiler COMMA_THERE)) ;
  object->getterCallExpressionAST_init_21_errorOnGetterCallInsteadOfPropertyRead_21__21__21__21_ (in_errorOnGetterCallInsteadOfPropertyRead, in_mReceiver, in_mGetterName, in_mActualArgumentList, in_mExpressionLocation, inCompiler) ;
  const GGS_getterCallExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::
getterCallExpressionAST_init_21_errorOnGetterCallInsteadOfPropertyRead_21__21__21__21_ (const GGS_bool & in_errorOnGetterCallInsteadOfPropertyRead,
                                                                                        const GGS_semanticExpressionAST & in_mReceiver,
                                                                                        const GGS_lstring & in_mGetterName,
                                                                                        const GGS_actualOutputArgumentList & in_mActualArgumentList,
                                                                                        const GGS_location & in_mExpressionLocation,
                                                                                        Compiler * /* inCompiler */) {
  mProperty_errorOnGetterCallInsteadOfPropertyRead = in_errorOnGetterCallInsteadOfPropertyRead ;
  mProperty_mReceiver = in_mReceiver ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mExpressionLocation = in_mExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionAST::GGS_getterCallExpressionAST (const cPtr_getterCallExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getterCallExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionAST GGS_getterCallExpressionAST::class_func_new (const GGS_bool & in_errorOnGetterCallInsteadOfPropertyRead,
                                                                         const GGS_semanticExpressionAST & in_mReceiver,
                                                                         const GGS_lstring & in_mGetterName,
                                                                         const GGS_actualOutputArgumentList & in_mActualArgumentList,
                                                                         const GGS_location & in_mExpressionLocation,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_getterCallExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_getterCallExpressionAST (in_errorOnGetterCallInsteadOfPropertyRead, in_mReceiver, in_mGetterName, in_mActualArgumentList, in_mExpressionLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_getterCallExpressionAST::readProperty_errorOnGetterCallInsteadOfPropertyRead (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_errorOnGetterCallInsteadOfPropertyRead ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_getterCallExpressionAST::readProperty_mReceiver (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mReceiver ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_getterCallExpressionAST::readProperty_mGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_getterCallExpressionAST::readProperty_mActualArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualOutputArgumentList () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mActualArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_getterCallExpressionAST::readProperty_mExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @getterCallExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_getterCallExpressionAST::cPtr_getterCallExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_errorOnGetterCallInsteadOfPropertyRead (),
mProperty_mReceiver (),
mProperty_mGetterName (),
mProperty_mActualArgumentList (),
mProperty_mExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_getterCallExpressionAST::cPtr_getterCallExpressionAST (const GGS_bool & in_errorOnGetterCallInsteadOfPropertyRead,
                                                            const GGS_semanticExpressionAST & in_mReceiver,
                                                            const GGS_lstring & in_mGetterName,
                                                            const GGS_actualOutputArgumentList & in_mActualArgumentList,
                                                            const GGS_location & in_mExpressionLocation,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_errorOnGetterCallInsteadOfPropertyRead (),
mProperty_mReceiver (),
mProperty_mGetterName (),
mProperty_mActualArgumentList (),
mProperty_mExpressionLocation () {
  mProperty_errorOnGetterCallInsteadOfPropertyRead = in_errorOnGetterCallInsteadOfPropertyRead ;
  mProperty_mReceiver = in_mReceiver ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mExpressionLocation = in_mExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_getterCallExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionAST ;
}

void cPtr_getterCallExpressionAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@getterCallExpressionAST:") ;
  mProperty_errorOnGetterCallInsteadOfPropertyRead.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiver.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_getterCallExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_getterCallExpressionAST (mProperty_errorOnGetterCallInsteadOfPropertyRead, mProperty_mReceiver, mProperty_mGetterName, mProperty_mActualArgumentList, mProperty_mExpressionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_getterCallExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_errorOnGetterCallInsteadOfPropertyRead.printNonNullClassInstanceProperties ("errorOnGetterCallInsteadOfPropertyRead") ;
    mProperty_mReceiver.printNonNullClassInstanceProperties ("mReceiver") ;
    mProperty_mGetterName.printNonNullClassInstanceProperties ("mGetterName") ;
    mProperty_mActualArgumentList.printNonNullClassInstanceProperties ("mActualArgumentList") ;
    mProperty_mExpressionLocation.printNonNullClassInstanceProperties ("mExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @getterCallExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterCallExpressionAST ("getterCallExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_getterCallExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getterCallExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getterCallExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionAST GGS_getterCallExpressionAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_getterCallExpressionAST result ;
  const GGS_getterCallExpressionAST * p = (const GGS_getterCallExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getterCallExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterCallExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @getterCallExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getterCallExpressionForGeneration::objectCompare (const GGS_getterCallExpressionForGeneration & inOperand) const {
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

GGS_getterCallExpressionForGeneration::GGS_getterCallExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_getterCallExpressionForGeneration GGS_getterCallExpressionForGeneration::
init_21__21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                      const GGS_location & in_mLocation,
                                      const GGS_methodKind & in_mKind,
                                      const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                      const GGS_stringlist & in_mFieldList,
                                      const GGS_string & in_mGetterName,
                                      const GGS_semanticExpressionListForGeneration & in_mActualArgumentList,
                                      const GGS_bool & in_mHasCompilerArgument,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_getterCallExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_getterCallExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->getterCallExpressionForGeneration_init_21__21__21__21__21__21__21__21_ (in_mResultType, in_mLocation, in_mKind, in_mReceiverExpression, in_mFieldList, in_mGetterName, in_mActualArgumentList, in_mHasCompilerArgument, inCompiler) ;
  const GGS_getterCallExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionForGeneration::
getterCallExpressionForGeneration_init_21__21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                        const GGS_location & in_mLocation,
                                                                        const GGS_methodKind & in_mKind,
                                                                        const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                        const GGS_stringlist & in_mFieldList,
                                                                        const GGS_string & in_mGetterName,
                                                                        const GGS_semanticExpressionListForGeneration & in_mActualArgumentList,
                                                                        const GGS_bool & in_mHasCompilerArgument,
                                                                        Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mKind = in_mKind ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mFieldList = in_mFieldList ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionForGeneration::GGS_getterCallExpressionForGeneration (const cPtr_getterCallExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getterCallExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionForGeneration GGS_getterCallExpressionForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                             const GGS_location & in_mLocation,
                                                                                             const GGS_methodKind & in_mKind,
                                                                                             const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                             const GGS_stringlist & in_mFieldList,
                                                                                             const GGS_string & in_mGetterName,
                                                                                             const GGS_semanticExpressionListForGeneration & in_mActualArgumentList,
                                                                                             const GGS_bool & in_mHasCompilerArgument,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_getterCallExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_getterCallExpressionForGeneration (in_mResultType, in_mLocation, in_mKind, in_mReceiverExpression, in_mFieldList, in_mGetterName, in_mActualArgumentList, in_mHasCompilerArgument,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodKind GGS_getterCallExpressionForGeneration::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_methodKind () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_getterCallExpressionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_getterCallExpressionForGeneration::readProperty_mFieldList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringlist () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mFieldList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_getterCallExpressionForGeneration::readProperty_mGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_getterCallExpressionForGeneration::readProperty_mActualArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mActualArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_getterCallExpressionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @getterCallExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_getterCallExpressionForGeneration::cPtr_getterCallExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mKind (),
mProperty_mReceiverExpression (),
mProperty_mFieldList (),
mProperty_mGetterName (),
mProperty_mActualArgumentList (),
mProperty_mHasCompilerArgument () {
}

//--------------------------------------------------------------------------------------------------

cPtr_getterCallExpressionForGeneration::cPtr_getterCallExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                const GGS_location & in_mLocation,
                                                                                const GGS_methodKind & in_mKind,
                                                                                const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                const GGS_stringlist & in_mFieldList,
                                                                                const GGS_string & in_mGetterName,
                                                                                const GGS_semanticExpressionListForGeneration & in_mActualArgumentList,
                                                                                const GGS_bool & in_mHasCompilerArgument,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mKind (),
mProperty_mReceiverExpression (),
mProperty_mFieldList (),
mProperty_mGetterName (),
mProperty_mActualArgumentList (),
mProperty_mHasCompilerArgument () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mKind = in_mKind ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mFieldList = in_mFieldList ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_getterCallExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionForGeneration ;
}

void cPtr_getterCallExpressionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@getterCallExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFieldList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_getterCallExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_getterCallExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mKind, mProperty_mReceiverExpression, mProperty_mFieldList, mProperty_mGetterName, mProperty_mActualArgumentList, mProperty_mHasCompilerArgument, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_getterCallExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mFieldList.printNonNullClassInstanceProperties ("mFieldList") ;
    mProperty_mGetterName.printNonNullClassInstanceProperties ("mGetterName") ;
    mProperty_mActualArgumentList.printNonNullClassInstanceProperties ("mActualArgumentList") ;
    mProperty_mHasCompilerArgument.printNonNullClassInstanceProperties ("mHasCompilerArgument") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @getterCallExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterCallExpressionForGeneration ("getterCallExpressionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_getterCallExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getterCallExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getterCallExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionForGeneration GGS_getterCallExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_getterCallExpressionForGeneration result ;
  const GGS_getterCallExpressionForGeneration * p = (const GGS_getterCallExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getterCallExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterCallExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @initializerCallAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_initializerCallAST::objectCompare (const GGS_initializerCallAST & inOperand) const {
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

GGS_initializerCallAST::GGS_initializerCallAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_initializerCallAST GGS_initializerCallAST::
init_21__21__21_ (const GGS_lstring & in_mTypeName,
                  const GGS_actualOutputArgumentList & in_mExpressions,
                  const GGS_location & in_mEndOfExpressions,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_initializerCallAST * object = nullptr ;
  macroMyNew (object, cPtr_initializerCallAST (inCompiler COMMA_THERE)) ;
  object->initializerCallAST_init_21__21__21_ (in_mTypeName, in_mExpressions, in_mEndOfExpressions, inCompiler) ;
  const GGS_initializerCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallAST::
initializerCallAST_init_21__21__21_ (const GGS_lstring & in_mTypeName,
                                     const GGS_actualOutputArgumentList & in_mExpressions,
                                     const GGS_location & in_mEndOfExpressions,
                                     Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_mEndOfExpressions = in_mEndOfExpressions ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST::GGS_initializerCallAST (const cPtr_initializerCallAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_initializerCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST GGS_initializerCallAST::class_func_new (const GGS_lstring & in_mTypeName,
                                                               const GGS_actualOutputArgumentList & in_mExpressions,
                                                               const GGS_location & in_mEndOfExpressions,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_initializerCallAST result ;
  macroMyNew (result.mObjectPtr, cPtr_initializerCallAST (in_mTypeName, in_mExpressions, in_mEndOfExpressions,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_initializerCallAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_initializerCallAST * p = (cPtr_initializerCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initializerCallAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_initializerCallAST::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualOutputArgumentList () ;
  }else{
    cPtr_initializerCallAST * p = (cPtr_initializerCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initializerCallAST) ;
    return p->mProperty_mExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_initializerCallAST::readProperty_mEndOfExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_initializerCallAST * p = (cPtr_initializerCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initializerCallAST) ;
    return p->mProperty_mEndOfExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @initializerCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_initializerCallAST::cPtr_initializerCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mExpressions (),
mProperty_mEndOfExpressions () {
}

//--------------------------------------------------------------------------------------------------

cPtr_initializerCallAST::cPtr_initializerCallAST (const GGS_lstring & in_mTypeName,
                                                  const GGS_actualOutputArgumentList & in_mExpressions,
                                                  const GGS_location & in_mEndOfExpressions,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mExpressions (),
mProperty_mEndOfExpressions () {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_mEndOfExpressions = in_mEndOfExpressions ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_initializerCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerCallAST ;
}

void cPtr_initializerCallAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@initializerCallAST:") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_initializerCallAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_initializerCallAST (mProperty_mTypeName, mProperty_mExpressions, mProperty_mEndOfExpressions, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_initializerCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mExpressions.printNonNullClassInstanceProperties ("mExpressions") ;
    mProperty_mEndOfExpressions.printNonNullClassInstanceProperties ("mEndOfExpressions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @initializerCallAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initializerCallAST ("initializerCallAST",
                                                                          & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_initializerCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_initializerCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_initializerCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST GGS_initializerCallAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_initializerCallAST result ;
  const GGS_initializerCallAST * p = (const GGS_initializerCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_initializerCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initializerCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @initializerCallForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_initializerCallForGeneration::objectCompare (const GGS_initializerCallForGeneration & inOperand) const {
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

GGS_initializerCallForGeneration::GGS_initializerCallForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_initializerCallForGeneration GGS_initializerCallForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_string & in_initializerName,
                      const GGS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_initializerCallForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_initializerCallForGeneration (inCompiler COMMA_THERE)) ;
  object->initializerCallForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_initializerName, in_mEffectiveParameterList, inCompiler) ;
  const GGS_initializerCallForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallForGeneration::
initializerCallForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                   const GGS_location & in_mLocation,
                                                   const GGS_string & in_initializerName,
                                                   const GGS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
                                                   Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_initializerName = in_initializerName ;
  mProperty_mEffectiveParameterList = in_mEffectiveParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration::GGS_initializerCallForGeneration (const cPtr_initializerCallForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_initializerCallForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration GGS_initializerCallForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                   const GGS_location & in_mLocation,
                                                                                   const GGS_string & in_initializerName,
                                                                                   const GGS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_initializerCallForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_initializerCallForGeneration (in_mResultType, in_mLocation, in_initializerName, in_mEffectiveParameterList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_initializerCallForGeneration::readProperty_initializerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_initializerCallForGeneration * p = (cPtr_initializerCallForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initializerCallForGeneration) ;
    return p->mProperty_initializerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_initializerCallForGeneration::readProperty_mEffectiveParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_initializerCallForGeneration * p = (cPtr_initializerCallForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initializerCallForGeneration) ;
    return p->mProperty_mEffectiveParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @initializerCallForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_initializerCallForGeneration::cPtr_initializerCallForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_initializerName (),
mProperty_mEffectiveParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_initializerCallForGeneration::cPtr_initializerCallForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                      const GGS_location & in_mLocation,
                                                                      const GGS_string & in_initializerName,
                                                                      const GGS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_initializerName (),
mProperty_mEffectiveParameterList () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_initializerName = in_initializerName ;
  mProperty_mEffectiveParameterList = in_mEffectiveParameterList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_initializerCallForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerCallForGeneration ;
}

void cPtr_initializerCallForGeneration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@initializerCallForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_initializerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEffectiveParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_initializerCallForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_initializerCallForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_initializerName, mProperty_mEffectiveParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_initializerCallForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_initializerName.printNonNullClassInstanceProperties ("initializerName") ;
    mProperty_mEffectiveParameterList.printNonNullClassInstanceProperties ("mEffectiveParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @initializerCallForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initializerCallForGeneration ("initializerCallForGeneration",
                                                                                    & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_initializerCallForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerCallForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_initializerCallForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_initializerCallForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration GGS_initializerCallForGeneration::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_initializerCallForGeneration result ;
  const GGS_initializerCallForGeneration * p = (const GGS_initializerCallForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_initializerCallForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initializerCallForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @structPropertyAccessExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structPropertyAccessExpressionAST::objectCompare (const GGS_structPropertyAccessExpressionAST & inOperand) const {
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

GGS_structPropertyAccessExpressionAST::GGS_structPropertyAccessExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST GGS_structPropertyAccessExpressionAST::
init_21__21__21_ (const GGS_location & in_operatorLocation,
                  const GGS_semanticExpressionAST & in_mExpression,
                  const GGS_lstring & in_propertyName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_structPropertyAccessExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_structPropertyAccessExpressionAST (inCompiler COMMA_THERE)) ;
  object->structPropertyAccessExpressionAST_init_21__21__21_ (in_operatorLocation, in_mExpression, in_propertyName, inCompiler) ;
  const GGS_structPropertyAccessExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::
structPropertyAccessExpressionAST_init_21__21__21_ (const GGS_location & in_operatorLocation,
                                                    const GGS_semanticExpressionAST & in_mExpression,
                                                    const GGS_lstring & in_propertyName,
                                                    Compiler * /* inCompiler */) {
  mProperty_operatorLocation = in_operatorLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_propertyName = in_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST::GGS_structPropertyAccessExpressionAST (const cPtr_structPropertyAccessExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structPropertyAccessExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST GGS_structPropertyAccessExpressionAST::class_func_new (const GGS_location & in_operatorLocation,
                                                                                             const GGS_semanticExpressionAST & in_mExpression,
                                                                                             const GGS_lstring & in_propertyName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_structPropertyAccessExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_structPropertyAccessExpressionAST (in_operatorLocation, in_mExpression, in_propertyName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_structPropertyAccessExpressionAST::readProperty_operatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    return p->mProperty_operatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_structPropertyAccessExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_structPropertyAccessExpressionAST::readProperty_propertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    return p->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structPropertyAccessExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_structPropertyAccessExpressionAST::cPtr_structPropertyAccessExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_operatorLocation (),
mProperty_mExpression (),
mProperty_propertyName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_structPropertyAccessExpressionAST::cPtr_structPropertyAccessExpressionAST (const GGS_location & in_operatorLocation,
                                                                                const GGS_semanticExpressionAST & in_mExpression,
                                                                                const GGS_lstring & in_propertyName,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_operatorLocation (),
mProperty_mExpression (),
mProperty_propertyName () {
  mProperty_operatorLocation = in_operatorLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_propertyName = in_propertyName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structPropertyAccessExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST ;
}

void cPtr_structPropertyAccessExpressionAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@structPropertyAccessExpressionAST:") ;
  mProperty_operatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_propertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structPropertyAccessExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structPropertyAccessExpressionAST (mProperty_operatorLocation, mProperty_mExpression, mProperty_propertyName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structPropertyAccessExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_operatorLocation.printNonNullClassInstanceProperties ("operatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_propertyName.printNonNullClassInstanceProperties ("propertyName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @structPropertyAccessExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST ("structPropertyAccessExpressionAST",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_structPropertyAccessExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structPropertyAccessExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structPropertyAccessExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST GGS_structPropertyAccessExpressionAST::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_structPropertyAccessExpressionAST result ;
  const GGS_structPropertyAccessExpressionAST * p = (const GGS_structPropertyAccessExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structPropertyAccessExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structPropertyAccessExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @propertyAccessExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_propertyAccessExpressionForGeneration::objectCompare (const GGS_propertyAccessExpressionForGeneration & inOperand) const {
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

GGS_propertyAccessExpressionForGeneration::GGS_propertyAccessExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_propertyAccessExpressionForGeneration GGS_propertyAccessExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_semanticExpressionForGeneration & in_expression,
                      const GGS_string & in_structFieldName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_propertyAccessExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_propertyAccessExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->propertyAccessExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_expression, in_structFieldName, inCompiler) ;
  const GGS_propertyAccessExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_propertyAccessExpressionForGeneration::
propertyAccessExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                            const GGS_location & in_mLocation,
                                                            const GGS_semanticExpressionForGeneration & in_expression,
                                                            const GGS_string & in_structFieldName,
                                                            Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_expression = in_expression ;
  mProperty_structFieldName = in_structFieldName ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessExpressionForGeneration::GGS_propertyAccessExpressionForGeneration (const cPtr_propertyAccessExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_propertyAccessExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_propertyAccessExpressionForGeneration GGS_propertyAccessExpressionForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                     const GGS_location & in_mLocation,
                                                                                                     const GGS_semanticExpressionForGeneration & in_expression,
                                                                                                     const GGS_string & in_structFieldName,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_propertyAccessExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_propertyAccessExpressionForGeneration (in_mResultType, in_mLocation, in_expression, in_structFieldName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_propertyAccessExpressionForGeneration::readProperty_expression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_propertyAccessExpressionForGeneration * p = (cPtr_propertyAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_propertyAccessExpressionForGeneration) ;
    return p->mProperty_expression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_propertyAccessExpressionForGeneration::readProperty_structFieldName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_propertyAccessExpressionForGeneration * p = (cPtr_propertyAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_propertyAccessExpressionForGeneration) ;
    return p->mProperty_structFieldName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @propertyAccessExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_propertyAccessExpressionForGeneration::cPtr_propertyAccessExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_expression (),
mProperty_structFieldName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_propertyAccessExpressionForGeneration::cPtr_propertyAccessExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                        const GGS_location & in_mLocation,
                                                                                        const GGS_semanticExpressionForGeneration & in_expression,
                                                                                        const GGS_string & in_structFieldName,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_expression (),
mProperty_structFieldName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_expression = in_expression ;
  mProperty_structFieldName = in_structFieldName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_propertyAccessExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAccessExpressionForGeneration ;
}

void cPtr_propertyAccessExpressionForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@propertyAccessExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_expression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_structFieldName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_propertyAccessExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_propertyAccessExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_expression, mProperty_structFieldName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_propertyAccessExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_expression.printNonNullClassInstanceProperties ("expression") ;
    mProperty_structFieldName.printNonNullClassInstanceProperties ("structFieldName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @propertyAccessExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyAccessExpressionForGeneration ("propertyAccessExpressionForGeneration",
                                                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyAccessExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAccessExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyAccessExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyAccessExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessExpressionForGeneration GGS_propertyAccessExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_propertyAccessExpressionForGeneration result ;
  const GGS_propertyAccessExpressionForGeneration * p = (const GGS_propertyAccessExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyAccessExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyAccessExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @subscriptReadAccessExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_subscriptReadAccessExpressionForGeneration::objectCompare (const GGS_subscriptReadAccessExpressionForGeneration & inOperand) const {
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

GGS_subscriptReadAccessExpressionForGeneration::GGS_subscriptReadAccessExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_subscriptReadAccessExpressionForGeneration GGS_subscriptReadAccessExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_semanticExpressionForGeneration & in_expression,
                          const GGS_string & in_subscriptInvocationName,
                          const GGS_semanticExpressionListForGeneration & in_actualExpressionList,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_subscriptReadAccessExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_subscriptReadAccessExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->subscriptReadAccessExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_expression, in_subscriptInvocationName, in_actualExpressionList, inCompiler) ;
  const GGS_subscriptReadAccessExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_subscriptReadAccessExpressionForGeneration::
subscriptReadAccessExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                     const GGS_location & in_mLocation,
                                                                     const GGS_semanticExpressionForGeneration & in_expression,
                                                                     const GGS_string & in_subscriptInvocationName,
                                                                     const GGS_semanticExpressionListForGeneration & in_actualExpressionList,
                                                                     Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_expression = in_expression ;
  mProperty_subscriptInvocationName = in_subscriptInvocationName ;
  mProperty_actualExpressionList = in_actualExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionForGeneration::GGS_subscriptReadAccessExpressionForGeneration (const cPtr_subscriptReadAccessExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_subscriptReadAccessExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionForGeneration GGS_subscriptReadAccessExpressionForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                               const GGS_location & in_mLocation,
                                                                                                               const GGS_semanticExpressionForGeneration & in_expression,
                                                                                                               const GGS_string & in_subscriptInvocationName,
                                                                                                               const GGS_semanticExpressionListForGeneration & in_actualExpressionList,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_subscriptReadAccessExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_subscriptReadAccessExpressionForGeneration (in_mResultType, in_mLocation, in_expression, in_subscriptInvocationName, in_actualExpressionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_subscriptReadAccessExpressionForGeneration::readProperty_expression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_subscriptReadAccessExpressionForGeneration * p = (cPtr_subscriptReadAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subscriptReadAccessExpressionForGeneration) ;
    return p->mProperty_expression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_subscriptReadAccessExpressionForGeneration::readProperty_subscriptInvocationName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_subscriptReadAccessExpressionForGeneration * p = (cPtr_subscriptReadAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subscriptReadAccessExpressionForGeneration) ;
    return p->mProperty_subscriptInvocationName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_subscriptReadAccessExpressionForGeneration::readProperty_actualExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_subscriptReadAccessExpressionForGeneration * p = (cPtr_subscriptReadAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subscriptReadAccessExpressionForGeneration) ;
    return p->mProperty_actualExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @subscriptReadAccessExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_subscriptReadAccessExpressionForGeneration::cPtr_subscriptReadAccessExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_expression (),
mProperty_subscriptInvocationName (),
mProperty_actualExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_subscriptReadAccessExpressionForGeneration::cPtr_subscriptReadAccessExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                  const GGS_location & in_mLocation,
                                                                                                  const GGS_semanticExpressionForGeneration & in_expression,
                                                                                                  const GGS_string & in_subscriptInvocationName,
                                                                                                  const GGS_semanticExpressionListForGeneration & in_actualExpressionList,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_expression (),
mProperty_subscriptInvocationName (),
mProperty_actualExpressionList () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_expression = in_expression ;
  mProperty_subscriptInvocationName = in_subscriptInvocationName ;
  mProperty_actualExpressionList = in_actualExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_subscriptReadAccessExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscriptReadAccessExpressionForGeneration ;
}

void cPtr_subscriptReadAccessExpressionForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@subscriptReadAccessExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_expression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_subscriptInvocationName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_actualExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_subscriptReadAccessExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_subscriptReadAccessExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_expression, mProperty_subscriptInvocationName, mProperty_actualExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_subscriptReadAccessExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_expression.printNonNullClassInstanceProperties ("expression") ;
    mProperty_subscriptInvocationName.printNonNullClassInstanceProperties ("subscriptInvocationName") ;
    mProperty_actualExpressionList.printNonNullClassInstanceProperties ("actualExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @subscriptReadAccessExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscriptReadAccessExpressionForGeneration ("subscriptReadAccessExpressionForGeneration",
                                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_subscriptReadAccessExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscriptReadAccessExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subscriptReadAccessExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subscriptReadAccessExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionForGeneration GGS_subscriptReadAccessExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_subscriptReadAccessExpressionForGeneration result ;
  const GGS_subscriptReadAccessExpressionForGeneration * p = (const GGS_subscriptReadAccessExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subscriptReadAccessExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subscriptReadAccessExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @classFuncExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classFuncExpressionAST::objectCompare (const GGS_classFuncExpressionAST & inOperand) const {
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

GGS_classFuncExpressionAST::GGS_classFuncExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_classFuncExpressionAST GGS_classFuncExpressionAST::
init_21__21__21__21_ (const GGS_lstring & in_typeName,
                      const GGS_lstring & in_classFuncName,
                      const GGS_actualOutputArgumentList & in_expressions,
                      const GGS_location & in_locationForOldStyleCollectionInitializerError,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_classFuncExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_classFuncExpressionAST (inCompiler COMMA_THERE)) ;
  object->classFuncExpressionAST_init_21__21__21__21_ (in_typeName, in_classFuncName, in_expressions, in_locationForOldStyleCollectionInitializerError, inCompiler) ;
  const GGS_classFuncExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionAST::
classFuncExpressionAST_init_21__21__21__21_ (const GGS_lstring & in_typeName,
                                             const GGS_lstring & in_classFuncName,
                                             const GGS_actualOutputArgumentList & in_expressions,
                                             const GGS_location & in_locationForOldStyleCollectionInitializerError,
                                             Compiler * /* inCompiler */) {
  mProperty_typeName = in_typeName ;
  mProperty_classFuncName = in_classFuncName ;
  mProperty_expressions = in_expressions ;
  mProperty_locationForOldStyleCollectionInitializerError = in_locationForOldStyleCollectionInitializerError ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST::GGS_classFuncExpressionAST (const cPtr_classFuncExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classFuncExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST GGS_classFuncExpressionAST::class_func_new (const GGS_lstring & in_typeName,
                                                                       const GGS_lstring & in_classFuncName,
                                                                       const GGS_actualOutputArgumentList & in_expressions,
                                                                       const GGS_location & in_locationForOldStyleCollectionInitializerError,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_classFuncExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_classFuncExpressionAST (in_typeName, in_classFuncName, in_expressions, in_locationForOldStyleCollectionInitializerError,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_classFuncExpressionAST::readProperty_typeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_classFuncExpressionAST * p = (cPtr_classFuncExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionAST) ;
    return p->mProperty_typeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_classFuncExpressionAST::readProperty_classFuncName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_classFuncExpressionAST * p = (cPtr_classFuncExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionAST) ;
    return p->mProperty_classFuncName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_classFuncExpressionAST::readProperty_expressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualOutputArgumentList () ;
  }else{
    cPtr_classFuncExpressionAST * p = (cPtr_classFuncExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionAST) ;
    return p->mProperty_expressions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_classFuncExpressionAST::readProperty_locationForOldStyleCollectionInitializerError (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_classFuncExpressionAST * p = (cPtr_classFuncExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionAST) ;
    return p->mProperty_locationForOldStyleCollectionInitializerError ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classFuncExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_classFuncExpressionAST::cPtr_classFuncExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_typeName (),
mProperty_classFuncName (),
mProperty_expressions (),
mProperty_locationForOldStyleCollectionInitializerError () {
}

//--------------------------------------------------------------------------------------------------

cPtr_classFuncExpressionAST::cPtr_classFuncExpressionAST (const GGS_lstring & in_typeName,
                                                          const GGS_lstring & in_classFuncName,
                                                          const GGS_actualOutputArgumentList & in_expressions,
                                                          const GGS_location & in_locationForOldStyleCollectionInitializerError,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_typeName (),
mProperty_classFuncName (),
mProperty_expressions (),
mProperty_locationForOldStyleCollectionInitializerError () {
  mProperty_typeName = in_typeName ;
  mProperty_classFuncName = in_classFuncName ;
  mProperty_expressions = in_expressions ;
  mProperty_locationForOldStyleCollectionInitializerError = in_locationForOldStyleCollectionInitializerError ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_classFuncExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionAST ;
}

void cPtr_classFuncExpressionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@classFuncExpressionAST:") ;
  mProperty_typeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_classFuncName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_expressions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_locationForOldStyleCollectionInitializerError.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_classFuncExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classFuncExpressionAST (mProperty_typeName, mProperty_classFuncName, mProperty_expressions, mProperty_locationForOldStyleCollectionInitializerError, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classFuncExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_typeName.printNonNullClassInstanceProperties ("typeName") ;
    mProperty_classFuncName.printNonNullClassInstanceProperties ("classFuncName") ;
    mProperty_expressions.printNonNullClassInstanceProperties ("expressions") ;
    mProperty_locationForOldStyleCollectionInitializerError.printNonNullClassInstanceProperties ("locationForOldStyleCollectionInitializerError") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classFuncExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classFuncExpressionAST ("classFuncExpressionAST",
                                                                              & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_classFuncExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classFuncExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classFuncExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST GGS_classFuncExpressionAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_classFuncExpressionAST result ;
  const GGS_classFuncExpressionAST * p = (const GGS_classFuncExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classFuncExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classFuncExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

