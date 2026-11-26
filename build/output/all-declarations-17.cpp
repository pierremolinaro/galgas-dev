#include "all-declarations-17.h"
//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addICNS_file'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addICNS_5F_file (GGS_XcodeProjectDescriptor & ioObject,
                                      const GGS_string constinArgument_inFileName,
                                      GGS_string & outArgument_outFileRef,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 24)) ;
  }
  ioObject.mProperty_mICNS_5F_fileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 25)) ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (void) :
mProperty_mRoutineMap (),
mProperty_mFunctionMap (),
mProperty_mGlobalConstantMap (),
mProperty_mFilewrapperMap (),
mProperty_mGrammarMap (),
mProperty_mLexiqueComponentMapForSemanticAnalysis (),
mProperty_mSyntaxComponentMapForSemanticAnalysis (),
mProperty_projectSettings () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (const GGS_semanticContext & inSource) :
mProperty_mRoutineMap (inSource.mProperty_mRoutineMap),
mProperty_mFunctionMap (inSource.mProperty_mFunctionMap),
mProperty_mGlobalConstantMap (inSource.mProperty_mGlobalConstantMap),
mProperty_mFilewrapperMap (inSource.mProperty_mFilewrapperMap),
mProperty_mGrammarMap (inSource.mProperty_mGrammarMap),
mProperty_mLexiqueComponentMapForSemanticAnalysis (inSource.mProperty_mLexiqueComponentMapForSemanticAnalysis),
mProperty_mSyntaxComponentMapForSemanticAnalysis (inSource.mProperty_mSyntaxComponentMapForSemanticAnalysis),
mProperty_projectSettings (inSource.mProperty_projectSettings) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext & GGS_semanticContext::operator = (const GGS_semanticContext & inSource) {
  mProperty_mRoutineMap = inSource.mProperty_mRoutineMap ;
  mProperty_mFunctionMap = inSource.mProperty_mFunctionMap ;
  mProperty_mGlobalConstantMap = inSource.mProperty_mGlobalConstantMap ;
  mProperty_mFilewrapperMap = inSource.mProperty_mFilewrapperMap ;
  mProperty_mGrammarMap = inSource.mProperty_mGrammarMap ;
  mProperty_mLexiqueComponentMapForSemanticAnalysis = inSource.mProperty_mLexiqueComponentMapForSemanticAnalysis ;
  mProperty_mSyntaxComponentMapForSemanticAnalysis = inSource.mProperty_mSyntaxComponentMapForSemanticAnalysis ;
  mProperty_projectSettings = inSource.mProperty_projectSettings ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::init_21_ (const GGS_projectSettings & in_projectSettings,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_projectSettings = in_projectSettings ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mRoutineMap = GGS_routineMap::init (inCompiler COMMA_HERE) ;
  mProperty_mFunctionMap = GGS_functionMap::init (inCompiler COMMA_HERE) ;
  mProperty_mGlobalConstantMap = GGS_globalConstantMap::init (inCompiler COMMA_HERE) ;
  mProperty_mFilewrapperMap = GGS_filewrapperMap::init (inCompiler COMMA_HERE) ;
  mProperty_mGrammarMap = GGS_grammarMap::init (inCompiler COMMA_HERE) ;
  mProperty_mLexiqueComponentMapForSemanticAnalysis = GGS_lexiqueComponentMapForSemanticAnalysis::init (inCompiler COMMA_HERE) ;
  mProperty_mSyntaxComponentMapForSemanticAnalysis = GGS_syntaxComponentMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (const GGS_routineMap & inOperand0,
                                          const GGS_functionMap & inOperand1,
                                          const GGS_globalConstantMap & inOperand2,
                                          const GGS_filewrapperMap & inOperand3,
                                          const GGS_grammarMap & inOperand4,
                                          const GGS_lexiqueComponentMapForSemanticAnalysis & inOperand5,
                                          const GGS_syntaxComponentMap & inOperand6,
                                          const GGS_projectSettings & inOperand7) :
mProperty_mRoutineMap (inOperand0),
mProperty_mFunctionMap (inOperand1),
mProperty_mGlobalConstantMap (inOperand2),
mProperty_mFilewrapperMap (inOperand3),
mProperty_mGrammarMap (inOperand4),
mProperty_mLexiqueComponentMapForSemanticAnalysis (inOperand5),
mProperty_mSyntaxComponentMapForSemanticAnalysis (inOperand6),
mProperty_projectSettings (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_semanticContext::isValid (void) const {
  return mProperty_mRoutineMap.isValid () && mProperty_mFunctionMap.isValid () && mProperty_mGlobalConstantMap.isValid () && mProperty_mFilewrapperMap.isValid () && mProperty_mGrammarMap.isValid () && mProperty_mLexiqueComponentMapForSemanticAnalysis.isValid () && mProperty_mSyntaxComponentMapForSemanticAnalysis.isValid () && mProperty_projectSettings.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::drop (void) {
  mProperty_mRoutineMap.drop () ;
  mProperty_mFunctionMap.drop () ;
  mProperty_mGlobalConstantMap.drop () ;
  mProperty_mFilewrapperMap.drop () ;
  mProperty_mGrammarMap.drop () ;
  mProperty_mLexiqueComponentMapForSemanticAnalysis.drop () ;
  mProperty_mSyntaxComponentMapForSemanticAnalysis.drop () ;
  mProperty_projectSettings.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRoutineMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFunctionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFilewrapperMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGrammarMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexiqueComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSyntaxComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_projectSettings.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@semanticContext removeAll'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_removeAll (GGS_semanticContext & ioObject,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mRoutineMap = GGS_routineMap::init (inCompiler COMMA_HERE) ;
  ioObject.mProperty_mFunctionMap = GGS_functionMap::init (inCompiler COMMA_HERE) ;
  ioObject.mProperty_mGlobalConstantMap = GGS_globalConstantMap::init (inCompiler COMMA_HERE) ;
  ioObject.mProperty_mFilewrapperMap = GGS_filewrapperMap::init (inCompiler COMMA_HERE) ;
  ioObject.mProperty_mLexiqueComponentMapForSemanticAnalysis = GGS_lexiqueComponentMapForSemanticAnalysis::init (inCompiler COMMA_HERE) ;
  ioObject.mProperty_mSyntaxComponentMapForSemanticAnalysis = GGS_syntaxComponentMap::init (inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------

GGS_localVarManager::GGS_localVarManager (void) :
mProperty_mCurrentManager (),
mProperty_mOverridenManagers () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarManager::GGS_localVarManager (const GGS_localVarManager & inSource) :
mProperty_mCurrentManager (inSource.mProperty_mCurrentManager),
mProperty_mOverridenManagers (inSource.mProperty_mOverridenManagers) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarManager & GGS_localVarManager::operator = (const GGS_localVarManager & inSource) {
  mProperty_mCurrentManager = inSource.mProperty_mCurrentManager ;
  mProperty_mOverridenManagers = inSource.mProperty_mOverridenManagers ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarManager::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mCurrentManager = GGS_currentVarManager::init (inCompiler COMMA_HERE) ;
  mProperty_mOverridenManagers = GGS__5B_overrideKind_5D_::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarManager::GGS_localVarManager (const GGS_currentVarManager & inOperand0,
                                          const GGS__5B_overrideKind_5D_ & inOperand1) :
mProperty_mCurrentManager (inOperand0),
mProperty_mOverridenManagers (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_localVarManager::isValid (void) const {
  return mProperty_mCurrentManager.isValid () && mProperty_mOverridenManagers.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarManager::drop (void) {
  mProperty_mCurrentManager.drop () ;
  mProperty_mOverridenManagers.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarManager::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localVarManager:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mCurrentManager.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOverridenManagers.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @localVarManager generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarManager ("localVarManager",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVarManager::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarManager ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertDeclaredLocalVariable'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertDeclaredLocalVariable (GGS_localVarManager & ioObject,
                                                  const GGS_lstring constinArgument_inVarName,
                                                  const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                  const GGS_string constinArgument_inCppName,
                                                  const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::init (inCompiler COMMA_HERE), GGS_localVarValuation::class_func_declared (GGS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas4", 56)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 50)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertInitializedLocalVariable'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalVariable (GGS_localVarManager & ioObject,
                                                     const GGS_lstring constinArgument_inVarName,
                                                     const GGS_bool constinArgument_inWarnsIfNotMutated,
                                                     const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                     const GGS_string constinArgument_inCppName,
                                                     const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  GGS_localVariableAttributes temp_0 ;
  const GalgasBool test_1 = constinArgument_inWarnsIfNotMutated.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_localVariableAttributes::init (inCompiler COMMA_HERE) ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 73)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 73)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 73)) ;
  }
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, temp_0, GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 74)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 68)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertUsedLocalConstant'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas4", 91)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 91)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 91)), GGS_localVarValuation::class_func_read (SOURCE_FILE ("variable-manager.galgas4", 92)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 86)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertInitializedLocalConstant'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas4", 107)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 107)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 107)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 108)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 102)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertDeclaredLocalConstant'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas4", 124)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 124)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 124)), GGS_localVarValuation::class_func_declared (GGS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas4", 125)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 119)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertInputFormalArgumentDeclaredAsUnused'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 142)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 142)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 142)).operator_or (GGS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas4", 142)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 142)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 143)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 137)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertInputFormalArgument'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 159)).operator_or (GGS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas4", 159)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 159)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 160)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 154)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertConstantInputFormalArgumentDeclaredAsUnused'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas4", 175)).operator_or (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 175)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 175)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 175)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 175)).operator_or (GGS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas4", 175)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 175)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 176)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 170)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertConstantInputFormalArgument'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas4", 192)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 192)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 192)).operator_or (GGS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas4", 192)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 192)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 193)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 187)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertOutputFormalArgument'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectDeclaredStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 210)).operator_or (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 210)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 210)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 210)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 210)), GGS_localVarValuation::class_func_declared (GGS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas4", 211)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 205)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertInputOutputFormalArgumentDeclaredAsUnused'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 228)).operator_or (GGS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas4", 228)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 228)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 229)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 223)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertInputOutputFormalArgument'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 245)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 245)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 245)).operator_or (GGS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas4", 246)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 245)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 247)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 240)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertNonMutableProperty'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas4", 264)).operator_or (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 265)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 264)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 265)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 265)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 266)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 259)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertMutableProperty'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 282)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 282)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 282)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 283)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 277)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertInitializerSelfProperty'
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
  GGS_lstring var_varName_13148 = GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 298)), constinArgument_inErrorLocation, inCompiler COMMA_HERE) ;
  {
  GGS_localVarValuation temp_0 ;
  const GalgasBool test_1 = constinArgument_inInitialized.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 306)) ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_localVarValuation::class_func_declared (GGS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas4", 306)) ;
  }
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, var_varName_13148, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectDeclaredStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 304)).operator_or (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 305)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 304)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 305)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 305)), temp_0, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 299)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager openOverrideForSelectBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForSelectBlock (GGS_localVarManager & ioObject,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVarManager temp_0 = ioObject ;
  ioObject.mProperty_mOverridenManagers.plusPlusAssignOperation (GGS_overrideKind::class_func_selectOverrideFirstBranch (temp_0.readProperty_mCurrentManager ()  COMMA_SOURCE_FILE ("variable-manager.galgas4", 315))  COMMA_SOURCE_FILE ("variable-manager.galgas4", 315)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager openOverrideForRepeatBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForRepeatBlock (GGS_localVarManager & ioObject,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mOverridenManagers.plusPlusAssignOperation (GGS_overrideKind::class_func_repeatOverride (SOURCE_FILE ("variable-manager.galgas4", 321))  COMMA_SOURCE_FILE ("variable-manager.galgas4", 321)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager closeOverride'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeOverride (GGS_localVarManager & ioObject,
                                    const GGS_location /* constinArgument__5F_inEndOfBranchLocation */,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_localVarManager temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mOverridenManagers ().getter_count (SOURCE_FILE ("variable-manager.galgas4", 327)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_overrideKind var_savedManager_14407 ;
      {
      ioObject.mProperty_mOverridenManagers.setter_removeLast (var_savedManager_14407, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 328)) ;
      }
      switch (var_savedManager_14407.enumValue ()) {
      case GGS_overrideKind::Enumeration::invalid:
        break ;
      case GGS_overrideKind::Enumeration::enum_selectOverrideFirstBranch:
        break ;
      case GGS_overrideKind::Enumeration::enum_selectOverrideNextBranches:
        {
          GGS_currentVarManager extractedValue_14579__savedManager_0 ;
          GGS_currentVarManager extractedValue_14613_referenceManager_1 ;
          var_savedManager_14407.getAssociatedValuesFor_selectOverrideNextBranches (extractedValue_14579__savedManager_0, extractedValue_14613_referenceManager_1) ;
          ioObject.mProperty_mCurrentManager = extractedValue_14613_referenceManager_1 ;
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
//Extension proc '@localVarManager openBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (GGS_localVarManager & ioObject,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_openScope (ioObject.mProperty_mCurrentManager, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 341)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager closeBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeBranch (GGS_localVarManager & ioObject,
                                  const GGS_location constinArgument_inEndOfBranchLocation,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_closeScope (ioObject.mProperty_mCurrentManager, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 347)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_localVarManager temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mOverridenManagers ().getter_count (SOURCE_FILE ("variable-manager.galgas4", 349)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_overrideKind var_savedManager_15246 ;
      {
      ioObject.mProperty_mOverridenManagers.setter_removeLast (var_savedManager_15246, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 350)) ;
      }
      switch (var_savedManager_15246.enumValue ()) {
      case GGS_overrideKind::Enumeration::invalid:
        break ;
      case GGS_overrideKind::Enumeration::enum_selectOverrideFirstBranch:
        {
          GGS_currentVarManager extractedValue_15343_savedManager_0 ;
          var_savedManager_15246.getAssociatedValuesFor_selectOverrideFirstBranch (extractedValue_15343_savedManager_0) ;
          const GGS_localVarManager temp_2 = ioObject ;
          ioObject.mProperty_mOverridenManagers.plusPlusAssignOperation (GGS_overrideKind::class_func_selectOverrideNextBranches (extractedValue_15343_savedManager_0, temp_2.readProperty_mCurrentManager ()  COMMA_SOURCE_FILE ("variable-manager.galgas4", 353))  COMMA_SOURCE_FILE ("variable-manager.galgas4", 353)) ;
          ioObject.mProperty_mCurrentManager = extractedValue_15343_savedManager_0 ;
        }
        break ;
      case GGS_overrideKind::Enumeration::enum_selectOverrideNextBranches:
        {
          GGS_currentVarManager extractedValue_15596_savedManager_0 ;
          GGS_currentVarManager extractedValue_15629_referenceManager_1 ;
          var_savedManager_15246.getAssociatedValuesFor_selectOverrideNextBranches (extractedValue_15596_savedManager_0, extractedValue_15629_referenceManager_1) ;
          const GGS_localVarManager temp_3 = ioObject ;
          GGS_currentVarManager var_newReferenceManager_15661 = temp_3.readProperty_mCurrentManager () ;
          {
          extensionSetter_combineManagerWith (var_newReferenceManager_15661, extractedValue_15629_referenceManager_1, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 357)) ;
          }
          ioObject.mProperty_mOverridenManagers.plusPlusAssignOperation (GGS_overrideKind::class_func_selectOverrideNextBranches (extractedValue_15596_savedManager_0, var_newReferenceManager_15661  COMMA_SOURCE_FILE ("variable-manager.galgas4", 358))  COMMA_SOURCE_FILE ("variable-manager.galgas4", 358)) ;
          ioObject.mProperty_mCurrentManager = extractedValue_15596_savedManager_0 ;
        }
        break ;
      case GGS_overrideKind::Enumeration::enum_repeatOverride:
        {
          ioObject.mProperty_mOverridenManagers.plusPlusAssignOperation (var_savedManager_15246  COMMA_SOURCE_FILE ("variable-manager.galgas4", 361)) ;
        }
        break ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager checkSelfObjectIsFullyInitialized'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSelfObjectIsFullyInitialized (const GGS_localVarManager inObject,
                                                        const GGS_location constinArgument_inErrorLocation,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVarManager temp_0 = inObject ;
  extensionMethod_checkSelfObjectIsFullyInitialized (temp_0.readProperty_mCurrentManager (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 426)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager neutralAccess'
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
  extensionSetter_neutralAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 452)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager searchForDropAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForDropAccess (GGS_localVarManager & ioObject,
                                          const GGS_lstring constinArgument_inVarName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_searchForDropAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 508)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager searchForWriteAccess'
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
  extensionSetter_searchForWriteAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 538)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager searchForReadAccess'
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
  extensionSetter_searchForReadAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 635)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager searchForReadWriteAccess'
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
  extensionSetter_searchForReadWriteAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 719)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager checkAutomatonStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkAutomatonStates (const GGS_localVarManager inObject,
                                           const GGS_location constinArgument_inErrorLocation,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVarManager temp_0 = inObject ;
  extensionMethod_checkAutomatonStates (temp_0.readProperty_mCurrentManager (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 868)) ;
}


//--------------------------------------------------------------------------------------------------

GGS_templateAnalysisContext::GGS_templateAnalysisContext (void) :
mProperty_mSemanticContext (),
mProperty_mPredefinedTypes (),
mProperty_mTemplateVariableMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateAnalysisContext::GGS_templateAnalysisContext (const GGS_templateAnalysisContext & inSource) :
mProperty_mSemanticContext (inSource.mProperty_mSemanticContext),
mProperty_mPredefinedTypes (inSource.mProperty_mPredefinedTypes),
mProperty_mTemplateVariableMap (inSource.mProperty_mTemplateVariableMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateAnalysisContext & GGS_templateAnalysisContext::operator = (const GGS_templateAnalysisContext & inSource) {
  mProperty_mSemanticContext = inSource.mProperty_mSemanticContext ;
  mProperty_mPredefinedTypes = inSource.mProperty_mPredefinedTypes ;
  mProperty_mTemplateVariableMap = inSource.mProperty_mTemplateVariableMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateAnalysisContext GGS_templateAnalysisContext::init_21__21__21_ (const GGS_semanticContext & in_mSemanticContext,
                                                                           const GGS_predefinedTypes & in_mPredefinedTypes,
                                                                           const GGS_templateVariableMap & in_mTemplateVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateAnalysisContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSemanticContext = in_mSemanticContext ;
  result.mProperty_mPredefinedTypes = in_mPredefinedTypes ;
  result.mProperty_mTemplateVariableMap = in_mTemplateVariableMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateAnalysisContext::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateAnalysisContext::GGS_templateAnalysisContext (const GGS_semanticContext & inOperand0,
                                                          const GGS_predefinedTypes & inOperand1,
                                                          const GGS_templateVariableMap & inOperand2) :
mProperty_mSemanticContext (inOperand0),
mProperty_mPredefinedTypes (inOperand1),
mProperty_mTemplateVariableMap (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateAnalysisContext::isValid (void) const {
  return mProperty_mSemanticContext.isValid () && mProperty_mPredefinedTypes.isValid () && mProperty_mTemplateVariableMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateAnalysisContext::drop (void) {
  mProperty_mSemanticContext.drop () ;
  mProperty_mPredefinedTypes.drop () ;
  mProperty_mTemplateVariableMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateAnalysisContext::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateAnalysisContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSemanticContext.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPredefinedTypes.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTemplateVariableMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateAnalysisContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateAnalysisContext ("templateAnalysisContext",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateAnalysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateAnalysisContext ;
}

//--------------------------------------------------------------------------------------------------

GGS_analysisContext::GGS_analysisContext (void) :
mProperty_semanticContext (),
mProperty_predefinedTypes (),
mProperty_selfObjectCppName (),
mProperty_selfAvailability (),
mProperty_selfObjectCppPrefixForAccessingProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_analysisContext::GGS_analysisContext (const GGS_analysisContext & inSource) :
mProperty_semanticContext (inSource.mProperty_semanticContext),
mProperty_predefinedTypes (inSource.mProperty_predefinedTypes),
mProperty_selfObjectCppName (inSource.mProperty_selfObjectCppName),
mProperty_selfAvailability (inSource.mProperty_selfAvailability),
mProperty_selfObjectCppPrefixForAccessingProperty (inSource.mProperty_selfObjectCppPrefixForAccessingProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_analysisContext & GGS_analysisContext::operator = (const GGS_analysisContext & inSource) {
  mProperty_semanticContext = inSource.mProperty_semanticContext ;
  mProperty_predefinedTypes = inSource.mProperty_predefinedTypes ;
  mProperty_selfObjectCppName = inSource.mProperty_selfObjectCppName ;
  mProperty_selfAvailability = inSource.mProperty_selfAvailability ;
  mProperty_selfObjectCppPrefixForAccessingProperty = inSource.mProperty_selfObjectCppPrefixForAccessingProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_analysisContext GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (const GGS_semanticContext & in_semanticContext,
                                                                                                                                           const GGS_predefinedTypes & in_predefinedTypes,
                                                                                                                                           const GGS_string & in_selfObjectCppName,
                                                                                                                                           const GGS_selfAvailability & in_selfAvailability,
                                                                                                                                           const GGS_string & in_selfObjectCppPrefixForAccessingProperty,
                                                                                                                                           Compiler * inCompiler
                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_analysisContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_semanticContext = in_semanticContext ;
  result.mProperty_predefinedTypes = in_predefinedTypes ;
  result.mProperty_selfObjectCppName = in_selfObjectCppName ;
  result.mProperty_selfAvailability = in_selfAvailability ;
  result.mProperty_selfObjectCppPrefixForAccessingProperty = in_selfObjectCppPrefixForAccessingProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_analysisContext::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_analysisContext::GGS_analysisContext (const GGS_semanticContext & inOperand0,
                                          const GGS_predefinedTypes & inOperand1,
                                          const GGS_string & inOperand2,
                                          const GGS_selfAvailability & inOperand3,
                                          const GGS_string & inOperand4) :
mProperty_semanticContext (inOperand0),
mProperty_predefinedTypes (inOperand1),
mProperty_selfObjectCppName (inOperand2),
mProperty_selfAvailability (inOperand3),
mProperty_selfObjectCppPrefixForAccessingProperty (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_analysisContext::isValid (void) const {
  return mProperty_semanticContext.isValid () && mProperty_predefinedTypes.isValid () && mProperty_selfObjectCppName.isValid () && mProperty_selfAvailability.isValid () && mProperty_selfObjectCppPrefixForAccessingProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_analysisContext::drop (void) {
  mProperty_semanticContext.drop () ;
  mProperty_predefinedTypes.drop () ;
  mProperty_selfObjectCppName.drop () ;
  mProperty_selfAvailability.drop () ;
  mProperty_selfObjectCppPrefixForAccessingProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_analysisContext::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @analysisContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_semanticContext.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_predefinedTypes.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_selfObjectCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_selfAvailability.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_selfObjectCppPrefixForAccessingProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @analysisContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_analysisContext ("analysisContext",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_analysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_analysisContext ;
}

//--------------------------------------------------------------------------------------------------
//   INITIALIZER @localVarManager init!
//--------------------------------------------------------------------------------------------------

GGS_localVarManager GGS_localVarManager::init_21_ (const GGS_globalConstantMap & constinArgument_inGlobalConstantMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localVarManager result ;
  result.setInitializedProperties (inCompiler) ;
  UpEnumerator_globalConstantMap enumerator_1805 (constinArgument_inGlobalConstantMap) ;
  while (enumerator_1805.hasCurrentObject ()) {
    {
    extensionSetter_insertUsedLocalConstant (result, enumerator_1805.current (HERE).readProperty_lkey (), enumerator_1805.current (HERE).readProperty_mType (), enumerator_1805.current (HERE).readProperty_lkey ().readProperty_string (), function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 35)) ;
    }
    enumerator_1805.gotoNextObject () ;
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@superMethodCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_superMethodCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_superMethodCallInstructionAST temp_0 = this ;
  UpEnumerator__5B_actualParameterAST_5D_ enumerator_2518 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_2518.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_2518.current (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 54)) ;
    enumerator_2518.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@superMethodCallInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_superMethodCallInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                            GGS_localVarManager & ioArgument_ioVariableMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_selfType_3221 ;
  switch (constinArgument_inAnalysisContext.readProperty_selfAvailability ().enumValue ()) {
  case GGS_selfAvailability::Enumeration::invalid:
    break ;
  case GGS_selfAvailability::Enumeration::enum_none:
    {
      const GGS_superMethodCallInstructionAST temp_0 = this ;
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.readProperty_mMethodName ().readProperty_location (), GGS_string ("'super' is not available in this context"), fixItArray1  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 71)) ;
      var_selfType_3221.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_selfAvailability::Enumeration::enum_available:
    {
      GGS_unifiedTypeMapEntry extractedValue_3422_type_0 ;
      GGS_selfMutability extractedValue_3444__selfMutability_1 ;
      constinArgument_inAnalysisContext.readProperty_selfAvailability ().getAssociatedValuesFor_available (extractedValue_3422_type_0, extractedValue_3444__selfMutability_1) ;
      var_selfType_3221 = extractedValue_3422_type_0 ;
    }
    break ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_selfType_3221, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 76)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-super-method-call.galgas4", 76)).operator_not (SOURCE_FILE ("instruction-super-method-call.galgas4", 76)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_superMethodCallInstructionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mMethodName ().readProperty_location (), GGS_string ("self type is not a class"), fixItArray4  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 77)) ;
    }
  }
  GGS__5B_formalParameterSignatureElement_5D_ var_routineSignature_3793 ;
  GGS_bool var_hasCompilerArgument_3832 ;
  GGS_string var_errorMessage_3874 ;
  const GGS_superMethodCallInstructionAST temp_5 = this ;
  GGS_methodKind joker_3766 ; // Joker input parameter
  GGS_location joker_3817 ; // Joker input parameter
  GGS_methodQualifier joker_3859 ; // Joker input parameter
  extensionGetter_definition (var_selfType_3221, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 80)).readProperty_instanceMethodMap ().method_searchKey (temp_5.readProperty_mMethodName (), joker_3766, var_routineSignature_3793, joker_3817, var_hasCompilerArgument_3832, joker_3859, var_errorMessage_3874, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 80)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::notEqual, var_errorMessage_3874.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_superMethodCallInstructionAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mMethodName ().readProperty_location (), var_errorMessage_3874, fixItArray8  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 90)) ;
    }
  }
  GGS__5B_actualParameterForGeneration_5D_ var_actualParameterListForGeneration_4425 ;
  const GGS_superMethodCallInstructionAST temp_9 = this ;
  const GGS_superMethodCallInstructionAST temp_10 = this ;
  const GGS_superMethodCallInstructionAST temp_11 = this ;
  extensionMethod_analyzeRoutineArguments (temp_9.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_10.readProperty_mMethodName (), GGS_string ("'").add_operation (temp_11.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 99)).add_operation (GGS_string ("' instance proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 99)), var_routineSignature_3793, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_4425, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 93)) ;
  GGS_unifiedTypeMapEntry var_baseType_4520 = var_selfType_3221 ;
  GGS_bool var_searching_4548 = GGS_bool (true) ;
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("instruction-super-method-call.galgas4", 108)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      if (GGS_u_33__32_::class_func_max (SOURCE_FILE ("instruction-super-method-call.galgas4", 109)).isValid ()) {
        uint32_t variant_4612 = GGS_u_33__32_::class_func_max (SOURCE_FILE ("instruction-super-method-call.galgas4", 109)).uintValue () ;
        bool loop_4612 = true ;
        while (loop_4612) {
          loop_4612 = var_searching_4548.isValid () ;
          if (loop_4612) {
            loop_4612 = var_searching_4548.boolValue () ;
          }
          if (loop_4612 && (0 == variant_4612)) {
            loop_4612 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-super-method-call.galgas4", 109)) ;
          }
          if (loop_4612) {
            variant_4612 -= 1 ;
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              test_13 = extensionGetter_definition (var_baseType_4520, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 110)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-super-method-call.galgas4", 110)).boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                var_searching_4548 = GGS_bool (false) ;
              }
            }
            if (GalgasBool::boolFalse == test_13) {
              GalgasBool test_14 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_14) {
                const GGS_superMethodCallInstructionAST temp_15 = this ;
                test_14 = extensionGetter_definition (extensionGetter_definition (var_baseType_4520, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 113)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 113)).readProperty_instanceMethodMap ().getter_contains (temp_15.readProperty_mMethodName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 113)).boolEnum () ;
                if (GalgasBool::boolTrue == test_14) {
                  var_baseType_4520 = extensionGetter_definition (var_baseType_4520, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 114)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_14) {
                var_searching_4548 = GGS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GGS_superMethodCallInstructionAST temp_16 = this ;
  const GGS_superMethodCallInstructionAST temp_17 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_superMethodCallInstructionForGeneration::init_21__21__21__21__21_ (temp_16.readProperty_mInstructionLocation (), temp_17.readProperty_mMethodName ().readProperty_string (), var_actualParameterListForGeneration_4425, var_hasCompilerArgument_3832, var_baseType_4520, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 122)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@superMethodCallInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_superMethodCallInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                               GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                               GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                               GGS_string & ioArgument_ioGeneratedCode,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_string_5D_ var_parameterCppNameList_6408 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_jokerParametersToReleaseList_6452 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_inputVariableList_6504 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_superMethodCallInstructionForGeneration temp_0 = this ;
  UpEnumerator__5B_actualParameterForGeneration_5D_ enumerator_6560 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_6560.hasCurrentObject ()) {
    GGS_string var_parameterCppName_6775 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_6560.current (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_6452, var_inputVariableList_6504, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_6775, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 158)) ;
    var_parameterCppNameList_6408.plusPlusAssignOperation (var_parameterCppName_6775  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 159)) ;
    enumerator_6560.gotoNextObject () ;
  }
  const GGS_superMethodCallInstructionForGeneration temp_1 = this ;
  const GGS_superMethodCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (extensionGetter_definition (temp_1.readProperty_mBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 162)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-super-method-call.galgas4", 162)), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 162)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 162)).add_operation (temp_2.readProperty_mMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-super-method-call.galgas4", 162)), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 162))  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 162)) ;
  const GGS_superMethodCallInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("cPtr_").add_operation (extensionGetter_definition (temp_3.readProperty_mBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 163)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-super-method-call.galgas4", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 163)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 163)) ;
  const GGS_superMethodCallInstructionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::method_").add_operation (temp_4.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-super-method-call.galgas4", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 164)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 164)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 164)) ;
  UpEnumerator__5B_string_5D_ enumerator_7229 (var_parameterCppNameList_6408) ;
  while (enumerator_7229.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_7229.current (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 166)) ;
    enumerator_7229.gotoNextObject () ;
    if (enumerator_7229.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 167)) ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::equal, var_parameterCppNameList_6408.getter_count (SOURCE_FILE ("instruction-super-method-call.galgas4", 169)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_superMethodCallInstructionForGeneration temp_7 = this ;
        test_6 = temp_7.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 171)) ;
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 172)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 173)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_superMethodCallInstructionForGeneration temp_9 = this ;
      test_8 = temp_9.readProperty_mHasCompilerArgument ().boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 176)) ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 177)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 177)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 178)) ;
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 180)) ;
    }
  }
  const GGS_superMethodCallInstructionForGeneration temp_10 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_sourceFile (temp_10.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 182)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 182)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 182)) ;
  const GGS_superMethodCallInstructionForGeneration temp_11 = this ;
  UpEnumerator__5B_actualParameterForGeneration_5D_ enumerator_7945 (temp_11.readProperty_mActualParameterList ()) ;
  while (enumerator_7945.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_7945.current (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 185)) ;
    enumerator_7945.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@syntaxSendInstructionAST transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionAST::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument__5F_ioActuallyUsedTerminalSymbolMap */,
                                                                                   const GGS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument__5F_inNonTerminalSymbolMap */,
                                                                                   GGS_u_33__32_ & /* ioArgument__5F_ioAddedNonTerminalIndex */,
                                                                                   GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & /* ioArgument__5F_ioSyntaxInstructionList */,
                                                                                   Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@syntaxSendInstructionAST analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionAST::method_analyzeSyntaxInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     const GGS_bool constinArgument_inHasTranslateFeature,
                                                                     const GGS_terminalMap /* constinArgument__5F_inTerminalMap */,
                                                                     const GGS_string /* constinArgument__5F_inLexiqueName */,
                                                                     const GGS_nonterminalMap /* constinArgument__5F_inNonterminalMap */,
                                                                     const GGS_string /* constinArgument__5F_inComponentName */,
                                                                     const GGS_stringset /* constinArgument__5F_inIndexNameSet */,
                                                                     GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_u_33__32_ & /* ioArgument__5F_ioSelectMethodCount */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("instruction-syntax-send.galgas4", 91)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_syntaxSendInstructionAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("'send' instruction is only allowed when syntax componant has 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas4", 92)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_expression_4994 ;
  const GGS_syntaxSendInstructionAST temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-syntax-send.galgas4", 100)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4994, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas4", 97)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_expression_4994.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_syntaxSendInstructionAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("'send' expresion should be an @string expression"), fixItArray6  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas4", 108)) ;
    }
  }
  const GGS_syntaxSendInstructionAST temp_7 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_syntaxSendInstructionForGeneration::init_21__21_ (temp_7.readProperty_mInstructionLocation (), var_expression_4994, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas4", 111)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@syntaxSendInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                          GGS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_sourceVar_6522 ;
  const GGS_syntaxSendInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_6522, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas4", 135)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-syntax-send.galgas4", 143)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_sourceVar_6522, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas4", 144)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas4", 144)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas4", 144)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas4", 145)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas4", 145)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (".appendSource (").add_operation (var_sourceVar_6522, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas4", 146)).add_operation (GGS_string (".stringValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas4", 146)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas4", 146)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas4", 147)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@errorInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_errorInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_errorInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLocationExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 123)) ;
  const GGS_errorInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mMessageExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 124)) ;
  const GGS_errorInstructionAST temp_2 = this ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.readProperty_mFixitListAST (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 125)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeErrorOrWarningInstruction?&?&?????&!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                   const GGS_semanticExpressionAST constinArgument_inLocationExpression,
                                                                                                   const GGS_semanticExpressionAST constinArgument_inMessageExpression,
                                                                                                   const GGS__5B_fixitElementAST_5D_ constinArgument_inFixitListAST,
                                                                                                   const GGS_location constinArgument_inErrorLocation,
                                                                                                   const GGS_string constinArgument_inErrorOrWarningString,
                                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                   GGS_semanticExpressionForGeneration & outArgument_outLocationExpression,
                                                                                                   GGS_semanticExpressionForGeneration & outArgument_outMessageExpression,
                                                                                                   GGS__5B_fixitElementForGeneration_5D_ & outArgument_outFixitListForGeneration,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLocationExpression.drop () ; // Release 'out' argument
  outArgument_outMessageExpression.drop () ; // Release 'out' argument
  outArgument_outFixitListForGeneration.drop () ; // Release 'out' argument
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inLocationExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLocationType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outLocationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 171)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLocationType (), outArgument_outLocationExpression.readProperty_mResultType (), constinArgument_inErrorLocation, outArgument_outLocationExpression, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas4", 181)) ;
  }
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inMessageExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-error.galgas4", 191)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outMessageExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 188)) ;
  outArgument_outFixitListForGeneration = GGS__5B_fixitElementForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_fixitElementAST_5D_ enumerator_7911 (constinArgument_inFixitListAST) ;
  while (enumerator_7911.hasCurrentObject ()) {
    switch (enumerator_7911.current (HERE).enumValue ()) {
    case GGS_fixitElementAST::Enumeration::invalid:
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItRemove:
      {
        outArgument_outFixitListForGeneration.plusPlusAssignOperation (GGS_fixitElementForGeneration::class_func_fixItRemove (SOURCE_FILE ("instruction-error.galgas4", 202))  COMMA_SOURCE_FILE ("instruction-error.galgas4", 202)) ;
      }
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItReplace:
      {
        GGS_semanticExpressionAST extractedValue_8041_exp_0 ;
        GGS_location extractedValue_8046_errorLocation_1 ;
        enumerator_7911.current (HERE).getAssociatedValuesFor_fixItReplace (extractedValue_8041_exp_0, extractedValue_8046_errorLocation_1) ;
        GGS_semanticExpressionForGeneration var_expression_8363 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_8041_exp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringArrayType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8363, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 204)) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_bool test_1 = GGS_bool (ComparisonKind::notEqual, var_expression_8363.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringArrayType ())) ;
          if (GalgasBool::boolTrue == test_1.boolEnum ()) {
            test_1 = GGS_bool (ComparisonKind::notEqual, var_expression_8363.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringArrayType ())) ;
          }
          GGS_bool test_2 = test_1 ;
          if (GalgasBool::boolTrue == test_2.boolEnum ()) {
            test_2 = GGS_bool (ComparisonKind::notEqual, var_expression_8363.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GGS_bool test_3 = test_2 ;
          if (GalgasBool::boolTrue == test_3.boolEnum ()) {
            test_3 = GGS_bool (ComparisonKind::notEqual, var_expression_8363.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())) ;
          }
          test_0 = test_3.boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_8046_errorLocation_1, GGS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_8363.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 217)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 217)).add_operation (GGS_string (", it should be an @string, @stringset, [@string] or [@lstring]"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 217)), fixItArray4  COMMA_SOURCE_FILE ("instruction-error.galgas4", 217)) ;
          }
        }
        outArgument_outFixitListForGeneration.plusPlusAssignOperation (GGS_fixitElementForGeneration::class_func_fixItReplace (var_expression_8363  COMMA_SOURCE_FILE ("instruction-error.galgas4", 221))  COMMA_SOURCE_FILE ("instruction-error.galgas4", 221)) ;
      }
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItInsertBefore:
      {
        GGS_semanticExpressionAST extractedValue_9032_exp_0 ;
        GGS_location extractedValue_9037_errorLocation_1 ;
        enumerator_7911.current (HERE).getAssociatedValuesFor_fixItInsertBefore (extractedValue_9032_exp_0, extractedValue_9037_errorLocation_1) ;
        GGS_semanticExpressionForGeneration var_expression_9354 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_9032_exp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringArrayType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_9354, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 223)) ;
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          GGS_bool test_6 = GGS_bool (ComparisonKind::notEqual, var_expression_9354.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringArrayType ())) ;
          if (GalgasBool::boolTrue == test_6.boolEnum ()) {
            test_6 = GGS_bool (ComparisonKind::notEqual, var_expression_9354.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringArrayType ())) ;
          }
          GGS_bool test_7 = test_6 ;
          if (GalgasBool::boolTrue == test_7.boolEnum ()) {
            test_7 = GGS_bool (ComparisonKind::notEqual, var_expression_9354.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GGS_bool test_8 = test_7 ;
          if (GalgasBool::boolTrue == test_8.boolEnum ()) {
            test_8 = GGS_bool (ComparisonKind::notEqual, var_expression_9354.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())) ;
          }
          test_5 = test_8.boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            GenericArray <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_9037_errorLocation_1, GGS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_9354.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 236)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 236)).add_operation (GGS_string (", it should be an @string, @stringset, [@string] or [@lstring]"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 236)), fixItArray9  COMMA_SOURCE_FILE ("instruction-error.galgas4", 236)) ;
          }
        }
        outArgument_outFixitListForGeneration.plusPlusAssignOperation (GGS_fixitElementForGeneration::class_func_fixItInsertBefore (var_expression_9354  COMMA_SOURCE_FILE ("instruction-error.galgas4", 240))  COMMA_SOURCE_FILE ("instruction-error.galgas4", 240)) ;
      }
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItInsertAfter:
      {
        GGS_semanticExpressionAST extractedValue_10027_exp_0 ;
        GGS_location extractedValue_10032_errorLocation_1 ;
        enumerator_7911.current (HERE).getAssociatedValuesFor_fixItInsertAfter (extractedValue_10027_exp_0, extractedValue_10032_errorLocation_1) ;
        GGS_semanticExpressionForGeneration var_expression_10349 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_10027_exp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringArrayType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_10349, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 242)) ;
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          GGS_bool test_11 = GGS_bool (ComparisonKind::notEqual, var_expression_10349.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringArrayType ())) ;
          if (GalgasBool::boolTrue == test_11.boolEnum ()) {
            test_11 = GGS_bool (ComparisonKind::notEqual, var_expression_10349.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringArrayType ())) ;
          }
          GGS_bool test_12 = test_11 ;
          if (GalgasBool::boolTrue == test_12.boolEnum ()) {
            test_12 = GGS_bool (ComparisonKind::notEqual, var_expression_10349.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GGS_bool test_13 = test_12 ;
          if (GalgasBool::boolTrue == test_13.boolEnum ()) {
            test_13 = GGS_bool (ComparisonKind::notEqual, var_expression_10349.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())) ;
          }
          test_10 = test_13.boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GenericArray <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (extractedValue_10032_errorLocation_1, GGS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_10349.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 255)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 255)).add_operation (GGS_string (", it should be an @string, @stringset, [@string] or [@lstring]"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 255)), fixItArray14  COMMA_SOURCE_FILE ("instruction-error.galgas4", 255)) ;
          }
        }
        outArgument_outFixitListForGeneration.plusPlusAssignOperation (GGS_fixitElementForGeneration::class_func_fixItInsertAfter (var_expression_10349  COMMA_SOURCE_FILE ("instruction-error.galgas4", 259))  COMMA_SOURCE_FILE ("instruction-error.galgas4", 259)) ;
      }
      break ;
    }
    enumerator_7911.gotoNextObject () ;
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::notEqual, outArgument_outMessageExpression.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 265)).add_operation (GGS_string (" message expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 265)).add_operation (extensionGetter_definition (outArgument_outMessageExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 265)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 265)).add_operation (GGS_string ("'; it should be of the '@string' type"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 265)), fixItArray16  COMMA_SOURCE_FILE ("instruction-error.galgas4", 264)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@errorInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_errorInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                  GGS_localVarManager & ioArgument_ioVariableMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_locationExpression_12244 ;
  GGS_semanticExpressionForGeneration var_messageExpression_12273 ;
  GGS__5B_fixitElementForGeneration_5D_ var_fixitListForGeneration_12301 ;
  {
  const GGS_errorInstructionAST temp_0 = this ;
  const GGS_errorInstructionAST temp_1 = this ;
  const GGS_errorInstructionAST temp_2 = this ;
  const GGS_errorInstructionAST temp_3 = this ;
  routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GGS_string ("error"), ioArgument_ioVariableMap, var_locationExpression_12244, var_messageExpression_12273, var_fixitListForGeneration_12301, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas4", 281)) ;
  }
  GGS__5B_string_5D_ var_builtVariableCppNameList_12365 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_errorInstructionAST temp_4 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_12425 (temp_4.readProperty_mBuiltVariableList ()) ;
  while (enumerator_12425.hasCurrentObject ()) {
    GGS_string var_varCppName_12505 ;
    {
    GGS_unifiedTypeMapEntry joker_12496 ; // Joker input parameter
    GGS_string joker_12517 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_12425.current (HERE), joker_12496, var_varCppName_12505, joker_12517, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 299)) ;
    }
    var_builtVariableCppNameList_12365.plusPlusAssignOperation (var_varCppName_12505  COMMA_SOURCE_FILE ("instruction-error.galgas4", 300)) ;
    enumerator_12425.gotoNextObject () ;
  }
  const GGS_errorInstructionAST temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_errorInstructionForGeneration::init_21__21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), var_locationExpression_12244, var_messageExpression_12273, var_builtVariableCppNameList_12365, var_fixitListForGeneration_12301, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-error.galgas4", 303)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@errorInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_errorInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                     GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                     GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                     const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                     GGS_string & ioArgument_ioGeneratedCode,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_receiverCppVarName_15937 ;
  const GGS_errorInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_15937, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 378)) ;
  GGS_string var_messageCppVarName_16150 ;
  const GGS_errorInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mErrorExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_16150, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 386)) ;
  GGS_string var_fixItArrayCppName_16412 ;
  const GGS_errorInstructionForGeneration temp_2 = this ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_16412, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 394)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-error.galgas4", 403)) ;
  }
  const GGS_errorInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE).add_operation (GGS_string ("->emitSemanticError ("), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 404)).add_operation (var_receiverCppVarName_15937, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 404)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 405)).add_operation (var_messageCppVarName_16150, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 405)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 406)).add_operation (var_fixItArrayCppName_16412, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 406)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 407)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 408)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 407)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 408)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas4", 404)) ;
  const GGS_errorInstructionForGeneration temp_4 = this ;
  UpEnumerator__5B_string_5D_ enumerator_16794 (temp_4.readProperty_mBuiltVariableCppNameList ()) ;
  while (enumerator_16794.hasCurrentObject ()) {
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_16794.current (HERE) COMMA_SOURCE_FILE ("instruction-error.galgas4", 411)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_16794.current (HERE).add_operation (GGS_string (".drop () ; // Release error dropped variable\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas4", 412)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas4", 412)) ;
    enumerator_16794.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@procCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_procCallInstructionAST temp_0 = this ;
  UpEnumerator__5B_actualParameterAST_5D_ enumerator_1663 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_1663.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_1663.current (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 30)) ;
    enumerator_1663.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@procCallInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_formalParameterSignatureElement_5D_ var_routineSignature_2618 ;
  GGS_bool var_isFilePrivate_2669 ;
  GGS_lstring var_routineMangledName_2716 ;
  const GGS_procCallInstructionAST temp_0 = this ;
  const GGS_procCallInstructionAST temp_1 = this ;
  extensionMethod_searchKey (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mRoutineMap (), temp_0.readProperty_mRoutineName (), temp_1.readProperty_mActualParameterList (), var_routineSignature_2618, var_isFilePrivate_2669, var_routineMangledName_2716, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 43)) ;
  GGS_lstring var_usefulnessName_2769 = function_procedureNameForUsefulEntitiesGraph (var_routineMangledName_2716, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 51)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_2769 COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 52)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_isFilePrivate_2669.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_procCallInstructionAST temp_3 = this ;
      GGS_location var_procDeclarationLocation_2997 = extensionGetter_locationForKey (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mRoutineMap (), temp_3.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 55)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_procCallInstructionAST temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mRoutineName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 56)).objectCompare (var_procDeclarationLocation_2997.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 56)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_procCallInstructionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mRoutineName ().readProperty_location (), GGS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_2997.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 57)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 57)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 57)), fixItArray7  COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 57)) ;
        }
      }
    }
  }
  GGS__5B_actualParameterForGeneration_5D_ var_actualParameterListForGeneration_3758 ;
  const GGS_procCallInstructionAST temp_8 = this ;
  const GGS_procCallInstructionAST temp_9 = this ;
  extensionMethod_analyzeRoutineArguments (temp_8.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_9.readProperty_mRoutineName (), GGS_string ("'").add_operation (var_routineMangledName_2716.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 67)).add_operation (GGS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 67)), var_routineSignature_2618, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3758, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 61)) ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_procCallInstructionForGeneration::init_21_routineMangledName_21_ (var_routineMangledName_2716, var_actualParameterListForGeneration_3758, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 74)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@procCallInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                        GGS_string & ioArgument_ioGeneratedCode,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_procCallInstructionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (temp_0.readProperty_routineMangledName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-proc-call.galgas4", 99)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 99))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 99)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 100)) ;
  GGS__5B_string_5D_ var_parameterCppNameList_5163 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_jokerParametersToReleaseList_5208 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_inputVariableList_5261 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_procCallInstructionForGeneration temp_1 = this ;
  UpEnumerator__5B_actualParameterForGeneration_5D_ enumerator_5307 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_5307.hasCurrentObject ()) {
    GGS_string var_parameterCppName_5578 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_5307.current (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_5208, var_inputVariableList_5261, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_5578, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 106)) ;
    var_parameterCppNameList_5163.plusPlusAssignOperation (var_parameterCppName_5578  COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 115)) ;
    enumerator_5307.gotoNextObject () ;
  }
  const GGS_procCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("routine_").add_operation (temp_2.readProperty_routineMangledName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas4", 118)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 118)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 118)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 118)) ;
  UpEnumerator__5B_string_5D_ enumerator_5802 (var_parameterCppNameList_5163) ;
  while (enumerator_5802.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_5802.current (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 120)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 120)) ;
    enumerator_5802.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 122)) ;
  }
  const GGS_procCallInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 123)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_routineMangledName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 123)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 123)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 123)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 123)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 124)) ;
  const GGS_procCallInstructionForGeneration temp_4 = this ;
  UpEnumerator__5B_actualParameterForGeneration_5D_ enumerator_6128 (temp_4.readProperty_mActualParameterList ()) ;
  while (enumerator_6128.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_6128.current (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas4", 127)) ;
    enumerator_6128.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfDivEqualExpressionInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfDivEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfDivEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 94)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfDivEqualExpressionInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfDivEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_4713 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas4", 107)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas4", 107)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_4713.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 108)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas4", 108)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfDivEqualExpressionInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 109)) ;
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfAvailable_4713.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 112)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas4", 112)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 112)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_selfDivEqualExpressionInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_4713.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 114)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 114)).add_operation (GGS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 114)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 113)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_expression_5653 ;
      const GGS_selfDivEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfAvailable_4713.readProperty_type (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5653, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 119)) ;
      {
      const GGS_selfDivEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfAvailable_4713.readProperty_type (), var_expression_5653.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_5653, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 129)) ;
      }
      const GGS_selfDivEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_opAssignInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_selfAvailable_4713.readProperty_type (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GGS_string::makeEmptyString (), GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE), var_expression_5653, GGS_string ("divAssignOperation"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 136)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfDivEqualExpressionInstructionAST temp_10 = this ;
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 146)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfPlusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfPlusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 164)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfPlusEqualExpressionInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_7642 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas4", 177)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas4", 177)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_7642.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 178)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas4", 178)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfPlusEqualExpressionInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 179)) ;
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfAvailable_7642.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 182)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas4", 182)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 182)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas4", 182)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_selfPlusEqualExpressionInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_7642.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 184)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 184)).add_operation (GGS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 184)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 183)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_expression_8588 ;
      const GGS_selfPlusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfAvailable_7642.readProperty_type (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8588, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 189)) ;
      {
      const GGS_selfPlusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfAvailable_7642.readProperty_type (), var_expression_8588.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_8588, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 199)) ;
      }
      const GGS_selfPlusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_opAssignInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_selfAvailable_7642.readProperty_type (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GGS_string::makeEmptyString (), GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE), var_expression_8588, GGS_string ("plusAssignOperation"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 206)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfPlusEqualExpressionInstructionAST temp_10 = this ;
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 216)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfMinusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfMinusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfMinusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 234)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfMinusEqualExpressionInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfMinusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_10580 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas4", 247)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas4", 247)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_10580.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 248)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas4", 248)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfMinusEqualExpressionInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 249)) ;
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfAvailable_10580.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 252)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas4", 252)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 252)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas4", 252)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_selfMinusEqualExpressionInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_10580.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 254)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 254)).add_operation (GGS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 254)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 253)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_expression_11527 ;
      const GGS_selfMinusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfAvailable_10580.readProperty_type (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_11527, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 259)) ;
      {
      const GGS_selfMinusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfAvailable_10580.readProperty_type (), var_expression_11527.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_11527, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 269)) ;
      }
      const GGS_selfMinusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_opAssignInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_selfAvailable_10580.readProperty_type (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GGS_string::makeEmptyString (), GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE), var_expression_11527, GGS_string ("minusAssignOperation"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 276)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfMinusEqualExpressionInstructionAST temp_10 = this ;
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 286)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfMulEqualExpressionInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfMulEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfMulEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 304)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfMulEqualExpressionInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfMulEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_13516 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas4", 317)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas4", 317)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_13516.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 318)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas4", 318)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfMulEqualExpressionInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 319)) ;
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfAvailable_13516.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 322)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas4", 322)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 322)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_selfMulEqualExpressionInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_13516.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 324)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 324)).add_operation (GGS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 324)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 323)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_expression_14457 ;
      const GGS_selfMulEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfAvailable_13516.readProperty_type (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_14457, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 329)) ;
      {
      const GGS_selfMulEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfAvailable_13516.readProperty_type (), var_expression_14457.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_14457, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 339)) ;
      }
      const GGS_selfMulEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_opAssignInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_selfAvailable_13516.readProperty_type (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GGS_string::makeEmptyString (), GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE), var_expression_14457, GGS_string ("mulAssignOperation"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 346)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfMulEqualExpressionInstructionAST temp_10 = this ;
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 356)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@opAssignExpressionInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_opAssignExpressionInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_opAssignExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 261)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@opAssignExpressionInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_opAssignExpressionInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_targetType_10353 ;
  GGS_string var_targetVariableCppName_10380 ;
  GGS_string var_nameForCheckingFormalParameterUsing_10418 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_opAssignExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_selfAvailability_2E_available var_selfAvailable_10500 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas4", 278)).unwrappedValue () ;
        if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas4", 278)).isValuated ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = extensionGetter_propertiesAreMutable (var_selfAvailable_10500.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 279)).operator_not (SOURCE_FILE ("instruction-concat.galgas4", 279)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              const GGS_opAssignExpressionInstructionAST temp_4 = this ;
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GGS_string ("property not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 280)) ;
            }
          }
          GGS_propertyMap var_propertyMap_10746 = extensionGetter_definition (var_selfAvailable_10500.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 282)).readProperty_propertyMap () ;
          GGS_bool var_isConstant_10862 ;
          const GGS_opAssignExpressionInstructionAST temp_6 = this ;
          GGS_AccessControl joker_10853 ; // Joker input parameter
          var_propertyMap_10746.method_searchKey (temp_6.readProperty_mReceiverName (), joker_10853, var_isConstant_10862, var_targetType_10353, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 283)) ;
          var_nameForCheckingFormalParameterUsing_10418 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GGS_opAssignExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_10380 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 285)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas4", 286)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 286)) ;
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = var_isConstant_10862.boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              const GGS_opAssignExpressionInstructionAST temp_9 = this ;
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 288)) ;
            }
          }
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = extensionGetter_propertiesAreMutable (var_selfAvailable_10500.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 290)).operator_not (SOURCE_FILE ("instruction-concat.galgas4", 290)).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              const GGS_opAssignExpressionInstructionAST temp_12 = this ;
              GenericArray <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GGS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 291)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        const GGS_opAssignExpressionInstructionAST temp_14 = this ;
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 294)) ;
        var_targetType_10353.drop () ; // Release error dropped variable
        var_targetVariableCppName_10380.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_10418.drop () ; // Release error dropped variable
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_opAssignExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_10353, var_targetVariableCppName_10380, var_nameForCheckingFormalParameterUsing_10418, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 298)) ;
    }
  }
  const GGS_opAssignExpressionInstructionAST temp_17 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_11859 (temp_17.readProperty_mStructAttributeList ()) ;
  while (enumerator_11859.hasCurrentObject ()) {
    GGS_propertyMap var_propertyMap_11893 = extensionGetter_definition (var_targetType_10353, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 307)).readProperty_propertyMap () ;
    GGS_AccessControl var_accessControl_11985 ;
    GGS_bool var_isConstant_12005 ;
    var_propertyMap_11893.method_searchKey (enumerator_11859.current (HERE), var_accessControl_11985, var_isConstant_12005, var_targetType_10353, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 308)) ;
    extensionMethod_checkSetAccess (var_accessControl_11985, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_11859.current (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 309)) ;
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = var_isConstant_12005.boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        const GGS_opAssignExpressionInstructionAST temp_19 = this ;
        GenericArray <FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (temp_19.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray20  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 311)) ;
      }
    }
    enumerator_11859.gotoNextObject () ;
  }
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    const GGS_opAssignExpressionInstructionAST temp_22 = this ;
    test_21 = extensionGetter_definition (var_targetType_10353, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 315)).readProperty_features ().getter_contains (extensionGetter_features (temp_22.readProperty_mOperator (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 315)) COMMA_SOURCE_FILE ("instruction-concat.galgas4", 315)).operator_not (SOURCE_FILE ("instruction-concat.galgas4", 315)).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      const GGS_opAssignExpressionInstructionAST temp_23 = this ;
      const GGS_opAssignExpressionInstructionAST temp_24 = this ;
      GenericArray <FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_10353, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 317)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 317)).add_operation (GGS_string ("' type, but this type does not support the '"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 317)).add_operation (extensionGetter_string (temp_24.readProperty_mOperator (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 318)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 318)).add_operation (GGS_string ("' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 318)), fixItArray25  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 316)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_expression_12927 ;
  const GGS_opAssignExpressionInstructionAST temp_26 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_26.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_10353, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_12927, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 322)) ;
  {
  const GGS_opAssignExpressionInstructionAST temp_27 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_10353, var_expression_12927.readProperty_mResultType (), temp_27.readProperty_mInstructionLocation (), var_expression_12927, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 332)) ;
  }
  const GGS_opAssignExpressionInstructionAST temp_28 = this ;
  const GGS_opAssignExpressionInstructionAST temp_29 = this ;
  const GGS_opAssignExpressionInstructionAST temp_30 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_opAssignInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_28.readProperty_mInstructionLocation (), var_targetType_10353, var_targetVariableCppName_10380, var_nameForCheckingFormalParameterUsing_10418, temp_29.readProperty_mStructAttributeList (), var_expression_12927, extensionGetter_cppFunctionName (temp_30.readProperty_mOperator (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 341)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 334)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@plusPlusEqualElementInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_plusPlusEqualElementInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_plusPlusEqualElementInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 360)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@plusPlusEqualElementInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_plusPlusEqualElementInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_targetType_14779 ;
  GGS_string var_targetVariableCppName_14806 ;
  GGS_string var_nameForCheckingFormalParameterUsing_14844 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_plusPlusEqualElementInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_selfAvailability_2E_available var_selfAvailable_14926 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas4", 377)).unwrappedValue () ;
        if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas4", 377)).isValuated ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GGS_propertyMap var_propertyMap_15007 = extensionGetter_definition (var_selfAvailable_14926.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 378)).readProperty_propertyMap () ;
          GGS_bool var_isConstant_15123 ;
          const GGS_plusPlusEqualElementInstructionAST temp_3 = this ;
          GGS_AccessControl joker_15114 ; // Joker input parameter
          var_propertyMap_15007.method_searchKey (temp_3.readProperty_mReceiverName (), joker_15114, var_isConstant_15123, var_targetType_14779, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 379)) ;
          var_nameForCheckingFormalParameterUsing_14844 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GGS_plusPlusEqualElementInstructionAST temp_4 = this ;
          var_targetVariableCppName_14806 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 381)).add_operation (temp_4.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas4", 382)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 382)) ;
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = var_isConstant_15123.boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              const GGS_plusPlusEqualElementInstructionAST temp_6 = this ;
              GenericArray <FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (temp_6.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 384)) ;
            }
          }
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = extensionGetter_propertiesAreMutable (var_selfAvailable_14926.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 386)).operator_not (SOURCE_FILE ("instruction-concat.galgas4", 386)).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              const GGS_plusPlusEqualElementInstructionAST temp_9 = this ;
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GGS_string ("the property cannot be mutated in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 387)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        const GGS_plusPlusEqualElementInstructionAST temp_11 = this ;
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray12  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 390)) ;
        var_targetType_14779.drop () ; // Release error dropped variable
        var_targetVariableCppName_14806.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_14844.drop () ; // Release error dropped variable
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_plusPlusEqualElementInstructionAST temp_13 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_13.readProperty_mReceiverName (), var_targetType_14779, var_targetVariableCppName_14806, var_nameForCheckingFormalParameterUsing_14844, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 394)) ;
    }
  }
  const GGS_plusPlusEqualElementInstructionAST temp_14 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_16120 (temp_14.readProperty_mStructAttributeList ()) ;
  while (enumerator_16120.hasCurrentObject ()) {
    GGS_propertyMap var_propertyMap_16154 = extensionGetter_definition (var_targetType_14779, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 403)).readProperty_propertyMap () ;
    GGS_AccessControl var_accessControl_16243 ;
    GGS_bool var_isConstant_16263 ;
    var_propertyMap_16154.method_searchKey (enumerator_16120.current (HERE), var_accessControl_16243, var_isConstant_16263, var_targetType_14779, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 404)) ;
    extensionMethod_checkSetAccess (var_accessControl_16243, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_16120.current (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 405)) ;
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = var_isConstant_16263.boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GenericArray <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_16120.current (HERE).readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 407)) ;
      }
    }
    enumerator_16120.gotoNextObject () ;
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = extensionGetter_definition (var_targetType_14779, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 411)).readProperty_supportArrayLiteral ().operator_not (SOURCE_FILE ("instruction-concat.galgas4", 411)).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      const GGS_plusPlusEqualElementInstructionAST temp_18 = this ;
      GenericArray <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_14779, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 413)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 413)).add_operation (GGS_string ("' type, but this type does not support the '++=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 413)), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 412)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_rightExpressionType_16796 = extensionGetter_definition (var_targetType_14779, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 417)).readProperty_typeForEnumeratedElement () ;
  GGS_semanticExpressionForGeneration var_expression_17193 ;
  const GGS_plusPlusEqualElementInstructionAST temp_20 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_20.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_rightExpressionType_16796, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_17193, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 419)) ;
  {
  const GGS_plusPlusEqualElementInstructionAST temp_21 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_rightExpressionType_16796, var_expression_17193.readProperty_mResultType (), temp_21.readProperty_mInstructionLocation (), var_expression_17193, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 429)) ;
  }
  const GGS_plusPlusEqualElementInstructionAST temp_22 = this ;
  const GGS_plusPlusEqualElementInstructionAST temp_23 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_plusPlusAssignInstructionForGeneration::init_21__21__21__21__21__21_ (temp_22.readProperty_mInstructionLocation (), var_targetType_14779, var_targetVariableCppName_14806, var_nameForCheckingFormalParameterUsing_14844, temp_23.readProperty_mStructAttributeList (), var_expression_17193, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 436)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@opAssignInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_opAssignInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                        GGS_string & ioArgument_ioGeneratedCode,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_opAssignInstructionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 470)) ;
  GGS_string var_sourceVar_19049 ;
  const GGS_opAssignInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_19049, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 471)) ;
  {
  const GGS_opAssignInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas4", 478)) ;
  }
  const GGS_opAssignInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_3.readProperty_mTargetVariableCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 479)) ;
  const GGS_opAssignInstructionForGeneration temp_4 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_19225 (temp_4.readProperty_mStructAttributeList ()) ;
  while (enumerator_19225.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (".mProperty_").add_operation (enumerator_19225.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 481)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 481)) ;
    enumerator_19225.gotoNextObject () ;
  }
  const GGS_opAssignInstructionForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (".").add_operation (temp_5.readProperty_mGeneratedMethod (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 483)).add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 483)).add_operation (var_sourceVar_19049, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 483)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 483)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 484)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 484)) ;
  const GGS_opAssignInstructionForGeneration temp_6 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 485)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 485)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 485)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 485)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-concat.galgas4", 486)) ;
  }
  {
  const GGS_opAssignInstructionForGeneration temp_7 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_7.readProperty_mTargetVariableCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas4", 487)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@plusPlusAssignInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_plusPlusAssignInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                              GGS_string & ioArgument_ioGeneratedCode,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_plusPlusAssignInstructionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 511)) ;
  GGS_string var_sourceVar_20830 ;
  const GGS_plusPlusAssignInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_20830, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 512)) ;
  {
  const GGS_plusPlusAssignInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas4", 519)) ;
  }
  const GGS_plusPlusAssignInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_3.readProperty_mTargetVariableCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 520)) ;
  const GGS_plusPlusAssignInstructionForGeneration temp_4 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_21006 (temp_4.readProperty_mStructAttributeList ()) ;
  while (enumerator_21006.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (".mProperty_").add_operation (enumerator_21006.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 522)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 522)) ;
    enumerator_21006.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (".plusPlusAssignOperation (").add_operation (var_sourceVar_20830, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 524)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 524)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 524)) ;
  const GGS_plusPlusAssignInstructionForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_commaSourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 525)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 525)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 525)) ;
  {
  const GGS_plusPlusAssignInstructionForGeneration temp_6 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_6.readProperty_mTargetVariableCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas4", 526)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@warningInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_warningInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_warningInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLocationExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas4", 61)) ;
  const GGS_warningInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mMessageExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas4", 62)) ;
  const GGS_warningInstructionAST temp_2 = this ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.readProperty_mFixitListAST (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas4", 63)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@warningInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_warningInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_locationExpression_4129 ;
  GGS_semanticExpressionForGeneration var_messageExpression_4158 ;
  GGS__5B_fixitElementForGeneration_5D_ var_fixitListForGeneration_4186 ;
  {
  const GGS_warningInstructionAST temp_0 = this ;
  const GGS_warningInstructionAST temp_1 = this ;
  const GGS_warningInstructionAST temp_2 = this ;
  const GGS_warningInstructionAST temp_3 = this ;
  routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GGS_string ("warning"), ioArgument_ioVariableMap, var_locationExpression_4129, var_messageExpression_4158, var_fixitListForGeneration_4186, inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas4", 78)) ;
  }
  const GGS_warningInstructionAST temp_4 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_warningInstructionForGeneration::init_21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), var_locationExpression_4129, var_messageExpression_4158, var_fixitListForGeneration_4186, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-warning.galgas4", 94)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@warningInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_warningInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                       GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                       GGS_string & ioArgument_ioGeneratedCode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_receiverCppVarName_5644 ;
  const GGS_warningInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_5644, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas4", 121)) ;
  GGS_string var_messageCppVarName_5856 ;
  const GGS_warningInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mWarningExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_5856, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas4", 123)) ;
  GGS_string var_fixItArrayCppName_6110 ;
  const GGS_warningInstructionForGeneration temp_2 = this ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_6110, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas4", 131)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-warning.galgas4", 140)) ;
  }
  const GGS_warningInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE).add_operation (GGS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas4", 141)).add_operation (var_receiverCppVarName_5644, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas4", 141)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas4", 142)).add_operation (var_messageCppVarName_5856, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas4", 142)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas4", 143)).add_operation (var_fixItArrayCppName_6110, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas4", 143)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas4", 144)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas4", 145)), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas4", 144)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas4", 145)), inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas4", 141)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInFileInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInFileInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInFileInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 200)) ;
  const GGS_grammarInFileInstructionAST temp_1 = this ;
  UpEnumerator__5B_actualParameterAST_5D_ enumerator_9598 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_9598.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_9598.current (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 202)) ;
    enumerator_9598.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInStringInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInStringInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInStringInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 209)) ;
  const GGS_grammarInStringInstructionAST temp_1 = this ;
  UpEnumerator__5B_actualParameterAST_5D_ enumerator_10006 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_10006.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_10006.current (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 211)) ;
    enumerator_10006.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInFileInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInFileInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                          GGS_localVarManager & ioArgument_ioVariableMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInFileInstructionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_10805 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 226)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_10805 COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 227)) ;
  }
  GGS_grammarLabelMap var_grammarLabelMap_11131 ;
  GGS_bool var_hasTranslateFeature_11171 ;
  const GGS_grammarInFileInstructionAST temp_1 = this ;
  GGS_bool joker_11152 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mGrammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_11131, joker_11152, var_hasTranslateFeature_11171, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 229)) ;
  GGS__5B_formalParameterSignatureElement_5D_ var_labelSignature_11309 ;
  const GGS_grammarInFileInstructionAST temp_2 = this ;
  var_grammarLabelMap_11131.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_11309, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 236)) ;
  GGS__5B_actualParameterForGeneration_5D_ var_actualParameterListForGeneration_11755 ;
  const GGS_grammarInFileInstructionAST temp_3 = this ;
  const GGS_grammarInFileInstructionAST temp_4 = this ;
  const GGS_grammarInFileInstructionAST temp_5 = this ;
  extensionMethod_analyzeRoutineArguments (temp_3.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_4.readProperty_mLabelName (), GGS_string ("label of the ").add_operation (temp_5.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 247)).add_operation (GGS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 247)), var_labelSignature_11309, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_11755, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 241)) ;
  GGS_semanticExpressionForGeneration var_sourceExpression_12116 ;
  const GGS_grammarInFileInstructionAST temp_6 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-grammar.galgas4", 257)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_sourceExpression_12116, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 254)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_sourceExpression_12116.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInFileInstructionAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GGS_string ("this expression is the source file path and its type should be '@lstring', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_12116.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 267)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 266)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 267)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 265)) ;
    }
  }
  const GGS_grammarInFileInstructionAST temp_10 = this ;
  GGS_string var_syntaxDirectedTranslationResultVarName_12590 = GGS_string ("syntaxDirectedTranslationResult_").add_operation (temp_10.readProperty_mGrammarComponentName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 271)).getter_string (SOURCE_FILE ("instruction-grammar.galgas4", 271)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 271)) ;
  GGS__5B_string_5D_ var_assignementList_12729 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_grammarInFileInstructionAST temp_11 = this ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_11.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_hasTranslateFeature_11171, var_syntaxDirectedTranslationResultVarName_12590, var_assignementList_12729, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 273)) ;
  const GGS_grammarInFileInstructionAST temp_12 = this ;
  const GGS_grammarInFileInstructionAST temp_13 = this ;
  const GGS_grammarInFileInstructionAST temp_14 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_grammarInstructionWithSourceFileForGeneration::init_21__21__21__21__21__21__21__21_ (temp_12.readProperty_mInstructionLocation (), temp_13.readProperty_mGrammarComponentName ().readProperty_string (), temp_14.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_12116, var_actualParameterListForGeneration_11755, var_hasTranslateFeature_11171, var_assignementList_12729, var_syntaxDirectedTranslationResultVarName_12590, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 282)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInStringInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInStringInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                            GGS_localVarManager & ioArgument_ioVariableMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInStringInstructionAST temp_0 = this ;
  GGS_lstring var_grammarUsefulnessName_13970 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 303)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_grammarUsefulnessName_13970 COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 304)) ;
  }
  GGS_grammarLabelMap var_grammarLabelMap_14310 ;
  GGS_bool var_hasTranslateFeature_14350 ;
  const GGS_grammarInStringInstructionAST temp_1 = this ;
  GGS_bool joker_14331 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mGrammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_14310, joker_14331, var_hasTranslateFeature_14350, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 306)) ;
  GGS__5B_formalParameterSignatureElement_5D_ var_labelSignature_14488 ;
  const GGS_grammarInStringInstructionAST temp_2 = this ;
  var_grammarLabelMap_14310.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_14488, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 313)) ;
  GGS__5B_actualParameterForGeneration_5D_ var_actualParameterListForGeneration_14934 ;
  const GGS_grammarInStringInstructionAST temp_3 = this ;
  const GGS_grammarInStringInstructionAST temp_4 = this ;
  const GGS_grammarInStringInstructionAST temp_5 = this ;
  extensionMethod_analyzeRoutineArguments (temp_3.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_4.readProperty_mLabelName (), GGS_string ("label of the ").add_operation (temp_5.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 324)).add_operation (GGS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 324)), var_labelSignature_14488, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_14934, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 318)) ;
  GGS_semanticExpressionForGeneration var_sourceExpression_15295 ;
  const GGS_grammarInStringInstructionAST temp_6 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-grammar.galgas4", 334)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_sourceExpression_15295, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 331)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_sourceExpression_15295.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInStringInstructionAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GGS_string ("this expression is the source string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_15295.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 344)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 343)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 344)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 342)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_nameExpression_15977 ;
  const GGS_grammarInStringInstructionAST temp_10 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_10.readProperty_mNameExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-grammar.galgas4", 351)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_nameExpression_15977, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 348)) ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::notEqual, var_nameExpression_15977.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_grammarInStringInstructionAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfNameExpression (), GGS_string ("this expression is the name string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_15295.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 361)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 360)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 361)), fixItArray13  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 359)) ;
    }
  }
  const GGS_grammarInStringInstructionAST temp_14 = this ;
  GGS_string var_syntaxDirectedTranslationResultVarName_16392 = GGS_string ("syntaxDirectedTranslationResult_").add_operation (temp_14.readProperty_mGrammarComponentName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 365)).getter_string (SOURCE_FILE ("instruction-grammar.galgas4", 365)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 365)) ;
  GGS__5B_string_5D_ var_assignementList_16531 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_grammarInStringInstructionAST temp_15 = this ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_15.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_hasTranslateFeature_14350, var_syntaxDirectedTranslationResultVarName_16392, var_assignementList_16531, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 367)) ;
  const GGS_grammarInStringInstructionAST temp_16 = this ;
  const GGS_grammarInStringInstructionAST temp_17 = this ;
  const GGS_grammarInStringInstructionAST temp_18 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_grammarInstructionWithSourceExpressionForGeneration::init_21__21__21__21__21__21__21__21__21_ (temp_16.readProperty_mInstructionLocation (), temp_17.readProperty_mGrammarComponentName ().readProperty_string (), temp_18.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_15295, var_nameExpression_15977, var_actualParameterListForGeneration_14934, var_hasTranslateFeature_14350, var_assignementList_16531, var_syntaxDirectedTranslationResultVarName_16392, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 376)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionWithSourceFileForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceFileForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                                     GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                                     GGS_string & ioArgument_ioGeneratedCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInstructionWithSourceFileForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas4", 411)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 411))  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 411)) ;
  GGS_string var_sourceVar_18636 ;
  const GGS_grammarInstructionWithSourceFileForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceFileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_18636, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 413)) ;
  GGS__5B_string_5D_ var_parameterCppNameList_18679 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_jokerParametersToReleaseList_18723 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_inputVariableList_18775 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_grammarInstructionWithSourceFileForGeneration temp_2 = this ;
  UpEnumerator__5B_actualParameterForGeneration_5D_ enumerator_18830 (temp_2.readProperty_mActualParameterList ()) ;
  while (enumerator_18830.hasCurrentObject ()) {
    GGS_string var_parameterCppName_19109 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_18830.current (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_18723, var_inputVariableList_18775, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_19109, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 425)) ;
    var_parameterCppNameList_18679.plusPlusAssignOperation (var_parameterCppName_19109  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 434)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (nullptr != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_18830.current (HERE).ptr ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        ioArgument_ioGeneratedCode.plusAssignOperation(var_parameterCppName_19109.add_operation (GGS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 436)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 436)) ;
      }
    }
    enumerator_18830.gotoNextObject () ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_grammarInstructionWithSourceFileForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_grammarInstructionWithSourceFileForGeneration temp_6 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("String ").add_operation (temp_6.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 440)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 440)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 440)) ;
    }
  }
  const GGS_grammarInstructionWithSourceFileForGeneration temp_7 = this ;
  const GGS_grammarInstructionWithSourceFileForGeneration temp_8 = this ;
  const GGS_grammarInstructionWithSourceFileForGeneration temp_9 = this ;
  GGS_string temp_10 ;
  const GalgasBool test_11 = temp_9.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (GalgasBool::boolTrue == test_11) {
    const GGS_grammarInstructionWithSourceFileForGeneration temp_12 = this ;
    temp_10 = temp_12.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 446)) ;
  }else if (GalgasBool::boolFalse == test_11) {
    temp_10 = GGS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("cGrammar_").add_operation (temp_7.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas4", 442)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 442)).add_operation (GGS_string ("::_performSourceFileParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 442)).add_operation (temp_8.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas4", 443)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 443)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 443)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 444)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 445)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 445)).add_operation (var_sourceVar_18636, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 446)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 442)) ;
  UpEnumerator__5B_string_5D_ enumerator_19890 (var_parameterCppNameList_18679) ;
  while (enumerator_19890.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (enumerator_19890.current (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 449)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 449)) ;
    enumerator_19890.gotoNextObject () ;
  }
  const GGS_grammarInstructionWithSourceFileForGeneration temp_13 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 451)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 451)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 451)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 451)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 452)) ;
  }
  const GGS_grammarInstructionWithSourceFileForGeneration temp_14 = this ;
  UpEnumerator__5B_string_5D_ enumerator_20121 (temp_14.readProperty_mAssignementList ()) ;
  while (enumerator_20121.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_20121.current (HERE).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 454)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 454)) ;
    enumerator_20121.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionWithSourceExpressionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceExpressionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                                           GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                                           GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                           const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                                           GGS_string & ioArgument_ioGeneratedCode,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas4", 481)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 481))  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 481)) ;
  GGS_string var_sourceVar_21705 ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_21705, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 483)) ;
  GGS_string var_nameVar_21930 ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mNameStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_nameVar_21930, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 491)) ;
  GGS__5B_string_5D_ var_parameterCppNameList_21971 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_jokerParametersToReleaseList_22015 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_inputVariableList_22067 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_3 = this ;
  UpEnumerator__5B_actualParameterForGeneration_5D_ enumerator_22122 (temp_3.readProperty_mActualParameterList ()) ;
  while (enumerator_22122.hasCurrentObject ()) {
    GGS_string var_parameterCppName_22408 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_22122.current (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_22015, var_inputVariableList_22067, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_22408, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 503)) ;
    var_parameterCppNameList_21971.plusPlusAssignOperation (var_parameterCppName_22408  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 512)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (nullptr != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_22122.current (HERE).ptr ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssignOperation(var_parameterCppName_22408.add_operation (GGS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 514)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 514)) ;
      }
    }
    enumerator_22122.gotoNextObject () ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_grammarInstructionWithSourceExpressionForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_grammarInstructionWithSourceExpressionForGeneration temp_7 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("String ").add_operation (temp_7.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 518)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 518)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 518)) ;
    }
  }
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_8 = this ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_9 = this ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_10 = this ;
  GGS_string temp_11 ;
  const GalgasBool test_12 = temp_10.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_grammarInstructionWithSourceExpressionForGeneration temp_13 = this ;
    temp_11 = temp_13.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 523)) ;
  }else if (GalgasBool::boolFalse == test_12) {
    temp_11 = GGS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("cGrammar_").add_operation (temp_8.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas4", 520)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 520)).add_operation (GGS_string ("::_performSourceStringParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 520)).add_operation (temp_9.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas4", 521)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 521)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 521)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 522)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 522)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 522)).add_operation (var_sourceVar_21705, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 523)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 524)).add_operation (var_nameVar_21930, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 525)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 520)) ;
  UpEnumerator__5B_string_5D_ enumerator_23208 (var_parameterCppNameList_21971) ;
  while (enumerator_23208.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (enumerator_23208.current (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 527)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 527)) ;
    enumerator_23208.gotoNextObject () ;
  }
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_14 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_14.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 529)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 529)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 529)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 529)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 530)) ;
  }
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_15 = this ;
  UpEnumerator__5B_string_5D_ enumerator_23439 (temp_15.readProperty_mAssignementList ()) ;
  while (enumerator_23439.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_23439.current (HERE).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 532)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 532)) ;
    enumerator_23439.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@loopInstructionWithVariantAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_loopInstructionWithVariantAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 86)) ;
  const GGS_loopInstructionWithVariantAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mLoopExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 87)) ;
  const GGS_loopInstructionWithVariantAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mFirstInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 88)) ;
  const GGS_loopInstructionWithVariantAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mSecondInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 89)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@loopInstructionWithVariantAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                            GGS_localVarManager & ioArgument_ioVariableMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_variantExpression_5124 ;
  const GGS_loopInstructionWithVariantAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-loop-with-variant.galgas4", 107)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_variantExpression_5124, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 104)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), var_variantExpression_5124.readProperty_mResultType (), var_variantExpression_5124.readProperty_mLocation (), var_variantExpression_5124, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 114)) ;
  }
  GGS_semanticExpressionForGeneration var_loopExpression_5662 ;
  const GGS_loopInstructionWithVariantAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mLoopExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-loop-with-variant.galgas4", 124)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_loopExpression_5662, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 121)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_loopExpression_5662.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_loopInstructionWithVariantAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfLoopExpression (), GGS_string ("the loop expression type should be '@").add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 133)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 133)).add_operation (GGS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 133)).add_operation (extensionGetter_definition (var_loopExpression_5662.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 133)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 133)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 133)), fixItArray4  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 132)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 137)) ;
  }
  GGS__5B_semanticInstructionForGeneration_5D_ var_first_5F_instructionList_6444 ;
  {
  const GGS_loopInstructionWithVariantAST temp_5 = this ;
  const GGS_loopInstructionWithVariantAST temp_6 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS__5B_localConstant_5D_::init (inCompiler COMMA_HERE), temp_5.readProperty_mFirstInstructions (), temp_6.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_6444, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 139)) ;
  }
  GGS__5B_semanticInstructionForGeneration_5D_ var_second_5F_instructionList_6752 ;
  {
  const GGS_loopInstructionWithVariantAST temp_7 = this ;
  const GGS_loopInstructionWithVariantAST temp_8 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS__5B_localConstant_5D_::init (inCompiler COMMA_HERE), temp_7.readProperty_mSecondInstructions (), temp_8.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_6752, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 151)) ;
  }
  {
  const GGS_loopInstructionWithVariantAST temp_9 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_9.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 163)) ;
  }
  const GGS_loopInstructionWithVariantAST temp_10 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_loopInstructionWithVariantForGeneration::init_21__21__21__21__21_ (temp_10.readProperty_mInstructionLocation (), var_variantExpression_5124, var_first_5F_instructionList_6444, var_loopExpression_5662, var_second_5F_instructionList_6752, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 165)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@loopInstructionWithVariantForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                               GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                               GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                               GGS_string & ioArgument_ioGeneratedCode,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_variantCppVarName_8290 ;
  const GGS_loopInstructionWithVariantForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName_8290, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 194)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_variantCppVarName_8290, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 201)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 201)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 201)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 202)) ;
  }
  const GGS_loopInstructionWithVariantForGeneration temp_1 = this ;
  GGS_string var_variantVar_8434 = GGS_string ("variant_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 203)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas4", 203)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 203)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("uint32_t ").add_operation (var_variantVar_8434, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 204)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 204)).add_operation (var_variantCppVarName_8290, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 204)).add_operation (GGS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 204)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 204)) ;
  const GGS_loopInstructionWithVariantForGeneration temp_2 = this ;
  GGS_string var_loopVar_8622 = GGS_string ("loop_").add_operation (temp_2.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 205)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas4", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 205)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("bool ").add_operation (var_loopVar_8622, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 206)).add_operation (GGS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 206)).add_operation (GGS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 206)).add_operation (var_loopVar_8622, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 207)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 207)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 206)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 208)) ;
  }
  {
  const GGS_loopInstructionWithVariantForGeneration temp_3 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_3.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 209)) ;
  }
  GGS_string var_loopExpressionVar_9199 ;
  const GGS_loopInstructionWithVariantForGeneration temp_4 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_4.readProperty_mLoopExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_9199, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 217)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_loopVar_8622.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 218)).add_operation (var_loopExpressionVar_9199, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 218)).add_operation (GGS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 218)).add_operation (GGS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 218)).add_operation (var_loopVar_8622, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 219)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 219)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 219)).add_operation (var_loopVar_8622, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 220)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 220)).add_operation (var_loopExpressionVar_9199, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 220)).add_operation (GGS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 220)).add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 220)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 218)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 222)) ;
  }
  const GGS_loopInstructionWithVariantForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_loopVar_8622, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 223)).add_operation (GGS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 223)).add_operation (var_variantVar_8434, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 223)).add_operation (GGS_string (")) {\n  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 223)).add_operation (var_loopVar_8622, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 224)).add_operation (GGS_string (" = false ;\n  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 224)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 225)).add_operation (GGS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 225)).add_operation (extensionGetter_sourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 225)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 225)).add_operation (GGS_string (") ;\n}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 225)).add_operation (GGS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 226)).add_operation (var_loopVar_8622, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 227)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 227)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 223)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_variantVar_8434, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 228)).add_operation (GGS_string (" -= 1 ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 228)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 228)) ;
  {
  const GGS_loopInstructionWithVariantForGeneration temp_6 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_6.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 229)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 237)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 238)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 239)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 240)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 241)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@methodCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_methodCallInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 28)) ;
  const GGS_methodCallInstructionAST temp_1 = this ;
  UpEnumerator__5B_actualParameterAST_5D_ enumerator_1686 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_1686.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_1686.current (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 30)) ;
    enumerator_1686.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@methodCallInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_methodCallInstructionAST temp_1 = this ;
    test_0 = GGS_bool (nullptr != dynamic_cast <const cPtr_selfInExpressionAST *> (temp_1.readProperty_mReceiverExpression ().ptr ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_methodCallInstructionAST temp_2 = this ;
      extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_2.readProperty_mMethodName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 45)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_receiverExpression_2878 ;
  const GGS_methodCallInstructionAST temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-method-call.galgas4", 51)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_2878, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 48)) ;
  GGS_methodKind var_kind_3045 ;
  GGS__5B_formalParameterSignatureElement_5D_ var_routineSignature_3062 ;
  GGS_bool var_hasCompilerArgument_3101 ;
  GGS_string var_errorMessage_3143 ;
  const GGS_methodCallInstructionAST temp_4 = this ;
  GGS_location joker_3086 ; // Joker input parameter
  GGS_methodQualifier joker_3128 ; // Joker input parameter
  extensionGetter_definition (var_receiverExpression_2878.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 58)).readProperty_instanceMethodMap ().method_searchKey (temp_4.readProperty_mMethodName (), var_kind_3045, var_routineSignature_3062, joker_3086, var_hasCompilerArgument_3101, joker_3128, var_errorMessage_3143, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 58)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_errorMessage_3143.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_methodCallInstructionAST temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mMethodName ().readProperty_location (), var_errorMessage_3143, fixItArray7  COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 68)) ;
    }
  }
  GGS__5B_actualParameterForGeneration_5D_ var_actualParameterListForGeneration_3694 ;
  const GGS_methodCallInstructionAST temp_8 = this ;
  const GGS_methodCallInstructionAST temp_9 = this ;
  const GGS_methodCallInstructionAST temp_10 = this ;
  extensionMethod_analyzeRoutineArguments (temp_8.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_9.readProperty_mMethodName (), GGS_string ("'").add_operation (temp_10.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 77)).add_operation (GGS_string ("' instance proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 77)), var_routineSignature_3062, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3694, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 71)) ;
  GGS_unifiedTypeMapEntry var_baseType_3789 = var_receiverExpression_2878.readProperty_mResultType () ;
  GGS_bool var_searching_3839 = GGS_bool (true) ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("instruction-method-call.galgas4", 86)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      if (GGS_u_33__32_::class_func_max (SOURCE_FILE ("instruction-method-call.galgas4", 87)).isValid ()) {
        uint32_t variant_3903 = GGS_u_33__32_::class_func_max (SOURCE_FILE ("instruction-method-call.galgas4", 87)).uintValue () ;
        bool loop_3903 = true ;
        while (loop_3903) {
          loop_3903 = var_searching_3839.isValid () ;
          if (loop_3903) {
            loop_3903 = var_searching_3839.boolValue () ;
          }
          if (loop_3903 && (0 == variant_3903)) {
            loop_3903 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-method-call.galgas4", 87)) ;
          }
          if (loop_3903) {
            variant_3903 -= 1 ;
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              test_12 = extensionGetter_definition (var_baseType_3789, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 88)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-method-call.galgas4", 88)).boolEnum () ;
              if (GalgasBool::boolTrue == test_12) {
                var_searching_3839 = GGS_bool (false) ;
              }
            }
            if (GalgasBool::boolFalse == test_12) {
              GalgasBool test_13 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_13) {
                const GGS_methodCallInstructionAST temp_14 = this ;
                test_13 = extensionGetter_definition (extensionGetter_definition (var_baseType_3789, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 91)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 91)).readProperty_instanceMethodMap ().getter_contains (temp_14.readProperty_mMethodName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 91)).boolEnum () ;
                if (GalgasBool::boolTrue == test_13) {
                  var_baseType_3789 = extensionGetter_definition (var_baseType_3789, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 92)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_13) {
                var_searching_3839 = GGS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GGS_methodCallInstructionAST temp_15 = this ;
  const GGS_methodCallInstructionAST temp_16 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_methodCallInstructionForGeneration::init_21__21__21__21__21__21__21__21_ (temp_15.readProperty_mInstructionLocation (), var_receiverExpression_2878.readProperty_mResultType (), var_receiverExpression_2878, temp_16.readProperty_mMethodName ().readProperty_string (), var_kind_3045, var_actualParameterListForGeneration_3694, var_hasCompilerArgument_3101, var_baseType_3789, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 100)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@methodCallInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                          GGS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_receiverCppName_6111 ;
  const GGS_methodCallInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_6111, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 139)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_6111 COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 140)) ;
  }
  GGS__5B_string_5D_ var_parameterCppNameList_6199 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_jokerParametersToReleaseList_6241 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_inputVariableList_6291 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_methodCallInstructionForGeneration temp_1 = this ;
  UpEnumerator__5B_actualParameterForGeneration_5D_ enumerator_6344 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_6344.hasCurrentObject ()) {
    GGS_string var_parameterCppName_6556 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_6344.current (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_6241, var_inputVariableList_6291, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_6556, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 146)) ;
    var_parameterCppNameList_6199.plusPlusAssignOperation (var_parameterCppName_6556  COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 147)) ;
    enumerator_6344.gotoNextObject () ;
  }
  const GGS_methodCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GGS_methodKind::Enumeration::invalid:
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsExtension:
    {
      const GGS_methodCallInstructionForGeneration temp_3 = this ;
      const GGS_methodCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (extensionGetter_definition (temp_3.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 152)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas4", 152)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 152)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 152)).add_operation (temp_4.readProperty_mMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas4", 152)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 152))  COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 152)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_methodCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 153)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-method-call.galgas4", 153)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_methodCallInstructionForGeneration temp_7 = this ;
          const GGS_methodCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("callExtensionMethod_").add_operation (temp_7.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas4", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 154)).add_operation (GGS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 154)).add_operation (extensionGetter_identifierRepresentation (temp_8.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 155)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 155)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 155)).add_operation (var_receiverCppName_6111, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 156)).add_operation (GGS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 156)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 154)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        const GGS_methodCallInstructionForGeneration temp_9 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("extensionMethod_").add_operation (temp_9.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas4", 158)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 158)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 158)).add_operation (var_receiverCppName_6111, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 159)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 159)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 158)) ;
      }
    }
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsMember:
    {
      const GGS_methodCallInstructionForGeneration temp_10 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(var_receiverCppName_6111.add_operation (GGS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 162)).add_operation (temp_10.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas4", 162)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 162)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 162)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 162)) ;
    }
    break ;
  }
  UpEnumerator__5B_string_5D_ enumerator_7476 (var_parameterCppNameList_6199) ;
  while (enumerator_7476.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_7476.current (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 165)) ;
    enumerator_7476.gotoNextObject () ;
    if (enumerator_7476.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 166)) ;
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_parameterCppNameList_6199.getter_count (SOURCE_FILE ("instruction-method-call.galgas4", 168)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_methodCallInstructionForGeneration temp_13 = this ;
        test_12 = temp_13.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 170)) ;
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 171)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 172)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_11) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      const GGS_methodCallInstructionForGeneration temp_15 = this ;
      test_14 = temp_15.readProperty_mHasCompilerArgument ().boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 175)) ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 176)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 176)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 177)) ;
      }
    }
    if (GalgasBool::boolFalse == test_14) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 179)) ;
    }
  }
  const GGS_methodCallInstructionForGeneration temp_16 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_sourceFile (temp_16.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 181)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 181)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 181)) ;
  const GGS_methodCallInstructionForGeneration temp_17 = this ;
  UpEnumerator__5B_actualParameterForGeneration_5D_ enumerator_8149 (temp_17.readProperty_mActualParameterList ()) ;
  while (enumerator_8149.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_8149.current (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas4", 184)) ;
    enumerator_8149.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ifInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ifInstructionAST temp_0 = this ;
  extensionMethod_enterExpressionListInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas4", 86)) ;
  const GGS_ifInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas4", 87)) ;
  const GGS_ifInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas4", 88)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ifInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_ifTestForGeneration_5D_ var_testListForGeneration_5618 ;
  const GGS_ifInstructionAST temp_0 = this ;
  extensionMethod_analyzeSemanticExpressionList (temp_0.readProperty_mExpressions (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_testListForGeneration_5618, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas4", 124)) ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_then_5F_instructionList_5926 ;
  {
  const GGS_ifInstructionAST temp_1 = this ;
  routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS__5B_localConstant_5D_::init (inCompiler COMMA_HERE), temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioVariableMap, var_then_5F_instructionList_5926, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas4", 133)) ;
  }
  const GGS_ifInstructionAST temp_2 = this ;
  GGS__5B_CommaSeparatedExpressionElement_5D_ var_expressions_5961 = temp_2.readProperty_mExpressions () ;
  {
  GGS_CommaSeparatedExpressionElement joker_6023 ; // Joker input parameter
  var_expressions_5961.setter_removeLast (joker_6023, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas4", 144)) ;
  }
  UpEnumerator__5B_CommaSeparatedExpressionElement_5D_ enumerator_6040 (var_expressions_5961) ;
  while (enumerator_6040.hasCurrentObject ()) {
    {
    const GGS_ifInstructionAST temp_3 = this ;
    extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_3.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas4", 146)) ;
    }
    {
    const GGS_ifInstructionAST temp_4 = this ;
    extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_4.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas4", 147)) ;
    }
    enumerator_6040.gotoNextObject () ;
  }
  {
  const GGS_ifInstructionAST temp_5 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_5.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas4", 149)) ;
  }
  GGS__5B_semanticInstructionForGeneration_5D_ var_else_5F_instructionList_6545 ;
  {
  const GGS_ifInstructionAST temp_6 = this ;
  const GGS_ifInstructionAST temp_7 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS__5B_localConstant_5D_::init (inCompiler COMMA_HERE), temp_6.readProperty_m_5F_else_5F_instructionList (), temp_7.readProperty_mEndOf_5F_if_5F_instruction (), ioArgument_ioVariableMap, var_else_5F_instructionList_6545, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas4", 151)) ;
  }
  {
  const GGS_ifInstructionAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOf_5F_if_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas4", 162)) ;
  }
  const GGS_ifInstructionAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_ifInstructionForGeneration::init_21__21__21__21_ (temp_9.readProperty_mEndOf_5F_then_5F_branch (), var_testListForGeneration_5618, var_then_5F_instructionList_5926, var_else_5F_instructionList_6545, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas4", 164)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ifInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                  GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                  GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                  const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                  GGS_string & ioArgument_ioGeneratedCode,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_testVar_8723 ;
  const GGS_ifInstructionForGeneration temp_0 = this ;
  extensionMethod_generateInstruction (temp_0.readProperty_mExpressions (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, var_testVar_8723, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas4", 211)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolTrue == ").add_operation (var_testVar_8723, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas4", 219)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas4", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas4", 219)) ;
  {
  const GGS_ifInstructionForGeneration temp_1 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas4", 220)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas4", 228)) ;
  const GGS_ifInstructionForGeneration temp_2 = this ;
  UpEnumerator__5B_ifTestForGeneration_5D_ enumerator_9116 (temp_2.readProperty_mExpressions ()) ;
  while (enumerator_9116.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas4", 230)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas4", 231)) ;
    enumerator_9116.gotoNextObject () ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_ifInstructionForGeneration temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::greaterThan, temp_4.readProperty_m_5F_else_5F_instructionList ().getter_count (SOURCE_FILE ("instruction-if.galgas4", 234)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolFalse == ").add_operation (var_testVar_8723, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas4", 235)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas4", 235)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas4", 235)) ;
      {
      const GGS_ifInstructionForGeneration temp_5 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_5.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas4", 236)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas4", 244)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@forInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mWhileExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 270)) ;
  const GGS_forInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mBeforeInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 271)) ;
  const GGS_forInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mBetweenInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 272)) ;
  const GGS_forInstructionAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mDoInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 273)) ;
  const GGS_forInstructionAST temp_4 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_4.readProperty_mAfterInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 274)) ;
  const GGS_forInstructionAST temp_5 = this ;
  UpEnumerator__5B_forInstructionEnumeratedObjectAST_5D_ enumerator_10763 (temp_5.readProperty_mEnumeratedObjectList ()) ;
  while (enumerator_10763.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((cPtr_abstractEnumeratedCollectionAST *) enumerator_10763.current (HERE).readProperty_mEnumeratedCollection ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 276)) ;
    enumerator_10763.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumeratedCollectionCstListInExpAST enterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionCstListInExpAST::method_enterInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumeratedCollectionCstListInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 283)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumeratedCollectionVarInExpAST enterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionVarInExpAST::method_enterInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumeratedCollectionVarInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 289)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumeratedCollectionCstListInExpAST analyzeEnumeration'
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionCstListInExpAST::method_analyzeEnumeration (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GGS_localVarManager & ioArgument_ioVariableMap,
                                                                          GGS__5B_localConstant_5D_ & ioArgument_ioLocalConstantListForDoBranch,
                                                                          GGS_string & outArgument_outEnumeratorCppName,
                                                                          GGS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumeratedCollectionCstListInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas4", 309)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 306)) ;
  const GGS_enumeratedCollectionCstListInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GGS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 316)).getter_string (SOURCE_FILE ("instruction-for.galgas4", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 316)) ;
  GGS__5B_enumerationDescriptor_5D_ var_enumerationDescriptorList_12623 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 317)).readProperty_enumerationDescriptorList () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, var_enumerationDescriptorList_12623.getter_count (SOURCE_FILE ("instruction-for.galgas4", 318)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_enumeratedCollectionCstListInExpAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GGS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 319)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 319)).add_operation (GGS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 319)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas4", 319)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_enumeratedCollectionCstListInExpAST temp_6 = this ;
      test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas4", 322)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GGS__5B_enumerationDescriptor_5D_ var_currentTypedAttributeList_12999 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 323)).readProperty_enumerationDescriptorList () ;
        UpEnumerator__5B_enumerationDescriptor_5D_ enumerator_13123 (var_currentTypedAttributeList_12999) ;
        while (enumerator_13123.hasCurrentObject ()) {
          {
          const GGS_enumeratedCollectionCstListInExpAST temp_7 = this ;
          extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, GGS_lstring::init_21__21_ (enumerator_13123.current (HERE).readProperty_mEnumerationName (), temp_7.readProperty_mEndOfEnumerationExpression (), inCompiler COMMA_HERE), enumerator_13123.current (HERE).readProperty_mEnumeratedType (), outArgument_outEnumeratorCppName.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 328)).add_operation (enumerator_13123.current (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas4", 328)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 328)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 328)), outArgument_outEnumeratorCppName.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 329)).add_operation (enumerator_13123.current (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas4", 329)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 329)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 329)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 325)) ;
          }
          enumerator_13123.gotoNextObject () ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_enumeratedCollectionCstListInExpAST temp_9 = this ;
        test_8 = GGS_bool (ComparisonKind::notEqual, temp_9.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas4", 332)).objectCompare (var_enumerationDescriptorList_12623.getter_count (SOURCE_FILE ("instruction-for.galgas4", 332)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          const GGS_enumeratedCollectionCstListInExpAST temp_10 = this ;
          GGS_string temp_11 ;
          const GalgasBool test_12 = GGS_bool (ComparisonKind::greaterThan, var_enumerationDescriptorList_12623.getter_count (SOURCE_FILE ("instruction-for.galgas4", 336)).objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_12) {
            temp_11 = GGS_string ("s") ;
          }else if (GalgasBool::boolFalse == test_12) {
            temp_11 = GGS_string::makeEmptyString () ;
          }
          const GGS_enumeratedCollectionCstListInExpAST temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mEndOfEnumerationExpression (), GGS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 334)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 334)).add_operation (GGS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 334)).add_operation (var_enumerationDescriptorList_12623.getter_count (SOURCE_FILE ("instruction-for.galgas4", 335)).getter_string (SOURCE_FILE ("instruction-for.galgas4", 335)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 334)).add_operation (GGS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 335)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 335)).add_operation (GGS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 336)).add_operation (temp_13.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas4", 338)).getter_string (SOURCE_FILE ("instruction-for.galgas4", 338)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 337)), fixItArray14  COMMA_SOURCE_FILE ("instruction-for.galgas4", 333)) ;
        }
      }
      if (GalgasBool::boolFalse == test_8) {
        GalgasBool test_15 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_enumeratedCollectionCstListInExpAST temp_16 = this ;
          test_15 = GGS_bool (ComparisonKind::greaterThan, var_enumerationDescriptorList_12623.getter_count (SOURCE_FILE ("instruction-for.galgas4", 341)).objectCompare (temp_16.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas4", 341)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_15) {
            const GGS_enumeratedCollectionCstListInExpAST temp_17 = this ;
            GGS_u_33__32_ var_missingArgumentCount_14129 = var_enumerationDescriptorList_12623.getter_count (SOURCE_FILE ("instruction-for.galgas4", 342)).subtract_operation (temp_17.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas4", 342)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 342)) ;
            const GGS_enumeratedCollectionCstListInExpAST temp_18 = this ;
            GenericArray <FixItDescription> fixItArray19 ;
            GGS_string temp_20 ;
            const GalgasBool test_21 = GGS_bool (ComparisonKind::equal, var_missingArgumentCount_14129.objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_21) {
              temp_20 = GGS_string ("*") ;
            }else if (GalgasBool::boolFalse == test_21) {
              temp_20 = GGS_string (" ").add_operation (var_missingArgumentCount_14129.getter_string (SOURCE_FILE ("instruction-for.galgas4", 345)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 345)).add_operation (GGS_string ("*"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 345)) ;
            }
            appendFixItActions (fixItArray19, EnumFixItKind::fixItReplace, temp_20) ;
            inCompiler->emitSemanticError (temp_18.readProperty_mEndOfEnumerationExpression (), GGS_string ("enumerated object has ").add_operation (var_missingArgumentCount_14129.getter_string (SOURCE_FILE ("instruction-for.galgas4", 344)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 344)).add_operation (GGS_string ("more properties"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 344)), fixItArray19  COMMA_SOURCE_FILE ("instruction-for.galgas4", 343)) ;
          }
        }
        const GGS_enumeratedCollectionCstListInExpAST temp_22 = this ;
        UpEnumerator__5B_forInstructionEnumeratedObjectElementAST_5D_ enumerator_14485 (temp_22.readProperty_mElementList ()) ;
        UpEnumerator__5B_enumerationDescriptor_5D_ enumerator_14513 (var_enumerationDescriptorList_12623) ;
        while (enumerator_14485.hasCurrentObject () && enumerator_14513.hasCurrentObject ()) {
          GalgasBool test_23 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_23) {
            test_23 = GGS_bool (ComparisonKind::notEqual, enumerator_14485.current (HERE).readProperty_mOptionalConstantName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_23) {
              GalgasBool test_24 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_24) {
                test_24 = GGS_bool (ComparisonKind::notEqual, enumerator_14485.current (HERE).readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_24) {
                  GGS_unifiedTypeMapEntry var_foundType_14699 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_14485.current (HERE).readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 351)) ;
                  GalgasBool test_25 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_25) {
                    test_25 = GGS_bool (ComparisonKind::notEqual, var_foundType_14699.objectCompare (enumerator_14513.current (HERE).readProperty_mEnumeratedType ())).boolEnum () ;
                    if (GalgasBool::boolTrue == test_25) {
                      GenericArray <FixItDescription> fixItArray26 ;
                      inCompiler->emitSemanticError (enumerator_14485.current (HERE).readProperty_mOptionalTypeName ().readProperty_location (), GGS_string ("incorrect '@").add_operation (extensionGetter_definition (var_foundType_14699, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 353)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 353)).add_operation (GGS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 353)).add_operation (extensionGetter_definition (enumerator_14513.current (HERE).readProperty_mEnumeratedType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 353)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 353)).add_operation (GGS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 353)), fixItArray26  COMMA_SOURCE_FILE ("instruction-for.galgas4", 353)) ;
                    }
                  }
                }
              }
              ioArgument_ioLocalConstantListForDoBranch.plusPlusAssignOperation (GGS_localConstant::init_21__21__21__21_ (enumerator_14513.current (HERE).readProperty_mEnumeratedType (), enumerator_14485.current (HERE).readProperty_mOptionalConstantName (), enumerator_14485.current (HERE).readProperty_mDeclaredAsUnused (), outArgument_outEnumeratorCppName.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 360)).add_operation (enumerator_14513.current (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas4", 360)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 360)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 360)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas4", 356)) ;
            }
          }
          enumerator_14485.gotoNextObject () ;
          enumerator_14513.gotoNextObject () ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumeratedCollectionVarInExpAST analyzeEnumeration'
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionVarInExpAST::method_analyzeEnumeration (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                      GGS__5B_localConstant_5D_ & ioArgument_ioLocalConstantListForDoBranch,
                                                                      GGS_string & outArgument_outEnumeratorCppName,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumeratedCollectionVarInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas4", 380)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 377)) ;
  const GGS_enumeratedCollectionVarInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GGS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 387)).getter_string (SOURCE_FILE ("instruction-for.galgas4", 387)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 387)) ;
  GGS_unifiedTypeMapEntry var_enumeratedElementType_16379 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 388)).readProperty_typeForEnumeratedElement () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_enumeratedElementType_16379.getter_isNull (SOURCE_FILE ("instruction-for.galgas4", 389)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_enumeratedCollectionVarInExpAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GGS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 390)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 390)).add_operation (GGS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 390)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas4", 390)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_enumeratedCollectionVarInExpAST temp_6 = this ;
      test_5 = GGS_bool (ComparisonKind::notEqual, temp_6.readProperty_mEnumerationVariable ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_enumeratedCollectionVarInExpAST temp_7 = this ;
        ioArgument_ioLocalConstantListForDoBranch.plusPlusAssignOperation (GGS_localConstant::init_21__21__21__21_ (var_enumeratedElementType_16379, temp_7.readProperty_mEnumerationVariable (), GGS_bool (false), outArgument_outEnumeratorCppName.add_operation (GGS_string (".current (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 392)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas4", 392)) ;
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_enumeratedCollectionVarInExpAST temp_9 = this ;
    test_8 = GGS_bool (ComparisonKind::notEqual, temp_9.readProperty_mEnumerationOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_enumeratedCollectionVarInExpAST temp_10 = this ;
      GGS_unifiedTypeMapEntry var_explicitType_16960 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_10.readProperty_mEnumerationOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 396)) ;
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_enumeratedElementType_16379, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 397)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (var_explicitType_16960, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 397)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          const GGS_enumeratedCollectionVarInExpAST temp_12 = this ;
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mEnumerationOptionalTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_enumeratedElementType_16379, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 398)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 398)).add_operation (GGS_string ("' type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 398)), fixItArray13  COMMA_SOURCE_FILE ("instruction-for.galgas4", 398)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@forInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 414)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 415)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 417)) ;
  }
  GGS__5B_semanticInstructionForGeneration_5D_ var_before_5F_instructionList_18336 ;
  {
  const GGS_forInstructionAST temp_0 = this ;
  const GGS_forInstructionAST temp_1 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS__5B_localConstant_5D_::init (inCompiler COMMA_HERE), temp_0.readProperty_mBeforeInstructionList (), temp_1.readProperty_mEndOf_5F_before_5F_branch (), ioArgument_ioVariableMap, var_before_5F_instructionList_18336, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 418)) ;
  }
  {
  const GGS_forInstructionAST temp_2 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_2.readProperty_mEndOf_5F_before_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 429)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 431)) ;
  }
  GGS__5B_semanticInstructionForGeneration_5D_ var_between_5F_instructionList_18757 ;
  {
  const GGS_forInstructionAST temp_3 = this ;
  const GGS_forInstructionAST temp_4 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS__5B_localConstant_5D_::init (inCompiler COMMA_HERE), temp_3.readProperty_mBetweenInstructionList (), temp_4.readProperty_mEndOf_5F_between_5F_branch (), ioArgument_ioVariableMap, var_between_5F_instructionList_18757, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 432)) ;
  }
  {
  const GGS_forInstructionAST temp_5 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_5.readProperty_mEndOf_5F_between_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 443)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 445)) ;
  }
  GGS__5B_semanticInstructionForGeneration_5D_ var_after_5F_instructionList_19210 ;
  {
  const GGS_forInstructionAST temp_6 = this ;
  const GGS_forInstructionAST temp_7 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS__5B_localConstant_5D_::init (inCompiler COMMA_HERE), temp_6.readProperty_mAfterInstructionList (), temp_7.readProperty_mEndOf_5F_after_5F_branch (), ioArgument_ioVariableMap, var_after_5F_instructionList_19210, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 446)) ;
  }
  {
  const GGS_forInstructionAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOf_5F_after_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 457)) ;
  }
  GGS__5B_localConstant_5D_ var_localConstantListForDoBranch_19351 = GGS__5B_localConstant_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ var_enumerationList_19439 = GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_forInstructionAST temp_9 = this ;
  UpEnumerator__5B_forInstructionEnumeratedObjectAST_5D_ enumerator_19482 (temp_9.readProperty_mEnumeratedObjectList ()) ;
  while (enumerator_19482.hasCurrentObject ()) {
    GGS_string var_enumeratorCppName_19752 ;
    GGS_semanticExpressionForGeneration var_enumerationExpression_19815 ;
    callExtensionMethod_analyzeEnumeration ((cPtr_abstractEnumeratedCollectionAST *) enumerator_19482.current (HERE).readProperty_mEnumeratedCollection ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_localConstantListForDoBranch_19351, var_enumeratorCppName_19752, var_enumerationExpression_19815, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 462)) ;
    GGS_string temp_10 ;
    const GalgasBool test_11 = enumerator_19482.current (HERE).readProperty_mAscending ().boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      temp_10 = GGS_string ("Up") ;
    }else if (GalgasBool::boolFalse == test_11) {
      temp_10 = GGS_string ("Down") ;
    }
    var_enumerationList_19439.plusPlusAssignOperation (GGS_forInstructionEnumeratedObjectForGeneration::init_21__21__21_ (temp_10, var_enumerationExpression_19815, var_enumeratorCppName_19752, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas4", 473)) ;
    enumerator_19482.gotoNextObject () ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 479)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 480)) ;
  }
  UpEnumerator__5B_localConstant_5D_ enumerator_20148 (var_localConstantListForDoBranch_19351) ;
  while (enumerator_20148.hasCurrentObject ()) {
    {
    extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_20148.current (HERE).readProperty_mName (), enumerator_20148.current (HERE).readProperty_mType (), enumerator_20148.current (HERE).readProperty_mCppName (), enumerator_20148.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 483)) ;
    }
    enumerator_20148.gotoNextObject () ;
  }
  GGS_semanticExpressionForGeneration var_uncheckedWhileExpression_20679 ;
  const GGS_forInstructionAST temp_12 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_12.readProperty_mWhileExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas4", 494)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_uncheckedWhileExpression_20679, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 491)) ;
  GGS_semanticExpressionForGeneration var_whileExpression_20866 ;
  {
  const GGS_forInstructionAST temp_13 = this ;
  routine_checkExpressionIsBoolean_3F__3F__3F__21_ (constinArgument_inAnalysisContext, temp_13.readProperty_mEndOf_5F_while_5F_expression (), var_uncheckedWhileExpression_20679, var_whileExpression_20866, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 500)) ;
  }
  {
  const GGS_forInstructionAST temp_14 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_14.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 507)) ;
  }
  {
  const GGS_forInstructionAST temp_15 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_15.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 508)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 510)) ;
  }
  GGS_string var_indexCppName_21097 = GGS_string::makeEmptyString () ;
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    const GGS_forInstructionAST temp_17 = this ;
    test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mIndexVariableName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      const GGS_forInstructionAST temp_18 = this ;
      var_indexCppName_21097 = GGS_string ("index_").add_operation (temp_18.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 513)).getter_string (SOURCE_FILE ("instruction-for.galgas4", 513)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 513)) ;
      const GGS_forInstructionAST temp_19 = this ;
      var_localConstantListForDoBranch_19351.plusPlusAssignOperation (GGS_localConstant::init_21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), temp_19.readProperty_mIndexVariableName (), GGS_bool (false), var_indexCppName_21097, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas4", 514)) ;
    }
  }
  GGS__5B_semanticInstructionForGeneration_5D_ var_do_5F_instructionList_21733 ;
  {
  const GGS_forInstructionAST temp_20 = this ;
  const GGS_forInstructionAST temp_21 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantListForDoBranch_19351, temp_20.readProperty_mDoInstructionList (), temp_21.readProperty_mEndOf_5F_do_5F_branch (), ioArgument_ioVariableMap, var_do_5F_instructionList_21733, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 521)) ;
  }
  {
  const GGS_forInstructionAST temp_22 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_22.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 533)) ;
  }
  {
  const GGS_forInstructionAST temp_23 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_23.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 535)) ;
  }
  {
  const GGS_forInstructionAST temp_24 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_24.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 536)) ;
  }
  const GGS_forInstructionAST temp_25 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_forInstructionForGeneration::init_21__21__21__21__21__21__21__21_ (temp_25.readProperty_mInstructionLocation (), var_enumerationList_19439, var_indexCppName_21097, var_whileExpression_20866, var_before_5F_instructionList_18336, var_between_5F_instructionList_18757, var_do_5F_instructionList_21733, var_after_5F_instructionList_19210, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas4", 538)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@forInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                   GGS_string & ioArgument_ioGeneratedCode,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_string_5D_ var_enumerationVarCppNameList_23980 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_forInstructionForGeneration temp_0 = this ;
  UpEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ enumerator_24032 (temp_0.readProperty_mEnumeratedObjectList ()) ;
  while (enumerator_24032.hasCurrentObject ()) {
    GGS_string var_enumerationVar_24239 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_24032.current (HERE).readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_enumerationVar_24239, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 584)) ;
    var_enumerationVarCppNameList_23980.plusPlusAssignOperation (var_enumerationVar_24239  COMMA_SOURCE_FILE ("instruction-for.galgas4", 591)) ;
    enumerator_24032.gotoNextObject () ;
  }
  const GGS_forInstructionForGeneration temp_1 = this ;
  UpEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ enumerator_24340 (temp_1.readProperty_mEnumeratedObjectList ()) ;
  UpEnumerator__5B_string_5D_ enumerator_24372 (var_enumerationVarCppNameList_23980) ;
  while (enumerator_24340.hasCurrentObject () && enumerator_24372.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_24340.current (HERE).readProperty_mEnumerationOrder ().add_operation (GGS_string ("Enumerator_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 594)).add_operation (extensionGetter_identifierRepresentation (enumerator_24340.current (HERE).readProperty_mEnumeratedExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 594)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 594)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 594)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (enumerator_24340.current (HERE).readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 595)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 595)).add_operation (enumerator_24372.current (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 595)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 595)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 595)) ;
    enumerator_24340.gotoNextObject () ;
    enumerator_24372.gotoNextObject () ;
  }
  const GGS_forInstructionForGeneration temp_2 = this ;
  GGS_bool var_whileExpressionIsAllwaysTrue_24670 = callExtensionGetter_isTrueExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mWhileExpression ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 598)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_forInstructionForGeneration temp_4 = this ;
    const GGS_forInstructionForGeneration temp_5 = this ;
    test_3 = GGS_bool (ComparisonKind::greaterThan, temp_4.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas4", 600)).add_operation (temp_5.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas4", 600)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 600)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).operator_or (var_whileExpressionIsAllwaysTrue_24670.operator_not (SOURCE_FILE ("instruction-for.galgas4", 600)) COMMA_SOURCE_FILE ("instruction-for.galgas4", 600)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_forInstructionForGeneration temp_7 = this ;
        test_6 = GGS_bool (ComparisonKind::notEqual, temp_7.readProperty_mIndexVariableCppName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_forInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_u_33__32_ ").add_operation (temp_8.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 603)).add_operation (GGS_string (" (uint32_t (0)) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 603)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 603)) ;
        }
      }
      GGS_string var_boolVarCppName_25115 = GGS_string ("bool_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-for.galgas4", 605)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 605)) ;
      ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 606)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = var_whileExpressionIsAllwaysTrue_24670.boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const bool ").add_operation (var_boolVarCppName_25115, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 608)).add_operation (GGS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 608)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 608)) ;
        }
      }
      if (GalgasBool::boolFalse == test_9) {
        GGS_string var_whileVar_25478 ;
        const GGS_forInstructionForGeneration temp_10 = this ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_10.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_25478, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 610)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("bool ").add_operation (var_boolVarCppName_25115, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 611)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 611)).add_operation (var_whileVar_25478, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 611)).add_operation (GGS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 611)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 611)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 613)) ;
      const GGS_forInstructionForGeneration temp_11 = this ;
      UpEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ enumerator_25644 (temp_11.readProperty_mEnumeratedObjectList ()) ;
      while (enumerator_25644.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_25644.current (HERE).readProperty_mEnumeratorCppName ().add_operation (GGS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 615)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 615)) ;
        enumerator_25644.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(var_boolVarCppName_25115.add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 617)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 617)) ;
      {
      const GGS_forInstructionForGeneration temp_12 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_12.readProperty_mBeforeInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 618)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 626)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 627)) ;
      const GGS_forInstructionForGeneration temp_13 = this ;
      UpEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ enumerator_26138 (temp_13.readProperty_mEnumeratedObjectList ()) ;
      while (enumerator_26138.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_26138.current (HERE).readProperty_mEnumeratorCppName ().add_operation (GGS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 629)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 629)) ;
        enumerator_26138.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(var_boolVarCppName_25115.add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 631)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 631)) ;
      {
      const GGS_forInstructionForGeneration temp_14 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_14.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 633)) ;
      }
      const GGS_forInstructionForGeneration temp_15 = this ;
      UpEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ enumerator_26613 (temp_15.readProperty_mEnumeratedObjectList ()) ;
      while (enumerator_26613.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_26613.current (HERE).readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 643)).add_operation (GGS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 643)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 643)) ;
        enumerator_26613.gotoNextObject () ;
      }
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        const GGS_forInstructionForGeneration temp_17 = this ;
        test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mIndexVariableCppName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          const GGS_forInstructionForGeneration temp_18 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (temp_18.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 646)).add_operation (GGS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 646)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 646)) ;
        }
      }
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = var_whileExpressionIsAllwaysTrue_24670.operator_not (SOURCE_FILE ("instruction-for.galgas4", 649)).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 650)) ;
          const GGS_forInstructionForGeneration temp_20 = this ;
          UpEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ enumerator_27002 (temp_20.readProperty_mEnumeratedObjectList ()) ;
          while (enumerator_27002.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_27002.current (HERE).readProperty_mEnumeratorCppName ().add_operation (GGS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 652)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 652)) ;
            enumerator_27002.gotoNextObject () ;
            if (enumerator_27002.hasCurrentObject ()) {
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 653)) ;
            }
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 655)) ;
          GGS_string var_whileVar_27374 ;
          const GGS_forInstructionForGeneration temp_21 = this ;
          callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_21.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_27374, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 656)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("    ").add_operation (var_boolVarCppName_25115, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 663)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 663)).add_operation (var_whileVar_27374, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 663)).add_operation (GGS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 663)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 663)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 664)) ;
        }
      }
      GalgasBool test_22 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_22) {
        const GGS_forInstructionForGeneration temp_23 = this ;
        test_22 = GGS_bool (ComparisonKind::greaterThan, temp_23.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas4", 667)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_22) {
          {
          ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 668)) ;
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 669)) ;
          const GGS_forInstructionForGeneration temp_24 = this ;
          UpEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ enumerator_27716 (temp_24.readProperty_mEnumeratedObjectList ()) ;
          while (enumerator_27716.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_27716.current (HERE).readProperty_mEnumeratorCppName ().add_operation (GGS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 671)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 671)) ;
            enumerator_27716.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(var_boolVarCppName_25115.add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 673)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 673)) ;
          {
          const GGS_forInstructionForGeneration temp_25 = this ;
          routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_25.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 674)) ;
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 682)) ;
          {
          ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 683)) ;
          }
        }
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 686)) ;
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 688)) ;
      }
      {
      const GGS_forInstructionForGeneration temp_26 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_26.readProperty_mAfterInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 689)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 697)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_27 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_27) {
      const GGS_forInstructionForGeneration temp_28 = this ;
      test_27 = GGS_bool (ComparisonKind::notEqual, temp_28.readProperty_mIndexVariableCppName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_27) {
        const GGS_forInstructionForGeneration temp_29 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_u_33__32_ ").add_operation (temp_29.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 700)).add_operation (GGS_string (" (uint32_t (0)) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 700)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 700)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 702)) ;
    const GGS_forInstructionForGeneration temp_30 = this ;
    UpEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ enumerator_28908 (temp_30.readProperty_mEnumeratedObjectList ()) ;
    while (enumerator_28908.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_28908.current (HERE).readProperty_mEnumeratorCppName ().add_operation (GGS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 704)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 704)) ;
      enumerator_28908.gotoNextObject () ;
      if (enumerator_28908.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 705)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 707)) ;
    {
    const GGS_forInstructionForGeneration temp_31 = this ;
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_31.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 709)) ;
    }
    const GGS_forInstructionForGeneration temp_32 = this ;
    UpEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ enumerator_29393 (temp_32.readProperty_mEnumeratedObjectList ()) ;
    while (enumerator_29393.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_29393.current (HERE).readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 719)).add_operation (GGS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 719)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 719)) ;
      enumerator_29393.gotoNextObject () ;
    }
    GalgasBool test_33 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_33) {
      const GGS_forInstructionForGeneration temp_34 = this ;
      test_33 = GGS_bool (ComparisonKind::greaterThan, temp_34.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas4", 722)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_33) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 723)) ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 724)) ;
        const GGS_forInstructionForGeneration temp_35 = this ;
        UpEnumerator__5B_forInstructionEnumeratedObjectForGeneration_5D_ enumerator_29699 (temp_35.readProperty_mEnumeratedObjectList ()) ;
        while (enumerator_29699.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_29699.current (HERE).readProperty_mEnumeratorCppName ().add_operation (GGS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 726)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 726)) ;
          enumerator_29699.gotoNextObject () ;
          if (enumerator_29699.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 727)) ;
          }
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 729)) ;
        {
        const GGS_forInstructionForGeneration temp_36 = this ;
        routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_36.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 730)) ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 738)) ;
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 739)) ;
        }
      }
    }
    GalgasBool test_37 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_37) {
      const GGS_forInstructionForGeneration temp_38 = this ;
      test_37 = GGS_bool (ComparisonKind::notEqual, temp_38.readProperty_mIndexVariableCppName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_37) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-for.galgas4", 743)) ;
        }
        const GGS_forInstructionForGeneration temp_39 = this ;
        const GGS_forInstructionForGeneration temp_40 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (temp_39.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 744)).add_operation (GGS_string (".plusAssignOperation (GGS_u_33__32_ (1), "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 744)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 744)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 744)).add_operation (extensionGetter_commaSourceFile (temp_40.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 745)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 745)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 745)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 744)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 747)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@switchInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 133)) ;
  const GGS_switchInstructionAST temp_1 = this ;
  UpEnumerator__5B_switchBranchAST_5D_ enumerator_5180 (temp_1.readProperty_mBranches ()) ;
  while (enumerator_5180.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_5180.current (HERE).readProperty_mInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 135)) ;
    enumerator_5180.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@switchInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_switchExpression_6146 ;
  const GGS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-switch.galgas4", 151)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_switchExpression_6146, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 148)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_typeKindEnum_2E_enumType var_enumType_6238 = extensionGetter_definition (var_switchExpression_6146.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 158)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("instruction-switch.galgas4", 158)).unwrappedValue () ;
    if (!extensionGetter_definition (var_switchExpression_6146.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 158)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("instruction-switch.galgas4", 158)).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GGS_stringset var_constantsNamedInSwitchInstruction_6364 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      {
      extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 162)) ;
      }
      GGS__5B_switchBranchForGeneration_5D_ var_switchBranchesForGeneration_6522 = GGS__5B_switchBranchForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      const GGS_switchInstructionAST temp_2 = this ;
      UpEnumerator__5B_switchBranchAST_5D_ enumerator_6581 (temp_2.readProperty_mBranches ()) ;
      while (enumerator_6581.hasCurrentObject ()) {
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 165)) ;
        }
        GGS__5B_extractedAssociatedValueForGeneration_5D_ var_extractedAssociatedValuesForGeneration_6685 = GGS__5B_extractedAssociatedValueForGeneration_5D_::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_6765 (enumerator_6581.current (HERE).readProperty_mSwitchConstantList ()) ;
        while (enumerator_6765.hasCurrentObject ()) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_enumType_6238.readProperty_constantMap ().getter_contains (enumerator_6765.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas4", 168)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = var_constantsNamedInSwitchInstruction_6364.getter_contains (enumerator_6765.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas4", 169)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  GenericArray <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (enumerator_6765.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6765.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 171)).add_operation (GGS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 171)), fixItArray5  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 170)) ;
                }
              }
              var_constantsNamedInSwitchInstruction_6364.plusPlusAssignOperation (enumerator_6765.current (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 174)) ;
              GGS__5B_associatedValueDescriptor_5D_ var_associatedTypeList_7241 ;
              GGS_u_33__32_ joker_7232 ; // Joker input parameter
              var_enumType_6238.readProperty_constantMap ().method_searchKey (enumerator_6765.current (HERE), joker_7232, var_associatedTypeList_7241, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 175)) ;
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_7241.getter_count (SOURCE_FILE ("instruction-switch.galgas4", 176)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, enumerator_6581.current (HERE).readProperty_mAssociatedValuesExtraction ().getter_count (SOURCE_FILE ("instruction-switch.galgas4", 176)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-switch.galgas4", 176)).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  GenericArray <FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_6765.current (HERE).readProperty_location (), GGS_string ("the associated values of '").add_operation (enumerator_6765.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 178)).add_operation (GGS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 178)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 177)) ;
                }
              }
              if (GalgasBool::boolFalse == test_6) {
                GalgasBool test_8 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_8) {
                  test_8 = GGS_bool (ComparisonKind::equal, var_associatedTypeList_7241.getter_count (SOURCE_FILE ("instruction-switch.galgas4", 180)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_6581.current (HERE).readProperty_mAssociatedValuesExtraction ().getter_count (SOURCE_FILE ("instruction-switch.galgas4", 180)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-switch.galgas4", 180)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_8) {
                    GenericArray <FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (enumerator_6765.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6765.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 182)).add_operation (GGS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 182)), fixItArray9  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 181)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_8) {
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = GGS_bool (ComparisonKind::notEqual, var_associatedTypeList_7241.getter_count (SOURCE_FILE ("instruction-switch.galgas4", 184)).objectCompare (enumerator_6581.current (HERE).readProperty_mAssociatedValuesExtraction ().getter_count (SOURCE_FILE ("instruction-switch.galgas4", 184)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      GGS_string temp_11 ;
                      const GalgasBool test_12 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_7241.getter_count (SOURCE_FILE ("instruction-switch.galgas4", 188)).objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_12) {
                        temp_11 = GGS_string ("s") ;
                      }else if (GalgasBool::boolFalse == test_12) {
                        temp_11 = GGS_string::makeEmptyString () ;
                      }
                      GenericArray <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (enumerator_6765.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6765.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 186)).add_operation (GGS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 186)).add_operation (var_associatedTypeList_7241.getter_count (SOURCE_FILE ("instruction-switch.galgas4", 186)).getter_string (SOURCE_FILE ("instruction-switch.galgas4", 186)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 186)).add_operation (GGS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 186)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 187)), fixItArray13  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 185)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_10) {
                    UpEnumerator__5B_associatedValueDescriptor_5D_ enumerator_8128 (var_associatedTypeList_7241) ;
                    UpEnumerator__5B_switchExtractedValuesAST_5D_ enumerator_8174 (enumerator_6581.current (HERE).readProperty_mAssociatedValuesExtraction ()) ;
                    GGS_u_33__32_ index_8110 (uint32_t (0)) ;
                    while (enumerator_8128.hasCurrentObject () && enumerator_8174.hasCurrentObject ()) {
                      GalgasBool test_14 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_14) {
                        test_14 = GGS_bool (ComparisonKind::notEqual, enumerator_8174.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_14) {
                          GalgasBool test_15 = GalgasBool::boolTrue ;
                          if (GalgasBool::boolTrue == test_15) {
                            test_15 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_8128.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 193)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_8174.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_string ())).boolEnum () ;
                            if (GalgasBool::boolTrue == test_15) {
                              GenericArray <FixItDescription> fixItArray16 ;
                              inCompiler->emitSemanticError (enumerator_8174.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_location (), GGS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_8128.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 196)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 196)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 196)), fixItArray16  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 195)) ;
                            }
                          }
                        }
                      }
                      GGS_string var_cppName_8701 = GGS_string ("extractedValue_").add_operation (enumerator_8174.current (HERE).readProperty_mExtractedValueName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 201)).getter_string (SOURCE_FILE ("instruction-switch.galgas4", 200)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 200)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 201)).add_operation (enumerator_8174.current (HERE).readProperty_mExtractedValueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 202)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 202)).add_operation (index_8110.getter_string (SOURCE_FILE ("instruction-switch.galgas4", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 202)) ;
                      var_extractedAssociatedValuesForGeneration_6685.plusPlusAssignOperation (GGS_extractedAssociatedValueForGeneration::init_21__21__21_ (enumerator_8128.current (HERE).readProperty_type (), var_cppName_8701, enumerator_8128.current (HERE).readProperty_name (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 203)) ;
                      GalgasBool test_17 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_17) {
                        test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_8174.current (HERE).readProperty_mExtractedValueName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_17) {
                          GalgasBool test_18 = GalgasBool::boolTrue ;
                          if (GalgasBool::boolTrue == test_18) {
                            test_18 = enumerator_8174.current (HERE).readProperty_mMarkedAsUnused ().boolEnum () ;
                            if (GalgasBool::boolTrue == test_18) {
                              {
                              extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_8174.current (HERE).readProperty_mExtractedValueName (), enumerator_8128.current (HERE).readProperty_type (), var_cppName_8701, var_cppName_8701, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 209)) ;
                              }
                            }
                          }
                          if (GalgasBool::boolFalse == test_18) {
                            {
                            extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, enumerator_8174.current (HERE).readProperty_mExtractedValueName (), enumerator_8128.current (HERE).readProperty_type (), var_cppName_8701, var_cppName_8701, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 216)) ;
                            }
                          }
                        }
                      }
                      enumerator_8128.gotoNextObject () ;
                      enumerator_8174.gotoNextObject () ;
                      index_8110.plusAssignOperation (GGS_u_33__32_ (1), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 191)) ;
                    }
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GenericArray <FixItDescription> fixItArray19 ;
            inCompiler->emitSemanticError (enumerator_6765.current (HERE).readProperty_location (), GGS_string ("'").add_operation (enumerator_6765.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 228)).add_operation (GGS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 228)).add_operation (extensionGetter_definition (var_switchExpression_6146.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 229)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 228)).add_operation (GGS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 229)), fixItArray19  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 227)) ;
          }
          enumerator_6765.gotoNextObject () ;
        }
        GGS__5B_semanticInstructionForGeneration_5D_ var_instructionList_10371 ;
        {
        routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS__5B_localConstant_5D_::init (inCompiler COMMA_HERE), enumerator_6581.current (HERE).readProperty_mInstructions (), ioArgument_ioVariableMap, var_instructionList_10371, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 233)) ;
        }
        {
        extensionSetter_closeBranch (ioArgument_ioVariableMap, enumerator_6581.current (HERE).readProperty_mEndOfBranch (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 243)) ;
        }
        var_switchBranchesForGeneration_6522.plusPlusAssignOperation (GGS_switchBranchForGeneration::init_21__21__21__21_ (enumerator_6581.current (HERE).readProperty_mSwitchConstantList (), var_extractedAssociatedValuesForGeneration_6685, enumerator_6581.current (HERE).readProperty_mEndOfBranch ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 247)), var_instructionList_10371, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 244)) ;
        enumerator_6581.gotoNextObject () ;
      }
      {
      const GGS_switchInstructionAST temp_20 = this ;
      extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_20.readProperty_mEndOf_5F_switch_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 250)) ;
      }
      GGS_stringset var_forgottenConstants_10798 = var_enumType_6238.readProperty_constantMap ().getter_keySet (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 252)).subtract_operation (var_constantsNamedInSwitchInstruction_6364, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 252)) ;
      GalgasBool test_21 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_21) {
        test_21 = GGS_bool (ComparisonKind::greaterThan, var_forgottenConstants_10798.getter_count (SOURCE_FILE ("instruction-switch.galgas4", 253)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_21) {
          GGS_string var_s_10946 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_10972 (var_forgottenConstants_10798) ;
          while (enumerator_10972.hasCurrentObject ()) {
            var_s_10946.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_10972.current (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 256)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 256)) ;
            enumerator_10972.gotoNextObject () ;
          }
          const GGS_switchInstructionAST temp_22 = this ;
          GenericArray <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (temp_22.readProperty_mEndOf_5F_switch_5F_instruction (), GGS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_10946, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 259)), fixItArray23  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 258)) ;
        }
      }
      ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_switchInstructionForGeneration::init_21__21__21_ (var_switchExpression_6146.readProperty_mResultType (), var_switchExpression_6146, var_switchBranchesForGeneration_6522, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 263)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_switchInstructionAST temp_24 = this ;
    GenericArray <FixItDescription> fixItArray25 ;
    inCompiler->emitSemanticError (temp_24.readProperty_mEndOfSwitchExpression (), GGS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (extensionGetter_definition (var_switchExpression_6146.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 271)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 270)).add_operation (GGS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 271)), fixItArray25  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 269)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@switchInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GGS_string & ioArgument_ioGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_switchVar_13578 ;
  const GGS_switchInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar_13578, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 315)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (").add_operation (var_switchVar_13578, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 322)).add_operation (GGS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 322)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 322)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 323)) ;
  const GGS_switchInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_1.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 324)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 324)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::invalid:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 325)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 326)) ;
  const GGS_switchInstructionForGeneration temp_2 = this ;
  UpEnumerator__5B_switchBranchForGeneration_5D_ enumerator_13892 (temp_2.readProperty_mBranches ()) ;
  while (enumerator_13892.hasCurrentObject ()) {
    UpEnumerator__5B_lstring_5D_ enumerator_13938 (enumerator_13892.current (HERE).readProperty_mSwitchConstantList ()) ;
    while (enumerator_13938.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 329)) ;
      const GGS_switchInstructionForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_3.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 330)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 330)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::enum_"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 331)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_13938.current (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas4", 332)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 332)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (":\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 333)) ;
      enumerator_13938.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 335)) ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_13892.current (HERE).readProperty_mInstructions ().getter_count (SOURCE_FILE ("instruction-switch.galgas4", 336)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 337)) ;
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::greaterThan, enumerator_13892.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ().getter_count (SOURCE_FILE ("instruction-switch.galgas4", 338)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            UpEnumerator__5B_extractedAssociatedValueForGeneration_5D_ enumerator_14486 (enumerator_13892.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
            while (enumerator_14486.hasCurrentObject ()) {
              extensionMethod_addHeaderFileName (enumerator_14486.current (HERE).readProperty_mType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 340)) ;
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_14486.current (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 341)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 341)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 341)) ;
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (enumerator_14486.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 342)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 342)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 342)) ;
              enumerator_14486.gotoNextObject () ;
            }
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_switchVar_13578, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 344)).add_operation (GGS_string (".getAssociatedValuesFor_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 344)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 344)) ;
            ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_13892.current (HERE).readProperty_mSwitchConstantList ().readSubscript__3F_ (GGS_u_33__32_ (uint32_t (0U)), inCompiler COMMA_HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas4", 345)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 345)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 345)) ;
            UpEnumerator__5B_extractedAssociatedValueForGeneration_5D_ enumerator_14988 (enumerator_13892.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
            while (enumerator_14988.hasCurrentObject ()) {
              ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_14988.current (HERE).readProperty_mCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 347)) ;
              enumerator_14988.gotoNextObject () ;
              if (enumerator_14988.hasCurrentObject ()) {
                ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 348)) ;
              }
            }
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 350)) ;
          }
        }
        {
        routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_13892.current (HERE).readProperty_mInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 352)) ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 360)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 362)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 363)) ;
    }
    enumerator_13892.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 365)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@setterCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_setterCallInstructionAST temp_0 = this ;
  UpEnumerator__5B_actualParameterAST_5D_ enumerator_4048 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_4048.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_4048.current (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 100)) ;
    enumerator_4048.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfSetterCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfSetterCallInstructionAST temp_0 = this ;
  UpEnumerator__5B_actualParameterAST_5D_ enumerator_4370 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_4370.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_4370.current (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 108)) ;
    enumerator_4370.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@setterCallInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_receiverType_5181 ;
  GGS_string var_targetVariableCppName_5208 ;
  GGS_string var_nameForCheckingFormalParameterUsing_5244 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_setterCallInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_selfAvailability_2E_available var_selfAvailability_5322 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-setter-call.galgas4", 127)).unwrappedValue () ;
        if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-setter-call.galgas4", 127)).isValuated ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfAvailability_5322.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 129)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_classType (SOURCE_FILE ("instruction-setter-call.galgas4", 129)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = extensionGetter_selfIsMutable (var_selfAvailability_5322.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 130)).operator_not (SOURCE_FILE ("instruction-setter-call.galgas4", 130)).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                const GGS_setterCallInstructionAST temp_5 = this ;
                GenericArray <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (temp_5.readProperty_mSetterName ().readProperty_location (), GGS_string ("'self' not mutable in this context"), fixItArray6  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 131)) ;
              }
            }
          }
          GGS_propertyMap var_propertyMap_5683 = extensionGetter_definition (var_selfAvailability_5322.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 133)).readProperty_propertyMap () ;
          GGS_bool var_isConstant_5800 ;
          const GGS_setterCallInstructionAST temp_7 = this ;
          GGS_AccessControl joker_5791 ; // Joker input parameter
          var_propertyMap_5683.method_searchKey (temp_7.readProperty_mReceiverName (), joker_5791, var_isConstant_5800, var_receiverType_5181, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 134)) ;
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = var_isConstant_5800.boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              const GGS_setterCallInstructionAST temp_9 = this ;
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 136)) ;
            }
          }
          var_nameForCheckingFormalParameterUsing_5244 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GGS_setterCallInstructionAST temp_11 = this ;
          var_targetVariableCppName_5208 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 139)).add_operation (temp_11.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas4", 140)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 140)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        const GGS_setterCallInstructionAST temp_12 = this ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mSetterName ().readProperty_location (), GGS_string ("'self' not available in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 142)) ;
        var_receiverType_5181.drop () ; // Release error dropped variable
        var_targetVariableCppName_5208.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_5244.drop () ; // Release error dropped variable
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_setterCallInstructionAST temp_14 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_14.readProperty_mReceiverName (), var_receiverType_5181, var_targetVariableCppName_5208, var_nameForCheckingFormalParameterUsing_5244, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 147)) ;
    }
  }
  GGS_bool var_ok_6584 = GGS_bool (true) ;
  const GGS_setterCallInstructionAST temp_15 = this ;
  GGS_location var_errorLocation_6600 = temp_15.readProperty_mReceiverName ().readProperty_location () ;
  const GGS_setterCallInstructionAST temp_16 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_6664 (temp_16.readProperty_mReceiverStructProperties ()) ;
  bool bool_17 = var_ok_6584.isValidAndTrue () ;
  if (enumerator_6664.hasCurrentObject () && bool_17) {
    while (enumerator_6664.hasCurrentObject () && bool_17) {
      var_ok_6584 = extensionGetter_definition (var_receiverType_5181, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 158)).readProperty_typeKind ().getter_isStructType (SOURCE_FILE ("instruction-setter-call.galgas4", 158)) ;
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = var_ok_6584.operator_not (SOURCE_FILE ("instruction-setter-call.galgas4", 159)).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (var_errorLocation_6600, GGS_string ("a structure is required for '.' access"), fixItArray19  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 160)) ;
        }
      }
      if (GalgasBool::boolFalse == test_18) {
        GGS_propertyMap var_propertyMap_6864 = extensionGetter_definition (var_receiverType_5181, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 162)).readProperty_propertyMap () ;
        GGS_AccessControl var_accessControl_6955 ;
        GGS_bool var_isConstant_6975 ;
        var_propertyMap_6864.method_searchKey (enumerator_6664.current (HERE), var_accessControl_6955, var_isConstant_6975, var_receiverType_5181, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 163)) ;
        extensionMethod_checkSetAccess (var_accessControl_6955, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_6664.current (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 164)) ;
        var_errorLocation_6600 = enumerator_6664.current (HERE).readProperty_location () ;
        GalgasBool test_20 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_20) {
          test_20 = var_isConstant_6975.boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            GenericArray <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_6664.current (HERE).readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 167)) ;
          }
        }
      }
      enumerator_6664.gotoNextObject () ;
      if (enumerator_6664.hasCurrentObject ()) {
        bool_17 = var_ok_6584.isValidAndTrue () ;
      }
    }
  }
  GGS_methodKind var_kind_7351 ;
  GGS__5B_formalParameterSignatureElement_5D_ var_routineSignature_7366 ;
  GGS_bool var_hasCompilerArgument_7393 ;
  GGS_string var_setterErrorMessage_7431 ;
  const GGS_setterCallInstructionAST temp_22 = this ;
  GGS_methodQualifier joker_7418 ; // Joker input parameter
  extensionGetter_definition (var_receiverType_5181, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 172)).readProperty_setterMap ().method_searchKey (temp_22.readProperty_mSetterName (), var_kind_7351, var_routineSignature_7366, var_hasCompilerArgument_7393, joker_7418, var_setterErrorMessage_7431, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 172)) ;
  GalgasBool test_23 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_23) {
    test_23 = GGS_bool (ComparisonKind::notEqual, var_setterErrorMessage_7431.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_23) {
      const GGS_setterCallInstructionAST temp_24 = this ;
      GenericArray <FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_24.readProperty_mSetterName ().readProperty_location (), var_setterErrorMessage_7431, fixItArray25  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 181)) ;
    }
  }
  GGS__5B_actualParameterForGeneration_5D_ var_actualParameterListForGeneration_7968 ;
  const GGS_setterCallInstructionAST temp_26 = this ;
  const GGS_setterCallInstructionAST temp_27 = this ;
  const GGS_setterCallInstructionAST temp_28 = this ;
  extensionMethod_analyzeRoutineArguments (temp_26.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_27.readProperty_mSetterName (), GGS_string ("'").add_operation (temp_28.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 190)).add_operation (GGS_string ("' mutating proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 190)), var_routineSignature_7366, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_7968, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 184)) ;
  GGS_unifiedTypeMapEntry var_baseType_8057 = var_receiverType_5181 ;
  GGS_bool var_searching_8087 = GGS_bool (true) ;
  GalgasBool test_29 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_29) {
    test_29 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("instruction-setter-call.galgas4", 199)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_29) {
      if (GGS_u_33__32_::class_func_max (SOURCE_FILE ("instruction-setter-call.galgas4", 200)).isValid ()) {
        uint32_t variant_8147 = GGS_u_33__32_::class_func_max (SOURCE_FILE ("instruction-setter-call.galgas4", 200)).uintValue () ;
        bool loop_8147 = true ;
        while (loop_8147) {
          loop_8147 = var_searching_8087.isValid () ;
          if (loop_8147) {
            loop_8147 = var_searching_8087.boolValue () ;
          }
          if (loop_8147 && (0 == variant_8147)) {
            loop_8147 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-setter-call.galgas4", 200)) ;
          }
          if (loop_8147) {
            variant_8147 -= 1 ;
            GalgasBool test_30 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_30) {
              test_30 = extensionGetter_definition (var_baseType_8057, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 201)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas4", 201)).boolEnum () ;
              if (GalgasBool::boolTrue == test_30) {
                var_searching_8087 = GGS_bool (false) ;
              }
            }
            if (GalgasBool::boolFalse == test_30) {
              GalgasBool test_31 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_31) {
                const GGS_setterCallInstructionAST temp_32 = this ;
                test_31 = extensionGetter_definition (extensionGetter_definition (var_baseType_8057, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 204)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 204)).readProperty_setterMap ().getter_contains (temp_32.readProperty_mSetterName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 204)).boolEnum () ;
                if (GalgasBool::boolTrue == test_31) {
                  var_baseType_8057 = extensionGetter_definition (var_baseType_8057, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 205)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_31) {
                var_searching_8087 = GGS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GGS_setterCallInstructionAST temp_33 = this ;
  const GGS_setterCallInstructionAST temp_34 = this ;
  const GGS_setterCallInstructionAST temp_35 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_setterCallInstructionForGeneration::init_21__21__21__21__21__21__21__21__21__21_ (temp_33.readProperty_mReceiverName ().readProperty_location (), var_targetVariableCppName_5208, var_nameForCheckingFormalParameterUsing_5244, temp_34.readProperty_mReceiverStructProperties (), var_receiverType_5181, temp_35.readProperty_mSetterName (), var_kind_7351, var_actualParameterListForGeneration_7968, var_hasCompilerArgument_7393, var_baseType_8057, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 213)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfSetterCallInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_9509 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-setter-call.galgas4", 237)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-setter-call.galgas4", 237)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_9509.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 238)).operator_not (SOURCE_FILE ("instruction-setter-call.galgas4", 238)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfSetterCallInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mSetterName ().readProperty_location (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 239)) ;
        }
      }
      const GGS_selfSetterCallInstructionAST temp_4 = this ;
      extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_4.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 242)) ;
      GGS_methodKind var_kind_9968 ;
      GGS__5B_formalParameterSignatureElement_5D_ var_routineSignature_9979 ;
      GGS_bool var_hasCompilerArgument_10002 ;
      const GGS_selfSetterCallInstructionAST temp_5 = this ;
      GGS_methodQualifier joker_10023 ; // Joker input parameter
      GGS_string joker_10027 ; // Joker input parameter
      extensionGetter_definition (var_selfAvailable_9509.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 244)).readProperty_setterMap ().method_searchKey (temp_5.readProperty_mSetterName (), var_kind_9968, var_routineSignature_9979, var_hasCompilerArgument_10002, joker_10023, joker_10027, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 244)) ;
      GGS__5B_actualParameterForGeneration_5D_ var_actualParameterListForGeneration_10480 ;
      const GGS_selfSetterCallInstructionAST temp_6 = this ;
      const GGS_selfSetterCallInstructionAST temp_7 = this ;
      const GGS_selfSetterCallInstructionAST temp_8 = this ;
      extensionMethod_analyzeRoutineArguments (temp_6.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_7.readProperty_mSetterName (), GGS_string ("'").add_operation (temp_8.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 252)).add_operation (GGS_string ("' mutating proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 252)), var_routineSignature_9979, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_10480, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 246)) ;
      const GGS_selfSetterCallInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_selfSetterCallInstructionForGeneration::init_21__21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), var_selfAvailable_9509.readProperty_type (), temp_9.readProperty_mSetterName (), var_kind_9968, var_actualParameterListForGeneration_10480, var_hasCompilerArgument_10002, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 259)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfSetterCallInstructionAST temp_10 = this ;
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mSetterName ().readProperty_location (), GGS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 268)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@setterCallInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                          GGS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 307)) ;
  const GGS_setterCallInstructionForGeneration temp_0 = this ;
  GGS_string var_receiverCppName_12500 = temp_0.readProperty_mReceiverCppName () ;
  const GGS_setterCallInstructionForGeneration temp_1 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_12560 (temp_1.readProperty_mReceiverStructAttributes ()) ;
  while (enumerator_12560.hasCurrentObject ()) {
    var_receiverCppName_12500.plusAssignOperation(GGS_string (".mProperty_").add_operation (enumerator_12560.current (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas4", 310)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 310)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 310)) ;
    enumerator_12560.gotoNextObject () ;
  }
  {
  const GGS_setterCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mReceiverBaseName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 312)) ;
  }
  GGS__5B_string_5D_ var_parameterCppNameList_12771 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_jokerParametersToReleaseList_12814 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_inputVariableList_12865 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_setterCallInstructionForGeneration temp_3 = this ;
  UpEnumerator__5B_actualParameterForGeneration_5D_ enumerator_12909 (temp_3.readProperty_mActualParameterList ()) ;
  while (enumerator_12909.hasCurrentObject ()) {
    GGS_string var_parameterCppName_13163 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_12909.current (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_12814, var_inputVariableList_12865, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_13163, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 318)) ;
    var_parameterCppNameList_12771.plusPlusAssignOperation (var_parameterCppName_13163  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 327)) ;
    enumerator_12909.gotoNextObject () ;
  }
  const GGS_setterCallInstructionForGeneration temp_4 = this ;
  switch (temp_4.readProperty_mKind ().enumValue ()) {
  case GGS_methodKind::Enumeration::invalid:
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsExtension:
    {
      const GGS_setterCallInstructionForGeneration temp_5 = this ;
      const GGS_setterCallInstructionForGeneration temp_6 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("mutating-proc-").add_operation (extensionGetter_definition (temp_5.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 332)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas4", 332)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 332)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 332)).add_operation (temp_6.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas4", 332)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 332))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 332)) ;
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        const GGS_setterCallInstructionForGeneration temp_8 = this ;
        test_7 = extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 333)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas4", 333)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            const GGS_setterCallInstructionForGeneration temp_10 = this ;
            test_9 = GGS_bool (ComparisonKind::greaterThan, extensionGetter_definition (temp_10.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 334)).readProperty_allTypedPropertyList ().getter_count (SOURCE_FILE ("instruction-setter-call.galgas4", 334)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              ioArgument_ioGeneratedCode.plusAssignOperation(var_receiverCppName_12500.add_operation (GGS_string (".insulate ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 335)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 335)).add_operation (GGS_string (" COMMA_HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 335)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 335)) ;
              {
              ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 336)) ;
              }
            }
          }
          const GGS_setterCallInstructionForGeneration temp_11 = this ;
          GGS_string var_pointerUniqueName_13804 = GGS_string ("ptr_").add_operation (temp_11.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 338)).getter_string (SOURCE_FILE ("instruction-setter-call.galgas4", 338)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 338)) ;
          const GGS_setterCallInstructionForGeneration temp_12 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 339)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 339)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 339)).add_operation (var_pointerUniqueName_13804, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 339)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 339)) ;
          const GGS_setterCallInstructionForGeneration temp_13 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" = (cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_13.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 340)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 340)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 340)).add_operation (var_receiverCppName_12500, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 340)).add_operation (GGS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 340)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 340)) ;
          const GGS_setterCallInstructionForGeneration temp_14 = this ;
          const GGS_setterCallInstructionForGeneration temp_15 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("callExtensionSetter_").add_operation (temp_14.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas4", 341)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 341)).add_operation (GGS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 341)).add_operation (extensionGetter_identifierRepresentation (temp_15.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 342)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 342)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 342)).add_operation (var_pointerUniqueName_13804, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 342)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 342)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 341)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        const GGS_setterCallInstructionForGeneration temp_16 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("extensionSetter_").add_operation (temp_16.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas4", 344)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 344)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 344)).add_operation (var_receiverCppName_12500, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 344)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 344)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 344)) ;
      }
    }
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsMember:
    {
      const GGS_setterCallInstructionForGeneration temp_17 = this ;
      extensionMethod_addHeaderFileName (temp_17.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 347)) ;
      const GGS_setterCallInstructionForGeneration temp_18 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(var_receiverCppName_12500.add_operation (GGS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 348)).add_operation (temp_18.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas4", 348)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 348)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 348)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 348)) ;
    }
    break ;
  }
  UpEnumerator__5B_string_5D_ enumerator_14688 (var_parameterCppNameList_12771) ;
  while (enumerator_14688.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_14688.current (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 351)) ;
    enumerator_14688.gotoNextObject () ;
    if (enumerator_14688.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 352)) ;
    }
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    const GGS_setterCallInstructionForGeneration temp_20 = this ;
    test_19 = temp_20.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      GalgasBool test_21 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_21) {
        test_21 = GGS_bool (ComparisonKind::notEqual, var_parameterCppNameList_12771.getter_count (SOURCE_FILE ("instruction-setter-call.galgas4", 355)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_21) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 356)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 358)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 359)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 360)) ;
    }
  }
  if (GalgasBool::boolFalse == test_19) {
    GalgasBool test_22 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_22) {
      test_22 = GGS_bool (ComparisonKind::notEqual, var_parameterCppNameList_12771.getter_count (SOURCE_FILE ("instruction-setter-call.galgas4", 361)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_22) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 362)) ;
      }
    }
  }
  const GGS_setterCallInstructionForGeneration temp_23 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_sourceFile (temp_23.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 364)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 364)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 364)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 365)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfSetterCallInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                              GGS_string & ioArgument_ioGeneratedCode,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 375)) ;
  {
  const GGS_selfSetterCallInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 376)) ;
  }
  GGS__5B_string_5D_ var_parameterCppNameList_15701 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_jokerParametersToReleaseList_15743 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_inputVariableList_15793 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_selfSetterCallInstructionForGeneration temp_1 = this ;
  UpEnumerator__5B_actualParameterForGeneration_5D_ enumerator_15846 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_15846.hasCurrentObject ()) {
    GGS_string var_parameterCppName_16108 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_15846.current (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_15743, var_inputVariableList_15793, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_16108, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 382)) ;
    var_parameterCppNameList_15701.plusPlusAssignOperation (var_parameterCppName_16108  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 390)) ;
    enumerator_15846.gotoNextObject () ;
  }
  const GGS_selfSetterCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GGS_methodKind::Enumeration::invalid:
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsExtension:
    {
      const GGS_selfSetterCallInstructionForGeneration temp_3 = this ;
      const GGS_selfSetterCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("mutating-proc-").add_operation (extensionGetter_definition (temp_3.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 395)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas4", 395)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 395)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 395)).add_operation (temp_4.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas4", 395)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 395))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 395)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_selfSetterCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 396)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas4", 396)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_selfSetterCallInstructionForGeneration temp_7 = this ;
          const GGS_selfSetterCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("callExtensionSetter_").add_operation (temp_7.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas4", 397)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 397)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 397)).add_operation (temp_8.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 397)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 397)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 397)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        const GGS_selfSetterCallInstructionForGeneration temp_9 = this ;
        const GGS_selfSetterCallInstructionForGeneration temp_10 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("extensionSetter_").add_operation (temp_9.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas4", 399)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 399)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 399)).add_operation (temp_10.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 399)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 399)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 399)) ;
      }
    }
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsMember:
    {
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        const GGS_selfSetterCallInstructionForGeneration temp_12 = this ;
        test_11 = extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 402)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas4", 402)).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          const GGS_selfSetterCallInstructionForGeneration temp_13 = this ;
          const GGS_selfSetterCallInstructionForGeneration temp_14 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(temp_13.readProperty_mSelfCppName ().add_operation (GGS_string ("->setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 403)).add_operation (temp_14.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas4", 403)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 403)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 403)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 403)) ;
        }
      }
      if (GalgasBool::boolFalse == test_11) {
        const GGS_selfSetterCallInstructionForGeneration temp_15 = this ;
        const GGS_selfSetterCallInstructionForGeneration temp_16 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(temp_15.readProperty_mSelfCppName ().add_operation (GGS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 405)).add_operation (temp_16.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas4", 405)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 405)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 405)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 405)) ;
      }
    }
    break ;
  }
  UpEnumerator__5B_string_5D_ enumerator_17123 (var_parameterCppNameList_15701) ;
  while (enumerator_17123.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_17123.current (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 409)) ;
    enumerator_17123.gotoNextObject () ;
    if (enumerator_17123.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 410)) ;
    }
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    const GGS_selfSetterCallInstructionForGeneration temp_18 = this ;
    test_17 = temp_18.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = GGS_bool (ComparisonKind::notEqual, var_parameterCppNameList_15701.getter_count (SOURCE_FILE ("instruction-setter-call.galgas4", 413)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 414)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 416)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 417)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 418)) ;
    }
  }
  if (GalgasBool::boolFalse == test_17) {
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      test_20 = GGS_bool (ComparisonKind::notEqual, var_parameterCppNameList_15701.getter_count (SOURCE_FILE ("instruction-setter-call.galgas4", 419)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 420)) ;
      }
    }
  }
  const GGS_selfSetterCallInstructionForGeneration temp_21 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_sourceFile (temp_21.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 422)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 422)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 422)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 423)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@loopInstructionWithoutVariantAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_loopInstructionWithoutVariantAST temp_0 = this ;
  extensionMethod_enterExpressionListInSemanticContext (temp_0.readProperty_mLoopExpression (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 73)) ;
  const GGS_loopInstructionWithoutVariantAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mFirstInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 74)) ;
  const GGS_loopInstructionWithoutVariantAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mSecondInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 75)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@loopInstructionWithoutVariantAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_ifTestForGeneration_5D_ var_testListForGeneration_4420 ;
  const GGS_loopInstructionWithoutVariantAST temp_0 = this ;
  extensionMethod_analyzeSemanticExpressionList (temp_0.readProperty_mLoopExpression (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_testListForGeneration_4420, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 88)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 97)) ;
  }
  GGS__5B_semanticInstructionForGeneration_5D_ var_first_5F_instructionList_4855 ;
  {
  const GGS_loopInstructionWithoutVariantAST temp_1 = this ;
  const GGS_loopInstructionWithoutVariantAST temp_2 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS__5B_localConstant_5D_::init (inCompiler COMMA_HERE), temp_1.readProperty_mFirstInstructions (), temp_2.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_4855, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 99)) ;
  }
  GGS__5B_semanticInstructionForGeneration_5D_ var_second_5F_instructionList_5187 ;
  {
  const GGS_loopInstructionWithoutVariantAST temp_3 = this ;
  const GGS_loopInstructionWithoutVariantAST temp_4 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS__5B_localConstant_5D_::init (inCompiler COMMA_HERE), temp_3.readProperty_mSecondInstructions (), temp_4.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_5187, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 111)) ;
  }
  {
  const GGS_loopInstructionWithoutVariantAST temp_5 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_5.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 123)) ;
  }
  const GGS_loopInstructionWithoutVariantAST temp_6 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_loopInstructionWithoutVariantForGeneration::init_21__21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_first_5F_instructionList_4855, var_testListForGeneration_4420, var_second_5F_instructionList_5187, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 125)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@loopInstructionWithoutVariantForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                                  GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                  GGS_string & ioArgument_ioGeneratedCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_loopInstructionWithoutVariantForGeneration temp_0 = this ;
  GGS_string var_loopVar_6688 = GGS_string ("loop_").add_operation (temp_0.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 154)).getter_string (SOURCE_FILE ("instruction-loop-without-variant.galgas4", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 154)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("bool ").add_operation (var_loopVar_6688, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 155)).add_operation (GGS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 155)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 155)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while (").add_operation (var_loopVar_6688, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 156)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 156)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 156)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 157)) ;
  }
  {
  const GGS_loopInstructionWithoutVariantForGeneration temp_1 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_1.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 158)) ;
  }
  GGS_string var_loopExpressionVar_7314 ;
  const GGS_loopInstructionWithoutVariantForGeneration temp_2 = this ;
  extensionMethod_generateInstruction (temp_2.readProperty_mLoopExpression (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, var_loopExpressionVar_7314, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 166)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_loopVar_6688.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 173)).add_operation (var_loopExpressionVar_7314, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 173)).add_operation (GGS_string (" == GalgasBool::boolTrue ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 173)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 173)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_loopVar_6688, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 177)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 177)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 177)) ;
  {
  const GGS_loopInstructionWithoutVariantForGeneration temp_3 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_3.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 178)) ;
  }
  GGS_bool var_first_7896 = GGS_bool (true) ;
  const GGS_loopInstructionWithoutVariantForGeneration temp_4 = this ;
  UpEnumerator__5B_ifTestForGeneration_5D_ enumerator_7927 (temp_4.readProperty_mLoopExpression ()) ;
  while (enumerator_7927.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_first_7896.boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        var_first_7896 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 191)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_loopVar_6688, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 192)).add_operation (GGS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 192)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 192)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 194)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 195)) ;
    }
    enumerator_7927.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 197)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 198)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 199)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@undefinedLocalConstantDeclarationAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@localConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_localConstantDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localConstantDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 152)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@localVariableOrConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = this ;
      GGS_unifiedTypeMapEntry joker_6490 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mOptionalTypeName (), joker_6490, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 159)) ;
      }
    }
  }
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 161)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@undefinedLocalConstantDeclarationAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationAST::method_analyzeSemanticInstruction (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                   GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                   const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_undefinedLocalConstantDeclarationAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_targetType_7290 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mConstantTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 175)) ;
  const GGS_undefinedLocalConstantDeclarationAST temp_1 = this ;
  const GGS_undefinedLocalConstantDeclarationAST temp_2 = this ;
  GGS_string var_targetVariableCppName_7364 = GGS_string ("var_").add_operation (temp_1.readProperty_mConstantName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas4", 176)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 176)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 176)).add_operation (temp_2.readProperty_mConstantName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 177)).getter_string (SOURCE_FILE ("instruction-let.galgas4", 177)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 177)) ;
  {
  const GGS_undefinedLocalConstantDeclarationAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mConstantName (), var_targetType_7290, var_targetVariableCppName_7364, var_targetVariableCppName_7364, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 178)) ;
  }
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_undefinedLocalConstantDeclarationForGeneration::init_21__21_ (var_targetType_7290, var_targetVariableCppName_7364, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-let.galgas4", 185)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@localConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_localConstantDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_8740 ;
  const GGS_localConstantDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-let.galgas4", 204)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8740, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 201)) ;
  const GGS_localConstantDeclarationWithAssignmentAST temp_1 = this ;
  const GGS_localConstantDeclarationWithAssignmentAST temp_2 = this ;
  GGS_string var_targetVariableCppName_8789 = GGS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas4", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 211)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 211)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 212)).getter_string (SOURCE_FILE ("instruction-let.galgas4", 212)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 212)) ;
  {
  const GGS_localConstantDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_expression_8740.readProperty_mResultType (), var_targetVariableCppName_8789, var_targetVariableCppName_8789, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 213)) ;
  }
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::init_21__21__21__21_ (var_expression_8740.readProperty_mResultType (), GGS_bool (true), var_targetVariableCppName_8789, var_expression_8740, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-let.galgas4", 220)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@localVariableOrConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                  const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                  GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                                                  GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_targetType_9957 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 237)) ;
  GGS_semanticExpressionForGeneration var_expression_10332 ;
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_9957, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_10332, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 239)) ;
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = this ;
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  GGS_string var_targetVariableCppName_10381 = GGS_string ("var_").add_operation (temp_2.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas4", 249)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 249)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 249)).add_operation (temp_3.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 250)).getter_string (SOURCE_FILE ("instruction-let.galgas4", 250)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 250)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_5 = this ;
    test_4 = temp_5.readProperty_mIsConstant ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_6 = this ;
      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mVariableName (), var_targetType_9957, var_targetVariableCppName_10381, var_targetVariableCppName_10381, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 252)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    {
    const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_7 = this ;
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_7.readProperty_mVariableName (), GGS_bool (true), var_targetType_9957, var_targetVariableCppName_10381, var_targetVariableCppName_10381, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 259)) ;
    }
  }
  {
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_8 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_9957, var_expression_10332.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_10332, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas4", 268)) ;
  }
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::init_21__21__21__21_ (var_targetType_9957, temp_9.readProperty_mIsConstant (), var_targetVariableCppName_10381, var_expression_10332, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-let.galgas4", 270)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@undefinedLocalConstantDeclarationForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                                      GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                      GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                      const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                                      GGS_string & ioArgument_ioGeneratedCode,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_undefinedLocalConstantDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 304)) ;
  const GGS_undefinedLocalConstantDeclarationForGeneration temp_1 = this ;
  const GGS_undefinedLocalConstantDeclarationForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 305)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 305)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 305)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 305)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas4", 305)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@localVariableOrConstantDeclarationWithSourceExpressionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                                                           GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                                                           GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                           const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                                                           GGS_string & ioArgument_ioGeneratedCode,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 316)) ;
  GGS_string var_sourceVar_13451 ;
  const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_13451, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 317)) ;
  const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_2 = this ;
  const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 324)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 324)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 324)).add_operation (temp_3.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 324)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 324)).add_operation (var_sourceVar_13451, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 324)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas4", 324)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas4", 324)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dropInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_dropInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dropInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_dropInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                 GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                 const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                 GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                 GGS__5B_semanticInstructionForGeneration_5D_ & /* ioArgument__5F_ioInstructionListForGeneration */,
                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dropInstructionAST temp_0 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_3422 (temp_0.readProperty_mDropList ()) ;
  while (enumerator_3422.hasCurrentObject ()) {
    {
    extensionSetter_searchForDropAccess (ioArgument_ioVariableMap, enumerator_3422.current (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-drop.galgas4", 70)) ;
    }
    enumerator_3422.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@localVariableDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVariableDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 135)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@localVariableDeclarationWithAssignmentAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_6578 ;
  const GGS_localVariableDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-var-declaration.galgas4", 153)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_6578, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 150)) ;
  const GGS_localVariableDeclarationWithAssignmentAST temp_1 = this ;
  const GGS_localVariableDeclarationWithAssignmentAST temp_2 = this ;
  GGS_string var_targetVariableCppName_6627 = GGS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas4", 160)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 160)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 160)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 160)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas4", 160)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 160)) ;
  {
  const GGS_localVariableDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), GGS_bool (true), var_expression_6578.readProperty_mResultType (), var_targetVariableCppName_6627, var_targetVariableCppName_6627, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 161)) ;
  }
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::init_21__21__21__21_ (var_expression_6578.readProperty_mResultType (), GGS_bool (false), var_targetVariableCppName_6627, var_expression_6578, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 169)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@localVariableDeclarationNoAssignmentAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationNoAssignmentAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_localVariableDeclarationNoAssignmentAST temp_0 = this ;
  GGS_unifiedTypeMapEntry joker_7565 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), joker_7565, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 182)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@localVariableDeclarationNoAssignmentAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationNoAssignmentAST::method_analyzeSemanticInstruction (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                      GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                      const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVariableDeclarationNoAssignmentAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_targetType_8326 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 196)) ;
  const GGS_localVariableDeclarationNoAssignmentAST temp_1 = this ;
  const GGS_localVariableDeclarationNoAssignmentAST temp_2 = this ;
  GGS_string var_targetVariableCppName_8392 = GGS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas4", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 197)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 197)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 197)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas4", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 197)) ;
  {
  const GGS_localVariableDeclarationNoAssignmentAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalVariable (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_targetType_8326, var_targetVariableCppName_8392, var_targetVariableCppName_8392, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 198)) ;
  }
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_localVariableDeclarationForGeneration::init_21__21_ (var_targetType_8326, var_targetVariableCppName_8392, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 205)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@localVariableDeclarationForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                             GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                             const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                             GGS_string & ioArgument_ioGeneratedCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVariableDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mVariableType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 227)) ;
  const GGS_localVariableDeclarationForGeneration temp_1 = this ;
  const GGS_localVariableDeclarationForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mVariableType (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 228)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 228)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 228)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 228)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 228)), inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 228)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfAssignmentInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfAssignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 69)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfAssignmentInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_3812 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-assignment.galgas4", 83)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-assignment.galgas4", 83)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_3812.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 84)).operator_not (SOURCE_FILE ("instruction-self-assignment.galgas4", 84)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfAssignmentInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 85)) ;
        }
      }
      GGS_unifiedTypeMapEntry var_targetType_4033 = var_selfAvailable_3812.readProperty_type () ;
      GGS_assignmentSupplementIR var_supplementIR_4097 ;
      const GGS_selfAssignmentInstructionAST temp_4 = this ;
      switch (temp_4.readProperty_mSupplement ().enumValue ()) {
      case GGS_assignmentSupplementAST::Enumeration::invalid:
        break ;
      case GGS_assignmentSupplementAST::Enumeration::enum_none:
        {
          var_supplementIR_4097 = GGS_assignmentSupplementIR::class_func_none (SOURCE_FILE ("instruction-self-assignment.galgas4", 91)) ;
        }
        break ;
      case GGS_assignmentSupplementAST::Enumeration::enum_property:
        {
          GGS_lstring extractedValue_4200_propertyName_0 ;
          temp_4.readProperty_mSupplement ().getAssociatedValuesFor_property (extractedValue_4200_propertyName_0) ;
          var_supplementIR_4097 = GGS_assignmentSupplementIR::class_func_property (extractedValue_4200_propertyName_0.readProperty_string ()  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 93)) ;
          GGS_propertyMap var_propertyMap_4286 = extensionGetter_definition (var_targetType_4033, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 94)).readProperty_propertyMap () ;
          GGS_AccessControl var_accessControl_4382 ;
          GGS_bool var_isConstant_4402 ;
          var_propertyMap_4286.method_searchKey (extractedValue_4200_propertyName_0, var_accessControl_4382, var_isConstant_4402, var_targetType_4033, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 95)) ;
          extensionMethod_checkSetAccess (var_accessControl_4382, constinArgument_inAnalysisContext.readProperty_selfAvailability (), extractedValue_4200_propertyName_0.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 96)) ;
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = var_isConstant_4402.boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              GenericArray <FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (extractedValue_4200_propertyName_0.readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 98)) ;
            }
          }
        }
        break ;
      case GGS_assignmentSupplementAST::Enumeration::enum_subcript:
        {
          GGS__5B_actualOutputArgumentAST_5D_ extractedValue_4637_subcriptArgs_0 ;
          GGS_location extractedValue_4651_errorLocation_1 ;
          temp_4.readProperty_mSupplement ().getAssociatedValuesFor_subcript (extractedValue_4637_subcriptArgs_0, extractedValue_4651_errorLocation_1) ;
          GGS_writeSubscriptMap var_writeSubcriptMap_4678 = extensionGetter_definition (var_targetType_4033, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 101)).readProperty_writeSubscriptMap () ;
          GGS_lstring var_lkey_4747 = GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (extractedValue_4637_subcriptArgs_0, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 102)), extractedValue_4651_errorLocation_1, inCompiler COMMA_HERE) ;
          GGS__5B_functionSignatureElement_5D_ var_formalArgs_4856 ;
          var_writeSubcriptMap_4678.method_searchKey (var_lkey_4747, var_formalArgs_4856, var_targetType_4033, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 103)) ;
          GGS__5B_collectionValueElementForGeneration_5D_ var_expressionListForGeneration_4930 ;
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::notEqual, extractedValue_4637_subcriptArgs_0.getter_count (SOURCE_FILE ("instruction-self-assignment.galgas4", 105)).objectCompare (var_formalArgs_4856.getter_count (SOURCE_FILE ("instruction-self-assignment.galgas4", 105)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GenericArray <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (extractedValue_4651_errorLocation_1, var_formalArgs_4856.getter_count (SOURCE_FILE ("instruction-self-assignment.galgas4", 106)).getter_string (SOURCE_FILE ("instruction-self-assignment.galgas4", 106)).add_operation (GGS_string ("arguments are required"), inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 106)), fixItArray8  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 106)) ;
              var_expressionListForGeneration_4930.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_7) {
            GGS__5B_collectionValueElementForGeneration_5D_ temp_9 = GGS__5B_collectionValueElementForGeneration_5D_::init (inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 108)) ;
            var_expressionListForGeneration_4930 = temp_9 ;
            UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_5204 (extractedValue_4637_subcriptArgs_0) ;
            UpEnumerator__5B_functionSignatureElement_5D_ enumerator_5228 (var_formalArgs_4856) ;
            while (enumerator_5204.hasCurrentObject () && enumerator_5228.hasCurrentObject ()) {
              GGS_semanticExpressionForGeneration var_expressionForGeneration_5569 ;
              callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5204.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_5228.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expressionForGeneration_5569, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 110)) ;
              {
              routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_5228.current (HERE).readProperty_mFormalArgumentType (), var_expressionForGeneration_5569.readProperty_mResultType (), enumerator_5204.current (HERE).readProperty_mEndOfExpressionLocation (), var_expressionForGeneration_5569, inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 120)) ;
              }
              var_expressionListForGeneration_4930.plusPlusAssignOperation (GGS_collectionValueElementForGeneration::init_21__21_ (var_expressionForGeneration_5569, enumerator_5204.current (HERE).readProperty_mEndOfExpressionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 126)) ;
              enumerator_5204.gotoNextObject () ;
              enumerator_5228.gotoNextObject () ;
            }
          }
          var_supplementIR_4097 = GGS_assignmentSupplementIR::class_func_subcript (var_expressionListForGeneration_4930, extensionGetter_subcriptSignature (extractedValue_4637_subcriptArgs_0, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 129))  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 129)) ;
        }
        break ;
      }
      GGS_semanticExpressionForGeneration var_expression_6486 ;
      const GGS_selfAssignmentInstructionAST temp_10 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_10.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_4033, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_6486, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 132)) ;
      {
      const GGS_selfAssignmentInstructionAST temp_11 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_4033, var_expression_6486.readProperty_mResultType (), temp_11.readProperty_mInstructionLocation (), var_expression_6486, inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 142)) ;
      }
      const GGS_selfAssignmentInstructionAST temp_12 = this ;
      ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_assignmentInstructionForGeneration::init_21__21__21__21__21__21__21_ (var_selfAvailable_3812.readProperty_type (), var_selfAvailable_3812.readProperty_type (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), var_supplementIR_4097, var_expression_6486, temp_12.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 144)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfAssignmentInstructionAST temp_13 = this ;
    GenericArray <FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray14  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 154)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@superInitInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_superInitInstructionAST temp_0 = this ;
  UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_3255 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_3255.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_3255.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 79)) ;
    enumerator_3255.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@superInitInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_3988 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-super-init.galgas4", 93)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-super-init.galgas4", 93)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_selfAvailable_3988.readProperty_selfMutability ().objectCompare (GGS_selfMutability::class_func_initializer (SOURCE_FILE ("instruction-super-init.galgas4", 94)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = extensionGetter_definition (var_selfAvailable_3988.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 95)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-super-init.galgas4", 95)).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          switch (extensionGetter_definition (var_selfAvailable_3988.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 96)).readProperty_superType ().enumValue ()) {
          case GGS_unifiedTypeMapEntry::Enumeration::invalid:
            break ;
          case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
            {
              GGS_unifiedTypeMapElementClass extractedValue_4244_superType_0 ;
              extensionGetter_definition (var_selfAvailable_3988.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 96)).readProperty_superType ().getAssociatedValuesFor_element (extractedValue_4244_superType_0) ;
              GGS_unifiedTypeDefinition var_superTypeDefinition_4269 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) extractedValue_4244_superType_0.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 98)) ;
              GGS_initializerMap var_superClassInitializerMap_4371 = var_superTypeDefinition_4269.readProperty_initializerMap () ;
              const GGS_superInitInstructionAST temp_1 = this ;
              const GGS_superInitInstructionAST temp_2 = this ;
              GGS_lstring var_signature_4445 = GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (temp_1.readProperty_mActualParameterList (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 101)), temp_2.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
              GGS__5B_functionSignatureElement_5D_ var_formalSignature_4602 ;
              var_superClassInitializerMap_4371.method_searchKey (var_signature_4445, var_formalSignature_4602, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 102)) ;
              UpEnumerator__5B_typedProperty_5D_ enumerator_4718 (var_superTypeDefinition_4269.readProperty_allTypedPropertyList ()) ;
              while (enumerator_4718.hasCurrentObject ()) {
                GalgasBool test_3 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_3) {
                  test_3 = GGS_bool (ComparisonKind::equal, enumerator_4718.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("instruction-super-init.galgas4", 105)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_3) {
                    {
                    const GGS_superInitInstructionAST temp_4 = this ;
                    GGS_unifiedTypeMapEntry joker_4936_3 ; // Joker input parameter
                    GGS_string joker_4936_2 ; // Joker input parameter
                    GGS_string joker_4936_1 ; // Joker input parameter
                    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (enumerator_4718.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 107)), temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), joker_4936_3, joker_4936_2, joker_4936_1, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 106)) ;
                    }
                  }
                }
                enumerator_4718.gotoNextObject () ;
              }
              const GGS_superInitInstructionAST temp_5 = this ;
              extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 112)) ;
              GGS__5B_semanticExpressionForGeneration_5D_ var_actualParameterListForGeneration_5159 = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
              const GGS_superInitInstructionAST temp_6 = this ;
              UpEnumerator__5B_functionSignatureElement_5D_ enumerator_5257 (var_formalSignature_4602) ;
              UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_5292 (temp_6.readProperty_mActualParameterList ()) ;
              while (enumerator_5257.hasCurrentObject () && enumerator_5292.hasCurrentObject ()) {
                GGS_semanticExpressionForGeneration var_expression_5673 ;
                callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5292.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_5257.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5673, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 118)) ;
                {
                routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_5257.current (HERE).readProperty_mFormalArgumentType (), var_expression_5673.readProperty_mResultType (), enumerator_5292.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_5673, inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 127)) ;
                }
                GalgasBool test_7 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_7) {
                  test_7 = GGS_bool (ComparisonKind::notEqual, enumerator_5257.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_5292.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_7) {
                    GGS_string temp_8 ;
                    const GalgasBool test_9 = GGS_bool (ComparisonKind::notEqual, enumerator_5257.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                    if (GalgasBool::boolTrue == test_9) {
                      temp_8 = enumerator_5257.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 135)) ;
                    }else if (GalgasBool::boolFalse == test_9) {
                      temp_8 = GGS_string::makeEmptyString () ;
                    }
                    GGS_string var_s_6025 = GGS_string ("!").add_operation (temp_8, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 134)) ;
                    GenericArray <FixItDescription> fixItArray10 ;
                    appendFixItActions (fixItArray10, EnumFixItKind::fixItReplace, var_s_6025) ;
                    inCompiler->emitSemanticError (enumerator_5292.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_6025, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 138)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 138)), fixItArray10  COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 138)) ;
                  }
                }
                var_actualParameterListForGeneration_5159.plusPlusAssignOperation (var_expression_5673  COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 142)) ;
                enumerator_5257.gotoNextObject () ;
                enumerator_5292.gotoNextObject () ;
              }
              const GGS_superInitInstructionAST temp_11 = this ;
              ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_superInitInstructionForGeneration::init_21__21__21__21_ (temp_11.readProperty_mInstructionLocation (), extensionGetter_initializerSignature (var_formalSignature_4602, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 147)), var_actualParameterListForGeneration_5159, var_superTypeDefinition_4269.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 145)) ;
            }
            break ;
          case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
            {
              const GGS_superInitInstructionAST temp_12 = this ;
              GenericArray <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GGS_string ("superinit  is not available, current class has no super class"), fixItArray13  COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 152)) ;
            }
            break ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_superInitInstructionAST temp_14 = this ;
    GenericArray <FixItDescription> fixItArray15 ;
    inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GGS_string ("superinit  should be call in a class initializer"), fixItArray15  COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 155)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@superInitInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                         GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                         GGS_string & ioArgument_ioGeneratedCode,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_string_5D_ var_getterArgumentCppNameList_8026 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_superInitInstructionForGeneration temp_0 = this ;
  UpEnumerator__5B_semanticExpressionForGeneration_5D_ enumerator_8085 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_8085.hasCurrentObject ()) {
    GGS_string var_argumentCppName_8286 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_8085.current (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_8286, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 182)) ;
    var_getterArgumentCppNameList_8026.plusPlusAssignOperation (var_argumentCppName_8286  COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 189)) ;
    enumerator_8085.gotoNextObject () ;
  }
  const GGS_superInitInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_1.readProperty_mSuperTypeName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-super-init.galgas4", 191)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 191)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 191)) ;
  const GGS_superInitInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_2.readProperty_mSuperInitializerSignature ().getter_identifierRepresentation (SOURCE_FILE ("instruction-super-init.galgas4", 192)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 192)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 193)) ;
  UpEnumerator__5B_string_5D_ enumerator_8569 (var_getterArgumentCppNameList_8026) ;
  while (enumerator_8569.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_8569.current (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 195)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 195)) ;
    enumerator_8569.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 197)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE).add_operation (GGS_string (") ; \n"), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 198)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 198)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@typeMethodCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_typeMethodCallInstructionAST temp_0 = this ;
  UpEnumerator__5B_actualParameterAST_5D_ enumerator_2890 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_2890.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_2890.current (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 61)) ;
    enumerator_2890.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@typeMethodCallInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_typeMethodCallInstructionAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_type_3727 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 77)) ;
  GGS__5B_formalParameterSignatureElement_5D_ var_routineSignature_3878 ;
  GGS_bool var_hasCompilerArgument_3901 ;
  const GGS_typeMethodCallInstructionAST temp_1 = this ;
  extensionGetter_definition (var_type_3727, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 79)).readProperty_classMethodMap ().method_searchKey (temp_1.readProperty_mMethodName (), var_routineSignature_3878, var_hasCompilerArgument_3901, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 79)) ;
  GGS__5B_actualParameterForGeneration_5D_ var_actualParameterListForGeneration_4344 ;
  const GGS_typeMethodCallInstructionAST temp_2 = this ;
  const GGS_typeMethodCallInstructionAST temp_3 = this ;
  const GGS_typeMethodCallInstructionAST temp_4 = this ;
  extensionMethod_analyzeRoutineArguments (temp_2.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mMethodName (), GGS_string ("'").add_operation (temp_4.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 87)).add_operation (GGS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 87)), var_routineSignature_3878, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_4344, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 81)) ;
  const GGS_typeMethodCallInstructionAST temp_5 = this ;
  const GGS_typeMethodCallInstructionAST temp_6 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_typeMethodCallInstructionForGeneration::init_21__21__21__21_ (temp_5.readProperty_mTypeName (), temp_6.readProperty_mMethodName (), var_actualParameterListForGeneration_4344, var_hasCompilerArgument_3901, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 94)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@typeMethodCallInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                              GGS_string & ioArgument_ioGeneratedCode,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 120)) ;
  GGS__5B_string_5D_ var_parameterCppNameList_5642 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_jokerParametersToReleaseList_5684 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_inputVariableList_5734 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_typeMethodCallInstructionForGeneration temp_0 = this ;
  UpEnumerator__5B_actualParameterForGeneration_5D_ enumerator_5787 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_5787.hasCurrentObject ()) {
    GGS_string var_parameterCppName_6050 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_5787.current (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_5684, var_inputVariableList_5734, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_6050, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 126)) ;
    var_parameterCppNameList_5642.plusPlusAssignOperation (var_parameterCppName_6050  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 135)) ;
    enumerator_5787.gotoNextObject () ;
  }
  const GGS_typeMethodCallInstructionForGeneration temp_1 = this ;
  const GGS_typeMethodCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (temp_1.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas4", 138)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 138)).add_operation (GGS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 138)).add_operation (temp_2.readProperty_mMethodName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas4", 139)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 139)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 139)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 138)) ;
  UpEnumerator__5B_string_5D_ enumerator_6338 (var_parameterCppNameList_5642) ;
  while (enumerator_6338.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_6338.current (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 141)) ;
    enumerator_6338.gotoNextObject () ;
    if (enumerator_6338.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 142)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_typeMethodCallInstructionForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 145)) ;
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::greaterThan, var_parameterCppNameList_5642.getter_count (SOURCE_FILE ("instruction-type-method-call.galgas4", 146)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 147)) ;
        }
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 149)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_typeMethodCallInstructionForGeneration temp_7 = this ;
    test_6 = temp_7.readProperty_mHasCompilerArgument ().operator_or (GGS_bool (ComparisonKind::greaterThan, var_parameterCppNameList_5642.getter_count (SOURCE_FILE ("instruction-type-method-call.galgas4", 151)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 151)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 152)) ;
    }
  }
  const GGS_typeMethodCallInstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_sourceFile (temp_8.readProperty_mMethodName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 154)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 154)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 154)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 155)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@assignmentInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 113)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@assignmentInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_receiverType_5104 ;
  {
  const GGS_assignmentInstructionAST temp_0 = this ;
  GGS_string joker_5118 ; // Joker input parameter
  GGS_string joker_5122 ; // Joker input parameter
  extensionSetter_neutralAccess (ioArgument_ioVariableMap, temp_0.readProperty_mTargetVariableName (), var_receiverType_5104, joker_5118, joker_5122, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 126)) ;
  }
  GGS_unifiedTypeMapEntry var_targetType_5134 = var_receiverType_5104 ;
  GGS_assignmentSupplementIR var_supplementIR_5192 ;
  const GGS_assignmentInstructionAST temp_1 = this ;
  switch (temp_1.readProperty_mSupplement ().enumValue ()) {
  case GGS_assignmentSupplementAST::Enumeration::invalid:
    break ;
  case GGS_assignmentSupplementAST::Enumeration::enum_none:
    {
      var_supplementIR_5192 = GGS_assignmentSupplementIR::class_func_none (SOURCE_FILE ("instruction-assignment.galgas4", 131)) ;
    }
    break ;
  case GGS_assignmentSupplementAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_5295_propertyName_0 ;
      temp_1.readProperty_mSupplement ().getAssociatedValuesFor_property (extractedValue_5295_propertyName_0) ;
      var_supplementIR_5192 = GGS_assignmentSupplementIR::class_func_property (extractedValue_5295_propertyName_0.readProperty_string ()  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 133)) ;
      GGS_propertyMap var_propertyMap_5381 = extensionGetter_definition (var_targetType_5134, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 134)).readProperty_propertyMap () ;
      GGS_AccessControl var_accessControl_5477 ;
      GGS_bool var_isConstant_5497 ;
      var_propertyMap_5381.method_searchKey (extractedValue_5295_propertyName_0, var_accessControl_5477, var_isConstant_5497, var_targetType_5134, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 135)) ;
      extensionMethod_checkSetAccess (var_accessControl_5477, constinArgument_inAnalysisContext.readProperty_selfAvailability (), extractedValue_5295_propertyName_0.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 136)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_isConstant_5497.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extractedValue_5295_propertyName_0.readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 138)) ;
        }
      }
    }
    break ;
  case GGS_assignmentSupplementAST::Enumeration::enum_subcript:
    {
      GGS__5B_actualOutputArgumentAST_5D_ extractedValue_5732_subcriptArgs_0 ;
      GGS_location extractedValue_5746_errorLocation_1 ;
      temp_1.readProperty_mSupplement ().getAssociatedValuesFor_subcript (extractedValue_5732_subcriptArgs_0, extractedValue_5746_errorLocation_1) ;
      GGS_writeSubscriptMap var_writeSubcriptMap_5773 = extensionGetter_definition (var_targetType_5134, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 141)).readProperty_writeSubscriptMap () ;
      GGS_lstring var_lkey_5842 = GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (extractedValue_5732_subcriptArgs_0, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 142)), extractedValue_5746_errorLocation_1, inCompiler COMMA_HERE) ;
      GGS__5B_functionSignatureElement_5D_ var_formalArgs_5951 ;
      var_writeSubcriptMap_5773.method_searchKey (var_lkey_5842, var_formalArgs_5951, var_targetType_5134, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 143)) ;
      GGS__5B_collectionValueElementForGeneration_5D_ var_expressionListForGeneration_6025 ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::notEqual, extractedValue_5732_subcriptArgs_0.getter_count (SOURCE_FILE ("instruction-assignment.galgas4", 145)).objectCompare (var_formalArgs_5951.getter_count (SOURCE_FILE ("instruction-assignment.galgas4", 145)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_5746_errorLocation_1, var_formalArgs_5951.getter_count (SOURCE_FILE ("instruction-assignment.galgas4", 146)).getter_string (SOURCE_FILE ("instruction-assignment.galgas4", 146)).add_operation (GGS_string ("arguments are required"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 146)), fixItArray5  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 146)) ;
          var_expressionListForGeneration_6025.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GGS__5B_collectionValueElementForGeneration_5D_ temp_6 = GGS__5B_collectionValueElementForGeneration_5D_::init (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 148)) ;
        var_expressionListForGeneration_6025 = temp_6 ;
        UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_6299 (extractedValue_5732_subcriptArgs_0) ;
        UpEnumerator__5B_functionSignatureElement_5D_ enumerator_6323 (var_formalArgs_5951) ;
        while (enumerator_6299.hasCurrentObject () && enumerator_6323.hasCurrentObject ()) {
          GGS_semanticExpressionForGeneration var_expressionForGeneration_6664 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_6299.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_6323.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expressionForGeneration_6664, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 150)) ;
          {
          routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_6323.current (HERE).readProperty_mFormalArgumentType (), var_expressionForGeneration_6664.readProperty_mResultType (), enumerator_6299.current (HERE).readProperty_mEndOfExpressionLocation (), var_expressionForGeneration_6664, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 160)) ;
          }
          var_expressionListForGeneration_6025.plusPlusAssignOperation (GGS_collectionValueElementForGeneration::init_21__21_ (var_expressionForGeneration_6664, enumerator_6299.current (HERE).readProperty_mEndOfExpressionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 166)) ;
          enumerator_6299.gotoNextObject () ;
          enumerator_6323.gotoNextObject () ;
        }
      }
      var_supplementIR_5192 = GGS_assignmentSupplementIR::class_func_subcript (var_expressionListForGeneration_6025, extensionGetter_subcriptSignature (extractedValue_5732_subcriptArgs_0, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 169))  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 169)) ;
    }
    break ;
  }
  GGS_semanticExpressionForGeneration var_expression_7581 ;
  const GGS_assignmentInstructionAST temp_7 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_5134, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_7581, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 172)) ;
  {
  const GGS_assignmentInstructionAST temp_8 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_5134, var_expression_7581.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_7581, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 182)) ;
  }
  GGS_string var_targetVariableCppName_7840 ;
  GGS_string var_nameForCheckingFormalParameterUsing_7878 ;
  const GGS_assignmentInstructionAST temp_9 = this ;
  switch (temp_9.readProperty_mSupplement ().enumValue ()) {
  case GGS_assignmentSupplementAST::Enumeration::invalid:
    break ;
  case GGS_assignmentSupplementAST::Enumeration::enum_none:
    {
      {
      const GGS_assignmentInstructionAST temp_10 = this ;
      GGS_unifiedTypeMapEntry joker_8045 ; // Joker input parameter
      extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_10.readProperty_mTargetVariableName (), joker_8045, var_targetVariableCppName_7840, var_nameForCheckingFormalParameterUsing_7878, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 193)) ;
      }
    }
    break ;
  case GGS_assignmentSupplementAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_8153__0 ;
      temp_9.readProperty_mSupplement ().getAssociatedValuesFor_property (extractedValue_8153__0) ;
      {
      const GGS_assignmentInstructionAST temp_11 = this ;
      GGS_unifiedTypeMapEntry joker_8249 ; // Joker input parameter
      extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_11.readProperty_mTargetVariableName (), joker_8249, var_targetVariableCppName_7840, var_nameForCheckingFormalParameterUsing_7878, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 200)) ;
      }
    }
    break ;
  case GGS_assignmentSupplementAST::Enumeration::enum_subcript:
    {
      GGS__5B_actualOutputArgumentAST_5D_ extractedValue_8357__0 ;
      GGS_location extractedValue_8360__1 ;
      temp_9.readProperty_mSupplement ().getAssociatedValuesFor_subcript (extractedValue_8357__0, extractedValue_8360__1) ;
      {
      const GGS_assignmentInstructionAST temp_12 = this ;
      GGS_unifiedTypeMapEntry joker_8456 ; // Joker input parameter
      extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_12.readProperty_mTargetVariableName (), joker_8456, var_targetVariableCppName_7840, var_nameForCheckingFormalParameterUsing_7878, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 207)) ;
      }
    }
    break ;
  }
  const GGS_assignmentInstructionAST temp_13 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_assignmentInstructionForGeneration::init_21__21__21__21__21__21__21_ (var_receiverType_5104, var_targetType_5134, var_targetVariableCppName_7840, var_nameForCheckingFormalParameterUsing_7878, var_supplementIR_5192, var_expression_7581, temp_13.readProperty_mTargetVariableName ().readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 215)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfPropertyAssignmentInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfPropertyAssignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 242)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfPropertyAssignmentInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_10269 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-assignment.galgas4", 254)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-assignment.galgas4", 254)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_propertiesAreMutable (var_selfAvailable_10269.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 255)).operator_not (SOURCE_FILE ("instruction-assignment.galgas4", 255)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfPropertyAssignmentInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' property not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 256)) ;
        }
      }
      GGS_propertyMap var_propertyMap_10514 = extensionGetter_definition (var_selfAvailable_10269.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 258)).readProperty_propertyMap () ;
      GGS_bool var_isConstant_10638 ;
      GGS_unifiedTypeMapEntry var_targetType_10655 ;
      const GGS_selfPropertyAssignmentInstructionAST temp_4 = this ;
      GGS_AccessControl joker_10629 ; // Joker input parameter
      var_propertyMap_10514.method_searchKey (temp_4.readProperty_mTargetSelfPropertyName (), joker_10629, var_isConstant_10638, var_targetType_10655, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 259)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_isConstant_10638.operator_and (var_selfAvailable_10269.readProperty_selfMutability ().getter_isInitializer (SOURCE_FILE ("instruction-assignment.galgas4", 260)).operator_not (SOURCE_FILE ("instruction-assignment.galgas4", 260)) COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 260)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_selfPropertyAssignmentInstructionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mTargetSelfPropertyName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 261)) ;
        }
      }
      const GGS_selfPropertyAssignmentInstructionAST temp_8 = this ;
      GGS_string var_targetVariableCppName_10847 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 263)).add_operation (temp_8.readProperty_mTargetSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas4", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 264)) ;
      GGS_assignmentSupplementIR var_supplementIR_11084 ;
      const GGS_selfPropertyAssignmentInstructionAST temp_9 = this ;
      switch (temp_9.readProperty_mSupplement ().enumValue ()) {
      case GGS_assignmentSupplementAST::Enumeration::invalid:
        break ;
      case GGS_assignmentSupplementAST::Enumeration::enum_none:
        {
          var_supplementIR_11084 = GGS_assignmentSupplementIR::class_func_none (SOURCE_FILE ("instruction-assignment.galgas4", 269)) ;
        }
        break ;
      case GGS_assignmentSupplementAST::Enumeration::enum_property:
        {
          GGS_lstring extractedValue_11195_propertyName_0 ;
          temp_9.readProperty_mSupplement ().getAssociatedValuesFor_property (extractedValue_11195_propertyName_0) ;
          var_supplementIR_11084 = GGS_assignmentSupplementIR::class_func_property (extractedValue_11195_propertyName_0.readProperty_string ()  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 271)) ;
          GGS_propertyMap var_propertyMap_11285 = extensionGetter_definition (var_targetType_10655, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 272)).readProperty_propertyMap () ;
          GGS_AccessControl var_accessControl_11383 ;
          GGS_bool var_isConstant_11403 ;
          var_propertyMap_11285.method_searchKey (extractedValue_11195_propertyName_0, var_accessControl_11383, var_isConstant_11403, var_targetType_10655, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 273)) ;
          extensionMethod_checkSetAccess (var_accessControl_11383, constinArgument_inAnalysisContext.readProperty_selfAvailability (), extractedValue_11195_propertyName_0.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 274)) ;
          GalgasBool test_10 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_10) {
            test_10 = var_isConstant_11403.boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              GenericArray <FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (extractedValue_11195_propertyName_0.readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray11  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 276)) ;
            }
          }
        }
        break ;
      case GGS_assignmentSupplementAST::Enumeration::enum_subcript:
        {
          GGS__5B_actualOutputArgumentAST_5D_ extractedValue_11657_subcriptArgs_0 ;
          GGS_location extractedValue_11671_errorLocation_1 ;
          temp_9.readProperty_mSupplement ().getAssociatedValuesFor_subcript (extractedValue_11657_subcriptArgs_0, extractedValue_11671_errorLocation_1) ;
          GGS_writeSubscriptMap var_writeSubcriptMap_11700 = extensionGetter_definition (var_targetType_10655, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 279)).readProperty_writeSubscriptMap () ;
          GGS_lstring var_lkey_11771 = GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (extractedValue_11657_subcriptArgs_0, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 280)), extractedValue_11671_errorLocation_1, inCompiler COMMA_HERE) ;
          GGS__5B_functionSignatureElement_5D_ var_formalArgs_11882 ;
          var_writeSubcriptMap_11700.method_searchKey (var_lkey_11771, var_formalArgs_11882, var_targetType_10655, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 281)) ;
          GGS__5B_collectionValueElementForGeneration_5D_ var_expressionListForGeneration_11958 ;
          GalgasBool test_12 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_12) {
            test_12 = GGS_bool (ComparisonKind::notEqual, extractedValue_11657_subcriptArgs_0.getter_count (SOURCE_FILE ("instruction-assignment.galgas4", 283)).objectCompare (var_formalArgs_11882.getter_count (SOURCE_FILE ("instruction-assignment.galgas4", 283)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_12) {
              GenericArray <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (extractedValue_11671_errorLocation_1, var_formalArgs_11882.getter_count (SOURCE_FILE ("instruction-assignment.galgas4", 284)).getter_string (SOURCE_FILE ("instruction-assignment.galgas4", 284)).add_operation (GGS_string ("arguments are required"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 284)), fixItArray13  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 284)) ;
              var_expressionListForGeneration_11958.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_12) {
            GGS__5B_collectionValueElementForGeneration_5D_ temp_14 = GGS__5B_collectionValueElementForGeneration_5D_::init (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 286)) ;
            var_expressionListForGeneration_11958 = temp_14 ;
            UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_12242 (extractedValue_11657_subcriptArgs_0) ;
            UpEnumerator__5B_functionSignatureElement_5D_ enumerator_12266 (var_formalArgs_11882) ;
            while (enumerator_12242.hasCurrentObject () && enumerator_12266.hasCurrentObject ()) {
              GGS_semanticExpressionForGeneration var_expressionForGeneration_12623 ;
              callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_12242.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_12266.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expressionForGeneration_12623, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 288)) ;
              {
              routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_12266.current (HERE).readProperty_mFormalArgumentType (), var_expressionForGeneration_12623.readProperty_mResultType (), enumerator_12242.current (HERE).readProperty_mEndOfExpressionLocation (), var_expressionForGeneration_12623, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 298)) ;
              }
              var_expressionListForGeneration_11958.plusPlusAssignOperation (GGS_collectionValueElementForGeneration::init_21__21_ (var_expressionForGeneration_12623, enumerator_12242.current (HERE).readProperty_mEndOfExpressionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 304)) ;
              enumerator_12242.gotoNextObject () ;
              enumerator_12266.gotoNextObject () ;
            }
          }
          var_supplementIR_11084 = GGS_assignmentSupplementIR::class_func_subcript (var_expressionListForGeneration_11958, extensionGetter_subcriptSignature (extractedValue_11657_subcriptArgs_0, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 307))  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 307)) ;
        }
        break ;
      }
      GGS_semanticExpressionForGeneration var_expression_13583 ;
      const GGS_selfPropertyAssignmentInstructionAST temp_15 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_15.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_10655, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_13583, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 310)) ;
      {
      const GGS_selfPropertyAssignmentInstructionAST temp_16 = this ;
      const GGS_selfPropertyAssignmentInstructionAST temp_17 = this ;
      GGS_unifiedTypeMapEntry joker_13737_3 ; // Joker input parameter
      GGS_string joker_13737_2 ; // Joker input parameter
      GGS_string joker_13737_1 ; // Joker input parameter
      extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (temp_16.readProperty_mTargetSelfPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 321)), temp_17.readProperty_mTargetSelfPropertyName ().readProperty_location (), inCompiler COMMA_HERE), joker_13737_3, joker_13737_2, joker_13737_1, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 320)) ;
      }
      {
      const GGS_selfPropertyAssignmentInstructionAST temp_18 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_10655, var_expression_13583.readProperty_mResultType (), temp_18.readProperty_mInstructionLocation (), var_expression_13583, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 324)) ;
      }
      const GGS_selfPropertyAssignmentInstructionAST temp_19 = this ;
      ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_assignmentInstructionForGeneration::init_21__21__21__21__21__21__21_ (var_selfAvailable_10269.readProperty_type (), var_targetType_10655, var_targetVariableCppName_10847, constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), var_supplementIR_11084, var_expression_13583, temp_19.readProperty_mTargetSelfPropertyName ().readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 326)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfPropertyAssignmentInstructionAST temp_20 = this ;
    GenericArray <FixItDescription> fixItArray21 ;
    inCompiler->emitSemanticError (temp_20.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray21  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 336)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@assignmentInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                          GGS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_sourceVar_16054 ;
  const GGS_assignmentInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_16054, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 372)) ;
  {
  const GGS_assignmentInstructionForGeneration temp_1 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_1.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 379)) ;
  }
  const GGS_assignmentInstructionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 381)) ;
  const GGS_assignmentInstructionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mSupplement ().enumValue ()) {
  case GGS_assignmentSupplementIR::Enumeration::invalid:
    break ;
  case GGS_assignmentSupplementIR::Enumeration::enum_none:
    {
      const GGS_assignmentInstructionForGeneration temp_4 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(temp_4.readProperty_mTargetCppName ().add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 384)).add_operation (var_sourceVar_16054, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 384)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 384)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 384)) ;
    }
    break ;
  case GGS_assignmentSupplementIR::Enumeration::enum_property:
    {
      GGS_string extractedValue_16360_propertyName_0 ;
      temp_3.readProperty_mSupplement ().getAssociatedValuesFor_property (extractedValue_16360_propertyName_0) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_assignmentInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 386)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-assignment.galgas4", 386)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_assignmentInstructionForGeneration temp_7 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(temp_7.readProperty_mTargetCppName ().add_operation (GGS_string (".setProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 387)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 387)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(extractedValue_16360_propertyName_0.getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas4", 388)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 388)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" (").add_operation (var_sourceVar_16054, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 389)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 389)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 389)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        const GGS_assignmentInstructionForGeneration temp_8 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(temp_8.readProperty_mTargetCppName ().add_operation (GGS_string (".mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 391)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 391)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(extractedValue_16360_propertyName_0.getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas4", 392)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 392)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" = ").add_operation (var_sourceVar_16054, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 393)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 393)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 393)) ;
      }
    }
    break ;
  case GGS_assignmentSupplementIR::Enumeration::enum_subcript:
    {
      GGS__5B_collectionValueElementForGeneration_5D_ extractedValue_16847_expressions_0 ;
      GGS_string extractedValue_16860_subcriptSignature_1 ;
      temp_3.readProperty_mSupplement ().getAssociatedValuesFor_subcript (extractedValue_16847_expressions_0, extractedValue_16860_subcriptSignature_1) ;
      GGS__5B_string_5D_ temp_9 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 396)) ;
      GGS__5B_string_5D_ var_cppVarNameList_16901 = temp_9 ;
      UpEnumerator__5B_collectionValueElementForGeneration_5D_ enumerator_16938 (extractedValue_16847_expressions_0) ;
      while (enumerator_16938.hasCurrentObject ()) {
        GGS_string var_cppVarName_17147 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_16938.current (HERE).readProperty_expression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_17147, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 398)) ;
        var_cppVarNameList_16901.plusPlusAssignOperation (var_cppVarName_17147  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 405)) ;
        enumerator_16938.gotoNextObject () ;
      }
      var_cppVarNameList_16901.plusPlusAssignOperation (var_sourceVar_16054  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 407)) ;
      const GGS_assignmentInstructionForGeneration temp_10 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(temp_10.readProperty_mTargetCppName ().add_operation (GGS_string (".writeSubscript_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 408)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 408)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(extractedValue_16860_subcriptSignature_1.getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas4", 409)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 409)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 410)) ;
      UpEnumerator__5B_string_5D_ enumerator_17435 (var_cppVarNameList_16901) ;
      while (enumerator_17435.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_17435.current (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 412)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 412)) ;
        enumerator_17435.gotoNextObject () ;
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 414)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE).add_operation (GGS_string (" COMMA_HERE) ; \n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 415)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 415)) ;
    }
    break ;
  }
  {
  const GGS_assignmentInstructionForGeneration temp_11 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_11.readProperty_mTargetCppName () COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 417)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexiqueComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexiqueComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexiqueComponentAST temp_0 = this ;
  result = GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 383)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexiqueComponentAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                               GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                               GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                               GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                               GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                               GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueComponentAST temp_0 = this ;
  const GGS_lexiqueComponentAST temp_1 = this ;
  GGS_lstring var_key_14727 = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 396)), temp_1.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_lexiqueComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_14727, temp_2, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 397)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexiqueComponentAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                         const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                         const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                         const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                         const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                         GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                         GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeMap var_lexicalTypeMap_15619 = function_gLexicalTypeMap (inCompiler COMMA_HERE) ;
  GGS_lexicalAttributeMap var_lexicalAttributeMap_15681 = GGS_lexicalAttributeMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_lexiqueComponentAST temp_0 = this ;
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_15619, temp_0.readProperty_mLexicalAttributeListAST (), var_lexicalAttributeMap_15681, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 413)) ;
  }
  GGS_terminalMap var_terminalMap_15892 = GGS_terminalMap::init (inCompiler COMMA_HERE) ;
  const GGS_lexiqueComponentAST temp_1 = this ;
  UpEnumerator__5B_terminalDeclarationAST_5D_ enumerator_15935 (temp_1.readProperty_mTerminalDeclarationListAST ()) ;
  while (enumerator_15935.hasCurrentObject ()) {
    GGS__5B_lexicalSentValue_5D_ var_argumentTypeList_15976 = GGS__5B_lexicalSentValue_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_sentLexicalAttributeAST_5D_ enumerator_16046 (enumerator_15935.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_16046.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_16134 ;
      var_lexicalAttributeMap_15681.method_searchKey (enumerator_16046.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_16134, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 423)) ;
      var_argumentTypeList_15976.plusPlusAssignOperation (GGS_lexicalSentValue::init_21__21__21_ (enumerator_16046.current (HERE).readProperty_mFormalSelector (), enumerator_16046.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_16134, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 424)) ;
      enumerator_16046.gotoNextObject () ;
    }
    {
    var_terminalMap_15892.setter_insertKey (enumerator_15935.current (HERE).readProperty_mName (), var_argumentTypeList_15976, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 426)) ;
    }
    enumerator_15935.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_2 = this ;
  UpEnumerator__5B_lexicalListDeclarationAST_5D_ enumerator_16380 (temp_2.readProperty_mLexicalListDeclarationListAST ()) ;
  while (enumerator_16380.hasCurrentObject ()) {
    GGS__5B_lexicalSentValue_5D_ var_argumentTypeList_16424 = GGS__5B_lexicalSentValue_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_sentLexicalAttributeAST_5D_ enumerator_16497 (enumerator_16380.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_16497.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_16585 ;
      var_lexicalAttributeMap_15681.method_searchKey (enumerator_16497.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_16585, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 432)) ;
      var_argumentTypeList_16424.plusPlusAssignOperation (GGS_lexicalSentValue::init_21__21__21_ (enumerator_16497.current (HERE).readProperty_mFormalSelector (), enumerator_16497.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_16585, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 433)) ;
      enumerator_16497.gotoNextObject () ;
    }
    UpEnumerator__5B_lexicalListEntryAST_5D_ enumerator_16753 (enumerator_16380.current (HERE).readProperty_mEntryList ()) ;
    while (enumerator_16753.hasCurrentObject ()) {
      {
      var_terminalMap_15892.setter_insertKey (enumerator_16753.current (HERE).readProperty_mTerminalSpelling (), var_argumentTypeList_16424, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 436)) ;
      }
      enumerator_16753.gotoNextObject () ;
    }
    enumerator_16380.gotoNextObject () ;
  }
  {
  const GGS_lexiqueComponentAST temp_3 = this ;
  const GGS_lexiqueComponentAST temp_4 = this ;
  const GGS_lexiqueComponentAST temp_5 = this ;
  const GGS_lexiqueComponentAST temp_6 = this ;
  const GGS_lexiqueComponentAST temp_7 = this ;
  const GGS_lexiqueComponentAST temp_8 = this ;
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (temp_3.readProperty_mLexiqueComponentName (), temp_4.readProperty_mIsTemplate (), var_terminalMap_15892, temp_5.readProperty_mIndexingListAST (), temp_6.readProperty_mTerminalDeclarationListAST (), temp_7.readProperty_mLexicalAttributeListAST (), temp_8.readProperty_mLexicalListDeclarationListAST (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 440)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexiqueComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                        const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                        GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueComponentAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_17989 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 463)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17989, var_nameForUsefulness_17989, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 464)) ;
  }
  GGS_lexicalTypeMap var_lexicalTypeMap_18246 = function_gLexicalTypeMap (inCompiler COMMA_HERE) ;
  GGS_lexicalRoutineMap var_lexicalRoutineMap_18381 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_18381, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 468)) ;
  }
  GGS_lexicalFunctionMap var_lexicalFunctionMap_18504 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_18504, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 470)) ;
  }
  GGS_stringset var_unicodeTestFunctions_18635 ;
  {
  routine_lexicalUnicodeTestFunctionAnalysis_21_ (var_unicodeTestFunctions_18635, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 472)) ;
  }
  const GGS_lexiqueComponentAST temp_1 = this ;
  GGS_lexiqueAnalysisContext var_lexiqueAnalysisContext_18732 = GGS_lexiqueAnalysisContext::init_21__21__21__21__21__21__21__21__21__21__21_ (temp_1.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexicalRoutineMap_18381, var_lexicalFunctionMap_18504, GGS_lexicalMessageMap::init (inCompiler COMMA_HERE), GGS_terminalMap::init (inCompiler COMMA_HERE), GGS__5B_terminalAST_5D_::init (inCompiler COMMA_HERE), GGS_lexicalAttributeMap::init (inCompiler COMMA_HERE), GGS_lexicalExplicitTokenListMapMap::init (inCompiler COMMA_HERE), GGS_stringset::init (inCompiler COMMA_HERE), GGS__5B_templateDelimitorAST_5D_::init (inCompiler COMMA_HERE), var_unicodeTestFunctions_18635, inCompiler COMMA_HERE) ;
  {
  const GGS_lexiqueComponentAST temp_2 = this ;
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_18246, temp_2.readProperty_mLexicalAttributeListAST (), var_lexiqueAnalysisContext_18732.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 489)) ;
  }
  const GGS_lexiqueComponentAST temp_3 = this ;
  UpEnumerator__5B_terminalDeclarationAST_5D_ enumerator_19384 (temp_3.readProperty_mTerminalDeclarationListAST ()) ;
  while (enumerator_19384.hasCurrentObject ()) {
    GGS_u_33__32_ var_terminalStyleIndex_19430 = GGS_u_33__32_ (uint32_t (0U)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_19384.current (HERE).readProperty_mStyle ().readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas4", 497)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_lstring joker_19583 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_lexicalStyleMap ().method_search (enumerator_19384.current (HERE).readProperty_mStyle (), joker_19583, var_terminalStyleIndex_19430, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 498)) ;
      }
    }
    GGS__5B_lexicalSentValue_5D_ var_argumentTypeList_19628 = GGS__5B_lexicalSentValue_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_sentLexicalAttributeAST_5D_ enumerator_19702 (enumerator_19384.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_19702.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_19818 ;
      var_lexiqueAnalysisContext_18732.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_19702.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_19818, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 502)) ;
      var_argumentTypeList_19628.plusPlusAssignOperation (GGS_lexicalSentValue::init_21__21__21_ (enumerator_19702.current (HERE).readProperty_mFormalSelector (), enumerator_19702.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_19818, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 503)) ;
      enumerator_19702.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_18732.mProperty_mTerminalMap.setter_insertKey (enumerator_19384.current (HERE).readProperty_mName (), var_argumentTypeList_19628, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 505)) ;
    }
    var_lexiqueAnalysisContext_18732.mProperty_mTerminalList.plusPlusAssignOperation (GGS_terminalAST::init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (enumerator_19384.current (HERE).readProperty_mName (), var_argumentTypeList_19628, enumerator_19384.current (HERE).readProperty_mSyntaxErrorMessage ().readProperty_string (), enumerator_19384.current (HERE).readProperty_isEndOfTemplateMark (), enumerator_19384.current (HERE).readProperty_nonAtomicSelection ().operator_not (SOURCE_FILE ("lexique-component.galgas4", 511)), var_terminalStyleIndex_19430, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 506)) ;
    enumerator_19384.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_5 = this ;
  UpEnumerator__5B_lexicalListDeclarationAST_5D_ enumerator_20384 (temp_5.readProperty_mLexicalListDeclarationListAST ()) ;
  while (enumerator_20384.hasCurrentObject ()) {
    GGS_u_33__32_ var_terminalStyleIndex_20433 = GGS_u_33__32_ (uint32_t (0U)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::greaterThan, enumerator_20384.current (HERE).readProperty_mStyle ().readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas4", 517)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GGS_lstring joker_20586 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_lexicalStyleMap ().method_search (enumerator_20384.current (HERE).readProperty_mStyle (), joker_20586, var_terminalStyleIndex_20433, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 518)) ;
      }
    }
    GGS__5B_lexicalSentValue_5D_ var_argumentTypeList_20631 = GGS__5B_lexicalSentValue_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_sentLexicalAttributeAST_5D_ enumerator_20705 (enumerator_20384.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_20705.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_20821 ;
      var_lexiqueAnalysisContext_18732.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_20705.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_20821, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 522)) ;
      var_argumentTypeList_20631.plusPlusAssignOperation (GGS_lexicalSentValue::init_21__21__21_ (enumerator_20705.current (HERE).readProperty_mFormalSelector (), enumerator_20705.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_20821, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 523)) ;
      enumerator_20705.gotoNextObject () ;
    }
    GGS_lexicalExplicitTokenListMap var_lexicalTokenListMap_21005 = GGS_lexicalExplicitTokenListMap::init (inCompiler COMMA_HERE) ;
    GGS_sortedTokenArray var_tokenSortedlist_21041 = GGS_sortedTokenArray::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_lexicalListEntryAST_5D_ enumerator_21108 (enumerator_20384.current (HERE).readProperty_mEntryList ()) ;
    while (enumerator_21108.hasCurrentObject ()) {
      GGS_string var_syntaxErrorMessage_21134 = enumerator_20384.current (HERE).readProperty_mSyntaxErrorMessage ().readProperty_string ().getter_replacing (GGS_string ("%K"), enumerator_21108.current (HERE).readProperty_mTerminalSpelling ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 528)) ;
      var_lexiqueAnalysisContext_18732.mProperty_mTerminalList.plusPlusAssignOperation (GGS_terminalAST::init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (enumerator_21108.current (HERE).readProperty_mTerminalSpelling (), var_argumentTypeList_20631, var_syntaxErrorMessage_21134, enumerator_21108.current (HERE).readProperty_isEndOfTemplateMark (), enumerator_21108.current (HERE).readProperty_nonAtomicSelection ().operator_not (SOURCE_FILE ("lexique-component.galgas4", 534)), var_terminalStyleIndex_20433, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 529)) ;
      {
      var_lexiqueAnalysisContext_18732.mProperty_mTerminalMap.setter_insertKey (enumerator_21108.current (HERE).readProperty_mTerminalSpelling (), var_argumentTypeList_20631, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 537)) ;
      }
      {
      var_lexicalTokenListMap_21005.setter_insertKey (enumerator_21108.current (HERE).readProperty_mEntrySpelling (), enumerator_21108.current (HERE).readProperty_mTerminalSpelling (), enumerator_21108.current (HERE).readProperty_nonAtomicSelection (), enumerator_21108.current (HERE).readProperty_isEndOfTemplateMark (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 538)) ;
      }
      var_tokenSortedlist_21041.plusPlusAssignOperation (GGS_sortedToken::init_21__21__21_ (enumerator_21108.current (HERE).readProperty_mEntrySpelling ().readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas4", 544)), enumerator_21108.current (HERE).readProperty_mEntrySpelling ().readProperty_string (), enumerator_21108.current (HERE).readProperty_mTerminalSpelling ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 544)) ;
      var_lexiqueAnalysisContext_18732.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_21108.current (HERE).readProperty_mEntrySpelling ().readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas4", 545)) ;
      enumerator_21108.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_18732.mProperty_mLexicalTokenListMap.setter_insertKey (enumerator_20384.current (HERE).readProperty_mName (), var_lexicalTokenListMap_21005, var_tokenSortedlist_21041, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 547)) ;
    }
    enumerator_20384.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_7 = this ;
  UpEnumerator__5B_lexicalMessageDeclarationAST_5D_ enumerator_22325 (temp_7.readProperty_mLexicalMessageDeclarationListAST ()) ;
  while (enumerator_22325.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_18732.mProperty_mLexicalMessageMap.setter_insertKey (enumerator_22325.current (HERE).readProperty_mMessageName (), enumerator_22325.current (HERE).readProperty_mMessageValue (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 551)) ;
    }
    enumerator_22325.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_8 = this ;
  UpEnumerator__5B_abstractLexicalRuleAST_5D_ enumerator_22574 (temp_8.readProperty_mLexicalRuleListAST ()) ;
  while (enumerator_22574.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRule ((cPtr_abstractLexicalRuleAST *) enumerator_22574.current (HERE).ptr (), var_lexiqueAnalysisContext_18732, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 555)) ;
    enumerator_22574.gotoNextObject () ;
  }
  UpEnumerator_lexicalMessageMap enumerator_22769 (var_lexiqueAnalysisContext_18732.readProperty_mLexicalMessageMap ()) ;
  while (enumerator_22769.hasCurrentObject ()) {
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = enumerator_22769.current (HERE).readProperty_mMessageIsUsed ().operator_not (SOURCE_FILE ("lexique-component.galgas4", 559)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (enumerator_22769.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("unused message"), fixItArray10  COMMA_SOURCE_FILE ("lexique-component.galgas4", 560)) ;
      }
    }
    enumerator_22769.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_11 = this ;
  UpEnumerator__5B_templateDelimitor_32_AST_5D_ enumerator_22989 (temp_11.readProperty_mTemplateDelimitorListAST ()) ;
  while (enumerator_22989.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_18732.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_22989.current (HERE).readProperty_mStartString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas4", 565)) ;
    var_lexiqueAnalysisContext_18732.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_22989.current (HERE).readProperty_mEndString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas4", 566)) ;
    var_lexiqueAnalysisContext_18732.mProperty_mTemplateDelimitorList.plusPlusAssignOperation (GGS_templateDelimitorAST::init_21__21__21_ (enumerator_22989.current (HERE).readProperty_mStartString (), enumerator_22989.current (HERE).readProperty_mEndString (), enumerator_22989.current (HERE).readProperty_mPreserved (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 567)) ;
    enumerator_22989.gotoNextObject () ;
  }
  GGS_stringset var_indexNameSet_23382 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  const GGS_lexiqueComponentAST temp_12 = this ;
  UpEnumerator__5B_indexingAST_5D_ enumerator_23423 (temp_12.readProperty_mIndexingListAST ()) ;
  while (enumerator_23423.hasCurrentObject ()) {
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      test_13 = var_indexNameSet_23382.getter_contains (enumerator_23423.current (HERE).readProperty_mIndexName ().readProperty_string () COMMA_SOURCE_FILE ("lexique-component.galgas4", 571)).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        GenericArray <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (enumerator_23423.current (HERE).readProperty_mIndexName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_23423.current (HERE).readProperty_mIndexName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 572)).add_operation (GGS_string ("' index is already declared"), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 572)), fixItArray14  COMMA_SOURCE_FILE ("lexique-component.galgas4", 572)) ;
      }
    }
    var_indexNameSet_23382.plusPlusAssignOperation (enumerator_23423.current (HERE).readProperty_mIndexName ().readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas4", 574)) ;
    enumerator_23423.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_15 = this ;
  UpEnumerator__5B_templateReplacementAST_5D_ enumerator_23749 (temp_15.readProperty_mTemplateReplacementListAST ()) ;
  while (enumerator_23749.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_18732.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_23749.current (HERE).readProperty_mMatchString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas4", 578)) ;
    var_lexiqueAnalysisContext_18732.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_23749.current (HERE).readProperty_mReplacementString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas4", 579)) ;
    enumerator_23749.gotoNextObject () ;
  }
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    test_16 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("lexique-component.galgas4", 583)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      const GGS_lexiqueComponentAST temp_17 = this ;
      const GGS_lexiqueComponentAST temp_18 = this ;
      const GGS_lexiqueComponentAST temp_19 = this ;
      const GGS_lexiqueComponentAST temp_20 = this ;
      GGS_string var_headerContents_24143 = GGS_lexiqueGenerationTemplates::class_func_headerZone_32_ (temp_17.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-component.galgas4", 586)), temp_18.readProperty_mLexicalListDeclarationListAST (), var_lexiqueAnalysisContext_18732, temp_19.readProperty_mTemplateDelimitorListAST (), temp_20.readProperty_mIndexingListAST (), inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 585)) ;
      const GGS_lexiqueComponentAST temp_21 = this ;
      const GGS_lexiqueComponentAST temp_22 = this ;
      const GGS_lexiqueComponentAST temp_23 = this ;
      const GGS_lexiqueComponentAST temp_24 = this ;
      const GGS_lexiqueComponentAST temp_25 = this ;
      const GGS_lexiqueComponentAST temp_26 = this ;
      GGS_string var_cppContents_24449 = GGS_lexiqueGenerationTemplates::class_func_implementationZone_32_Galgas_33_ (temp_21.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-component.galgas4", 594)), extensionGetter_useLoopLocalVar (temp_22.readProperty_mLexicalRuleListAST (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 595)), var_lexiqueAnalysisContext_18732.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_18732.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_18732.readProperty_mTerminalList (), var_lexiqueAnalysisContext_18732.readProperty_mLexicalTokenListMap (), var_lexiqueAnalysisContext_18732.readProperty_mUnicodeStringToGenerate (), temp_23.readProperty_mLexicalRuleListAST (), var_lexiqueAnalysisContext_18732, temp_24.readProperty_mTemplateDelimitorListAST (), temp_25.readProperty_mLexiqueComponentName ().readProperty_string (), temp_26.readProperty_mTemplateReplacementListAST (), inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 593)) ;
      const GGS_lexiqueComponentAST temp_27 = this ;
      const GGS_lexiqueComponentAST temp_28 = this ;
      const GGS_lexiqueComponentAST temp_29 = this ;
      const GGS_lexiqueComponentAST temp_30 = this ;
      const GGS_lexiqueComponentAST temp_31 = this ;
      const GGS_lexiqueComponentAST temp_32 = this ;
      GGS_string var_swiftUIImplementation_25139 = GGS_lexiqueGenerationTemplates::class_func_swiftUIImplementationZone_32_ (GGS_string ("lexique-").add_operation (temp_27.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("lexique-component.galgas4", 609)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 609)).add_operation (GGS_string ("-swiftui"), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 609)), temp_28.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexiqueAnalysisContext_18732.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_18732.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_18732.readProperty_mTerminalList (), var_lexiqueAnalysisContext_18732.readProperty_mUnicodeStringToGenerate (), temp_29.readProperty_mLexicalRuleListAST (), var_lexiqueAnalysisContext_18732, temp_30.readProperty_mTemplateReplacementListAST (), temp_31.readProperty_mIndexingListAST (), temp_32.readProperty_mTemplateDelimitorListAST (), constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_lexicalStyleMap ().getter_count (SOURCE_FILE ("lexique-component.galgas4", 620)), inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 608)) ;
      const GGS_lexiqueComponentAST temp_33 = this ;
      const GGS_lexiqueComponentAST temp_34 = this ;
      ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_lexiqueDeclarationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string::makeEmptyString (), GGS_bool (true), GGS_string ("lexique-").add_operation (temp_33.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("lexique-component.galgas4", 626)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 626)), temp_34.readProperty_mLexiqueComponentName ().readProperty_string (), GGS_string::makeEmptyString (), var_headerContents_24143, var_cppContents_24449, var_swiftUIImplementation_25139, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 623)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@onceFunctionDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_onceFunctionDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  result = GGS_string ("once function ").add_operation (temp_0.readProperty_mGlobalConstanteName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 112)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@onceFunctionDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_resultType_5225 ;
  {
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mResultTypeName (), var_resultType_5225, inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 125)) ;
  }
  {
  const GGS_onceFunctionDeclarationAST temp_1 = this ;
  const GGS_onceFunctionDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mGlobalConstantMap.setter_insert (temp_1.readProperty_mGlobalConstanteName (), var_resultType_5225, temp_2.readProperty_mIsPrivate (), inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 128)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@onceFunctionDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument__5F_ioSemanticTypePrecedenceGraph */,
                                                                      GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                      GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                      GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                      GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                      GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                      GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioExtensionOverrideDefinitionList,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.plusPlusAssignOperation (temp_0  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 141)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@onceFunctionDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                               const GGS_semanticContext constinArgument_inSemanticContext,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                               GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_6810 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mGlobalConstanteName (), inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 155)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6810, var_nameForUsefulness_6810, inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 156)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_onceFunctionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_mIsUsefull ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_6810  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 158)) ;
    }
  }
  GGS_analysisContext var_analysisContext_7095 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("declararation-global-constant.galgas4", 165)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_returnType_7603 ;
  GGS_string var_resultVariableCppName_7626 ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_7660 ;
  {
  const GGS_onceFunctionDeclarationAST temp_3 = this ;
  const GGS_onceFunctionDeclarationAST temp_4 = this ;
  const GGS_onceFunctionDeclarationAST temp_5 = this ;
  GGS__5B_formalInputParameterForGeneration_5D_ joker_7575 ; // Joker input parameter
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__21_signatureIR_21__21__21_ (var_nameForUsefulness_6810, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_7095, ioArgument_ioTypeMap, GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), temp_3.readProperty_mFunctionInstructionList (), temp_4.readProperty_mResultTypeName (), temp_5.readProperty_mEndOfFunctionInstructionList (), joker_7575, var_returnType_7603, var_resultVariableCppName_7626, var_semanticInstructionListForGeneration_7660, inCompiler  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 168)) ;
  }
  const GGS_onceFunctionDeclarationAST temp_6 = this ;
  const GGS_onceFunctionDeclarationAST temp_7 = this ;
  const GGS_onceFunctionDeclarationAST temp_8 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_onceFunctionDeclarationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (GGS_string ("global constant ").add_operation (temp_6.readProperty_mGlobalConstanteName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 184)), GGS_bool (true), GGS_string ("func-").add_operation (temp_7.readProperty_mGlobalConstanteName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declararation-global-constant.galgas4", 186)), inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 186)), temp_8.readProperty_mGlobalConstanteName ().readProperty_string (), var_returnType_7603, var_resultVariableCppName_7626, var_semanticInstructionListForGeneration_7660, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 183)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'gSwiftLexicalStyleFileName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_gSwiftLexicalStyleFileName (Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = GGS_string ("LexicalStyles.swift") ;
//---
  return result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_gSwiftLexicalStyleFileName = false ;
static GGS_string gOnceFunctionResult_gSwiftLexicalStyleFileName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_gSwiftLexicalStyleFileName (Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_gSwiftLexicalStyleFileName) {
    gOnceFunctionResult_gSwiftLexicalStyleFileName = onceFunction_gSwiftLexicalStyleFileName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_gSwiftLexicalStyleFileName = true ;
  }
  return gOnceFunctionResult_gSwiftLexicalStyleFileName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_gSwiftLexicalStyleFileName (void) {
  gOnceFunctionResult_gSwiftLexicalStyleFileName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_gSwiftLexicalStyleFileName (nullptr,
                                                                      releaseOnceFunctionResult_gSwiftLexicalStyleFileName) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksWindowsTarget??buildDirName???libpmPath??'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksWindowsTarget_3F__3F_buildDirName_3F__3F__3F_libpmPath_3F__3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                                     const GGS_string constinArgument_inBuildDirectoryName,
                                                                                                     const GGS_string constinArgument_inProjectName,
                                                                                                     const GGS__5B_string_5D_ constinArgument_inToolCppFileList,
                                                                                                     const GGS_string constinArgument_inLIBPMpath,
                                                                                                     const GGS__5B_string_5D_ constinArgument_inHandCodedSourceToolFileList,
                                                                                                     const GGS_string constinArgument_inHandCodedSourceDirectory,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_2004 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/project-codeblocks-windows"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 31)) ;
  var_dir_2004.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 32)) ;
  GGS_string var_s_2098 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_codeblocks_5F_project (constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, GGS_bool (true), GGS_string ("Windows"), constinArgument_inBuildDirectoryName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 33)) ;
  GGS_bool joker_2447 ; // Joker input parameter
  var_s_2098.method_writeToFileWhenDifferentContents (var_dir_2004.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 43)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 43)).add_operation (GGS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 43)), joker_2447, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 43)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksLinuxI686Target??buildDirName?????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                                       const GGS_string constinArgument_inBuildDirectoryName,
                                                                                                       const GGS_string constinArgument_inProjectName,
                                                                                                       const GGS__5B_string_5D_ constinArgument_inToolCppFileList,
                                                                                                       const GGS_string constinArgument_inLIBPMpath,
                                                                                                       const GGS__5B_string_5D_ constinArgument_inHandCodedSourceToolFileList,
                                                                                                       const GGS_string constinArgument_inHandCodedSourceDirectory,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_2894 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/project-codeblocks-linux32"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 57)) ;
  var_dir_2894.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 58)) ;
  GGS_string var_s_2988 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_codeblocks_5F_project (constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, GGS_bool (false), GGS_string ("Unix"), constinArgument_inBuildDirectoryName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 59)) ;
  GGS_bool joker_3335 ; // Joker input parameter
  var_s_2988.method_writeToFileWhenDifferentContents (var_dir_2894.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 69)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 69)).add_operation (GGS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 69)), joker_3335, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 69)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksLinuxX86_64Target??buildDirName?????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                                               const GGS_string constinArgument_inBuildDirectoryName,
                                                                                                               const GGS_string constinArgument_inProjectName,
                                                                                                               const GGS__5B_string_5D_ constinArgument_inToolCppFileList,
                                                                                                               const GGS_string constinArgument_inLIBPMpath,
                                                                                                               const GGS__5B_string_5D_ constinArgument_inHandCodedSourceToolFileList,
                                                                                                               const GGS_string constinArgument_inHandCodedSourceDirectory,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_3783 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/project-codeblocks-linux64"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 83)) ;
  var_dir_3783.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 84)) ;
  GGS_string var_s_3877 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_codeblocks_5F_project (constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, GGS_bool (false), GGS_string ("Unix"), constinArgument_inBuildDirectoryName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 85)) ;
  GGS_bool joker_4224 ; // Joker input parameter
  var_s_3877.method_writeToFileWhenDifferentContents (var_dir_3783.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 95)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 95)).add_operation (GGS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 95)), joker_4224, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 95)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileMinGWOnMacOSXTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileMinGWOnMacOSXTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                          const GGS_string constinArgument_inBuildDirectoryName,
                                                                          const GGS_string constinArgument_inProjectName,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_4514 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-win32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 104)) ;
  var_dir_4514.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 105)) ;
  GGS_string var_s_31__4598 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_win_33__32__5F_on_5F_mac (constinArgument_inProjectName, constinArgument_inBuildDirectoryName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 106)) ;
  GGS_bool joker_4764 ; // Joker input parameter
  var_s_31__4598.method_writeToExecutableFileWhenDifferentContents (var_dir_4514.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 107)), joker_4764, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 107)) ;
  GGS_string var_s_32__4774 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_lto_5F_win_33__32__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 108)) ;
  GGS_bool joker_4912 ; // Joker input parameter
  var_s_32__4774.method_writeToExecutableFileWhenDifferentContents (var_dir_4514.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 109)), joker_4912, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 109)) ;
  GGS_string var_s_33__4922 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_debug_5F_win_33__32__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 110)) ;
  GGS_bool joker_5064 ; // Joker input parameter
  var_s_33__4922.method_writeToExecutableFileWhenDifferentContents (var_dir_4514.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 111)), joker_5064, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 111)) ;
  GGS_string var_s_34__5074 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_verbose_5F_win_33__32__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 112)) ;
  GGS_bool joker_5220 ; // Joker input parameter
  var_s_34__5074.method_writeToExecutableFileWhenDifferentContents (var_dir_4514.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 113)), joker_5220, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 113)) ;
  GGS_string var_s_35__5230 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_clean_5F_win_33__32__5F_on_5F_mac (constinArgument_inProjectName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 114)) ;
  GGS_bool joker_5382 ; // Joker input parameter
  var_s_35__5230.method_writeToExecutableFileWhenDifferentContents (var_dir_4514.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 116)), joker_5382, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 115)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_4514.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 119)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 119)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileUnixTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileUnixTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                 const GGS_string constinArgument_inBuildDirectoryName,
                                                                 const GGS_string constinArgument_inProjectName,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_5715 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-unix"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 128)) ;
  var_dir_5715.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 129)) ;
  GGS_string var_s_31__5788 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_unix (constinArgument_inProjectName, constinArgument_inBuildDirectoryName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 130)) ;
  GGS_bool joker_5945 ; // Joker input parameter
  var_s_31__5788.method_writeToExecutableFileWhenDifferentContents (var_dir_5715.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 131)), joker_5945, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 131)) ;
  GGS_string var_s_32__5955 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_release_5F_unix (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 132)) ;
  GGS_bool joker_6093 ; // Joker input parameter
  var_s_32__5955.method_writeToExecutableFileWhenDifferentContents (var_dir_5715.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 133)), joker_6093, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 133)) ;
  GGS_string var_s_33__6103 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_lto_5F_unix (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 134)) ;
  GGS_bool joker_6233 ; // Joker input parameter
  var_s_33__6103.method_writeToExecutableFileWhenDifferentContents (var_dir_5715.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 135)), joker_6233, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 135)) ;
  GGS_string var_s_34__6243 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_debug_5F_unix (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 136)) ;
  GGS_bool joker_6377 ; // Joker input parameter
  var_s_34__6243.method_writeToExecutableFileWhenDifferentContents (var_dir_5715.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 137)), joker_6377, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 137)) ;
  GGS_string var_s_35__6387 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_verbose_5F_unix (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 138)) ;
  GGS_bool joker_6525 ; // Joker input parameter
  var_s_35__6387.method_writeToExecutableFileWhenDifferentContents (var_dir_5715.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 139)), joker_6525, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 139)) ;
  GGS_string var_s_36__6535 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_install_5F_unix (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 140)) ;
  GGS_bool joker_6661 ; // Joker input parameter
  var_s_36__6535.method_writeToExecutableFileWhenDifferentContents (var_dir_5715.add_operation (GGS_string ("/install.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 141)), joker_6661, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 141)) ;
  GGS_string var_s_37__6671 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_clean_5F_unix (constinArgument_inProjectName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 142)) ;
  GGS_bool joker_6806 ; // Joker input parameter
  var_s_37__6671.method_writeToExecutableFileWhenDifferentContents (var_dir_5715.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 143)), joker_6806, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 143)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_5715.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 144)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 144)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileMacTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileMacTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                const GGS_string constinArgument_inBuildDirectoryName,
                                                                const GGS_string constinArgument_inProjectName,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_7136 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 153)) ;
  var_dir_7136.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 154)) ;
  GGS_string var_s_31__7211 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_macosx (constinArgument_inProjectName, constinArgument_inBuildDirectoryName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 155)) ;
  GGS_bool joker_7370 ; // Joker input parameter
  var_s_31__7211.method_writeToExecutableFileWhenDifferentContents (var_dir_7136.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 156)), joker_7370, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 156)) ;
  GGS_string var_s_32__7380 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_release_5F_macosx (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 157)) ;
  GGS_bool joker_7520 ; // Joker input parameter
  var_s_32__7380.method_writeToExecutableFileWhenDifferentContents (var_dir_7136.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 158)), joker_7520, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 158)) ;
  GGS_string var_s_33__7530 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_lto_5F_macosx (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 159)) ;
  GGS_bool joker_7662 ; // Joker input parameter
  var_s_33__7530.method_writeToExecutableFileWhenDifferentContents (var_dir_7136.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 160)), joker_7662, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 160)) ;
  GGS_string var_s_34__7672 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_debug_5F_macosx (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 161)) ;
  GGS_bool joker_7808 ; // Joker input parameter
  var_s_34__7672.method_writeToExecutableFileWhenDifferentContents (var_dir_7136.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 162)), joker_7808, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 162)) ;
  GGS_string var_s_35__7818 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_verbose_5F_macosx (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 163)) ;
  GGS_bool joker_7958 ; // Joker input parameter
  var_s_35__7818.method_writeToExecutableFileWhenDifferentContents (var_dir_7136.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 164)), joker_7958, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 164)) ;
  GGS_string var_s_36__7968 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_clean_5F_macosx (constinArgument_inProjectName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 165)) ;
  GGS_bool joker_8105 ; // Joker input parameter
  var_s_36__7968.method_writeToExecutableFileWhenDifferentContents (var_dir_7136.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 166)), joker_8105, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 166)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_7136.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 167)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 167)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileLinux32OnMacOSXTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileLinux_33__32_OnMacOSXTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                  const GGS_string constinArgument_inBuildDirectoryName,
                                                                                  const GGS_string constinArgument_inProjectName,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_8447 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-x86linux32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 176)) ;
  var_dir_8447.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 177)) ;
  GGS_string var_s_31__8536 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_x_38__36_linux_33__32__5F_on_5F_mac (constinArgument_inProjectName, constinArgument_inBuildDirectoryName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 178)) ;
  GGS_bool joker_8706 ; // Joker input parameter
  var_s_31__8536.method_writeToExecutableFileWhenDifferentContents (var_dir_8447.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 179)), joker_8706, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 179)) ;
  GGS_string var_s_32__8716 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_release_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 180)) ;
  GGS_bool joker_8867 ; // Joker input parameter
  var_s_32__8716.method_writeToExecutableFileWhenDifferentContents (var_dir_8447.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 181)), joker_8867, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 181)) ;
  GGS_string var_s_33__8877 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_lto_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 182)) ;
  GGS_bool joker_9020 ; // Joker input parameter
  var_s_33__8877.method_writeToExecutableFileWhenDifferentContents (var_dir_8447.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 183)), joker_9020, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 183)) ;
  GGS_string var_s_34__9030 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_debug_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 184)) ;
  GGS_bool joker_9177 ; // Joker input parameter
  var_s_34__9030.method_writeToExecutableFileWhenDifferentContents (var_dir_8447.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 185)), joker_9177, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 185)) ;
  GGS_string var_s_35__9187 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_verbose_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 186)) ;
  GGS_bool joker_9338 ; // Joker input parameter
  var_s_35__9187.method_writeToExecutableFileWhenDifferentContents (var_dir_8447.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 187)), joker_9338, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 187)) ;
  GGS_string var_s_36__9348 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_clean_5F_x_38__36_linux_33__32__5F_on_5F_mac (constinArgument_inProjectName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 188)) ;
  GGS_bool joker_9496 ; // Joker input parameter
  var_s_36__9348.method_writeToExecutableFileWhenDifferentContents (var_dir_8447.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 189)), joker_9496, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 189)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_8447.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 190)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 190)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileLinux64OnMacOSXTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileLinux_36__34_OnMacOSXTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                  const GGS_string constinArgument_inBuildDirectoryName,
                                                                                  const GGS_string constinArgument_inProjectName,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_9837 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-x86linux64-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 199)) ;
  var_dir_9837.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 200)) ;
  GGS_string var_s_31__9926 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_x_38__36_linux_36__34__5F_on_5F_mac (constinArgument_inProjectName, constinArgument_inBuildDirectoryName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 201)) ;
  GGS_bool joker_10096 ; // Joker input parameter
  var_s_31__9926.method_writeToExecutableFileWhenDifferentContents (var_dir_9837.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 202)), joker_10096, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 202)) ;
  GGS_string var_s_32__10106 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_release_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 203)) ;
  GGS_bool joker_10257 ; // Joker input parameter
  var_s_32__10106.method_writeToExecutableFileWhenDifferentContents (var_dir_9837.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 204)), joker_10257, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 204)) ;
  GGS_string var_s_33__10267 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_lto_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 205)) ;
  GGS_bool joker_10410 ; // Joker input parameter
  var_s_33__10267.method_writeToExecutableFileWhenDifferentContents (var_dir_9837.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 206)), joker_10410, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 206)) ;
  GGS_string var_s_34__10420 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_debug_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 207)) ;
  GGS_bool joker_10567 ; // Joker input parameter
  var_s_34__10420.method_writeToExecutableFileWhenDifferentContents (var_dir_9837.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 208)), joker_10567, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 208)) ;
  GGS_string var_s_35__10577 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_verbose_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 209)) ;
  GGS_bool joker_10728 ; // Joker input parameter
  var_s_35__10577.method_writeToExecutableFileWhenDifferentContents (var_dir_9837.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 210)), joker_10728, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 210)) ;
  GGS_string var_s_36__10738 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_clean_5F_x_38__36_linux_36__34__5F_on_5F_mac (constinArgument_inProjectName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 211)) ;
  GGS_bool joker_10886 ; // Joker input parameter
  var_s_36__10738.method_writeToExecutableFileWhenDifferentContents (var_dir_9837.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 212)), joker_10886, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 212)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_9837.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 213)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 213)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateArm64LinuxMakefileTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateArm_36__34_LinuxMakefileTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                             const GGS_string constinArgument_inBuildDirectoryName,
                                                                             const GGS_string constinArgument_inProjectName,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_11308 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-arm64-linux-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 221)) ;
  var_dir_11308.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 222)) ;
  GGS_string var_s_31__11398 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_arm_36__34__5F_linux_5F_on_5F_mac (constinArgument_inProjectName, constinArgument_inBuildDirectoryName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 223)) ;
  GGS_bool joker_11569 ; // Joker input parameter
  var_s_31__11398.method_writeToExecutableFileWhenDifferentContents (var_dir_11308.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 224)), joker_11569, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 224)) ;
  GGS_string var_s_32__11579 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_release_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 225)) ;
  GGS_bool joker_11731 ; // Joker input parameter
  var_s_32__11579.method_writeToExecutableFileWhenDifferentContents (var_dir_11308.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 226)), joker_11731, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 226)) ;
  GGS_string var_s_33__11741 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_lto_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 227)) ;
  GGS_bool joker_11885 ; // Joker input parameter
  var_s_33__11741.method_writeToExecutableFileWhenDifferentContents (var_dir_11308.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 228)), joker_11885, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 228)) ;
  GGS_string var_s_34__11895 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_debug_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 229)) ;
  GGS_bool joker_12043 ; // Joker input parameter
  var_s_34__11895.method_writeToExecutableFileWhenDifferentContents (var_dir_11308.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 230)), joker_12043, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 230)) ;
  GGS_string var_s_35__12053 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_verbose_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 231)) ;
  GGS_bool joker_12205 ; // Joker input parameter
  var_s_35__12053.method_writeToExecutableFileWhenDifferentContents (var_dir_11308.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 232)), joker_12205, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 232)) ;
  GGS_string var_s_36__12215 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_clean_5F_arm_36__34__5F_linux_5F_on_5F_mac (constinArgument_inProjectName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 233)) ;
  GGS_bool joker_12364 ; // Joker input parameter
  var_s_36__12215.method_writeToExecutableFileWhenDifferentContents (var_dir_11308.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 234)), joker_12364, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 234)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_11308.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 235)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 235)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'updateGalgasTargets?absoluteBuildDir?buildDirName?????appProductFileList?swiftAppProductFileList???&'
//
//--------------------------------------------------------------------------------------------------

void routine_updateGalgasTargets_3F_absoluteBuildDir_3F_buildDirName_3F__3F__3F__3F__3F_appProductFileList_3F_swiftAppProductFileList_3F__3F__3F__26_ (const GGS_string constinArgument_inAbsoluteBuildDirectory,
                                                                                                                                                       const GGS_string constinArgument_inBuildDirectoryName,
                                                                                                                                                       const GGS_string constinArgument_inProjectSourceFilePath,
                                                                                                                                                       const GGS_projectSettings constinArgument_inProjectSettings,
                                                                                                                                                       const GGS__5B_string_5D_ constinArgument_inToolCppFileList,
                                                                                                                                                       const GGS__5B_string_5D_ constinArgument_inToolHeaderFileList,
                                                                                                                                                       const GGS__5B_string_5D_ constinArgument_inAppProductFileList,
                                                                                                                                                       const GGS__5B_string_5D_ constinArgument_inSwiftAppProductFileList,
                                                                                                                                                       const GGS__5B_string_5D_ constinArgument_inHandCodedSourceToolFileList,
                                                                                                                                                       const GGS_string constinArgument_inHandCodedSourceDirectory,
                                                                                                                                                       const GGS_stringset constinArgument_inHandledExtensionSet,
                                                                                                                                                       GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                                                                                                       Compiler * inCompiler
                                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_versionString_13541 = constinArgument_inProjectSettings.readProperty_majorVersion ().getter_bigint (SOURCE_FILE ("galgasTargetGeneration.galgas4", 259)).getter_string (SOURCE_FILE ("galgasTargetGeneration.galgas4", 259)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 259)).add_operation (constinArgument_inProjectSettings.readProperty_minorVersion ().getter_bigint (SOURCE_FILE ("galgasTargetGeneration.galgas4", 260)).getter_string (SOURCE_FILE ("galgasTargetGeneration.galgas4", 260)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 260)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 260)).add_operation (constinArgument_inProjectSettings.readProperty_revision ().getter_bigint (SOURCE_FILE ("galgasTargetGeneration.galgas4", 261)).getter_string (SOURCE_FILE ("galgasTargetGeneration.galgas4", 261)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 261)) ;
  ioArgument_ioAllProductFileSet.plusAssignOperation(GGS_stringset::class_func_setWithStringArray (constinArgument_inSwiftAppProductFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 262)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 262)) ;
  GGS_string var_projectDirectory_13777 = constinArgument_inProjectSourceFilePath.getter_deletingLastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas4", 263)) ;
  GGS_string var_s_31__13880 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_project_5F_header (var_versionString_13541, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 265)) ;
  GGS_bool joker_14055 ; // Joker input parameter
  var_s_31__13880.method_writeToFileWhenDifferentContents (constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/project_header.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 267)), joker_14055, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 266)) ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("project_header.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 270)) ;
  GGS_lstring var_macCodeSign_14195 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inProjectSettings.readProperty_macAppCodeSign ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_macCodeSign_14195 = constinArgument_inProjectSettings.readProperty_macAppCodeSign () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_macCodeSign_14195 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasTargetGeneration.galgas4", 276)) ;
  }
  GGS_string var_MACOSX_5F_DEPLOYMENT_5F_TARGET_14439 = GGS_string ("14.6") ;
  GGS_string var_libpmPath_14559 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inProjectSettings.readProperty_libpmCustomPath ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_libpmPath_14559 = constinArgument_inProjectSettings.readProperty_libpmCustomPath ().readProperty_string () ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    {
    routine_updateLIBPMatPath_3F_ (constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 285)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 285)) ;
    }
    var_libpmPath_14559 = GGS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 286)).add_operation (GGS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 286)) ;
  }
  GGS_xcodeProject var_xcodeProject_14850 = GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas4", 289)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = constinArgument_inProjectSettings.readProperty_targets ().getter_contains (GGS_projectTargets::class_func_macSwiftApp (SOURCE_FILE ("galgasTargetGeneration.galgas4", 290)) COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 290)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      var_xcodeProject_14850 = GGS_xcodeProject::class_func_swiftApp (SOURCE_FILE ("galgasTargetGeneration.galgas4", 291)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_bool test_4 = GGS_bool (ComparisonKind::notEqual, var_macCodeSign_14195.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
    if (GalgasBool::boolTrue == test_4.boolEnum ()) {
      test_4 = GGS_bool (ComparisonKind::equal, var_xcodeProject_14850.objectCompare (GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas4", 294)))) ;
    }
    test_3 = test_4.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_macCodeSign_14195.readProperty_location (), GGS_string ("the macCodeSign property implies the definition of an OS X target system: \"%MacSwiftApp\""), fixItArray5  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 295)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::notEqual, var_xcodeProject_14850.objectCompare (GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas4", 299)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::equal, constinArgument_inProjectSettings.readProperty_macAppBundleBaseName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticWarning (constinArgument_inProjectSettings.readProperty_macAppBundleBaseName ().readProperty_location (), GGS_string ("For a MacOS target, the \"#macAppBundleBaseName\" feature should be set; for example: '%applicationBundleBase : \"fr.what\" ;'"), fixItArray7  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 300)) ;
      }
    }
  }
  GGS_string var_inTargetName_15531 = constinArgument_inProjectSettings.readProperty_productName () ;
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = constinArgument_inProjectSettings.readProperty_targets ().getter_contains (GGS_projectTargets::class_func_makefileMacOS (SOURCE_FILE ("galgasTargetGeneration.galgas4", 304)) COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 304)).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      {
      routine_generateMakefileMacTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_13777, constinArgument_inBuildDirectoryName, var_inTargetName_15531, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 305)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = constinArgument_inProjectSettings.readProperty_targets ().getter_contains (GGS_projectTargets::class_func_makefileUnix (SOURCE_FILE ("galgasTargetGeneration.galgas4", 307)) COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 307)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      {
      routine_generateMakefileUnixTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_13777, constinArgument_inBuildDirectoryName, var_inTargetName_15531, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 308)) ;
      }
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = constinArgument_inProjectSettings.readProperty_targets ().getter_contains (GGS_projectTargets::class_func_makefileX_38__36_Linux_33__32_OnMac (SOURCE_FILE ("galgasTargetGeneration.galgas4", 310)) COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 310)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      {
      routine_generateMakefileLinux_33__32_OnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_13777, constinArgument_inBuildDirectoryName, var_inTargetName_15531, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 311)) ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = constinArgument_inProjectSettings.readProperty_targets ().getter_contains (GGS_projectTargets::class_func_makefileX_38__36_Linux_36__34_OnMac (SOURCE_FILE ("galgasTargetGeneration.galgas4", 313)) COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 313)).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      {
      routine_generateMakefileLinux_36__34_OnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_13777, constinArgument_inBuildDirectoryName, var_inTargetName_15531, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 314)) ;
      }
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = constinArgument_inProjectSettings.readProperty_targets ().getter_contains (GGS_projectTargets::class_func_makefileARM_36__34_LinuxOnMac (SOURCE_FILE ("galgasTargetGeneration.galgas4", 316)) COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 316)).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      {
      routine_generateArm_36__34_LinuxMakefileTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_13777, constinArgument_inBuildDirectoryName, var_inTargetName_15531, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 317)) ;
      }
    }
  }
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = constinArgument_inProjectSettings.readProperty_targets ().getter_contains (GGS_projectTargets::class_func_makefileWin_33__32_OnMac (SOURCE_FILE ("galgasTargetGeneration.galgas4", 319)) COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 319)).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      {
      routine_generateMakefileMinGWOnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_13777, constinArgument_inBuildDirectoryName, var_inTargetName_15531, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 320)) ;
      }
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    test_14 = constinArgument_inProjectSettings.readProperty_targets ().getter_contains (GGS_projectTargets::class_func_codeblocksWindows (SOURCE_FILE ("galgasTargetGeneration.galgas4", 322)) COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 322)).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      {
      routine_generateGalgasCodeBlocksWindowsTarget_3F__3F_buildDirName_3F__3F__3F_libpmPath_3F__3F_ (var_projectDirectory_13777, constinArgument_inBuildDirectoryName, var_inTargetName_15531, constinArgument_inToolCppFileList, var_libpmPath_14559, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 323)) ;
      }
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = constinArgument_inProjectSettings.readProperty_targets ().getter_contains (GGS_projectTargets::class_func_codeblocksLinux_33__32_ (SOURCE_FILE ("galgasTargetGeneration.galgas4", 333)) COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 333)).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      {
      routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F_ (var_projectDirectory_13777, constinArgument_inBuildDirectoryName, var_inTargetName_15531, constinArgument_inToolCppFileList, var_libpmPath_14559, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 334)) ;
      }
    }
  }
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    test_16 = constinArgument_inProjectSettings.readProperty_targets ().getter_contains (GGS_projectTargets::class_func_codeblocksLinux_36__34_ (SOURCE_FILE ("galgasTargetGeneration.galgas4", 344)) COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 344)).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      {
      routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F_ (var_projectDirectory_13777, constinArgument_inBuildDirectoryName, var_inTargetName_15531, constinArgument_inToolCppFileList, var_libpmPath_14559, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 345)) ;
      }
    }
  }
  GGS__5B_string_5D_ var_handCodedSourceToolFileList_17690 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_string_5D_ enumerator_17739 (constinArgument_inHandCodedSourceToolFileList) ;
  while (enumerator_17739.hasCurrentObject ()) {
    GalgasBool test_17 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_17) {
      test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_17739.current (HERE).getter_pathExtension (SOURCE_FILE ("galgasTargetGeneration.galgas4", 358)).objectCompare (GGS_string ("h"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_17) {
        var_handCodedSourceToolFileList_17690.plusPlusAssignOperation (enumerator_17739.current (HERE).getter_lastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas4", 359))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 359)) ;
      }
    }
    enumerator_17739.gotoNextObject () ;
  }
  GGS_stringset var_handCodedSourceDirectorySet_17893 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_string_5D_ enumerator_17957 (constinArgument_inHandCodedSourceToolFileList) ;
  while (enumerator_17957.hasCurrentObject ()) {
    GGS_string var_subDir_17998 = enumerator_17957.current (HERE).getter_deletingLastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas4", 364)) ;
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = GGS_bool (ComparisonKind::equal, var_subDir_17998.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        var_handCodedSourceDirectorySet_17893.plusPlusAssignOperation (GGS_string ("../sources/tool-sources")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 366)) ;
      }
    }
    if (GalgasBool::boolFalse == test_18) {
      var_handCodedSourceDirectorySet_17893.plusPlusAssignOperation (GGS_string ("../sources/tool-sources/").add_operation (var_subDir_17998, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 368))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 368)) ;
    }
    enumerator_17957.gotoNextObject () ;
  }
  GGS__5B_string_5D_ temp_19 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 375)) ;
  GGS_string var_jsonFileListContents_18236 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_json_5F_file_5F_list (var_handCodedSourceDirectorySet_17893, var_handCodedSourceToolFileList_17690, constinArgument_inToolCppFileList, temp_19, var_libpmPath_14559, constinArgument_inBuildDirectoryName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 371)) ;
  GGS_string var_jsonFileListPath_18459 = constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/file-list.json"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 379)) ;
  GGS_bool joker_18605 ; // Joker input parameter
  var_jsonFileListContents_18236.method_writeToFileWhenDifferentContents (var_jsonFileListPath_18459, joker_18605, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 380)) ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("file-list.json")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 381)) ;
  GGS_sortedLexicalStyleArray var_sortedLexicalStyleArray_18724 = GGS_sortedLexicalStyleArray::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lexicalStyleMap enumerator_18776 (constinArgument_inProjectSettings.readProperty_lexicalStyleMap ()) ;
  while (enumerator_18776.hasCurrentObject ()) {
    var_sortedLexicalStyleArray_18724.plusPlusAssignOperation (GGS_sortedLexicalStyle::init_21__21__21_ (enumerator_18776.current_lkey (HERE).readProperty_string (), enumerator_18776.current_mComment (HERE).readProperty_string (), enumerator_18776.current_mStyleIndex (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 385)) ;
    enumerator_18776.gotoNextObject () ;
  }
  GGS_string var_contents_18905 = GGS_lexicalTemplates::class_func_swiftUILexicalStyles (var_sortedLexicalStyleArray_18724, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 387)) ;
  GGS_string var_filePath_18987 = constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 388)).add_operation (function_gSwiftLexicalStyleFileName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 388)) ;
  GGS_bool joker_19120 ; // Joker input parameter
  var_contents_18905.method_writeToFileWhenDifferentContents (var_filePath_18987, joker_19120, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 389)) ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (function_gSwiftLexicalStyleFileName (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 390)) ;
  switch (var_xcodeProject_14850.enumValue ()) {
  case GGS_xcodeProject::Enumeration::invalid:
    break ;
  case GGS_xcodeProject::Enumeration::enum_none:
    break ;
  case GGS_xcodeProject::Enumeration::enum_swiftApp:
    {
      GGS_string var_dir_19284 = var_projectDirectory_13777.add_operation (GGS_string ("/xcode-project"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 395)) ;
      var_dir_19284.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 396)) ;
      GGS_string var_applicationBundleBase_19386 ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        test_20 = GGS_bool (ComparisonKind::notEqual, constinArgument_inProjectSettings.readProperty_macAppBundleBaseName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          var_applicationBundleBase_19386 = constinArgument_inProjectSettings.readProperty_macAppBundleBaseName ().readProperty_string () ;
        }
      }
      if (GalgasBool::boolFalse == test_20) {
        var_applicationBundleBase_19386 = GGS_string ("unknown.unknown") ;
      }
      GGS_string var_InfoPlistContents_19621 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_makefile_5F_info_5F_plist (var_inTargetName_15531, var_applicationBundleBase_19386, var_versionString_13541, constinArgument_inHandledExtensionSet, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_14439, GGS_string ("$(PRODUCT_MODULE_NAME).ProjectDocument"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 404)) ;
      GGS_bool joker_19959 ; // Joker input parameter
      var_InfoPlistContents_19621.method_writeToFileWhenDifferentContents (var_dir_19284.add_operation (GGS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 412)), joker_19959, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 412)) ;
      GalgasBool test_21 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_21) {
        test_21 = var_dir_19284.add_operation (GGS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 414)).getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas4", 414)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas4", 414)).boolEnum () ;
        if (GalgasBool::boolTrue == test_21) {
          GGS_string var_s_20047 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_makefile_5F_build_5F_xcode (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 415)) ;
          var_s_20047.method_writeToExecutableFile (var_dir_19284.add_operation (GGS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 416)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 416)) ;
        }
      }
      GGS_string var_d_20182 = var_dir_19284.add_operation (GGS_string ("/Base.lproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 419)) ;
      var_d_20182.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 419)) ;
      GGS_string var_InfoPlist_5F_strings_5F_path_20235 = var_dir_19284.add_operation (GGS_string ("/Base.lproj/InfoPlist.strings"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 420)) ;
      GGS_string var_s_32__20306 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_makefile_5F_info_5F_plist_5F_strings (var_inTargetName_15531, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 421)) ;
      GGS_bool joker_20455 ; // Joker input parameter
      var_s_32__20306.method_writeToFileWhenDifferentContents (var_InfoPlist_5F_strings_5F_path_20235, joker_20455, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 422)) ;
      GGS_string var_Credits_5F_rtf_5F_path_20467 = var_dir_19284.add_operation (GGS_string ("/Base.lproj/Credits.rtf"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 423)) ;
      GalgasBool test_22 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_22) {
        test_22 = var_Credits_5F_rtf_5F_path_20467.getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas4", 424)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas4", 424)).boolEnum () ;
        if (GalgasBool::boolTrue == test_22) {
          GGS_string var_s_20572 = GGS_string (gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper) ;
          var_s_20572.method_writeToFile (var_Credits_5F_rtf_5F_path_20467, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 426)) ;
        }
      }
      GGS_string var_userResourceDir_20787 = var_projectDirectory_13777.add_operation (GGS_string ("/xcode-project/userResources"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 429)) ;
      var_userResourceDir_20787.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 430)) ;
      GGS__5B_string_5D_ temp_23 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 431)) ;
      temp_23.plusPlusAssignOperation (GGS_string ("icns")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 431)) ;
      GGS__5B_string_5D_ var_resourceFiles_20900 = var_userResourceDir_20787.getter_regularFilesWithExtensions (GGS_bool (false), temp_23 COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 431)) ;
      GGS_string var_newIntermediateFilePath_21017 = constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/file-list-for-xcode-project.txt"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 433)) ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("file-list-for-xcode-project.txt")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 434)) ;
      GGS_XcodeProjectDescriptor var_xcodeProject_21267 = GGS_XcodeProjectDescriptor::init (inCompiler COMMA_HERE) ;
      var_xcodeProject_21267.mProperty_mApplicationBundleName = var_applicationBundleBase_19386 ;
      var_xcodeProject_21267.mProperty_mProjectName = var_inTargetName_15531 ;
      GGS_string var_headerSearchPaths_21426 = GGS_string ("HEADER_SEARCH_PATHS = (\"../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 439)).add_operation (GGS_string ("/output\", \"../"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 440)).add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 440)).add_operation (GGS_string ("/libpm\", \"../"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 440)).add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 441)).add_operation (GGS_string ("/user-headers\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 442)) ;
      var_headerSearchPaths_21426.plusAssignOperation(GGS_string (", \"").add_operation (constinArgument_inHandCodedSourceDirectory, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 443)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 443)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 443)) ;
      var_headerSearchPaths_21426.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 444)) ;
      GGS__5B_string_5D_ temp_24 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 520)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("ALWAYS_SEARCH_USER_PATHS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 447)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_CXX_LANGUAGE_STANDARD = \"c++17\"")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 448)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_ENABLE_OBJC_ARC = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 449)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_BLOCK_CAPTURE_AUTORELEASING = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 450)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_COMMA = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 451)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_DEPRECATED_OBJC_IMPLEMENTATIONS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 452)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_EMPTY_BODY = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 453)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_INFINITE_RECURSION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 454)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_OBJC_IMPLICIT_RETAIN_SELF = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 455)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_QUOTED_INCLUDE_IN_FRAMEWORK_HEADER = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 456)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_RANGE_LOOP_ANALYSIS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 457)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_STRICT_PROTOTYPES = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 458)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 459)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_SUSPICIOUS_MOVE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 460)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_UNREACHABLE_CODE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 461)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN__DUPLICATE_METHOD_MATCH = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 462)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 463)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_NO_COMMON_BLOCKS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 464)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("ENABLE_STRICT_OBJC_MSGSEND = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 465)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 466)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_THREADSAFE_STATICS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 467)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 468)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 469)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 470)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 471)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 472)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 473)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 474)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 475)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 476)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 477)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 478)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 479)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 480)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 481)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_MISSING_PARENTHESES = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 482)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 483)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_PEDANTIC = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 484)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_SHADOW = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 485)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_SIGN_COMPARE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 486)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 487)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNDECLARED_SELECTOR = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 488)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 489)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 490)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNUSED_FUNCTION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 491)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNUSED_LABEL = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 492)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNUSED_VALUE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 493)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNUSED_VARIABLE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 494)) ;
      temp_24.plusPlusAssignOperation (var_headerSearchPaths_21426  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 495)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SDKROOT = macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 496)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("COPY_PHASE_STRIP = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 497)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_ENABLE_OBJC_ARC = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 498)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_DISABLE_SAFETY_CHECKS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 499)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_ENABLE_BARE_SLASH_REGEX = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 500)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_ENABLE_EMIT_CONST_VALUES = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 501)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_ENFORCE_EXCLUSIVE_ACCESS = off")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 502)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_INSTALL_MODULE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 503)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_INSTALL_OBJC_HEADER = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 504)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_PRECOMPILE_BRIDGING_HEADER = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 505)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_REFLECTION_METADATA_LEVEL = all")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 506)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_STRICT_CONCURRENCY = complete")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 507)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_TREAT_WARNINGS_AS_ERRORS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 508)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_CONCISE_MAGIC_FILE = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 509)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_DEPRECATE_APPLICATION_MAIN = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 510)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_DISABLE_OUTWARD_ACTOR_ISOLATION = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 511)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_EXISTENTIAL_ANY = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 512)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_FORWARD_TRAILING_CLOSURES = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 513)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_GLOBAL_CONCURRENCY = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 514)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_IMPLICIT_OPEN_EXISTENTIALS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 515)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_IMPORT_OBJC_FORWARD_DECLS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 516)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_INFER_SENDABLE_FROM_CAPTURES = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 517)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_ISOLATED_DEFAULT_VALUES = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 518)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_REGION_BASED_ISOLATION = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 519)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_VERSION = 6.0")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 520)) ;
      GGS__5B_string_5D_ var_xcodeSettingList_21776 = temp_24 ;
      GalgasBool test_25 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_25) {
        test_25 = GGS_bool (ComparisonKind::notEqual, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_14439.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_25) {
          var_xcodeSettingList_21776.plusPlusAssignOperation (GGS_string ("MACOSX_DEPLOYMENT_TARGET = \"").add_operation (var_MACOSX_5F_DEPLOYMENT_5F_TARGET_14439, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 523)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 523))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 523)) ;
        }
      }
      {
      extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_21267, var_xcodeSettingList_21776, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 525)) ;
      }
      GGS__5B_string_5D_ var_buildCFileRefListForTool_25505 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
      GGS__5B_string_5D_ var_buildCppFileRefListForTool_25554 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
      GGS__5B_string_5D_ var_swift_5F_FileRefList_25605 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
      GGS__5B_string_5D_ var_frameworksFileRefList_25647 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
      GGS__5B_string_5D_ var_resourceFileBuildRefs_25693 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
      GalgasBool test_26 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_26) {
        test_26 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedSourceToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas4", 533)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_26) {
          GGS_string var_groupRef_26309 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Hand Coded Sources (Tool)"), GGS_string ("../sources/tool-sources/"), GGS_stringset::class_func_setWithStringArray (constinArgument_inHandCodedSourceToolFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 537)), var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_26309, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 534)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_21267, var_groupRef_26309, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 545)) ;
          }
        }
      }
      GGS__5B_string_5D_ var_outputGroupFileList_26446 = constinArgument_inToolCppFileList.add_operation (constinArgument_inToolHeaderFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 548)).add_operation (constinArgument_inAppProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 548)) ;
      GGS__5B_string_5D_ temp_27 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 549)) ;
      temp_27.plusPlusAssignOperation (function_gSwiftLexicalStyleFileName (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 549)) ;
      var_outputGroupFileList_26446.plusAssignOperation(constinArgument_inSwiftAppProductFileList.add_operation (temp_27, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 549)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 549)) ;
      GGS_string var_groupRef_27075 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Generated by GALGAS"), GGS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 552)).add_operation (GGS_string ("/output"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 552)), GGS_stringset::class_func_setWithStringArray (var_outputGroupFileList_26446  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 553)), var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 550)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_21267, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 561)) ;
      }
      GGS__5B_string_5D_ var_libpmReferenceGroupList_27170 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
      {
      GGS_stringset temp_28 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 576)) ;
      temp_28.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationConfiguration.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 568)) ;
      temp_28.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationConfiguration.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 569)) ;
      temp_28.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 570)) ;
      temp_28.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 571)) ;
      temp_28.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationSingleType.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 572)) ;
      temp_28.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationSingleType.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 573)) ;
      temp_28.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagram-node.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 574)) ;
      temp_28.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagram.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 575)) ;
      temp_28.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagram.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 576)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Binary Decision Diagrams"), GGS_string ("bdd"), temp_28, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 564)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 585)) ;
      {
      GGS_stringset temp_29 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 627)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-add.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 591)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-bit.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 592)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-chunk-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 593)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-constructors.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 594)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-conversions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 595)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-divide.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 596)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-logic-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 597)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-multiply.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 598)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 599)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-shifts.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 600)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-subtract.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 601)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-utilities.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 602)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 603)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 604)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-add.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 605)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-bit.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 606)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-chunk-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 607)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-constructors.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 608)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-conversions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 609)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-divide-naive.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 610)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-divide.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 611)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-logic-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 612)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-multiply.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 613)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 614)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-shifts.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 615)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-subtract.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 616)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-utilities.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 617)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 618)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("ChunkSelectSize.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 619)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("ChunkSharedArray.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 620)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("ChunkSharedArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 621)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("UInt128.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 622)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("UInt128.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 623)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("chunk-U16.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 624)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("chunk-U32.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 625)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("chunk-U64.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 626)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("chunk-U8.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 627)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Big Integers"), GGS_string ("big-integers"), temp_29, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 587)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 636)) ;
      {
      GGS_stringset temp_30 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 682)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("AbstractScanner.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 642)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("AllocationDebugView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 643)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("Application.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 644)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("ASCII.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 645)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("Color+RawRepresentable.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 646)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("CommandLineOption.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 647)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("common-command-line-options.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 648)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("CompilationIssue.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 649)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("CompileLogView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 650)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("CustomFont.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 651)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("CustomFontPicker.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 652)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("FocusedValues+extension.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 653)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("IdentifiableAttributedString.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 654)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("IndexingOperation.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 655)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("lexical-functions.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 656)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("LexicalToken.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 657)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("Notification+names.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 658)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("ProjectCompiler.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 659)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("ProjectDocument.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 660)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("ProjectDocumentView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 661)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("ProjectDocumentView+compile.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 662)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("ProjectDocumentView+populateContextualMenu.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 663)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("ProjectDocumentView+search.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 664)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("ProjectWindowManagerView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 665)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("RootDirectoryNode.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 666)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("ScrollSourceToLineNotification.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 667)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("SearchResultItem.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 668)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("SearchResultItemView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 669)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("SearchResultNode.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 670)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("SearchResultNodeView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 671)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("SharedTextModel.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 672)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("SourceFileNode.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 673)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("SourceFileNodeID.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 674)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("SourceFileNodeView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 675)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("String+LineAndColumn.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 676)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("String+LineRangeForLineNumber.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 677)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("String+LineStartAndEndLocations.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 678)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("TemplateDelimiter.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 679)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("TextSyntaxColoringView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 680)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("UInt64+displayString.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 681)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("UserInterfaceSetting.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 682)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Swift App"), GGS_string ("swiftui-app"), temp_30, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 638)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 691)) ;
      {
      GGS_stringset temp_31 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 699)) ;
      temp_31.plusPlusAssignOperation (GGS_string ("GenericArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 697)) ;
      temp_31.plusPlusAssignOperation (GGS_string ("GenericUniqueArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 698)) ;
      temp_31.plusPlusAssignOperation (GGS_string ("GenericUniqueMatrix.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 699)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Generic Arraies"), GGS_string ("generic-arraies"), temp_31, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 693)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 708)) ;
      {
      GGS_stringset temp_32 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 725)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("F_mainForLIBPM.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 714)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("F_mainForLIBPM.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 715)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("analyzeCommandLineOptions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 716)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("analyzeCommandLineOptions.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 717)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("AbstractCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 718)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("AbstractCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 719)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("BoolCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 720)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("BoolCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 721)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("UIntCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 722)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("UIntCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 723)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("StringCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 724)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("StringCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 725)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Command line Interface"), GGS_string ("command_line_interface"), temp_32, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 710)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 734)) ;
      {
      GGS_stringset temp_33 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 749)) ;
      temp_33.plusPlusAssignOperation (GGS_string ("FileManager.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 740)) ;
      temp_33.plusPlusAssignOperation (GGS_string ("FileManager.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 741)) ;
      temp_33.plusPlusAssignOperation (GGS_string ("AbstractFileHandle.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 742)) ;
      temp_33.plusPlusAssignOperation (GGS_string ("AbstractFileHandle.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 743)) ;
      temp_33.plusPlusAssignOperation (GGS_string ("BinaryFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 744)) ;
      temp_33.plusPlusAssignOperation (GGS_string ("BinaryFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 745)) ;
      temp_33.plusPlusAssignOperation (GGS_string ("TextFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 746)) ;
      temp_33.plusPlusAssignOperation (GGS_string ("TextFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 747)) ;
      temp_33.plusPlusAssignOperation (GGS_string ("HTMLFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 748)) ;
      temp_33.plusPlusAssignOperation (GGS_string ("HTMLFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 749)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("File"), GGS_string ("files"), temp_33, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 736)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 758)) ;
      {
      GGS_stringset temp_34 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 834)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AC_GALGAS_reference_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 764)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AC_GALGAS_reference_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 765)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AC_GALGAS_enumAssociatedValues.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 766)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AC_GALGAS_enumAssociatedValues.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 767)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AC_GALGAS_root.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 768)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AC_GALGAS_root.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 769)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AbstractPtrClass.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 770)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AbstractPtrClass.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 771)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AbstractStrongPtrClass.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 772)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AbstractStrongPtrClass.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 773)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("Compiler.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 774)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("Compiler.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 775)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("C_galgas_class_inspector.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 776)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("C_galgas_class_inspector.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 777)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("execution-mode.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 778)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("execution-mode.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 779)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("filewrapper-utilities.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 780)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("filewrapper-utilities.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 781)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("galgas-input-output.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 782)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("galgas-input-output.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 783)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GALGAS_print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 784)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GALGAS_print.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 785)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GALGAS_TypeDescriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 786)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GALGAS_TypeDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 787)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("IssueWithFixIt.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 788)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("IssueWithFixIt.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 789)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("Lexique-parsing.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 790)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("Lexique.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 791)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("Lexique.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 792)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("LocationInSource.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 793)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("LocationInSource.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 794)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("SourceTextInString.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 795)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("SourceTextInString.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 796)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("Enumerator_range.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 797)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("Enumerator_range.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 798)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("IndexingDictionary.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 799)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("IndexingDictionary.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 800)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("IssueDescriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 801)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("IssueDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 802)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("LexiqueIntrospection.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 803)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("LexiqueIntrospection.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 804)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("TemplateDelimiter.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 805)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_application.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 806)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_binaryset.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 807)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_bigint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 808)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_bool.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 809)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_char.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 810)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_data.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 811)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_f64.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 812)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_filewrapper.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 813)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_location.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 814)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_s32.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 815)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_s64.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 816)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_string.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 817)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_string-getters.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 818)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_stringset.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 819)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_timer.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 820)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_u8.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 821)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_u16.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 822)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_u32.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 823)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_u64.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 824)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("scanner_actions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 825)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("scanner_actions.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 826)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("ComparisonResult.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 827)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("ComparisonKind.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 828)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("EnumerationOrder.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 829)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GenericDictionary.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 830)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GenericMapRoot.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 831)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("SharedGenericPtrWithValueSemantics.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 832)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("SharedObject.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 833)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("SharedObject.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 834)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Galgas"), GGS_string ("galgas"), temp_34, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 760)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 843)) ;
      {
      GGS_stringset temp_35 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 854)) ;
      temp_35.plusPlusAssignOperation (GGS_string ("AbstractOutputStream.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 849)) ;
      temp_35.plusPlusAssignOperation (GGS_string ("AbstractOutputStream.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 850)) ;
      temp_35.plusPlusAssignOperation (GGS_string ("ConsoleOut.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 851)) ;
      temp_35.plusPlusAssignOperation (GGS_string ("ConsoleOut.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 852)) ;
      temp_35.plusPlusAssignOperation (GGS_string ("ColoredConsole.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 853)) ;
      temp_35.plusPlusAssignOperation (GGS_string ("ColoredConsole.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 854)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Streams"), GGS_string ("streams"), temp_35, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 845)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 863)) ;
      {
      GGS_stringset temp_36 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 875)) ;
      temp_36.plusPlusAssignOperation (GGS_string ("String-class-getters.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 869)) ;
      temp_36.plusPlusAssignOperation (GGS_string ("String-class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 870)) ;
      temp_36.plusPlusAssignOperation (GGS_string ("String-class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 871)) ;
      temp_36.plusPlusAssignOperation (GGS_string ("string_encodings.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 872)) ;
      temp_36.plusPlusAssignOperation (GGS_string ("unicode-data.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 873)) ;
      temp_36.plusPlusAssignOperation (GGS_string ("utf32.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 874)) ;
      temp_36.plusPlusAssignOperation (GGS_string ("utf32.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 875)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Strings"), GGS_string ("strings"), temp_36, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 865)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 884)) ;
      {
      GGS_stringset temp_37 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 893)) ;
      temp_37.plusPlusAssignOperation (GGS_string ("DateTime.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 890)) ;
      temp_37.plusPlusAssignOperation (GGS_string ("DateTime.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 891)) ;
      temp_37.plusPlusAssignOperation (GGS_string ("Timer.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 892)) ;
      temp_37.plusPlusAssignOperation (GGS_string ("Timer.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 893)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Time"), GGS_string ("time"), temp_37, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 886)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 902)) ;
      {
      GGS_stringset temp_38 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 937)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("basic-allocation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 908)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("basic-allocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 909)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("U8Data.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 910)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("U8Data.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 911)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("DirectedGraph.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 912)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("DirectedGraph.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 913)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("PrologueEpilogue.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 914)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("PrologueEpilogue.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 915)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("UInt32Set.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 916)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("UInt32Set.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 917)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("cpp-allocation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 918)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("cpp-allocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 919)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("F_DisplayException.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 920)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("F_DisplayException.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 921)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("F_GetPrime.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 922)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("F_GetPrime.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 923)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("M_machine.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 924)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("M_SourceLocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 925)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("md5.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 926)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("md5.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 927)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("SHA256.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 928)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("SHA256.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 929)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("macroAssert.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 930)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("macroAssert.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 931)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("MF_MemoryControl.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 932)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("MF_MemoryControl.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 933)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("switch-fallthrough.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 934)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("TF_Swap.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 935)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("galgas-random.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 936)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("galgas-random.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 937)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Utilities"), GGS_string ("utilities"), temp_38, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 904)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 946)) ;
      GGS_string var_libpmGroupRef_39851 ;
      {
      extensionSetter_addGroup (var_xcodeProject_21267, GGS_string ("libpm"), GGS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 948)).add_operation (GGS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 948)), var_libpmReferenceGroupList_27170, var_libpmGroupRef_39851, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 948)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_21267, var_libpmGroupRef_39851, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 949)) ;
      }
      GGS_string var_resourcesGroupRef_40347 ;
      {
      GGS_stringset temp_39 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 954)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("Info.plist")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 954)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Resources"), GGS_string ("."), temp_39, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_resourcesGroupRef_40347, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 951)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_21267, var_resourcesGroupRef_40347, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 962)) ;
      }
      GGS_string var_userResourcesGroupRef_40906 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("User Resources"), GGS_string ("userResources"), GGS_stringset::class_func_setWithStringArray (var_resourceFiles_20900  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 967)), var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_userResourcesGroupRef_40906, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 964)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_21267, var_userResourcesGroupRef_40906, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 975)) ;
      }
      GGS_string var_frameworkGroupRef_41520 ;
      {
      GGS_stringset temp_40 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 982)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("AppKit.framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 981)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("Cocoa.framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 982)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Frameworks for App"), GGS_string ("/System/Library/Frameworks"), temp_40, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_frameworkGroupRef_41520, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 977)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_21267, var_frameworkGroupRef_41520, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 991)) ;
      }
      GGS__5B_string_5D_ var_codeSigningSettingList_41663 ;
      GalgasBool test_41 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_41) {
        test_41 = GGS_bool (ComparisonKind::equal, var_macCodeSign_14195.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_41) {
          GGS__5B_string_5D_ temp_42 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 995)) ;
          temp_42.plusPlusAssignOperation (GGS_string ("CODE_SIGN_IDENTITY = \"-\"")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 995)) ;
          var_codeSigningSettingList_41663 = temp_42 ;
        }
      }
      if (GalgasBool::boolFalse == test_41) {
        GGS__5B_string_5D_ var_components_41804 = var_macCodeSign_14195.readProperty_string ().getter_componentsSeparatedByString (GGS_string (":") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 997)) ;
        GalgasBool test_43 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_43) {
          test_43 = GGS_bool (ComparisonKind::notEqual, var_components_41804.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas4", 998)).objectCompare (GGS_u_33__32_ (uint32_t (2U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_43) {
            GenericArray <FixItDescription> fixItArray44 ;
            inCompiler->emitSemanticError (var_macCodeSign_14195.readProperty_location (), GGS_string ("the %macCodeSign attribute associated string should be \"key:value\""), fixItArray44  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 999)) ;
            var_codeSigningSettingList_41663.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_43) {
          GalgasBool test_45 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_45) {
            test_45 = GGS_bool (ComparisonKind::equal, var_components_41804.getter_first (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1000)).objectCompare (GGS_string ("MacDeveloper"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_45) {
              GGS__5B_string_5D_ temp_46 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1003)) ;
              temp_46.plusPlusAssignOperation (GGS_string ("CODE_SIGN_IDENTITY = \"Mac Developer\"")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1002)) ;
              temp_46.plusPlusAssignOperation (GGS_string ("DEVELOPMENT_TEAM = \"").add_operation (var_components_41804.readSubscript__3F_ (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1003)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1003))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1003)) ;
              var_codeSigningSettingList_41663 = temp_46 ;
            }
          }
          if (GalgasBool::boolFalse == test_45) {
            GalgasBool test_47 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_47) {
              test_47 = GGS_bool (ComparisonKind::equal, var_components_41804.getter_first (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1005)).objectCompare (GGS_string ("Certificate"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_47) {
                GGS__5B_string_5D_ temp_48 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1006)) ;
                temp_48.plusPlusAssignOperation (GGS_string ("CODE_SIGN_IDENTITY = \"").add_operation (var_components_41804.readSubscript__3F_ (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1006)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1006))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1006)) ;
                var_codeSigningSettingList_41663 = temp_48 ;
              }
            }
            if (GalgasBool::boolFalse == test_47) {
              GenericArray <FixItDescription> fixItArray49 ;
              inCompiler->emitSemanticError (var_macCodeSign_14195.readProperty_location (), GGS_string ("the %macCodeSign attribute string is \"key:value\", but key should be 'MacDeveloper' or 'Certificate'"), fixItArray49  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1008)) ;
              var_codeSigningSettingList_41663.drop () ; // Release error dropped variable
            }
          }
        }
      }
      GGS__5B_string_5D_ temp_50 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1016)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("GCC_OPTIMIZATION_LEVEL = 2")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1013)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = (DO_NOT_GENERATE_CHECKINGS)")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1014)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNUSED_PARAMETER = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1015)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("PRODUCT_BUNDLE_IDENTIFIER = \"").add_operation (var_applicationBundleBase_19386, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1016)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1016)).add_operation (var_inTargetName_15531, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1016)).add_operation (GGS_string (".tool\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1016))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1016)) ;
      GGS__5B_string_5D_ var_settingList_42618 = temp_50.add_operation (var_codeSigningSettingList_41663, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1017)) ;
      GGS_string var_releaseTargetRef_43187 ;
      GGS_string var_releaseProductFileRef_43231 ;
      {
      GGS__5B_string_5D_ temp_51 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1022)) ;
      extensionSetter_addToolTarget (var_xcodeProject_21267, var_inTargetName_15531.add_operation (GGS_string (" tool"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1019)), var_inTargetName_15531, var_buildCFileRefListForTool_25505.add_operation (var_buildCppFileRefListForTool_25554, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1021)), temp_51, var_settingList_42618, var_releaseTargetRef_43187, var_releaseProductFileRef_43231, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1018)) ;
      }
      GGS__5B_string_5D_ temp_52 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1033)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("GCC_OPTIMIZATION_LEVEL = 0")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1029)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1030)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1031)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNUSED_PARAMETER = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1032)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("PRODUCT_BUNDLE_IDENTIFIER = \"").add_operation (var_applicationBundleBase_19386, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1033)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1033)).add_operation (var_inTargetName_15531, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1033)).add_operation (GGS_string (".tooldebug\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1033))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1033)) ;
      var_settingList_42618 = temp_52.add_operation (var_codeSigningSettingList_41663, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1034)) ;
      GGS_string var_debugTargetRef_43905 ;
      GGS_string var_debugProductFileRef_43947 ;
      {
      GGS__5B_string_5D_ temp_53 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1039)) ;
      extensionSetter_addToolTarget (var_xcodeProject_21267, var_inTargetName_15531.add_operation (GGS_string (" tool debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1036)), var_inTargetName_15531.add_operation (GGS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1037)), var_buildCFileRefListForTool_25505.add_operation (var_buildCppFileRefListForTool_25554, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1038)), temp_53, var_settingList_42618, var_debugTargetRef_43905, var_debugProductFileRef_43947, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1035)) ;
      }
      GGS__5B_string_5D_ temp_54 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1047)) ;
      temp_54.plusPlusAssignOperation (GGS_string ("GCC_OPTIMIZATION_LEVEL = 0")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1046)) ;
      temp_54.plusPlusAssignOperation (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1047)) ;
      GGS__5B_string_5D_ var_cocoaConfigurationSettingList_44016 = temp_54.add_operation (var_codeSigningSettingList_41663, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1048)) ;
      {
      GGS__5B_string_5D_ temp_55 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1056)) ;
      temp_55.plusPlusAssignOperation (var_releaseTargetRef_43187  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1056)) ;
      temp_55.plusPlusAssignOperation (var_debugTargetRef_43905  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1056)) ;
      GGS__5B__32_string_5D_ temp_56 = GGS__5B__32_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1057)) ;
      temp_56.plusPlusAssignOperation (GGS__32_string::init_21__21_ (var_releaseProductFileRef_43231, var_inTargetName_15531, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1057)) ;
      temp_56.plusPlusAssignOperation (GGS__32_string::init_21__21_ (var_debugProductFileRef_43947, var_inTargetName_15531.add_operation (GGS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1057)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1057)) ;
      GGS_string joker_44695 ; // Joker input parameter
      extensionSetter_addAppTarget (var_xcodeProject_21267, var_inTargetName_15531.add_operation (GGS_string (" IDE"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1050)), var_inTargetName_15531.getter_capitalizingFirstCharacter (SOURCE_FILE ("galgasTargetGeneration.galgas4", 1051)).add_operation (GGS_string (" IDE"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1051)), var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_cocoaConfigurationSettingList_44016, temp_55, temp_56, joker_44695, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1049)) ;
      }
      extensionMethod_generateAtPath (var_xcodeProject_21267, var_dir_19284.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1062)).add_operation (var_inTargetName_15531, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1062)).add_operation (GGS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1062)), var_newIntermediateFilePath_21017, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1061)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalSendTerminalByDefaultAST checkLexicalDefaultAction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSendTerminalByDefaultAST::method_checkLexicalDefaultAction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  GGS__5B_lexicalSentValue_5D_ joker_8010 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mDefaultSentTerminal (), joker_8010, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 195)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalErrorByDefaultAST checkLexicalDefaultAction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorByDefaultAST::method_checkLexicalDefaultAction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_lexicalErrorByDefaultAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GGS_bool (true), temp_0.readProperty_mDefaultErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 203)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalOrExpressionAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalOrExpressionAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalOrExpressionAST temp_0 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 212)) ;
  const GGS_lexicalOrExpressionAST temp_1 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 213)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalCharacterMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalCharacterSetMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterSetMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_lexicalCharacterSetMatchAST temp_1 = this ;
    test_0 = ioArgument_ioLexiqueAnalysisContext.readProperty_mUnicodeTestFunctions ().getter_contains (temp_1.readProperty_mCharacterSetName ().readProperty_string () COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 227)).operator_not (SOURCE_FILE ("lexiqueCompilation.galgas4", 227)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCharacterSetMatchAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      appendFixItActions (fixItArray3, EnumFixItKind::fixItReplace, ioArgument_ioLexiqueAnalysisContext.readProperty_mUnicodeTestFunctions ()) ;
      inCompiler->emitSemanticError (temp_2.readProperty_mCharacterSetName ().readProperty_location (), GGS_string ("undefined test function"), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 228)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalCharacterIntervalMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterIntervalMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalStringMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalStringMatchAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (temp_0.readProperty_mString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 242)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalStringNotMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringNotMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalStringNotMatchAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (temp_0.readProperty_mString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 249)) ;
  {
  const GGS_lexicalStringNotMatchAST temp_1 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GGS_bool (true), temp_1.readProperty_mErrorMessage ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 250)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalAttributeInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                     const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum var_attributeLexicalType_11095 ;
  const GGS_lexicalAttributeInputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_11095, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 261)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_attributeLexicalType_11095.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalAttributeInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GGS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_11095, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 268)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 267)).add_operation (GGS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 268)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 270)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 269)).add_operation (GGS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 270)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 267)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalCharacterInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                                     const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas4", 282)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCharacterInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mCharacter ().readProperty_location (), GGS_string ("type error, a literal character has @char").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 283)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 285)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 284)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 285)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 283)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalUnsignedInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalUnsignedInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                                    const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas4", 297)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalUnsignedInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mUnsigned ().readProperty_location (), GGS_string ("type error, a literal character has @u32").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 298)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 300)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 299)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 300)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 298)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalCurrentCharacterInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCurrentCharacterInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                                            const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas4", 312)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCurrentCharacterInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("type error, current character value has @char").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 313)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 315)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 314)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 315)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 313)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalFunctionInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                    const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_lexicalFunctionFormalArgumentAST_5D_ var_lexicalFormalTypeList_13748 ;
  GGS_lexicalTypeEnum var_returnedLexicalFormalType_13780 ;
  GGS_string var_replacementFunctionName_13816 ;
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  GGS_bool joker_13845 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_lexicalFormalTypeList_13748, var_returnedLexicalFormalType_13780, var_replacementFunctionName_13816, joker_13845, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 327)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_replacementFunctionName_13816.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalFunctionInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mFunctionName ().readProperty_location (), GGS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_13816, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 336)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 336)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 336)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_returnedLexicalFormalType_13780.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_lexicalFunctionInputArgumentAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mFunctionName ().readProperty_location (), GGS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_13780, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 341)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 340)).add_operation (GGS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 341)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 343)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 342)).add_operation (GGS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 343)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 340)) ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_lexicalFunctionInputArgumentAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, var_lexicalFormalTypeList_13748.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 348)).objectCompare (temp_8.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 348)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_lexicalFunctionInputArgumentAST temp_9 = this ;
      const GGS_lexicalFunctionInputArgumentAST temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this lexical function names ").add_operation (temp_10.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 350)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas4", 350)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 349)).add_operation (GGS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 350)).add_operation (var_lexicalFormalTypeList_13748.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 352)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas4", 352)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 351)).add_operation (GGS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 352)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 349)) ;
    }
  }
  const GGS_lexicalFunctionInputArgumentAST temp_12 = this ;
  UpEnumerator__5B_lexicalFunctionFormalArgumentAST_5D_ enumerator_14828 (var_lexicalFormalTypeList_13748) ;
  UpEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ enumerator_14866 (temp_12.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_14828.hasCurrentObject () && enumerator_14866.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_14866.current (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_14828.current (HERE).readProperty_mLexicalType (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 357)) ;
    enumerator_14828.gotoNextObject () ;
    enumerator_14866.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalAttributeInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                    const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum var_attributeLexicalType_15597 ;
  const GGS_lexicalAttributeInputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_15597, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 372)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_attributeLexicalType_15597.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalAttributeInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GGS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_15597, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 379)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 378)).add_operation (GGS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 379)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 381)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 380)).add_operation (GGS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 381)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 378)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                                    const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas4", 393)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCharacterInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mCharacter ().readProperty_location (), GGS_string ("type error, a literal character has @char").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 394)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 396)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 395)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 396)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 394)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalUnsignedInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalUnsignedInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                                   const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas4", 408)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalUnsignedInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mUnsigned ().readProperty_location (), GGS_string ("type error, a literal unsigned value has @u32").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 409)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 411)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 410)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 411)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 409)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalCurrentCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCurrentCharacterInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                                           const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas4", 423)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCurrentCharacterInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("type error, current character value has @char").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 424)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 426)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 425)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 426)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 424)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalFunctionInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                   const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_lexicalFunctionFormalArgumentAST_5D_ var_lexicalFormalTypeList_18254 ;
  GGS_lexicalTypeEnum var_returnedLexicalFormalType_18286 ;
  GGS_string var_replacementFunctionName_18322 ;
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  GGS_bool joker_18351 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_lexicalFormalTypeList_18254, var_returnedLexicalFormalType_18286, var_replacementFunctionName_18322, joker_18351, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 438)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_replacementFunctionName_18322.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalFunctionInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mFunctionName ().readProperty_location (), GGS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_18322, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 447)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 447)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 447)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_returnedLexicalFormalType_18286.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_lexicalFunctionInputArgumentAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mFunctionName ().readProperty_location (), GGS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_18286, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 452)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 451)).add_operation (GGS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 452)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 454)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 453)).add_operation (GGS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 454)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 451)) ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_lexicalFunctionInputArgumentAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, var_lexicalFormalTypeList_18254.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 459)).objectCompare (temp_8.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 459)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_lexicalFunctionInputArgumentAST temp_9 = this ;
      const GGS_lexicalFunctionInputArgumentAST temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this lexical function names ").add_operation (temp_10.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 461)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas4", 461)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 460)).add_operation (GGS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 461)).add_operation (var_lexicalFormalTypeList_18254.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 463)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas4", 463)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 462)).add_operation (GGS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 463)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 460)) ;
    }
  }
  const GGS_lexicalFunctionInputArgumentAST temp_12 = this ;
  UpEnumerator__5B_lexicalFunctionFormalArgumentAST_5D_ enumerator_19335 (var_lexicalFormalTypeList_18254) ;
  UpEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ enumerator_19373 (temp_12.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_19335.hasCurrentObject () && enumerator_19373.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_19373.current (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_19335.current (HERE).readProperty_mLexicalType (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 468)) ;
    enumerator_19335.gotoNextObject () ;
    enumerator_19373.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalImplicitRuleAST checkLexicalRule'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalImplicitRuleAST::method_checkLexicalRule (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalImplicitRuleAST temp_0 = this ;
  GGS_lexicalExplicitTokenListMap joker_19967 ; // Joker input parameter
  GGS_sortedTokenArray joker_19971 ; // Joker input parameter
  GGS_bool joker_19975 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_19967, joker_19971, joker_19975, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 481)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalExplicitRuleAST checkLexicalRule'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalExplicitRuleAST::method_checkLexicalRule (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 488)) ;
  GGS_lexicalTagMap var_tagMap_20300 = GGS_lexicalTagMap::init (inCompiler COMMA_HERE) ;
  const GGS_lexicalExplicitRuleAST temp_1 = this ;
  UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_20333 (temp_1.readProperty_mInstructionList ()) ;
  while (enumerator_20333.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_20333.current (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_20300, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 491)) ;
    enumerator_20333.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Function 'transformLabelMap'
//
//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis function_transformLabelMap (const GGS__5B_nonTerminalLabelAST_5D_ & constinArgument_inLabels,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ; // Returned variable
  result = GGS_nonterminalSymbolLabelMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_nonTerminalLabelAST_5D_ enumerator_1527 (constinArgument_inLabels) ;
  while (enumerator_1527.hasCurrentObject ()) {
    GGS__5B_signatureElementForGrammarAnalysis_5D_ var_formalParametersList_1585 = GGS__5B_signatureElementForGrammarAnalysis_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_formalParameterAST_5D_ enumerator_1640 (enumerator_1527.current (HERE).readProperty_mFormalArgumentList ()) ;
    while (enumerator_1640.hasCurrentObject ()) {
      var_formalParametersList_1585.plusPlusAssignOperation (GGS_signatureElementForGrammarAnalysis::init_21__21_ (enumerator_1640.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_1640.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 33)) ;
      enumerator_1640.gotoNextObject () ;
    }
    {
    result.setter_insertKey (enumerator_1527.current (HERE).readProperty_mLabelName (), var_formalParametersList_1585, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 35)) ;
    }
    enumerator_1527.gotoNextObject () ;
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkLabelMap????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkLabelMap_3F__3F__3F__3F_ (const GGS_location constinArgument_inNonTerminalLocation,
                                            const GGS__5B_nonTerminalLabelAST_5D_ constinArgument_inLabels,
                                            const GGS_location constinArgument_inOriginalNonTerminalLocation,
                                            const GGS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_labelStringSet_2216 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_nonTerminalLabelAST_5D_ enumerator_2253 (constinArgument_inLabels) ;
  while (enumerator_2253.hasCurrentObject ()) {
    var_labelStringSet_2216.plusPlusAssignOperation (enumerator_2253.current (HERE).readProperty_mLabelName ().readProperty_string ()  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 49)) ;
    GGS__5B_signatureElementForGrammarAnalysis_5D_ var_formalParametersList_2398 ;
    constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.method_searchKey (enumerator_2253.current (HERE).readProperty_mLabelName (), var_formalParametersList_2398, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 50)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_2253.current (HERE).readProperty_mFormalArgumentList ().getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 51)).objectCompare (var_formalParametersList_2398.getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 51)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, enumerator_2253.current (HERE).readProperty_mFormalArgumentList ().getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 54)).objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = GGS_string ("s") ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_string::makeEmptyString () ;
        }
        GGS_string temp_3 ;
        const GalgasBool test_4 = GGS_bool (ComparisonKind::greaterThan, var_formalParametersList_2398.getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 58)).objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          temp_3 = GGS_string ("s") ;
        }else if (GalgasBool::boolFalse == test_4) {
          temp_3 = GGS_string::makeEmptyString () ;
        }
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_2253.current (HERE).readProperty_mLabelName ().readProperty_location (), enumerator_2253.current (HERE).readProperty_mFormalArgumentList ().getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 52)).getter_string (SOURCE_FILE ("grammarCompilation.galgas4", 52)).add_operation (GGS_string (" formal parameter"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 52)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 53)).add_operation (GGS_string (" declared here, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 54)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2253.current (HERE).readProperty_mLabelName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 56)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 56)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 55)).add_operation (GGS_string (" names "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 56)).add_operation (var_formalParametersList_2398.getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 57)).getter_string (SOURCE_FILE ("grammarCompilation.galgas4", 57)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 57)).add_operation (GGS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 57)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 57)), fixItArray5  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 52)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      UpEnumerator__5B_formalParameterAST_5D_ enumerator_3020 (enumerator_2253.current (HERE).readProperty_mFormalArgumentList ()) ;
      UpEnumerator__5B_signatureElementForGrammarAnalysis_5D_ enumerator_3072 (var_formalParametersList_2398) ;
      while (enumerator_3020.hasCurrentObject () && enumerator_3072.hasCurrentObject ()) {
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_3072.current (HERE).readProperty_mFormalArgumentPassingModeForGrammarAnalysis ().objectCompare (enumerator_3020.current (HERE).readProperty_mFormalArgumentPassingMode ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GenericArray <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (enumerator_3072.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis ().readProperty_location (), GGS_string (" this formal parameter is declared with '").add_operation (extensionGetter_string (enumerator_3072.current (HERE).readProperty_mFormalArgumentPassingModeForGrammarAnalysis (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 64)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 64)).add_operation (GGS_string ("' passing mode, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 65)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2253.current (HERE).readProperty_mLabelName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 67)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 67)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 66)).add_operation (GGS_string (" is declared with '"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 67)).add_operation (extensionGetter_string (enumerator_3020.current (HERE).readProperty_mFormalArgumentPassingMode (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 68)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 68)).add_operation (GGS_string ("' passing mode"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 68)), fixItArray7  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 63)) ;
          }
        }
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_3072.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis ().readProperty_string ().objectCompare (enumerator_3020.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GenericArray <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_3072.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis ().readProperty_location (), GGS_string (" this formal parameter is declared of '@").add_operation (enumerator_3072.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 73)).add_operation (GGS_string ("' type, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 74)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2253.current (HERE).readProperty_mLabelName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 76)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 76)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 75)).add_operation (GGS_string (" is declared with '@"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 76)).add_operation (enumerator_3020.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 77)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 77)), fixItArray9  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 72)) ;
          }
        }
        enumerator_3020.gotoNextObject () ;
        enumerator_3072.gotoNextObject () ;
      }
    }
    enumerator_2253.gotoNextObject () ;
  }
  UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_4401 (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis) ;
  while (enumerator_4401.hasCurrentObject ()) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = var_labelStringSet_2216.getter_contains (enumerator_4401.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 85)).operator_not (SOURCE_FILE ("grammarCompilation.galgas4", 85)).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalLocation, GGS_string ("this non terminal does not declare the '").add_operation (enumerator_4401.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 87)).add_operation (GGS_string ("' label, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 87)).add_operation (constinArgument_inOriginalNonTerminalLocation.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 88)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 87)).add_operation (GGS_string (" does"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 88)), fixItArray11  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 86)) ;
      }
    }
    enumerator_4401.gotoNextObject () ;
  }
}


