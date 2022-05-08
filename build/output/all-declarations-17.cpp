#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-17.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeGrammarInstructionSDT'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT> gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeGrammarInstructionSDT (const int32_t inClassIndex,
                                                        extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT inMethod) {
  gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT (void) {
  gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT (NULL,
                                                                                                                   freeExtensionMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                       const GALGAS_analysisContext constin_inAnalysisContext,
                                                       const GALGAS_bool constin_inHasTranslateFeature,
                                                       const GALGAS_string constin_inSyntaxDirectedTranslationResultVarName,
                                                       GALGAS_stringlist & io_ioAssignementList,
                                                       GALGAS_localVarManager & io_ioVariableMap,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT.count ()) {
      f = gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT.count ()) {
          f = gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAnalysisContext, constin_inHasTranslateFeature, constin_inSyntaxDirectedTranslationResultVarName, io_ioAssignementList, io_ioVariableMap, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager::GALGAS_localVarManager (void) :
mProperty_mCurrentManager (),
mProperty_mOverridenManagers () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager::~ GALGAS_localVarManager (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager::GALGAS_localVarManager (const GALGAS_currentVarManager & inOperand0,
                                                const GALGAS_openedOverrideList & inOperand1) :
mProperty_mCurrentManager (inOperand0),
mProperty_mOverridenManagers (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager GALGAS_localVarManager::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_localVarManager (GALGAS_currentVarManager::constructor_default (HERE),
                                 GALGAS_openedOverrideList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager GALGAS_localVarManager::constructor_new (const GALGAS_currentVarManager & inOperand0,
                                                                const GALGAS_openedOverrideList & inOperand1 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_localVarManager result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_localVarManager (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_localVarManager::objectCompare (const GALGAS_localVarManager & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mCurrentManager.objectCompare (inOperand.mProperty_mCurrentManager) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOverridenManagers.objectCompare (inOperand.mProperty_mOverridenManagers) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_localVarManager::isValid (void) const {
  return mProperty_mCurrentManager.isValid () && mProperty_mOverridenManagers.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::drop (void) {
  mProperty_mCurrentManager.drop () ;
  mProperty_mOverridenManagers.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @localVarManager:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mCurrentManager.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOverridenManagers.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@localVarManager type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVarManager ("localVarManager",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVarManager::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarManager ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVarManager::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVarManager (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarManager GALGAS_localVarManager::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_localVarManager result ;
  const GALGAS_localVarManager * p = (const GALGAS_localVarManager *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVarManager *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarManager", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInitializedLocalVariable'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalVariable (GALGAS_localVarManager & ioObject,
                                                     const GALGAS_lstring constinArgument_inVarName,
                                                     const GALGAS_bool constinArgument_inWarnsIfNotMutated,
                                                     const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                     const GALGAS_string constinArgument_inCppName,
                                                     const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  GALGAS_localVariableAttributes temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inWarnsIfNotMutated.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_localVariableAttributes::constructor_none (SOURCE_FILE ("variable-manager.galgas", 46)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 46)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 46)) COMMA_SOURCE_FILE ("variable-manager.galgas", 46)) ;
  }
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, temp_0, GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 41)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertUsedLocalConstant'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertUsedLocalConstant (GALGAS_localVarManager & ioObject,
                                              const GALGAS_lstring constinArgument_inVarName,
                                              const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                              const GALGAS_string constinArgument_inCppName,
                                              const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 62)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 62)) COMMA_SOURCE_FILE ("variable-manager.galgas", 62)), GALGAS_localVarValuation::constructor_read (SOURCE_FILE ("variable-manager.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 57)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInitializedLocalConstant'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalConstant (GALGAS_localVarManager & ioObject,
                                                     const GALGAS_lstring constinArgument_inVarName,
                                                     const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                     const GALGAS_string constinArgument_inCppName,
                                                     const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 78)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 78)) COMMA_SOURCE_FILE ("variable-manager.galgas", 78)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 73)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertDeclaredLocalConstant'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertDeclaredLocalConstant (GALGAS_localVarManager & ioObject,
                                                  const GALGAS_lstring constinArgument_inVarName,
                                                  const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                  const GALGAS_string constinArgument_inCppName,
                                                  const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 94)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 94)) COMMA_SOURCE_FILE ("variable-manager.galgas", 94)), GALGAS_localVarValuation::constructor_declared (GALGAS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 89)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputFormalArgumentDeclaredAsUnused'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgumentDeclaredAsUnused (GALGAS_localVarManager & ioObject,
                                                                const GALGAS_lstring constinArgument_inVarName,
                                                                const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                                const GALGAS_string constinArgument_inCppName,
                                                                const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 110)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 110)) COMMA_SOURCE_FILE ("variable-manager.galgas", 110)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 105)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgument (GALGAS_localVarManager & ioObject,
                                                const GALGAS_lstring constinArgument_inVarName,
                                                const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                const GALGAS_string constinArgument_inCppName,
                                                const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 126)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 126)) COMMA_SOURCE_FILE ("variable-manager.galgas", 126)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 121)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertOutputFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertOutputFormalArgument (GALGAS_localVarManager & ioObject,
                                                 const GALGAS_lstring constinArgument_inVarName,
                                                 const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                 const GALGAS_string constinArgument_inCppName,
                                                 const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_rejectDeclaredStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 142)).operator_or (GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 142)) COMMA_SOURCE_FILE ("variable-manager.galgas", 142)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 142)) COMMA_SOURCE_FILE ("variable-manager.galgas", 142)), GALGAS_localVarValuation::constructor_declared (GALGAS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 137)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputOutputFormalArgumentDeclaredAsUnused'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (GALGAS_localVarManager & ioObject,
                                                                      const GALGAS_lstring constinArgument_inVarName,
                                                                      const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                                      const GALGAS_string constinArgument_inCppName,
                                                                      const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 158)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 153)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputOutputFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgument (GALGAS_localVarManager & ioObject,
                                                      const GALGAS_lstring constinArgument_inVarName,
                                                      const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                      const GALGAS_string constinArgument_inCppName,
                                                      const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 174)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 174)) COMMA_SOURCE_FILE ("variable-manager.galgas", 174)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 169)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertConstantInputFormalArgumentDeclaredAsUnused'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (GALGAS_localVarManager & ioObject,
                                                                        const GALGAS_lstring constinArgument_inVarName,
                                                                        const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                                        const GALGAS_string constinArgument_inCppName,
                                                                        const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 190)).operator_or (GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 190)) COMMA_SOURCE_FILE ("variable-manager.galgas", 190)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 190)) COMMA_SOURCE_FILE ("variable-manager.galgas", 190)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 185)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertConstantInputFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgument (GALGAS_localVarManager & ioObject,
                                                        const GALGAS_lstring constinArgument_inVarName,
                                                        const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                        const GALGAS_string constinArgument_inCppName,
                                                        const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 206)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 206)) COMMA_SOURCE_FILE ("variable-manager.galgas", 206)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 201)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertNonMutableProperty'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertNonMutableProperty (GALGAS_localVarManager & ioObject,
                                               const GALGAS_lstring constinArgument_inVarName,
                                               const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                               const GALGAS_string constinArgument_inCppName,
                                               const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 222)).operator_or (GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 222)) COMMA_SOURCE_FILE ("variable-manager.galgas", 222)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 222)) COMMA_SOURCE_FILE ("variable-manager.galgas", 222)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 217)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertMutableProperty'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertMutableProperty (GALGAS_localVarManager & ioObject,
                                            const GALGAS_lstring constinArgument_inVarName,
                                            const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                            const GALGAS_string constinArgument_inCppName,
                                            const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::constructor_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 238)).operator_or (GALGAS_localVariableAttributes::constructor_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 238)) COMMA_SOURCE_FILE ("variable-manager.galgas", 238)), GALGAS_localVarValuation::constructor_initialized (SOURCE_FILE ("variable-manager.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 233)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager openOverrideForSelectBlock'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForSelectBlock (GALGAS_localVarManager & ioObject,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVarManager temp_0 = ioObject ;
  ioObject.mProperty_mOverridenManagers.addAssign_operation (GALGAS_overrideKind::constructor_selectOverrideFirstBranch (temp_0.readProperty_mCurrentManager ()  COMMA_SOURCE_FILE ("variable-manager.galgas", 248))  COMMA_SOURCE_FILE ("variable-manager.galgas", 248)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager openOverrideForRepeatBlock'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForRepeatBlock (GALGAS_localVarManager & ioObject,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mOverridenManagers.addAssign_operation (GALGAS_overrideKind::constructor_repeatOverride (SOURCE_FILE ("variable-manager.galgas", 254))  COMMA_SOURCE_FILE ("variable-manager.galgas", 254)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager closeOverride'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_closeOverride (GALGAS_localVarManager & ioObject,
                                    const GALGAS_location /* constinArgument_inEndOfBranchLocation */,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_overrideKind var_savedManager_12053 ;
  {
  ioObject.mProperty_mOverridenManagers.setter_popLast (var_savedManager_12053, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 260)) ;
  }
  switch (var_savedManager_12053.enumValue ()) {
  case GALGAS_overrideKind::kNotBuilt:
    break ;
  case GALGAS_overrideKind::kEnum_selectOverrideFirstBranch:
    {
      const cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch * extractPtr_12152 = (const cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch *) (var_savedManager_12053.unsafePointer ()) ;
      const GALGAS_currentVarManager extractedValue_12149_savedManager = extractPtr_12152->mAssociatedValue0 ;
    }
    break ;
  case GALGAS_overrideKind::kEnum_selectOverrideNextBranches:
    {
      const cEnumAssociatedValues_overrideKind_selectOverrideNextBranches * extractPtr_12309 = (const cEnumAssociatedValues_overrideKind_selectOverrideNextBranches *) (var_savedManager_12053.unsafePointer ()) ;
      const GALGAS_currentVarManager extractedValue_12226_savedManager = extractPtr_12309->mAssociatedValue0 ;
      const GALGAS_currentVarManager extractedValue_12262_referenceManager = extractPtr_12309->mAssociatedValue1 ;
      ioObject.mProperty_mCurrentManager = extractedValue_12262_referenceManager ;
    }
    break ;
  case GALGAS_overrideKind::kEnum_repeatOverride:
    {
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager openBranch'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (GALGAS_localVarManager & ioObject,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_openScope (ioObject.mProperty_mCurrentManager, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 272)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager closeBranch'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_closeBranch (GALGAS_localVarManager & ioObject,
                                  const GALGAS_location constinArgument_inEndOfBranchLocation,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_closeScope (ioObject.mProperty_mCurrentManager, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 278)) ;
  }
  GALGAS_overrideKind var_savedManager_12859 ;
  {
  ioObject.mProperty_mOverridenManagers.setter_popLast (var_savedManager_12859, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 280)) ;
  }
  switch (var_savedManager_12859.enumValue ()) {
  case GALGAS_overrideKind::kNotBuilt:
    break ;
  case GALGAS_overrideKind::kEnum_selectOverrideFirstBranch:
    {
      const cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch * extractPtr_13121 = (const cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch *) (var_savedManager_12859.unsafePointer ()) ;
      const GALGAS_currentVarManager extractedValue_12948_savedManager = extractPtr_13121->mAssociatedValue0 ;
      const GALGAS_localVarManager temp_0 = ioObject ;
      ioObject.mProperty_mOverridenManagers.addAssign_operation (GALGAS_overrideKind::constructor_selectOverrideNextBranches (extractedValue_12948_savedManager, temp_0.readProperty_mCurrentManager ()  COMMA_SOURCE_FILE ("variable-manager.galgas", 283))  COMMA_SOURCE_FILE ("variable-manager.galgas", 283)) ;
      ioObject.mProperty_mCurrentManager = extractedValue_12948_savedManager ;
    }
    break ;
  case GALGAS_overrideKind::kEnum_selectOverrideNextBranches:
    {
      const cEnumAssociatedValues_overrideKind_selectOverrideNextBranches * extractPtr_13564 = (const cEnumAssociatedValues_overrideKind_selectOverrideNextBranches *) (var_savedManager_12859.unsafePointer ()) ;
      const GALGAS_currentVarManager extractedValue_13188_savedManager = extractPtr_13564->mAssociatedValue0 ;
      const GALGAS_currentVarManager extractedValue_13224_referenceManager = extractPtr_13564->mAssociatedValue1 ;
      const GALGAS_localVarManager temp_1 = ioObject ;
      GALGAS_currentVarManager var_newReferenceManager_13255 = temp_1.readProperty_mCurrentManager () ;
      {
      extensionSetter_combineManagerWith (var_newReferenceManager_13255, extractedValue_13224_referenceManager, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 287)) ;
      }
      ioObject.mProperty_mOverridenManagers.addAssign_operation (GALGAS_overrideKind::constructor_selectOverrideNextBranches (extractedValue_13188_savedManager, var_newReferenceManager_13255  COMMA_SOURCE_FILE ("variable-manager.galgas", 288))  COMMA_SOURCE_FILE ("variable-manager.galgas", 288)) ;
      ioObject.mProperty_mCurrentManager = extractedValue_13188_savedManager ;
    }
    break ;
  case GALGAS_overrideKind::kEnum_repeatOverride:
    {
      ioObject.mProperty_mOverridenManagers.addAssign_operation (var_savedManager_12859  COMMA_SOURCE_FILE ("variable-manager.galgas", 291)) ;
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager neutralAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (GALGAS_localVarManager & ioObject,
                                    const GALGAS_lstring constinArgument_inVarName,
                                    GALGAS_unifiedTypeMap_2D_entry & outArgument_outType,
                                    GALGAS_string & outArgument_outCppName,
                                    GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_neutralAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 371)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForDropAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_searchForDropAccess (GALGAS_localVarManager & ioObject,
                                          const GALGAS_lstring constinArgument_inVarName,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_searchForDropAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 415)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForWriteAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_searchForWriteAccess (GALGAS_localVarManager & ioObject,
                                           const GALGAS_lstring constinArgument_inVarName,
                                           GALGAS_unifiedTypeMap_2D_entry & outArgument_outType,
                                           GALGAS_string & outArgument_outCppName,
                                           GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_searchForWriteAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 449)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForReadAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadAccess (GALGAS_localVarManager & ioObject,
                                          const GALGAS_lstring constinArgument_inVarName,
                                          GALGAS_unifiedTypeMap_2D_entry & outArgument_outType,
                                          GALGAS_string & outArgument_outCppName,
                                          GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_searchForReadAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 550)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForReadWriteAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadWriteAccess (GALGAS_localVarManager & ioObject,
                                               const GALGAS_lstring constinArgument_inVarName,
                                               GALGAS_unifiedTypeMap_2D_entry & outArgument_outType,
                                               GALGAS_string & outArgument_outCppName,
                                               GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_searchForReadWriteAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 637)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager checkAutomatonStates'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_checkAutomatonStates (const GALGAS_localVarManager inObject,
                                           const GALGAS_location constinArgument_inErrorLocation,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVarManager temp_0 = inObject ;
  extensionMethod_checkAutomatonStates (temp_0.readProperty_mCurrentManager (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 786)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @varInExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_varInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varInExpressionAST * p = (const cPtr_varInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_varInExpressionAST::objectCompare (const GALGAS_varInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionAST::GALGAS_varInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionAST GALGAS_varInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_varInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionAST::GALGAS_varInExpressionAST (const cPtr_varInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionAST GALGAS_varInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mVarName
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_varInExpressionAST result ;
  if (inAttribute_mVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varInExpressionAST (inAttribute_mVarName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varInExpressionAST::setter_setMVarName (GALGAS_lstring inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_varInExpressionAST * p = (cPtr_varInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionAST) ;
    p->mProperty_mVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_varInExpressionAST::readProperty_mVarName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_varInExpressionAST * p = (cPtr_varInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionAST) ;
    return p->mProperty_mVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @varInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_varInExpressionAST::cPtr_varInExpressionAST (const GALGAS_lstring & in_mVarName
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mVarName (in_mVarName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_varInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionAST ;
}

void cPtr_varInExpressionAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@varInExpressionAST:" ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_varInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varInExpressionAST (mProperty_mVarName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@varInExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInExpressionAST ("varInExpressionAST",
                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionAST GALGAS_varInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_varInExpressionAST result ;
  const GALGAS_varInExpressionAST * p = (const GALGAS_varInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_varInExpressionAST_2D_weak::objectCompare (const GALGAS_varInExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionAST_2D_weak::GALGAS_varInExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionAST_2D_weak & GALGAS_varInExpressionAST_2D_weak::operator = (const GALGAS_varInExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionAST_2D_weak::GALGAS_varInExpressionAST_2D_weak (const GALGAS_varInExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionAST_2D_weak GALGAS_varInExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_varInExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionAST GALGAS_varInExpressionAST_2D_weak::bang_varInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_varInExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_varInExpressionAST) ;
      result = GALGAS_varInExpressionAST ((cPtr_varInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@varInExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInExpressionAST_2D_weak ("varInExpressionAST-weak",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varInExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varInExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpressionAST_2D_weak GALGAS_varInExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_varInExpressionAST_2D_weak result ;
  const GALGAS_varInExpressionAST_2D_weak * p = (const GALGAS_varInExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varInExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalCharExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalCharExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalCharExpressionAST * p = (const cPtr_literalCharExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalCharExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mCharacter.objectCompare (p->mProperty_mCharacter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalCharExpressionAST::objectCompare (const GALGAS_literalCharExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionAST::GALGAS_literalCharExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionAST GALGAS_literalCharExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalCharExpressionAST::constructor_new (GALGAS_lchar::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionAST::GALGAS_literalCharExpressionAST (const cPtr_literalCharExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalCharExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionAST GALGAS_literalCharExpressionAST::constructor_new (const GALGAS_lchar & inAttribute_mCharacter
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_literalCharExpressionAST result ;
  if (inAttribute_mCharacter.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalCharExpressionAST (inAttribute_mCharacter COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_literalCharExpressionAST::readProperty_mCharacter (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lchar () ;
  }else{
    cPtr_literalCharExpressionAST * p = (cPtr_literalCharExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalCharExpressionAST) ;
    return p->mProperty_mCharacter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalCharExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalCharExpressionAST::cPtr_literalCharExpressionAST (const GALGAS_lchar & in_mCharacter
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mCharacter (in_mCharacter) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalCharExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionAST ;
}

void cPtr_literalCharExpressionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@literalCharExpressionAST:" ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalCharExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalCharExpressionAST (mProperty_mCharacter COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalCharExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalCharExpressionAST ("literalCharExpressionAST",
                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalCharExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalCharExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalCharExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionAST GALGAS_literalCharExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_literalCharExpressionAST result ;
  const GALGAS_literalCharExpressionAST * p = (const GALGAS_literalCharExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalCharExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalCharExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_literalCharExpressionAST_2D_weak::objectCompare (const GALGAS_literalCharExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionAST_2D_weak::GALGAS_literalCharExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionAST_2D_weak & GALGAS_literalCharExpressionAST_2D_weak::operator = (const GALGAS_literalCharExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionAST_2D_weak::GALGAS_literalCharExpressionAST_2D_weak (const GALGAS_literalCharExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionAST_2D_weak GALGAS_literalCharExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_literalCharExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionAST GALGAS_literalCharExpressionAST_2D_weak::bang_literalCharExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_literalCharExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalCharExpressionAST) ;
      result = GALGAS_literalCharExpressionAST ((cPtr_literalCharExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@literalCharExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalCharExpressionAST_2D_weak ("literalCharExpressionAST-weak",
                                                         & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalCharExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalCharExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalCharExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionAST_2D_weak GALGAS_literalCharExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_literalCharExpressionAST_2D_weak result ;
  const GALGAS_literalCharExpressionAST_2D_weak * p = (const GALGAS_literalCharExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalCharExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalCharExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalDoubleExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalDoubleExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalDoubleExpressionAST * p = (const cPtr_literalDoubleExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalDoubleExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalDoubleExpressionAST::objectCompare (const GALGAS_literalDoubleExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionAST::GALGAS_literalDoubleExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionAST GALGAS_literalDoubleExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalDoubleExpressionAST::constructor_new (GALGAS_ldouble::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionAST::GALGAS_literalDoubleExpressionAST (const cPtr_literalDoubleExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalDoubleExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionAST GALGAS_literalDoubleExpressionAST::constructor_new (const GALGAS_ldouble & inAttribute_mValue
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalDoubleExpressionAST result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalDoubleExpressionAST (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ldouble GALGAS_literalDoubleExpressionAST::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_ldouble () ;
  }else{
    cPtr_literalDoubleExpressionAST * p = (cPtr_literalDoubleExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalDoubleExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalDoubleExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalDoubleExpressionAST::cPtr_literalDoubleExpressionAST (const GALGAS_ldouble & in_mValue
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalDoubleExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionAST ;
}

void cPtr_literalDoubleExpressionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@literalDoubleExpressionAST:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalDoubleExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalDoubleExpressionAST (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalDoubleExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalDoubleExpressionAST ("literalDoubleExpressionAST",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalDoubleExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalDoubleExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalDoubleExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionAST GALGAS_literalDoubleExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalDoubleExpressionAST result ;
  const GALGAS_literalDoubleExpressionAST * p = (const GALGAS_literalDoubleExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalDoubleExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalDoubleExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_literalDoubleExpressionAST_2D_weak::objectCompare (const GALGAS_literalDoubleExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionAST_2D_weak::GALGAS_literalDoubleExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionAST_2D_weak & GALGAS_literalDoubleExpressionAST_2D_weak::operator = (const GALGAS_literalDoubleExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionAST_2D_weak::GALGAS_literalDoubleExpressionAST_2D_weak (const GALGAS_literalDoubleExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionAST_2D_weak GALGAS_literalDoubleExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_literalDoubleExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionAST GALGAS_literalDoubleExpressionAST_2D_weak::bang_literalDoubleExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_literalDoubleExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalDoubleExpressionAST) ;
      result = GALGAS_literalDoubleExpressionAST ((cPtr_literalDoubleExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@literalDoubleExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalDoubleExpressionAST_2D_weak ("literalDoubleExpressionAST-weak",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalDoubleExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalDoubleExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalDoubleExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionAST_2D_weak GALGAS_literalDoubleExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalDoubleExpressionAST_2D_weak result ;
  const GALGAS_literalDoubleExpressionAST_2D_weak * p = (const GALGAS_literalDoubleExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalDoubleExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalDoubleExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalUIntExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalUIntExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalUIntExpressionAST * p = (const cPtr_literalUIntExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalUIntExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalUIntExpressionAST::objectCompare (const GALGAS_literalUIntExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionAST::GALGAS_literalUIntExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionAST GALGAS_literalUIntExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalUIntExpressionAST::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionAST::GALGAS_literalUIntExpressionAST (const cPtr_literalUIntExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalUIntExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionAST GALGAS_literalUIntExpressionAST::constructor_new (const GALGAS_luint & inAttribute_mValue
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_literalUIntExpressionAST result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalUIntExpressionAST (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_literalUIntExpressionAST::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_literalUIntExpressionAST * p = (cPtr_literalUIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUIntExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalUIntExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalUIntExpressionAST::cPtr_literalUIntExpressionAST (const GALGAS_luint & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalUIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUIntExpressionAST ;
}

void cPtr_literalUIntExpressionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@literalUIntExpressionAST:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalUIntExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalUIntExpressionAST (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalUIntExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalUIntExpressionAST ("literalUIntExpressionAST",
                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalUIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUIntExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalUIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalUIntExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionAST GALGAS_literalUIntExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_literalUIntExpressionAST result ;
  const GALGAS_literalUIntExpressionAST * p = (const GALGAS_literalUIntExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalUIntExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalUIntExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_literalUIntExpressionAST_2D_weak::objectCompare (const GALGAS_literalUIntExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionAST_2D_weak::GALGAS_literalUIntExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionAST_2D_weak & GALGAS_literalUIntExpressionAST_2D_weak::operator = (const GALGAS_literalUIntExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionAST_2D_weak::GALGAS_literalUIntExpressionAST_2D_weak (const GALGAS_literalUIntExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionAST_2D_weak GALGAS_literalUIntExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_literalUIntExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionAST GALGAS_literalUIntExpressionAST_2D_weak::bang_literalUIntExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_literalUIntExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalUIntExpressionAST) ;
      result = GALGAS_literalUIntExpressionAST ((cPtr_literalUIntExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@literalUIntExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalUIntExpressionAST_2D_weak ("literalUIntExpressionAST-weak",
                                                         & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalUIntExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUIntExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalUIntExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalUIntExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionAST_2D_weak GALGAS_literalUIntExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_literalUIntExpressionAST_2D_weak result ;
  const GALGAS_literalUIntExpressionAST_2D_weak * p = (const GALGAS_literalUIntExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalUIntExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalUIntExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalUInt_36__34_ExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalUInt_36__34_ExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalUInt_36__34_ExpressionAST * p = (const cPtr_literalUInt_36__34_ExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalUInt_36__34_ExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalUInt_36__34_ExpressionAST::objectCompare (const GALGAS_literalUInt_36__34_ExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionAST::GALGAS_literalUInt_36__34_ExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionAST GALGAS_literalUInt_36__34_ExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalUInt_36__34_ExpressionAST::constructor_new (GALGAS_luint_36__34_::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionAST::GALGAS_literalUInt_36__34_ExpressionAST (const cPtr_literalUInt_36__34_ExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalUInt_36__34_ExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionAST GALGAS_literalUInt_36__34_ExpressionAST::constructor_new (const GALGAS_luint_36__34_ & inAttribute_mValue
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_literalUInt_36__34_ExpressionAST result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalUInt_36__34_ExpressionAST (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint_36__34_ GALGAS_literalUInt_36__34_ExpressionAST::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_luint_36__34_ () ;
  }else{
    cPtr_literalUInt_36__34_ExpressionAST * p = (cPtr_literalUInt_36__34_ExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUInt_36__34_ExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalUInt64ExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalUInt_36__34_ExpressionAST::cPtr_literalUInt_36__34_ExpressionAST (const GALGAS_luint_36__34_ & in_mValue
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalUInt_36__34_ExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST ;
}

void cPtr_literalUInt_36__34_ExpressionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@literalUInt64ExpressionAST:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalUInt_36__34_ExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalUInt_36__34_ExpressionAST (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalUInt64ExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST ("literalUInt64ExpressionAST",
                                                         & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalUInt_36__34_ExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalUInt_36__34_ExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalUInt_36__34_ExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionAST GALGAS_literalUInt_36__34_ExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_literalUInt_36__34_ExpressionAST result ;
  const GALGAS_literalUInt_36__34_ExpressionAST * p = (const GALGAS_literalUInt_36__34_ExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalUInt_36__34_ExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalUInt64ExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_literalUInt_36__34_ExpressionAST_2D_weak::objectCompare (const GALGAS_literalUInt_36__34_ExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionAST_2D_weak::GALGAS_literalUInt_36__34_ExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionAST_2D_weak & GALGAS_literalUInt_36__34_ExpressionAST_2D_weak::operator = (const GALGAS_literalUInt_36__34_ExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionAST_2D_weak::GALGAS_literalUInt_36__34_ExpressionAST_2D_weak (const GALGAS_literalUInt_36__34_ExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionAST_2D_weak GALGAS_literalUInt_36__34_ExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_literalUInt_36__34_ExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionAST GALGAS_literalUInt_36__34_ExpressionAST_2D_weak::bang_literalUInt_36__34_ExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_literalUInt_36__34_ExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalUInt_36__34_ExpressionAST) ;
      result = GALGAS_literalUInt_36__34_ExpressionAST ((cPtr_literalUInt_36__34_ExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@literalUInt64ExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST_2D_weak ("literalUInt64ExpressionAST-weak",
                                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalUInt_36__34_ExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalUInt_36__34_ExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalUInt_36__34_ExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionAST_2D_weak GALGAS_literalUInt_36__34_ExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_literalUInt_36__34_ExpressionAST_2D_weak result ;
  const GALGAS_literalUInt_36__34_ExpressionAST_2D_weak * p = (const GALGAS_literalUInt_36__34_ExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalUInt_36__34_ExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalUInt64ExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalSIntExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalSIntExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalSIntExpressionAST * p = (const cPtr_literalSIntExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalSIntExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalSIntExpressionAST::objectCompare (const GALGAS_literalSIntExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSIntExpressionAST::GALGAS_literalSIntExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSIntExpressionAST GALGAS_literalSIntExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalSIntExpressionAST::constructor_new (GALGAS_lsint::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSIntExpressionAST::GALGAS_literalSIntExpressionAST (const cPtr_literalSIntExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalSIntExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSIntExpressionAST GALGAS_literalSIntExpressionAST::constructor_new (const GALGAS_lsint & inAttribute_mValue
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_literalSIntExpressionAST result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalSIntExpressionAST (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lsint GALGAS_literalSIntExpressionAST::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lsint () ;
  }else{
    cPtr_literalSIntExpressionAST * p = (cPtr_literalSIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalSIntExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalSIntExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalSIntExpressionAST::cPtr_literalSIntExpressionAST (const GALGAS_lsint & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalSIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSIntExpressionAST ;
}

void cPtr_literalSIntExpressionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@literalSIntExpressionAST:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalSIntExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalSIntExpressionAST (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalSIntExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalSIntExpressionAST ("literalSIntExpressionAST",
                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalSIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSIntExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalSIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalSIntExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSIntExpressionAST GALGAS_literalSIntExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_literalSIntExpressionAST result ;
  const GALGAS_literalSIntExpressionAST * p = (const GALGAS_literalSIntExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalSIntExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalSIntExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_literalSIntExpressionAST_2D_weak::objectCompare (const GALGAS_literalSIntExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSIntExpressionAST_2D_weak::GALGAS_literalSIntExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSIntExpressionAST_2D_weak & GALGAS_literalSIntExpressionAST_2D_weak::operator = (const GALGAS_literalSIntExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSIntExpressionAST_2D_weak::GALGAS_literalSIntExpressionAST_2D_weak (const GALGAS_literalSIntExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSIntExpressionAST_2D_weak GALGAS_literalSIntExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_literalSIntExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSIntExpressionAST GALGAS_literalSIntExpressionAST_2D_weak::bang_literalSIntExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_literalSIntExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalSIntExpressionAST) ;
      result = GALGAS_literalSIntExpressionAST ((cPtr_literalSIntExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@literalSIntExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalSIntExpressionAST_2D_weak ("literalSIntExpressionAST-weak",
                                                         & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalSIntExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSIntExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalSIntExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalSIntExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSIntExpressionAST_2D_weak GALGAS_literalSIntExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_literalSIntExpressionAST_2D_weak result ;
  const GALGAS_literalSIntExpressionAST_2D_weak * p = (const GALGAS_literalSIntExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalSIntExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalSIntExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalSInt_36__34_ExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalSInt_36__34_ExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalSInt_36__34_ExpressionAST * p = (const cPtr_literalSInt_36__34_ExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalSInt_36__34_ExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalSInt_36__34_ExpressionAST::objectCompare (const GALGAS_literalSInt_36__34_ExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSInt_36__34_ExpressionAST::GALGAS_literalSInt_36__34_ExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSInt_36__34_ExpressionAST GALGAS_literalSInt_36__34_ExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalSInt_36__34_ExpressionAST::constructor_new (GALGAS_lsint_36__34_::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSInt_36__34_ExpressionAST::GALGAS_literalSInt_36__34_ExpressionAST (const cPtr_literalSInt_36__34_ExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalSInt_36__34_ExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSInt_36__34_ExpressionAST GALGAS_literalSInt_36__34_ExpressionAST::constructor_new (const GALGAS_lsint_36__34_ & inAttribute_mValue
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_literalSInt_36__34_ExpressionAST result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalSInt_36__34_ExpressionAST (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lsint_36__34_ GALGAS_literalSInt_36__34_ExpressionAST::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lsint_36__34_ () ;
  }else{
    cPtr_literalSInt_36__34_ExpressionAST * p = (cPtr_literalSInt_36__34_ExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalSInt_36__34_ExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalSInt64ExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalSInt_36__34_ExpressionAST::cPtr_literalSInt_36__34_ExpressionAST (const GALGAS_lsint_36__34_ & in_mValue
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalSInt_36__34_ExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST ;
}

void cPtr_literalSInt_36__34_ExpressionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@literalSInt64ExpressionAST:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalSInt_36__34_ExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalSInt_36__34_ExpressionAST (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalSInt64ExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST ("literalSInt64ExpressionAST",
                                                         & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalSInt_36__34_ExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalSInt_36__34_ExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalSInt_36__34_ExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSInt_36__34_ExpressionAST GALGAS_literalSInt_36__34_ExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_literalSInt_36__34_ExpressionAST result ;
  const GALGAS_literalSInt_36__34_ExpressionAST * p = (const GALGAS_literalSInt_36__34_ExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalSInt_36__34_ExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalSInt64ExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_literalSInt_36__34_ExpressionAST_2D_weak::objectCompare (const GALGAS_literalSInt_36__34_ExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSInt_36__34_ExpressionAST_2D_weak::GALGAS_literalSInt_36__34_ExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSInt_36__34_ExpressionAST_2D_weak & GALGAS_literalSInt_36__34_ExpressionAST_2D_weak::operator = (const GALGAS_literalSInt_36__34_ExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSInt_36__34_ExpressionAST_2D_weak::GALGAS_literalSInt_36__34_ExpressionAST_2D_weak (const GALGAS_literalSInt_36__34_ExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSInt_36__34_ExpressionAST_2D_weak GALGAS_literalSInt_36__34_ExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_literalSInt_36__34_ExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSInt_36__34_ExpressionAST GALGAS_literalSInt_36__34_ExpressionAST_2D_weak::bang_literalSInt_36__34_ExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_literalSInt_36__34_ExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalSInt_36__34_ExpressionAST) ;
      result = GALGAS_literalSInt_36__34_ExpressionAST ((cPtr_literalSInt_36__34_ExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@literalSInt64ExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST_2D_weak ("literalSInt64ExpressionAST-weak",
                                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalSInt_36__34_ExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalSInt_36__34_ExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalSInt_36__34_ExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalSInt_36__34_ExpressionAST_2D_weak GALGAS_literalSInt_36__34_ExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_literalSInt_36__34_ExpressionAST_2D_weak result ;
  const GALGAS_literalSInt_36__34_ExpressionAST_2D_weak * p = (const GALGAS_literalSInt_36__34_ExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalSInt_36__34_ExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalSInt64ExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @testDynamicClassInExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_testDynamicClassInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_testDynamicClassInExpressionAST * p = (const cPtr_testDynamicClassInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfReceiverExpression.objectCompare (p->mProperty_mEndOfReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeComparisonKind.objectCompare (p->mProperty_mTypeComparisonKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_testDynamicClassInExpressionAST::objectCompare (const GALGAS_testDynamicClassInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionAST::GALGAS_testDynamicClassInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionAST::GALGAS_testDynamicClassInExpressionAST (const cPtr_testDynamicClassInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testDynamicClassInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionAST GALGAS_testDynamicClassInExpressionAST::constructor_new (const GALGAS_semanticExpressionAST & inAttribute_mReceiverExpression,
                                                                                                const GALGAS_location & inAttribute_mEndOfReceiverExpression,
                                                                                                const GALGAS_dynamicTypeComparisonKind & inAttribute_mTypeComparisonKind,
                                                                                                const GALGAS_lstring & inAttribute_mTypeName
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_testDynamicClassInExpressionAST result ;
  if (inAttribute_mReceiverExpression.isValid () && inAttribute_mEndOfReceiverExpression.isValid () && inAttribute_mTypeComparisonKind.isValid () && inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_testDynamicClassInExpressionAST (inAttribute_mReceiverExpression, inAttribute_mEndOfReceiverExpression, inAttribute_mTypeComparisonKind, inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_testDynamicClassInExpressionAST::readProperty_mReceiverExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_testDynamicClassInExpressionAST::readProperty_mEndOfReceiverExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind GALGAS_testDynamicClassInExpressionAST::readProperty_mTypeComparisonKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_dynamicTypeComparisonKind () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mTypeComparisonKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_testDynamicClassInExpressionAST::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @testDynamicClassInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_testDynamicClassInExpressionAST::cPtr_testDynamicClassInExpressionAST (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                                            const GALGAS_location & in_mEndOfReceiverExpression,
                                                                            const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                            const GALGAS_lstring & in_mTypeName
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mEndOfReceiverExpression (in_mEndOfReceiverExpression),
mProperty_mTypeComparisonKind (in_mTypeComparisonKind),
mProperty_mTypeName (in_mTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_testDynamicClassInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ;
}

void cPtr_testDynamicClassInExpressionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@testDynamicClassInExpressionAST:" ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeComparisonKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_testDynamicClassInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_testDynamicClassInExpressionAST (mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mTypeComparisonKind, mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@testDynamicClassInExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ("testDynamicClassInExpressionAST",
                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_testDynamicClassInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_testDynamicClassInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_testDynamicClassInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionAST GALGAS_testDynamicClassInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_testDynamicClassInExpressionAST result ;
  const GALGAS_testDynamicClassInExpressionAST * p = (const GALGAS_testDynamicClassInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_testDynamicClassInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testDynamicClassInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_testDynamicClassInExpressionAST_2D_weak::objectCompare (const GALGAS_testDynamicClassInExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionAST_2D_weak::GALGAS_testDynamicClassInExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionAST_2D_weak & GALGAS_testDynamicClassInExpressionAST_2D_weak::operator = (const GALGAS_testDynamicClassInExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionAST_2D_weak::GALGAS_testDynamicClassInExpressionAST_2D_weak (const GALGAS_testDynamicClassInExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionAST_2D_weak GALGAS_testDynamicClassInExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_testDynamicClassInExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionAST GALGAS_testDynamicClassInExpressionAST_2D_weak::bang_testDynamicClassInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_testDynamicClassInExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_testDynamicClassInExpressionAST) ;
      result = GALGAS_testDynamicClassInExpressionAST ((cPtr_testDynamicClassInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@testDynamicClassInExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST_2D_weak ("testDynamicClassInExpressionAST-weak",
                                                                & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_testDynamicClassInExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_testDynamicClassInExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_testDynamicClassInExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionAST_2D_weak GALGAS_testDynamicClassInExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_testDynamicClassInExpressionAST_2D_weak result ;
  const GALGAS_testDynamicClassInExpressionAST_2D_weak * p = (const GALGAS_testDynamicClassInExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_testDynamicClassInExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testDynamicClassInExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @castInExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_castInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_castInExpressionAST * p = (const cPtr_castInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_castInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfReceiverExpression.objectCompare (p->mProperty_mEndOfReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_castInExpressionAST::objectCompare (const GALGAS_castInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionAST::GALGAS_castInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionAST::GALGAS_castInExpressionAST (const cPtr_castInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_castInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionAST GALGAS_castInExpressionAST::constructor_new (const GALGAS_semanticExpressionAST & inAttribute_mReceiverExpression,
                                                                        const GALGAS_location & inAttribute_mEndOfReceiverExpression,
                                                                        const GALGAS_lstring & inAttribute_mTypeName
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_castInExpressionAST result ;
  if (inAttribute_mReceiverExpression.isValid () && inAttribute_mEndOfReceiverExpression.isValid () && inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_castInExpressionAST (inAttribute_mReceiverExpression, inAttribute_mEndOfReceiverExpression, inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_castInExpressionAST::readProperty_mReceiverExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_castInExpressionAST * p = (cPtr_castInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_castInExpressionAST::readProperty_mEndOfReceiverExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_castInExpressionAST * p = (cPtr_castInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_castInExpressionAST::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_castInExpressionAST * p = (cPtr_castInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @castInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_castInExpressionAST::cPtr_castInExpressionAST (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                    const GALGAS_location & in_mEndOfReceiverExpression,
                                                    const GALGAS_lstring & in_mTypeName
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mEndOfReceiverExpression (in_mEndOfReceiverExpression),
mProperty_mTypeName (in_mTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_castInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionAST ;
}

void cPtr_castInExpressionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@castInExpressionAST:" ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_castInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_castInExpressionAST (mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@castInExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInExpressionAST ("castInExpressionAST",
                                            & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_castInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_castInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionAST GALGAS_castInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_castInExpressionAST result ;
  const GALGAS_castInExpressionAST * p = (const GALGAS_castInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_castInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_castInExpressionAST_2D_weak::objectCompare (const GALGAS_castInExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionAST_2D_weak::GALGAS_castInExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionAST_2D_weak & GALGAS_castInExpressionAST_2D_weak::operator = (const GALGAS_castInExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionAST_2D_weak::GALGAS_castInExpressionAST_2D_weak (const GALGAS_castInExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionAST_2D_weak GALGAS_castInExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_castInExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionAST GALGAS_castInExpressionAST_2D_weak::bang_castInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_castInExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_castInExpressionAST) ;
      result = GALGAS_castInExpressionAST ((cPtr_castInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@castInExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInExpressionAST_2D_weak ("castInExpressionAST-weak",
                                                    & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_castInExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_castInExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInExpressionAST_2D_weak GALGAS_castInExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_castInExpressionAST_2D_weak result ;
  const GALGAS_castInExpressionAST_2D_weak * p = (const GALGAS_castInExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_castInExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @optionExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_optionExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_optionExpressionAST * p = (const cPtr_optionExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_optionExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOptionComponentName.objectCompare (p->mProperty_mOptionComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionEntryName.objectCompare (p->mProperty_mOptionEntryName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionGetterName.objectCompare (p->mProperty_mOptionGetterName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_optionExpressionAST::objectCompare (const GALGAS_optionExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionExpressionAST::GALGAS_optionExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionExpressionAST GALGAS_optionExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_optionExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionExpressionAST::GALGAS_optionExpressionAST (const cPtr_optionExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionExpressionAST GALGAS_optionExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mOptionComponentName,
                                                                        const GALGAS_lstring & inAttribute_mOptionEntryName,
                                                                        const GALGAS_lstring & inAttribute_mOptionGetterName
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_optionExpressionAST result ;
  if (inAttribute_mOptionComponentName.isValid () && inAttribute_mOptionEntryName.isValid () && inAttribute_mOptionGetterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_optionExpressionAST (inAttribute_mOptionComponentName, inAttribute_mOptionEntryName, inAttribute_mOptionGetterName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_optionExpressionAST::readProperty_mOptionComponentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_optionExpressionAST * p = (cPtr_optionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionExpressionAST) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_optionExpressionAST::readProperty_mOptionEntryName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_optionExpressionAST * p = (cPtr_optionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionExpressionAST) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_optionExpressionAST::readProperty_mOptionGetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_optionExpressionAST * p = (cPtr_optionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionExpressionAST) ;
    return p->mProperty_mOptionGetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @optionExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_optionExpressionAST::cPtr_optionExpressionAST (const GALGAS_lstring & in_mOptionComponentName,
                                                    const GALGAS_lstring & in_mOptionEntryName,
                                                    const GALGAS_lstring & in_mOptionGetterName
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOptionComponentName (in_mOptionComponentName),
mProperty_mOptionEntryName (in_mOptionEntryName),
mProperty_mOptionGetterName (in_mOptionGetterName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_optionExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionExpressionAST ;
}

void cPtr_optionExpressionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@optionExpressionAST:" ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionGetterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_optionExpressionAST (mProperty_mOptionComponentName, mProperty_mOptionEntryName, mProperty_mOptionGetterName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@optionExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionExpressionAST ("optionExpressionAST",
                                            & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionExpressionAST GALGAS_optionExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_optionExpressionAST result ;
  const GALGAS_optionExpressionAST * p = (const GALGAS_optionExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_optionExpressionAST_2D_weak::objectCompare (const GALGAS_optionExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionExpressionAST_2D_weak::GALGAS_optionExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionExpressionAST_2D_weak & GALGAS_optionExpressionAST_2D_weak::operator = (const GALGAS_optionExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionExpressionAST_2D_weak::GALGAS_optionExpressionAST_2D_weak (const GALGAS_optionExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionExpressionAST_2D_weak GALGAS_optionExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_optionExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionExpressionAST GALGAS_optionExpressionAST_2D_weak::bang_optionExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_optionExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionExpressionAST) ;
      result = GALGAS_optionExpressionAST ((cPtr_optionExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@optionExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionExpressionAST_2D_weak ("optionExpressionAST-weak",
                                                    & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionExpressionAST_2D_weak GALGAS_optionExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_optionExpressionAST_2D_weak result ;
  const GALGAS_optionExpressionAST_2D_weak * p = (const GALGAS_optionExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexiqueIntrospectionExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexiqueIntrospectionExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexiqueIntrospectionExpressionAST * p = (const cPtr_lexiqueIntrospectionExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexiqueIntrospectionExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexiqueComponentName.objectCompare (p->mProperty_mLexiqueComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexiqueGetterName.objectCompare (p->mProperty_mLexiqueGetterName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexiqueIntrospectionExpressionAST::objectCompare (const GALGAS_lexiqueIntrospectionExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionExpressionAST::GALGAS_lexiqueIntrospectionExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionExpressionAST GALGAS_lexiqueIntrospectionExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexiqueIntrospectionExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionExpressionAST::GALGAS_lexiqueIntrospectionExpressionAST (const cPtr_lexiqueIntrospectionExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueIntrospectionExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionExpressionAST GALGAS_lexiqueIntrospectionExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mLexiqueComponentName,
                                                                                                    const GALGAS_lstring & inAttribute_mLexiqueGetterName
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueIntrospectionExpressionAST result ;
  if (inAttribute_mLexiqueComponentName.isValid () && inAttribute_mLexiqueGetterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexiqueIntrospectionExpressionAST (inAttribute_mLexiqueComponentName, inAttribute_mLexiqueGetterName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexiqueIntrospectionExpressionAST::readProperty_mLexiqueComponentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexiqueIntrospectionExpressionAST * p = (cPtr_lexiqueIntrospectionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionExpressionAST) ;
    return p->mProperty_mLexiqueComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexiqueIntrospectionExpressionAST::readProperty_mLexiqueGetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexiqueIntrospectionExpressionAST * p = (cPtr_lexiqueIntrospectionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionExpressionAST) ;
    return p->mProperty_mLexiqueGetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexiqueIntrospectionExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexiqueIntrospectionExpressionAST::cPtr_lexiqueIntrospectionExpressionAST (const GALGAS_lstring & in_mLexiqueComponentName,
                                                                                const GALGAS_lstring & in_mLexiqueGetterName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mLexiqueComponentName (in_mLexiqueComponentName),
mProperty_mLexiqueGetterName (in_mLexiqueGetterName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexiqueIntrospectionExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ;
}

void cPtr_lexiqueIntrospectionExpressionAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@lexiqueIntrospectionExpressionAST:" ;
  mProperty_mLexiqueComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexiqueGetterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexiqueIntrospectionExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexiqueIntrospectionExpressionAST (mProperty_mLexiqueComponentName, mProperty_mLexiqueGetterName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexiqueIntrospectionExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ("lexiqueIntrospectionExpressionAST",
                                                          & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueIntrospectionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueIntrospectionExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueIntrospectionExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionExpressionAST GALGAS_lexiqueIntrospectionExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueIntrospectionExpressionAST result ;
  const GALGAS_lexiqueIntrospectionExpressionAST * p = (const GALGAS_lexiqueIntrospectionExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueIntrospectionExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueIntrospectionExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexiqueIntrospectionExpressionAST_2D_weak::objectCompare (const GALGAS_lexiqueIntrospectionExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionExpressionAST_2D_weak::GALGAS_lexiqueIntrospectionExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionExpressionAST_2D_weak & GALGAS_lexiqueIntrospectionExpressionAST_2D_weak::operator = (const GALGAS_lexiqueIntrospectionExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionExpressionAST_2D_weak::GALGAS_lexiqueIntrospectionExpressionAST_2D_weak (const GALGAS_lexiqueIntrospectionExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionExpressionAST_2D_weak GALGAS_lexiqueIntrospectionExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexiqueIntrospectionExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionExpressionAST GALGAS_lexiqueIntrospectionExpressionAST_2D_weak::bang_lexiqueIntrospectionExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexiqueIntrospectionExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexiqueIntrospectionExpressionAST) ;
      result = GALGAS_lexiqueIntrospectionExpressionAST ((cPtr_lexiqueIntrospectionExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexiqueIntrospectionExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST_2D_weak ("lexiqueIntrospectionExpressionAST-weak",
                                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueIntrospectionExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueIntrospectionExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueIntrospectionExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionExpressionAST_2D_weak GALGAS_lexiqueIntrospectionExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueIntrospectionExpressionAST_2D_weak result ;
  const GALGAS_lexiqueIntrospectionExpressionAST_2D_weak * p = (const GALGAS_lexiqueIntrospectionExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueIntrospectionExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueIntrospectionExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @filewrapperObjectInstanciationInExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_filewrapperObjectInstanciationInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperObjectInstanciationInExpressionAST * p = (const cPtr_filewrapperObjectInstanciationInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperName.objectCompare (p->mProperty_mFilewrapperName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_filewrapperObjectInstanciationInExpressionAST::objectCompare (const GALGAS_filewrapperObjectInstanciationInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperObjectInstanciationInExpressionAST::GALGAS_filewrapperObjectInstanciationInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperObjectInstanciationInExpressionAST GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                                COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperObjectInstanciationInExpressionAST::GALGAS_filewrapperObjectInstanciationInExpressionAST (const cPtr_filewrapperObjectInstanciationInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperObjectInstanciationInExpressionAST GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mFilewrapperName
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperObjectInstanciationInExpressionAST result ;
  if (inAttribute_mFilewrapperName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperObjectInstanciationInExpressionAST (inAttribute_mFilewrapperName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperObjectInstanciationInExpressionAST::setter_setMFilewrapperName (GALGAS_lstring inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperObjectInstanciationInExpressionAST * p = (cPtr_filewrapperObjectInstanciationInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
    p->mProperty_mFilewrapperName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperObjectInstanciationInExpressionAST::readProperty_mFilewrapperName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_filewrapperObjectInstanciationInExpressionAST * p = (cPtr_filewrapperObjectInstanciationInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperObjectInstanciationInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_filewrapperObjectInstanciationInExpressionAST::cPtr_filewrapperObjectInstanciationInExpressionAST (const GALGAS_lstring & in_mFilewrapperName
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mFilewrapperName (in_mFilewrapperName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_filewrapperObjectInstanciationInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ;
}

void cPtr_filewrapperObjectInstanciationInExpressionAST::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@filewrapperObjectInstanciationInExpressionAST:" ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperObjectInstanciationInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperObjectInstanciationInExpressionAST (mProperty_mFilewrapperName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperObjectInstanciationInExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ("filewrapperObjectInstanciationInExpressionAST",
                                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperObjectInstanciationInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperObjectInstanciationInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperObjectInstanciationInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperObjectInstanciationInExpressionAST GALGAS_filewrapperObjectInstanciationInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperObjectInstanciationInExpressionAST result ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST * p = (const GALGAS_filewrapperObjectInstanciationInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperObjectInstanciationInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperObjectInstanciationInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak::objectCompare (const GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak::GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak & GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak::operator = (const GALGAS_filewrapperObjectInstanciationInExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak::GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak (const GALGAS_filewrapperObjectInstanciationInExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperObjectInstanciationInExpressionAST GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak::bang_filewrapperObjectInstanciationInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperObjectInstanciationInExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
      result = GALGAS_filewrapperObjectInstanciationInExpressionAST ((cPtr_filewrapperObjectInstanciationInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperObjectInstanciationInExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak ("filewrapperObjectInstanciationInExpressionAST-weak",
                                                                              & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak result ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak * p = (const GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperObjectInstanciationInExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @filewrapperInExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_filewrapperInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperInExpressionAST * p = (const cPtr_filewrapperInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperName.objectCompare (p->mProperty_mFilewrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperPath.objectCompare (p->mProperty_mFilewrapperPath) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_filewrapperInExpressionAST::objectCompare (const GALGAS_filewrapperInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionAST::GALGAS_filewrapperInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionAST GALGAS_filewrapperInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionAST::GALGAS_filewrapperInExpressionAST (const cPtr_filewrapperInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionAST GALGAS_filewrapperInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mFilewrapperName,
                                                                                      const GALGAS_lstring & inAttribute_mFilewrapperPath
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperInExpressionAST result ;
  if (inAttribute_mFilewrapperName.isValid () && inAttribute_mFilewrapperPath.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperInExpressionAST (inAttribute_mFilewrapperName, inAttribute_mFilewrapperPath COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperInExpressionAST::setter_setMFilewrapperName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperInExpressionAST * p = (cPtr_filewrapperInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
    p->mProperty_mFilewrapperName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperInExpressionAST::setter_setMFilewrapperPath (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperInExpressionAST * p = (cPtr_filewrapperInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
    p->mProperty_mFilewrapperPath = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperInExpressionAST::readProperty_mFilewrapperName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_filewrapperInExpressionAST * p = (cPtr_filewrapperInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperInExpressionAST::readProperty_mFilewrapperPath (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_filewrapperInExpressionAST * p = (cPtr_filewrapperInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
    return p->mProperty_mFilewrapperPath ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_filewrapperInExpressionAST::cPtr_filewrapperInExpressionAST (const GALGAS_lstring & in_mFilewrapperName,
                                                                  const GALGAS_lstring & in_mFilewrapperPath
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mFilewrapperName (in_mFilewrapperName),
mProperty_mFilewrapperPath (in_mFilewrapperPath) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_filewrapperInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionAST ;
}

void cPtr_filewrapperInExpressionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@filewrapperInExpressionAST:" ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperPath.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperInExpressionAST (mProperty_mFilewrapperName, mProperty_mFilewrapperPath COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperInExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperInExpressionAST ("filewrapperInExpressionAST",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionAST GALGAS_filewrapperInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperInExpressionAST result ;
  const GALGAS_filewrapperInExpressionAST * p = (const GALGAS_filewrapperInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_filewrapperInExpressionAST_2D_weak::objectCompare (const GALGAS_filewrapperInExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionAST_2D_weak::GALGAS_filewrapperInExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionAST_2D_weak & GALGAS_filewrapperInExpressionAST_2D_weak::operator = (const GALGAS_filewrapperInExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionAST_2D_weak::GALGAS_filewrapperInExpressionAST_2D_weak (const GALGAS_filewrapperInExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionAST_2D_weak GALGAS_filewrapperInExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_filewrapperInExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionAST GALGAS_filewrapperInExpressionAST_2D_weak::bang_filewrapperInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperInExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperInExpressionAST) ;
      result = GALGAS_filewrapperInExpressionAST ((cPtr_filewrapperInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperInExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperInExpressionAST_2D_weak ("filewrapperInExpressionAST-weak",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperInExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperInExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperInExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionAST_2D_weak GALGAS_filewrapperInExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperInExpressionAST_2D_weak result ;
  const GALGAS_filewrapperInExpressionAST_2D_weak * p = (const GALGAS_filewrapperInExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperInExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperInExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @filewrapperTemplateInExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_filewrapperTemplateInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperTemplateInExpressionAST * p = (const cPtr_filewrapperTemplateInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperName.objectCompare (p->mProperty_mFilewrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilewrapperTemplateName.objectCompare (p->mProperty_mFilewrapperTemplateName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressions.objectCompare (p->mProperty_mExpressions) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_filewrapperTemplateInExpressionAST::objectCompare (const GALGAS_filewrapperTemplateInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionAST::GALGAS_filewrapperTemplateInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionAST GALGAS_filewrapperTemplateInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperTemplateInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_actualOutputExpressionList::constructor_emptyList (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionAST::GALGAS_filewrapperTemplateInExpressionAST (const cPtr_filewrapperTemplateInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperTemplateInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionAST GALGAS_filewrapperTemplateInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mFilewrapperName,
                                                                                                      const GALGAS_lstring & inAttribute_mFilewrapperTemplateName,
                                                                                                      const GALGAS_actualOutputExpressionList & inAttribute_mExpressions
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateInExpressionAST result ;
  if (inAttribute_mFilewrapperName.isValid () && inAttribute_mFilewrapperTemplateName.isValid () && inAttribute_mExpressions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperTemplateInExpressionAST (inAttribute_mFilewrapperName, inAttribute_mFilewrapperTemplateName, inAttribute_mExpressions COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateInExpressionAST::setter_setMFilewrapperName (GALGAS_lstring inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    p->mProperty_mFilewrapperName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateInExpressionAST::setter_setMFilewrapperTemplateName (GALGAS_lstring inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    p->mProperty_mFilewrapperTemplateName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateInExpressionAST::setter_setMExpressions (GALGAS_actualOutputExpressionList inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    p->mProperty_mExpressions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperTemplateInExpressionAST::readProperty_mFilewrapperName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperTemplateInExpressionAST::readProperty_mFilewrapperTemplateName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    return p->mProperty_mFilewrapperTemplateName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList GALGAS_filewrapperTemplateInExpressionAST::readProperty_mExpressions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualOutputExpressionList () ;
  }else{
    cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    return p->mProperty_mExpressions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperTemplateInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_filewrapperTemplateInExpressionAST::cPtr_filewrapperTemplateInExpressionAST (const GALGAS_lstring & in_mFilewrapperName,
                                                                                  const GALGAS_lstring & in_mFilewrapperTemplateName,
                                                                                  const GALGAS_actualOutputExpressionList & in_mExpressions
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mFilewrapperName (in_mFilewrapperName),
mProperty_mFilewrapperTemplateName (in_mFilewrapperTemplateName),
mProperty_mExpressions (in_mExpressions) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_filewrapperTemplateInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ;
}

void cPtr_filewrapperTemplateInExpressionAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@filewrapperTemplateInExpressionAST:" ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilewrapperTemplateName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperTemplateInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperTemplateInExpressionAST (mProperty_mFilewrapperName, mProperty_mFilewrapperTemplateName, mProperty_mExpressions COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperTemplateInExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ("filewrapperTemplateInExpressionAST",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperTemplateInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionAST GALGAS_filewrapperTemplateInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateInExpressionAST result ;
  const GALGAS_filewrapperTemplateInExpressionAST * p = (const GALGAS_filewrapperTemplateInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperTemplateInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_filewrapperTemplateInExpressionAST_2D_weak::objectCompare (const GALGAS_filewrapperTemplateInExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionAST_2D_weak::GALGAS_filewrapperTemplateInExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionAST_2D_weak & GALGAS_filewrapperTemplateInExpressionAST_2D_weak::operator = (const GALGAS_filewrapperTemplateInExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionAST_2D_weak::GALGAS_filewrapperTemplateInExpressionAST_2D_weak (const GALGAS_filewrapperTemplateInExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionAST_2D_weak GALGAS_filewrapperTemplateInExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_filewrapperTemplateInExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionAST GALGAS_filewrapperTemplateInExpressionAST_2D_weak::bang_filewrapperTemplateInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateInExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperTemplateInExpressionAST) ;
      result = GALGAS_filewrapperTemplateInExpressionAST ((cPtr_filewrapperTemplateInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@filewrapperTemplateInExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST_2D_weak ("filewrapperTemplateInExpressionAST-weak",
                                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateInExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperTemplateInExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateInExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionAST_2D_weak GALGAS_filewrapperTemplateInExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateInExpressionAST_2D_weak result ;
  const GALGAS_filewrapperTemplateInExpressionAST_2D_weak * p = (const GALGAS_filewrapperTemplateInExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperTemplateInExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateInExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @getterCallExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_getterCallExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_getterCallExpressionAST * p = (const cPtr_getterCallExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_errorOnGetterCallInsteadOfPropertyRead.objectCompare (p->mProperty_errorOnGetterCallInsteadOfPropertyRead) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiver.objectCompare (p->mProperty_mReceiver) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGetterName.objectCompare (p->mProperty_mGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressions.objectCompare (p->mProperty_mExpressions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionLocation.objectCompare (p->mProperty_mExpressionLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_getterCallExpressionAST::objectCompare (const GALGAS_getterCallExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterCallExpressionAST::GALGAS_getterCallExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterCallExpressionAST::GALGAS_getterCallExpressionAST (const cPtr_getterCallExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getterCallExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterCallExpressionAST GALGAS_getterCallExpressionAST::constructor_new (const GALGAS_bool & inAttribute_errorOnGetterCallInsteadOfPropertyRead,
                                                                                const GALGAS_semanticExpressionAST & inAttribute_mReceiver,
                                                                                const GALGAS_lstring & inAttribute_mGetterName,
                                                                                const GALGAS_actualOutputExpressionList & inAttribute_mExpressions,
                                                                                const GALGAS_location & inAttribute_mExpressionLocation
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_getterCallExpressionAST result ;
  if (inAttribute_errorOnGetterCallInsteadOfPropertyRead.isValid () && inAttribute_mReceiver.isValid () && inAttribute_mGetterName.isValid () && inAttribute_mExpressions.isValid () && inAttribute_mExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_getterCallExpressionAST (inAttribute_errorOnGetterCallInsteadOfPropertyRead, inAttribute_mReceiver, inAttribute_mGetterName, inAttribute_mExpressions, inAttribute_mExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_getterCallExpressionAST::readProperty_errorOnGetterCallInsteadOfPropertyRead (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_errorOnGetterCallInsteadOfPropertyRead ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_getterCallExpressionAST::readProperty_mReceiver (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mReceiver ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_getterCallExpressionAST::readProperty_mGetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mGetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList GALGAS_getterCallExpressionAST::readProperty_mExpressions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualOutputExpressionList () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mExpressions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_getterCallExpressionAST::readProperty_mExpressionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @getterCallExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_getterCallExpressionAST::cPtr_getterCallExpressionAST (const GALGAS_bool & in_errorOnGetterCallInsteadOfPropertyRead,
                                                            const GALGAS_semanticExpressionAST & in_mReceiver,
                                                            const GALGAS_lstring & in_mGetterName,
                                                            const GALGAS_actualOutputExpressionList & in_mExpressions,
                                                            const GALGAS_location & in_mExpressionLocation
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_errorOnGetterCallInsteadOfPropertyRead (in_errorOnGetterCallInsteadOfPropertyRead),
mProperty_mReceiver (in_mReceiver),
mProperty_mGetterName (in_mGetterName),
mProperty_mExpressions (in_mExpressions),
mProperty_mExpressionLocation (in_mExpressionLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_getterCallExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionAST ;
}

void cPtr_getterCallExpressionAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@getterCallExpressionAST:" ;
  mProperty_errorOnGetterCallInsteadOfPropertyRead.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiver.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_getterCallExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_getterCallExpressionAST (mProperty_errorOnGetterCallInsteadOfPropertyRead, mProperty_mReceiver, mProperty_mGetterName, mProperty_mExpressions, mProperty_mExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@getterCallExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getterCallExpressionAST ("getterCallExpressionAST",
                                                & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getterCallExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getterCallExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getterCallExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterCallExpressionAST GALGAS_getterCallExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_getterCallExpressionAST result ;
  const GALGAS_getterCallExpressionAST * p = (const GALGAS_getterCallExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getterCallExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterCallExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_getterCallExpressionAST_2D_weak::objectCompare (const GALGAS_getterCallExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterCallExpressionAST_2D_weak::GALGAS_getterCallExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterCallExpressionAST_2D_weak & GALGAS_getterCallExpressionAST_2D_weak::operator = (const GALGAS_getterCallExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterCallExpressionAST_2D_weak::GALGAS_getterCallExpressionAST_2D_weak (const GALGAS_getterCallExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterCallExpressionAST_2D_weak GALGAS_getterCallExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_getterCallExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterCallExpressionAST GALGAS_getterCallExpressionAST_2D_weak::bang_getterCallExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_getterCallExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getterCallExpressionAST) ;
      result = GALGAS_getterCallExpressionAST ((cPtr_getterCallExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@getterCallExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getterCallExpressionAST_2D_weak ("getterCallExpressionAST-weak",
                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getterCallExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getterCallExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getterCallExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getterCallExpressionAST_2D_weak GALGAS_getterCallExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_getterCallExpressionAST_2D_weak result ;
  const GALGAS_getterCallExpressionAST_2D_weak * p = (const GALGAS_getterCallExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getterCallExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterCallExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @constructorExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_constructorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_constructorExpressionAST * p = (const cPtr_constructorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_constructorExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstructorName.objectCompare (p->mProperty_mConstructorName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressions.objectCompare (p->mProperty_mExpressions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_locationForOldStyleCollectionInitializerError.objectCompare (p->mProperty_locationForOldStyleCollectionInitializerError) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_constructorExpressionAST::objectCompare (const GALGAS_constructorExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorExpressionAST::GALGAS_constructorExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorExpressionAST GALGAS_constructorExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_constructorExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_actualOutputExpressionList::constructor_emptyList (HERE),
                                                           GALGAS_location::constructor_nowhere (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorExpressionAST::GALGAS_constructorExpressionAST (const cPtr_constructorExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_constructorExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorExpressionAST GALGAS_constructorExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName,
                                                                                  const GALGAS_lstring & inAttribute_mConstructorName,
                                                                                  const GALGAS_actualOutputExpressionList & inAttribute_mExpressions,
                                                                                  const GALGAS_location & inAttribute_locationForOldStyleCollectionInitializerError
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_constructorExpressionAST result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mConstructorName.isValid () && inAttribute_mExpressions.isValid () && inAttribute_locationForOldStyleCollectionInitializerError.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_constructorExpressionAST (inAttribute_mTypeName, inAttribute_mConstructorName, inAttribute_mExpressions, inAttribute_locationForOldStyleCollectionInitializerError COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_constructorExpressionAST::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_constructorExpressionAST * p = (cPtr_constructorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_constructorExpressionAST::readProperty_mConstructorName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_constructorExpressionAST * p = (cPtr_constructorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionAST) ;
    return p->mProperty_mConstructorName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList GALGAS_constructorExpressionAST::readProperty_mExpressions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualOutputExpressionList () ;
  }else{
    cPtr_constructorExpressionAST * p = (cPtr_constructorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionAST) ;
    return p->mProperty_mExpressions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_constructorExpressionAST::readProperty_locationForOldStyleCollectionInitializerError (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_constructorExpressionAST * p = (cPtr_constructorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorExpressionAST) ;
    return p->mProperty_locationForOldStyleCollectionInitializerError ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @constructorExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_constructorExpressionAST::cPtr_constructorExpressionAST (const GALGAS_lstring & in_mTypeName,
                                                              const GALGAS_lstring & in_mConstructorName,
                                                              const GALGAS_actualOutputExpressionList & in_mExpressions,
                                                              const GALGAS_location & in_locationForOldStyleCollectionInitializerError
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mConstructorName (in_mConstructorName),
mProperty_mExpressions (in_mExpressions),
mProperty_locationForOldStyleCollectionInitializerError (in_locationForOldStyleCollectionInitializerError) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_constructorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorExpressionAST ;
}

void cPtr_constructorExpressionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@constructorExpressionAST:" ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstructorName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_locationForOldStyleCollectionInitializerError.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_constructorExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_constructorExpressionAST (mProperty_mTypeName, mProperty_mConstructorName, mProperty_mExpressions, mProperty_locationForOldStyleCollectionInitializerError COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@constructorExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorExpressionAST ("constructorExpressionAST",
                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorExpressionAST GALGAS_constructorExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_constructorExpressionAST result ;
  const GALGAS_constructorExpressionAST * p = (const GALGAS_constructorExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_constructorExpressionAST_2D_weak::objectCompare (const GALGAS_constructorExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorExpressionAST_2D_weak::GALGAS_constructorExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorExpressionAST_2D_weak & GALGAS_constructorExpressionAST_2D_weak::operator = (const GALGAS_constructorExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorExpressionAST_2D_weak::GALGAS_constructorExpressionAST_2D_weak (const GALGAS_constructorExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorExpressionAST_2D_weak GALGAS_constructorExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_constructorExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorExpressionAST GALGAS_constructorExpressionAST_2D_weak::bang_constructorExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_constructorExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_constructorExpressionAST) ;
      result = GALGAS_constructorExpressionAST ((cPtr_constructorExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@constructorExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorExpressionAST_2D_weak ("constructorExpressionAST-weak",
                                                         & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constructorExpressionAST_2D_weak GALGAS_constructorExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_constructorExpressionAST_2D_weak result ;
  const GALGAS_constructorExpressionAST_2D_weak * p = (const GALGAS_constructorExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @defaultConstructorExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_defaultConstructorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_defaultConstructorExpressionAST * p = (const cPtr_defaultConstructorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_defaultConstructorExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_defaultConstructorExpressionAST::objectCompare (const GALGAS_defaultConstructorExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_defaultConstructorExpressionAST::GALGAS_defaultConstructorExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_defaultConstructorExpressionAST GALGAS_defaultConstructorExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_defaultConstructorExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_defaultConstructorExpressionAST::GALGAS_defaultConstructorExpressionAST (const cPtr_defaultConstructorExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_defaultConstructorExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_defaultConstructorExpressionAST GALGAS_defaultConstructorExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_defaultConstructorExpressionAST result ;
  if (inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_defaultConstructorExpressionAST (inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_defaultConstructorExpressionAST::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_defaultConstructorExpressionAST * p = (cPtr_defaultConstructorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_defaultConstructorExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @defaultConstructorExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_defaultConstructorExpressionAST::cPtr_defaultConstructorExpressionAST (const GALGAS_lstring & in_mTypeName
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mTypeName (in_mTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_defaultConstructorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_defaultConstructorExpressionAST ;
}

void cPtr_defaultConstructorExpressionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@defaultConstructorExpressionAST:" ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_defaultConstructorExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_defaultConstructorExpressionAST (mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@defaultConstructorExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_defaultConstructorExpressionAST ("defaultConstructorExpressionAST",
                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_defaultConstructorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_defaultConstructorExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_defaultConstructorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_defaultConstructorExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_defaultConstructorExpressionAST GALGAS_defaultConstructorExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_defaultConstructorExpressionAST result ;
  const GALGAS_defaultConstructorExpressionAST * p = (const GALGAS_defaultConstructorExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_defaultConstructorExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("defaultConstructorExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_defaultConstructorExpressionAST_2D_weak::objectCompare (const GALGAS_defaultConstructorExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_defaultConstructorExpressionAST_2D_weak::GALGAS_defaultConstructorExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_defaultConstructorExpressionAST_2D_weak & GALGAS_defaultConstructorExpressionAST_2D_weak::operator = (const GALGAS_defaultConstructorExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_defaultConstructorExpressionAST_2D_weak::GALGAS_defaultConstructorExpressionAST_2D_weak (const GALGAS_defaultConstructorExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_defaultConstructorExpressionAST_2D_weak GALGAS_defaultConstructorExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_defaultConstructorExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_defaultConstructorExpressionAST GALGAS_defaultConstructorExpressionAST_2D_weak::bang_defaultConstructorExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_defaultConstructorExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_defaultConstructorExpressionAST) ;
      result = GALGAS_defaultConstructorExpressionAST ((cPtr_defaultConstructorExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@defaultConstructorExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_defaultConstructorExpressionAST_2D_weak ("defaultConstructorExpressionAST-weak",
                                                                & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_defaultConstructorExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_defaultConstructorExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_defaultConstructorExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_defaultConstructorExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_defaultConstructorExpressionAST_2D_weak GALGAS_defaultConstructorExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_defaultConstructorExpressionAST_2D_weak result ;
  const GALGAS_defaultConstructorExpressionAST_2D_weak * p = (const GALGAS_defaultConstructorExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_defaultConstructorExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("defaultConstructorExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @functionCallExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_functionCallExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_functionCallExpressionAST * p = (const cPtr_functionCallExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionCallExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mFunctionName.objectCompare (p->mProperty_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionList.objectCompare (p->mProperty_mExpressionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_functionCallExpressionAST::objectCompare (const GALGAS_functionCallExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionCallExpressionAST::GALGAS_functionCallExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionCallExpressionAST GALGAS_functionCallExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_functionCallExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_actualOutputExpressionList::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionCallExpressionAST::GALGAS_functionCallExpressionAST (const cPtr_functionCallExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionCallExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionCallExpressionAST GALGAS_functionCallExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mFunctionName,
                                                                                    const GALGAS_actualOutputExpressionList & inAttribute_mExpressionList
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_functionCallExpressionAST result ;
  if (inAttribute_mFunctionName.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionCallExpressionAST (inAttribute_mFunctionName, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_functionCallExpressionAST::readProperty_mFunctionName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_functionCallExpressionAST * p = (cPtr_functionCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList GALGAS_functionCallExpressionAST::readProperty_mExpressionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualOutputExpressionList () ;
  }else{
    cPtr_functionCallExpressionAST * p = (cPtr_functionCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @functionCallExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_functionCallExpressionAST::cPtr_functionCallExpressionAST (const GALGAS_lstring & in_mFunctionName,
                                                                const GALGAS_actualOutputExpressionList & in_mExpressionList
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mFunctionName (in_mFunctionName),
mProperty_mExpressionList (in_mExpressionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_functionCallExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionAST ;
}

void cPtr_functionCallExpressionAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@functionCallExpressionAST:" ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_functionCallExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionCallExpressionAST (mProperty_mFunctionName, mProperty_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@functionCallExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionCallExpressionAST ("functionCallExpressionAST",
                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionCallExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionCallExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionCallExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionCallExpressionAST GALGAS_functionCallExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_functionCallExpressionAST result ;
  const GALGAS_functionCallExpressionAST * p = (const GALGAS_functionCallExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionCallExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_functionCallExpressionAST_2D_weak::objectCompare (const GALGAS_functionCallExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionCallExpressionAST_2D_weak::GALGAS_functionCallExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionCallExpressionAST_2D_weak & GALGAS_functionCallExpressionAST_2D_weak::operator = (const GALGAS_functionCallExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionCallExpressionAST_2D_weak::GALGAS_functionCallExpressionAST_2D_weak (const GALGAS_functionCallExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionCallExpressionAST_2D_weak GALGAS_functionCallExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_functionCallExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionCallExpressionAST GALGAS_functionCallExpressionAST_2D_weak::bang_functionCallExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_functionCallExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionCallExpressionAST) ;
      result = GALGAS_functionCallExpressionAST ((cPtr_functionCallExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@functionCallExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionCallExpressionAST_2D_weak ("functionCallExpressionAST-weak",
                                                          & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionCallExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionCallExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionCallExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_functionCallExpressionAST_2D_weak GALGAS_functionCallExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_functionCallExpressionAST_2D_weak result ;
  const GALGAS_functionCallExpressionAST_2D_weak * p = (const GALGAS_functionCallExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionCallExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalTypeInExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalTypeInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalTypeInExpressionAST * p = (const cPtr_literalTypeInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalTypeInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLiteralTypeName.objectCompare (p->mProperty_mLiteralTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalTypeInExpressionAST::objectCompare (const GALGAS_literalTypeInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalTypeInExpressionAST::GALGAS_literalTypeInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalTypeInExpressionAST GALGAS_literalTypeInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalTypeInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalTypeInExpressionAST::GALGAS_literalTypeInExpressionAST (const cPtr_literalTypeInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalTypeInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalTypeInExpressionAST GALGAS_literalTypeInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mLiteralTypeName
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalTypeInExpressionAST result ;
  if (inAttribute_mLiteralTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalTypeInExpressionAST (inAttribute_mLiteralTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_literalTypeInExpressionAST::readProperty_mLiteralTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_literalTypeInExpressionAST * p = (cPtr_literalTypeInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalTypeInExpressionAST) ;
    return p->mProperty_mLiteralTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalTypeInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalTypeInExpressionAST::cPtr_literalTypeInExpressionAST (const GALGAS_lstring & in_mLiteralTypeName
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mLiteralTypeName (in_mLiteralTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalTypeInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalTypeInExpressionAST ;
}

void cPtr_literalTypeInExpressionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@literalTypeInExpressionAST:" ;
  mProperty_mLiteralTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalTypeInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalTypeInExpressionAST (mProperty_mLiteralTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalTypeInExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalTypeInExpressionAST ("literalTypeInExpressionAST",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalTypeInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalTypeInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalTypeInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalTypeInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalTypeInExpressionAST GALGAS_literalTypeInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalTypeInExpressionAST result ;
  const GALGAS_literalTypeInExpressionAST * p = (const GALGAS_literalTypeInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalTypeInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalTypeInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_literalTypeInExpressionAST_2D_weak::objectCompare (const GALGAS_literalTypeInExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalTypeInExpressionAST_2D_weak::GALGAS_literalTypeInExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalTypeInExpressionAST_2D_weak & GALGAS_literalTypeInExpressionAST_2D_weak::operator = (const GALGAS_literalTypeInExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalTypeInExpressionAST_2D_weak::GALGAS_literalTypeInExpressionAST_2D_weak (const GALGAS_literalTypeInExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalTypeInExpressionAST_2D_weak GALGAS_literalTypeInExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_literalTypeInExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalTypeInExpressionAST GALGAS_literalTypeInExpressionAST_2D_weak::bang_literalTypeInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_literalTypeInExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalTypeInExpressionAST) ;
      result = GALGAS_literalTypeInExpressionAST ((cPtr_literalTypeInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@literalTypeInExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalTypeInExpressionAST_2D_weak ("literalTypeInExpressionAST-weak",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalTypeInExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalTypeInExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalTypeInExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalTypeInExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalTypeInExpressionAST_2D_weak GALGAS_literalTypeInExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalTypeInExpressionAST_2D_weak result ;
  const GALGAS_literalTypeInExpressionAST_2D_weak * p = (const GALGAS_literalTypeInExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalTypeInExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalTypeInExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @collectionValueAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_collectionValueAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_collectionValueAST * p = (const cPtr_collectionValueAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_collectionValueAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementList.objectCompare (p->mProperty_mElementList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfCollectionValue.objectCompare (p->mProperty_mEndOfCollectionValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_collectionValueAST::objectCompare (const GALGAS_collectionValueAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueAST::GALGAS_collectionValueAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueAST GALGAS_collectionValueAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_collectionValueAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_collectionValueElementList::constructor_emptyList (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueAST::GALGAS_collectionValueAST (const cPtr_collectionValueAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_collectionValueAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueAST GALGAS_collectionValueAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName,
                                                                      const GALGAS_collectionValueElementList & inAttribute_mElementList,
                                                                      const GALGAS_location & inAttribute_mEndOfCollectionValue
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueAST result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mElementList.isValid () && inAttribute_mEndOfCollectionValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_collectionValueAST (inAttribute_mTypeName, inAttribute_mElementList, inAttribute_mEndOfCollectionValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueAST::setter_setMTypeName (GALGAS_lstring inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_collectionValueAST * p = (cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueAST::setter_setMElementList (GALGAS_collectionValueElementList inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_collectionValueAST * p = (cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    p->mProperty_mElementList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueAST::setter_setMEndOfCollectionValue (GALGAS_location inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_collectionValueAST * p = (cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    p->mProperty_mEndOfCollectionValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_collectionValueAST::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_collectionValueAST * p = (cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList GALGAS_collectionValueAST::readProperty_mElementList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_collectionValueElementList () ;
  }else{
    cPtr_collectionValueAST * p = (cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    return p->mProperty_mElementList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_collectionValueAST::readProperty_mEndOfCollectionValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_collectionValueAST * p = (cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    return p->mProperty_mEndOfCollectionValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @collectionValueAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_collectionValueAST::cPtr_collectionValueAST (const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_collectionValueElementList & in_mElementList,
                                                  const GALGAS_location & in_mEndOfCollectionValue
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mElementList (in_mElementList),
mProperty_mEndOfCollectionValue (in_mEndOfCollectionValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_collectionValueAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueAST ;
}

void cPtr_collectionValueAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@collectionValueAST:" ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfCollectionValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_collectionValueAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_collectionValueAST (mProperty_mTypeName, mProperty_mElementList, mProperty_mEndOfCollectionValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@collectionValueAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_collectionValueAST ("collectionValueAST",
                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_collectionValueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_collectionValueAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_collectionValueAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueAST GALGAS_collectionValueAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueAST result ;
  const GALGAS_collectionValueAST * p = (const GALGAS_collectionValueAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_collectionValueAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_collectionValueAST_2D_weak::objectCompare (const GALGAS_collectionValueAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueAST_2D_weak::GALGAS_collectionValueAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueAST_2D_weak & GALGAS_collectionValueAST_2D_weak::operator = (const GALGAS_collectionValueAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueAST_2D_weak::GALGAS_collectionValueAST_2D_weak (const GALGAS_collectionValueAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueAST_2D_weak GALGAS_collectionValueAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_collectionValueAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueAST GALGAS_collectionValueAST_2D_weak::bang_collectionValueAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_collectionValueAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_collectionValueAST) ;
      result = GALGAS_collectionValueAST ((cPtr_collectionValueAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@collectionValueAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_collectionValueAST_2D_weak ("collectionValueAST-weak",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_collectionValueAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_collectionValueAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_collectionValueAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueAST_2D_weak GALGAS_collectionValueAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueAST_2D_weak result ;
  const GALGAS_collectionValueAST_2D_weak * p = (const GALGAS_collectionValueAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_collectionValueAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @structPropertyAccessExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_structPropertyAccessExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structPropertyAccessExpressionAST * p = (const cPtr_structPropertyAccessExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_structPropertyAccessExpressionAST::objectCompare (const GALGAS_structPropertyAccessExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structPropertyAccessExpressionAST::GALGAS_structPropertyAccessExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structPropertyAccessExpressionAST::GALGAS_structPropertyAccessExpressionAST (const cPtr_structPropertyAccessExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structPropertyAccessExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_structPropertyAccessExpressionAST GALGAS_structPropertyAccessExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                                    const GALGAS_semanticExpressionAST & inAttribute_mExpression,
                                                                                                    const GALGAS_lstring & inAttribute_mPropertyName
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_structPropertyAccessExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid () && inAttribute_mPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structPropertyAccessExpressionAST (inAttribute_mOperatorLocation, inAttribute_mExpression, inAttribute_mPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structPropertyAccessExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structPropertyAccessExpressionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_structPropertyAccessExpressionAST::setter_setMPropertyName (GALGAS_lstring inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    p->mProperty_mPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_structPropertyAccessExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_structPropertyAccessExpressionAST::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_structPropertyAccessExpressionAST::readProperty_mPropertyName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    return p->mProperty_mPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @structPropertyAccessExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_structPropertyAccessExpressionAST::cPtr_structPropertyAccessExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                                                const GALGAS_semanticExpressionAST & in_mExpression,
                                                                                const GALGAS_lstring & in_mPropertyName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mExpression (in_mExpression),
mProperty_mPropertyName (in_mPropertyName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structPropertyAccessExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST ;
}

void cPtr_structPropertyAccessExpressionAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@structPropertyAccessExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structPropertyAccessExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structPropertyAccessExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, mProperty_mPropertyName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@structPropertyAccessExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST ("structPropertyAccessExpressionAST",
                                                          & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structPropertyAccessExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structPropertyAccessExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structPropertyAccessExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structPropertyAccessExpressionAST GALGAS_structPropertyAccessExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_structPropertyAccessExpressionAST result ;
  const GALGAS_structPropertyAccessExpressionAST * p = (const GALGAS_structPropertyAccessExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structPropertyAccessExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structPropertyAccessExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_structPropertyAccessExpressionAST_2D_weak::objectCompare (const GALGAS_structPropertyAccessExpressionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structPropertyAccessExpressionAST_2D_weak::GALGAS_structPropertyAccessExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structPropertyAccessExpressionAST_2D_weak & GALGAS_structPropertyAccessExpressionAST_2D_weak::operator = (const GALGAS_structPropertyAccessExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structPropertyAccessExpressionAST_2D_weak::GALGAS_structPropertyAccessExpressionAST_2D_weak (const GALGAS_structPropertyAccessExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structPropertyAccessExpressionAST_2D_weak GALGAS_structPropertyAccessExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_structPropertyAccessExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structPropertyAccessExpressionAST GALGAS_structPropertyAccessExpressionAST_2D_weak::bang_structPropertyAccessExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_structPropertyAccessExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structPropertyAccessExpressionAST) ;
      result = GALGAS_structPropertyAccessExpressionAST ((cPtr_structPropertyAccessExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@structPropertyAccessExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST_2D_weak ("structPropertyAccessExpressionAST-weak",
                                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structPropertyAccessExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structPropertyAccessExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structPropertyAccessExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structPropertyAccessExpressionAST_2D_weak GALGAS_structPropertyAccessExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_structPropertyAccessExpressionAST_2D_weak result ;
  const GALGAS_structPropertyAccessExpressionAST_2D_weak * p = (const GALGAS_structPropertyAccessExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structPropertyAccessExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structPropertyAccessExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_analysisContext::GALGAS_analysisContext (void) :
mProperty_mSemanticContext (),
mProperty_mPredefinedTypes (),
mProperty_mSelfObjectCppName (),
mProperty_selfType (),
mProperty_mSelfObjectCppPrefixForAccessingProperty (),
mProperty_requiresSelfForAccessingProperty () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_analysisContext::~ GALGAS_analysisContext (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_analysisContext::GALGAS_analysisContext (const GALGAS_semanticContext & inOperand0,
                                                const GALGAS_predefinedTypes & inOperand1,
                                                const GALGAS_string & inOperand2,
                                                const GALGAS_selfAvailability & inOperand3,
                                                const GALGAS_string & inOperand4,
                                                const GALGAS_bool & inOperand5) :
mProperty_mSemanticContext (inOperand0),
mProperty_mPredefinedTypes (inOperand1),
mProperty_mSelfObjectCppName (inOperand2),
mProperty_selfType (inOperand3),
mProperty_mSelfObjectCppPrefixForAccessingProperty (inOperand4),
mProperty_requiresSelfForAccessingProperty (inOperand5) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_analysisContext GALGAS_analysisContext::constructor_new (const GALGAS_semanticContext & inOperand0,
                                                                const GALGAS_predefinedTypes & inOperand1,
                                                                const GALGAS_string & inOperand2,
                                                                const GALGAS_selfAvailability & inOperand3,
                                                                const GALGAS_string & inOperand4,
                                                                const GALGAS_bool & inOperand5 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_analysisContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_analysisContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_analysisContext::objectCompare (const GALGAS_analysisContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSemanticContext.objectCompare (inOperand.mProperty_mSemanticContext) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPredefinedTypes.objectCompare (inOperand.mProperty_mPredefinedTypes) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelfObjectCppName.objectCompare (inOperand.mProperty_mSelfObjectCppName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_selfType.objectCompare (inOperand.mProperty_selfType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelfObjectCppPrefixForAccessingProperty.objectCompare (inOperand.mProperty_mSelfObjectCppPrefixForAccessingProperty) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_requiresSelfForAccessingProperty.objectCompare (inOperand.mProperty_requiresSelfForAccessingProperty) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_analysisContext::isValid (void) const {
  return mProperty_mSemanticContext.isValid () && mProperty_mPredefinedTypes.isValid () && mProperty_mSelfObjectCppName.isValid () && mProperty_selfType.isValid () && mProperty_mSelfObjectCppPrefixForAccessingProperty.isValid () && mProperty_requiresSelfForAccessingProperty.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_analysisContext::drop (void) {
  mProperty_mSemanticContext.drop () ;
  mProperty_mPredefinedTypes.drop () ;
  mProperty_mSelfObjectCppName.drop () ;
  mProperty_selfType.drop () ;
  mProperty_mSelfObjectCppPrefixForAccessingProperty.drop () ;
  mProperty_requiresSelfForAccessingProperty.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_analysisContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @analysisContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSemanticContext.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPredefinedTypes.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelfObjectCppName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_selfType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelfObjectCppPrefixForAccessingProperty.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_requiresSelfForAccessingProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@analysisContext type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_analysisContext ("analysisContext",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_analysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_analysisContext ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_analysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_analysisContext (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_analysisContext GALGAS_analysisContext::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_analysisContext result ;
  const GALGAS_analysisContext * p = (const GALGAS_analysisContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_analysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("analysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @assignmentInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_assignmentInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetVariableName.objectCompare (p->mProperty_mTargetVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionalProperty.objectCompare (p->mProperty_mOptionalProperty) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_assignmentInstructionAST::objectCompare (const GALGAS_assignmentInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST::GALGAS_assignmentInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST::GALGAS_assignmentInstructionAST (const cPtr_assignmentInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                  const GALGAS_lstring & inAttribute_mTargetVariableName,
                                                                                  const GALGAS_lstring & inAttribute_mOptionalProperty,
                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mSourceExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetVariableName.isValid () && inAttribute_mOptionalProperty.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignmentInstructionAST (inAttribute_mInstructionLocation, inAttribute_mTargetVariableName, inAttribute_mOptionalProperty, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_assignmentInstructionAST::readProperty_mTargetVariableName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    return p->mProperty_mTargetVariableName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_assignmentInstructionAST::readProperty_mOptionalProperty (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    return p->mProperty_mOptionalProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_assignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @assignmentInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_assignmentInstructionAST::cPtr_assignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_lstring & in_mTargetVariableName,
                                                              const GALGAS_lstring & in_mOptionalProperty,
                                                              const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetVariableName (in_mTargetVariableName),
mProperty_mOptionalProperty (in_mOptionalProperty),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_assignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

void cPtr_assignmentInstructionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@assignmentInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionalProperty.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTargetVariableName, mProperty_mOptionalProperty, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@assignmentInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentInstructionAST ("assignmentInstructionAST",
                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST result ;
  const GALGAS_assignmentInstructionAST * p = (const GALGAS_assignmentInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_assignmentInstructionAST_2D_weak::objectCompare (const GALGAS_assignmentInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST_2D_weak::GALGAS_assignmentInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST_2D_weak & GALGAS_assignmentInstructionAST_2D_weak::operator = (const GALGAS_assignmentInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST_2D_weak::GALGAS_assignmentInstructionAST_2D_weak (const GALGAS_assignmentInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST_2D_weak GALGAS_assignmentInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST_2D_weak::bang_assignmentInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_assignmentInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignmentInstructionAST) ;
      result = GALGAS_assignmentInstructionAST ((cPtr_assignmentInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@assignmentInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentInstructionAST_2D_weak ("assignmentInstructionAST-weak",
                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST_2D_weak GALGAS_assignmentInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST_2D_weak result ;
  const GALGAS_assignmentInstructionAST_2D_weak * p = (const GALGAS_assignmentInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @selfPropertyAssignmentInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_selfPropertyAssignmentInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfPropertyAssignmentInstructionAST * p = (const cPtr_selfPropertyAssignmentInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfPropertyAssignmentInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetSelfPropertyName.objectCompare (p->mProperty_mTargetSelfPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionalProperty.objectCompare (p->mProperty_mOptionalProperty) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_selfPropertyAssignmentInstructionAST::objectCompare (const GALGAS_selfPropertyAssignmentInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfPropertyAssignmentInstructionAST::GALGAS_selfPropertyAssignmentInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfPropertyAssignmentInstructionAST::GALGAS_selfPropertyAssignmentInstructionAST (const cPtr_selfPropertyAssignmentInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfPropertyAssignmentInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfPropertyAssignmentInstructionAST GALGAS_selfPropertyAssignmentInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                          const GALGAS_lstring & inAttribute_mTargetSelfPropertyName,
                                                                                                          const GALGAS_lstring & inAttribute_mOptionalProperty,
                                                                                                          const GALGAS_semanticExpressionAST & inAttribute_mSourceExpression
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_selfPropertyAssignmentInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetSelfPropertyName.isValid () && inAttribute_mOptionalProperty.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfPropertyAssignmentInstructionAST (inAttribute_mInstructionLocation, inAttribute_mTargetSelfPropertyName, inAttribute_mOptionalProperty, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_selfPropertyAssignmentInstructionAST::readProperty_mTargetSelfPropertyName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_selfPropertyAssignmentInstructionAST * p = (cPtr_selfPropertyAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfPropertyAssignmentInstructionAST) ;
    return p->mProperty_mTargetSelfPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_selfPropertyAssignmentInstructionAST::readProperty_mOptionalProperty (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_selfPropertyAssignmentInstructionAST * p = (cPtr_selfPropertyAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfPropertyAssignmentInstructionAST) ;
    return p->mProperty_mOptionalProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_selfPropertyAssignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_selfPropertyAssignmentInstructionAST * p = (cPtr_selfPropertyAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfPropertyAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @selfPropertyAssignmentInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_selfPropertyAssignmentInstructionAST::cPtr_selfPropertyAssignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                      const GALGAS_lstring & in_mTargetSelfPropertyName,
                                                                                      const GALGAS_lstring & in_mOptionalProperty,
                                                                                      const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetSelfPropertyName (in_mTargetSelfPropertyName),
mProperty_mOptionalProperty (in_mOptionalProperty),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfPropertyAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST ;
}

void cPtr_selfPropertyAssignmentInstructionAST::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@selfPropertyAssignmentInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetSelfPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionalProperty.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfPropertyAssignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfPropertyAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTargetSelfPropertyName, mProperty_mOptionalProperty, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@selfPropertyAssignmentInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST ("selfPropertyAssignmentInstructionAST",
                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfPropertyAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfPropertyAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfPropertyAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfPropertyAssignmentInstructionAST GALGAS_selfPropertyAssignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selfPropertyAssignmentInstructionAST result ;
  const GALGAS_selfPropertyAssignmentInstructionAST * p = (const GALGAS_selfPropertyAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfPropertyAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfPropertyAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_selfPropertyAssignmentInstructionAST_2D_weak::objectCompare (const GALGAS_selfPropertyAssignmentInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfPropertyAssignmentInstructionAST_2D_weak::GALGAS_selfPropertyAssignmentInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfPropertyAssignmentInstructionAST_2D_weak & GALGAS_selfPropertyAssignmentInstructionAST_2D_weak::operator = (const GALGAS_selfPropertyAssignmentInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfPropertyAssignmentInstructionAST_2D_weak::GALGAS_selfPropertyAssignmentInstructionAST_2D_weak (const GALGAS_selfPropertyAssignmentInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfPropertyAssignmentInstructionAST_2D_weak GALGAS_selfPropertyAssignmentInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_selfPropertyAssignmentInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfPropertyAssignmentInstructionAST GALGAS_selfPropertyAssignmentInstructionAST_2D_weak::bang_selfPropertyAssignmentInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selfPropertyAssignmentInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfPropertyAssignmentInstructionAST) ;
      result = GALGAS_selfPropertyAssignmentInstructionAST ((cPtr_selfPropertyAssignmentInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@selfPropertyAssignmentInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST_2D_weak ("selfPropertyAssignmentInstructionAST-weak",
                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfPropertyAssignmentInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfPropertyAssignmentInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfPropertyAssignmentInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfPropertyAssignmentInstructionAST_2D_weak GALGAS_selfPropertyAssignmentInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selfPropertyAssignmentInstructionAST_2D_weak result ;
  const GALGAS_selfPropertyAssignmentInstructionAST_2D_weak * p = (const GALGAS_selfPropertyAssignmentInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfPropertyAssignmentInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfPropertyAssignmentInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @plusEqualElementsInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_plusEqualElementsInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_plusEqualElementsInstructionAST * p = (const cPtr_plusEqualElementsInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPrefixedBySelf.objectCompare (p->mProperty_mPrefixedBySelf) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressions.objectCompare (p->mProperty_mExpressions) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_plusEqualElementsInstructionAST::objectCompare (const GALGAS_plusEqualElementsInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualElementsInstructionAST::GALGAS_plusEqualElementsInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualElementsInstructionAST GALGAS_plusEqualElementsInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_plusEqualElementsInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_bool::constructor_default (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                  GALGAS_actualOutputExpressionList::constructor_emptyList (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualElementsInstructionAST::GALGAS_plusEqualElementsInstructionAST (const cPtr_plusEqualElementsInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_plusEqualElementsInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualElementsInstructionAST GALGAS_plusEqualElementsInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_bool & inAttribute_mPrefixedBySelf,
                                                                                                const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                                const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                const GALGAS_actualOutputExpressionList & inAttribute_mExpressions
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualElementsInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mPrefixedBySelf.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mExpressions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_plusEqualElementsInstructionAST (inAttribute_mInstructionLocation, inAttribute_mPrefixedBySelf, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mExpressions COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_plusEqualElementsInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_plusEqualElementsInstructionAST * p = (cPtr_plusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_plusEqualElementsInstructionAST::readProperty_mReceiverName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_plusEqualElementsInstructionAST * p = (cPtr_plusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_plusEqualElementsInstructionAST::readProperty_mStructAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_plusEqualElementsInstructionAST * p = (cPtr_plusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList GALGAS_plusEqualElementsInstructionAST::readProperty_mExpressions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualOutputExpressionList () ;
  }else{
    cPtr_plusEqualElementsInstructionAST * p = (cPtr_plusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
    return p->mProperty_mExpressions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @plusEqualElementsInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_plusEqualElementsInstructionAST::cPtr_plusEqualElementsInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_bool & in_mPrefixedBySelf,
                                                                            const GALGAS_lstring & in_mReceiverName,
                                                                            const GALGAS_lstringlist & in_mStructAttributeList,
                                                                            const GALGAS_actualOutputExpressionList & in_mExpressions
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mPrefixedBySelf (in_mPrefixedBySelf),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mExpressions (in_mExpressions) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_plusEqualElementsInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST ;
}

void cPtr_plusEqualElementsInstructionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@plusEqualElementsInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_plusEqualElementsInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_plusEqualElementsInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mExpressions COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@plusEqualElementsInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST ("plusEqualElementsInstructionAST",
                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_plusEqualElementsInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_plusEqualElementsInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_plusEqualElementsInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualElementsInstructionAST GALGAS_plusEqualElementsInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualElementsInstructionAST result ;
  const GALGAS_plusEqualElementsInstructionAST * p = (const GALGAS_plusEqualElementsInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_plusEqualElementsInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusEqualElementsInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_plusEqualElementsInstructionAST_2D_weak::objectCompare (const GALGAS_plusEqualElementsInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualElementsInstructionAST_2D_weak::GALGAS_plusEqualElementsInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualElementsInstructionAST_2D_weak & GALGAS_plusEqualElementsInstructionAST_2D_weak::operator = (const GALGAS_plusEqualElementsInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualElementsInstructionAST_2D_weak::GALGAS_plusEqualElementsInstructionAST_2D_weak (const GALGAS_plusEqualElementsInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualElementsInstructionAST_2D_weak GALGAS_plusEqualElementsInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_plusEqualElementsInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualElementsInstructionAST GALGAS_plusEqualElementsInstructionAST_2D_weak::bang_plusEqualElementsInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_plusEqualElementsInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_plusEqualElementsInstructionAST) ;
      result = GALGAS_plusEqualElementsInstructionAST ((cPtr_plusEqualElementsInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@plusEqualElementsInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST_2D_weak ("plusEqualElementsInstructionAST-weak",
                                                                & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_plusEqualElementsInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_plusEqualElementsInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_plusEqualElementsInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualElementsInstructionAST_2D_weak GALGAS_plusEqualElementsInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualElementsInstructionAST_2D_weak result ;
  const GALGAS_plusEqualElementsInstructionAST_2D_weak * p = (const GALGAS_plusEqualElementsInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_plusEqualElementsInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusEqualElementsInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @plusEqualExpressionInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_plusEqualExpressionInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_plusEqualExpressionInstructionAST * p = (const cPtr_plusEqualExpressionInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPrefixedBySelf.objectCompare (p->mProperty_mPrefixedBySelf) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_plusEqualExpressionInstructionAST::objectCompare (const GALGAS_plusEqualExpressionInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualExpressionInstructionAST::GALGAS_plusEqualExpressionInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualExpressionInstructionAST::GALGAS_plusEqualExpressionInstructionAST (const cPtr_plusEqualExpressionInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_plusEqualExpressionInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualExpressionInstructionAST GALGAS_plusEqualExpressionInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                    const GALGAS_bool & inAttribute_mPrefixedBySelf,
                                                                                                    const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                                    const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                    const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualExpressionInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mPrefixedBySelf.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_plusEqualExpressionInstructionAST (inAttribute_mInstructionLocation, inAttribute_mPrefixedBySelf, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_plusEqualExpressionInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_plusEqualExpressionInstructionAST * p = (cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_plusEqualExpressionInstructionAST::readProperty_mReceiverName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_plusEqualExpressionInstructionAST * p = (cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_plusEqualExpressionInstructionAST::readProperty_mStructAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_plusEqualExpressionInstructionAST * p = (cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_plusEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_plusEqualExpressionInstructionAST * p = (cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @plusEqualExpressionInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_plusEqualExpressionInstructionAST::cPtr_plusEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_bool & in_mPrefixedBySelf,
                                                                                const GALGAS_lstring & in_mReceiverName,
                                                                                const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                const GALGAS_semanticExpressionAST & in_mExpression
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mPrefixedBySelf (in_mPrefixedBySelf),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_plusEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST ;
}

void cPtr_plusEqualExpressionInstructionAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@plusEqualExpressionInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_plusEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_plusEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@plusEqualExpressionInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST ("plusEqualExpressionInstructionAST",
                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_plusEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_plusEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_plusEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualExpressionInstructionAST GALGAS_plusEqualExpressionInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualExpressionInstructionAST result ;
  const GALGAS_plusEqualExpressionInstructionAST * p = (const GALGAS_plusEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_plusEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_plusEqualExpressionInstructionAST_2D_weak::objectCompare (const GALGAS_plusEqualExpressionInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualExpressionInstructionAST_2D_weak::GALGAS_plusEqualExpressionInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualExpressionInstructionAST_2D_weak & GALGAS_plusEqualExpressionInstructionAST_2D_weak::operator = (const GALGAS_plusEqualExpressionInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualExpressionInstructionAST_2D_weak::GALGAS_plusEqualExpressionInstructionAST_2D_weak (const GALGAS_plusEqualExpressionInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualExpressionInstructionAST_2D_weak GALGAS_plusEqualExpressionInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_plusEqualExpressionInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualExpressionInstructionAST GALGAS_plusEqualExpressionInstructionAST_2D_weak::bang_plusEqualExpressionInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_plusEqualExpressionInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_plusEqualExpressionInstructionAST) ;
      result = GALGAS_plusEqualExpressionInstructionAST ((cPtr_plusEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@plusEqualExpressionInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST_2D_weak ("plusEqualExpressionInstructionAST-weak",
                                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_plusEqualExpressionInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_plusEqualExpressionInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_plusEqualExpressionInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualExpressionInstructionAST_2D_weak GALGAS_plusEqualExpressionInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualExpressionInstructionAST_2D_weak result ;
  const GALGAS_plusEqualExpressionInstructionAST_2D_weak * p = (const GALGAS_plusEqualExpressionInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_plusEqualExpressionInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusEqualExpressionInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @minusEqualExpressionInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_minusEqualExpressionInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_minusEqualExpressionInstructionAST * p = (const cPtr_minusEqualExpressionInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_minusEqualExpressionInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPrefixedBySelf.objectCompare (p->mProperty_mPrefixedBySelf) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_minusEqualExpressionInstructionAST::objectCompare (const GALGAS_minusEqualExpressionInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_minusEqualExpressionInstructionAST::GALGAS_minusEqualExpressionInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_minusEqualExpressionInstructionAST::GALGAS_minusEqualExpressionInstructionAST (const cPtr_minusEqualExpressionInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_minusEqualExpressionInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_minusEqualExpressionInstructionAST GALGAS_minusEqualExpressionInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_bool & inAttribute_mPrefixedBySelf,
                                                                                                      const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                                      const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                      const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_minusEqualExpressionInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mPrefixedBySelf.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_minusEqualExpressionInstructionAST (inAttribute_mInstructionLocation, inAttribute_mPrefixedBySelf, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_minusEqualExpressionInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_minusEqualExpressionInstructionAST * p = (cPtr_minusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_minusEqualExpressionInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_minusEqualExpressionInstructionAST::readProperty_mReceiverName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_minusEqualExpressionInstructionAST * p = (cPtr_minusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_minusEqualExpressionInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_minusEqualExpressionInstructionAST::readProperty_mStructAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_minusEqualExpressionInstructionAST * p = (cPtr_minusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_minusEqualExpressionInstructionAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_minusEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_minusEqualExpressionInstructionAST * p = (cPtr_minusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_minusEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @minusEqualExpressionInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_minusEqualExpressionInstructionAST::cPtr_minusEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_bool & in_mPrefixedBySelf,
                                                                                  const GALGAS_lstring & in_mReceiverName,
                                                                                  const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                  const GALGAS_semanticExpressionAST & in_mExpression
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mPrefixedBySelf (in_mPrefixedBySelf),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_minusEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST ;
}

void cPtr_minusEqualExpressionInstructionAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@minusEqualExpressionInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_minusEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_minusEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@minusEqualExpressionInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST ("minusEqualExpressionInstructionAST",
                                                           & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_minusEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_minusEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_minusEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_minusEqualExpressionInstructionAST GALGAS_minusEqualExpressionInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_minusEqualExpressionInstructionAST result ;
  const GALGAS_minusEqualExpressionInstructionAST * p = (const GALGAS_minusEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_minusEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("minusEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_minusEqualExpressionInstructionAST_2D_weak::objectCompare (const GALGAS_minusEqualExpressionInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_minusEqualExpressionInstructionAST_2D_weak::GALGAS_minusEqualExpressionInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_minusEqualExpressionInstructionAST_2D_weak & GALGAS_minusEqualExpressionInstructionAST_2D_weak::operator = (const GALGAS_minusEqualExpressionInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_minusEqualExpressionInstructionAST_2D_weak::GALGAS_minusEqualExpressionInstructionAST_2D_weak (const GALGAS_minusEqualExpressionInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_minusEqualExpressionInstructionAST_2D_weak GALGAS_minusEqualExpressionInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_minusEqualExpressionInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_minusEqualExpressionInstructionAST GALGAS_minusEqualExpressionInstructionAST_2D_weak::bang_minusEqualExpressionInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_minusEqualExpressionInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_minusEqualExpressionInstructionAST) ;
      result = GALGAS_minusEqualExpressionInstructionAST ((cPtr_minusEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@minusEqualExpressionInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST_2D_weak ("minusEqualExpressionInstructionAST-weak",
                                                                   & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_minusEqualExpressionInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_minusEqualExpressionInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_minusEqualExpressionInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_minusEqualExpressionInstructionAST_2D_weak GALGAS_minusEqualExpressionInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_minusEqualExpressionInstructionAST_2D_weak result ;
  const GALGAS_minusEqualExpressionInstructionAST_2D_weak * p = (const GALGAS_minusEqualExpressionInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_minusEqualExpressionInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("minusEqualExpressionInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @mulEqualExpressionInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_mulEqualExpressionInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_mulEqualExpressionInstructionAST * p = (const cPtr_mulEqualExpressionInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_mulEqualExpressionInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPrefixedBySelf.objectCompare (p->mProperty_mPrefixedBySelf) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_mulEqualExpressionInstructionAST::objectCompare (const GALGAS_mulEqualExpressionInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mulEqualExpressionInstructionAST::GALGAS_mulEqualExpressionInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mulEqualExpressionInstructionAST::GALGAS_mulEqualExpressionInstructionAST (const cPtr_mulEqualExpressionInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mulEqualExpressionInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_mulEqualExpressionInstructionAST GALGAS_mulEqualExpressionInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_bool & inAttribute_mPrefixedBySelf,
                                                                                                  const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                                  const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mulEqualExpressionInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mPrefixedBySelf.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_mulEqualExpressionInstructionAST (inAttribute_mInstructionLocation, inAttribute_mPrefixedBySelf, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mulEqualExpressionInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_mulEqualExpressionInstructionAST * p = (cPtr_mulEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mulEqualExpressionInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mulEqualExpressionInstructionAST::readProperty_mReceiverName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_mulEqualExpressionInstructionAST * p = (cPtr_mulEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mulEqualExpressionInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_mulEqualExpressionInstructionAST::readProperty_mStructAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_mulEqualExpressionInstructionAST * p = (cPtr_mulEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mulEqualExpressionInstructionAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_mulEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_mulEqualExpressionInstructionAST * p = (cPtr_mulEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mulEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @mulEqualExpressionInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_mulEqualExpressionInstructionAST::cPtr_mulEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_bool & in_mPrefixedBySelf,
                                                                              const GALGAS_lstring & in_mReceiverName,
                                                                              const GALGAS_lstringlist & in_mStructAttributeList,
                                                                              const GALGAS_semanticExpressionAST & in_mExpression
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mPrefixedBySelf (in_mPrefixedBySelf),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_mulEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST ;
}

void cPtr_mulEqualExpressionInstructionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@mulEqualExpressionInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_mulEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_mulEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@mulEqualExpressionInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST ("mulEqualExpressionInstructionAST",
                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mulEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mulEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mulEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mulEqualExpressionInstructionAST GALGAS_mulEqualExpressionInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_mulEqualExpressionInstructionAST result ;
  const GALGAS_mulEqualExpressionInstructionAST * p = (const GALGAS_mulEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mulEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mulEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_mulEqualExpressionInstructionAST_2D_weak::objectCompare (const GALGAS_mulEqualExpressionInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mulEqualExpressionInstructionAST_2D_weak::GALGAS_mulEqualExpressionInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mulEqualExpressionInstructionAST_2D_weak & GALGAS_mulEqualExpressionInstructionAST_2D_weak::operator = (const GALGAS_mulEqualExpressionInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mulEqualExpressionInstructionAST_2D_weak::GALGAS_mulEqualExpressionInstructionAST_2D_weak (const GALGAS_mulEqualExpressionInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mulEqualExpressionInstructionAST_2D_weak GALGAS_mulEqualExpressionInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_mulEqualExpressionInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mulEqualExpressionInstructionAST GALGAS_mulEqualExpressionInstructionAST_2D_weak::bang_mulEqualExpressionInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_mulEqualExpressionInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_mulEqualExpressionInstructionAST) ;
      result = GALGAS_mulEqualExpressionInstructionAST ((cPtr_mulEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@mulEqualExpressionInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST_2D_weak ("mulEqualExpressionInstructionAST-weak",
                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mulEqualExpressionInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mulEqualExpressionInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mulEqualExpressionInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mulEqualExpressionInstructionAST_2D_weak GALGAS_mulEqualExpressionInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_mulEqualExpressionInstructionAST_2D_weak result ;
  const GALGAS_mulEqualExpressionInstructionAST_2D_weak * p = (const GALGAS_mulEqualExpressionInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mulEqualExpressionInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mulEqualExpressionInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @divEqualExpressionInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_divEqualExpressionInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_divEqualExpressionInstructionAST * p = (const cPtr_divEqualExpressionInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_divEqualExpressionInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPrefixedBySelf.objectCompare (p->mProperty_mPrefixedBySelf) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_divEqualExpressionInstructionAST::objectCompare (const GALGAS_divEqualExpressionInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divEqualExpressionInstructionAST::GALGAS_divEqualExpressionInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divEqualExpressionInstructionAST::GALGAS_divEqualExpressionInstructionAST (const cPtr_divEqualExpressionInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_divEqualExpressionInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_divEqualExpressionInstructionAST GALGAS_divEqualExpressionInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_bool & inAttribute_mPrefixedBySelf,
                                                                                                  const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                                  const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_divEqualExpressionInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mPrefixedBySelf.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_divEqualExpressionInstructionAST (inAttribute_mInstructionLocation, inAttribute_mPrefixedBySelf, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_divEqualExpressionInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_divEqualExpressionInstructionAST * p = (cPtr_divEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divEqualExpressionInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_divEqualExpressionInstructionAST::readProperty_mReceiverName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_divEqualExpressionInstructionAST * p = (cPtr_divEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divEqualExpressionInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_divEqualExpressionInstructionAST::readProperty_mStructAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_divEqualExpressionInstructionAST * p = (cPtr_divEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divEqualExpressionInstructionAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_divEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_divEqualExpressionInstructionAST * p = (cPtr_divEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @divEqualExpressionInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_divEqualExpressionInstructionAST::cPtr_divEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_bool & in_mPrefixedBySelf,
                                                                              const GALGAS_lstring & in_mReceiverName,
                                                                              const GALGAS_lstringlist & in_mStructAttributeList,
                                                                              const GALGAS_semanticExpressionAST & in_mExpression
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mPrefixedBySelf (in_mPrefixedBySelf),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_divEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST ;
}

void cPtr_divEqualExpressionInstructionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@divEqualExpressionInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_divEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_divEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@divEqualExpressionInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST ("divEqualExpressionInstructionAST",
                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_divEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_divEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_divEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divEqualExpressionInstructionAST GALGAS_divEqualExpressionInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_divEqualExpressionInstructionAST result ;
  const GALGAS_divEqualExpressionInstructionAST * p = (const GALGAS_divEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_divEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("divEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_divEqualExpressionInstructionAST_2D_weak::objectCompare (const GALGAS_divEqualExpressionInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divEqualExpressionInstructionAST_2D_weak::GALGAS_divEqualExpressionInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divEqualExpressionInstructionAST_2D_weak & GALGAS_divEqualExpressionInstructionAST_2D_weak::operator = (const GALGAS_divEqualExpressionInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divEqualExpressionInstructionAST_2D_weak::GALGAS_divEqualExpressionInstructionAST_2D_weak (const GALGAS_divEqualExpressionInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divEqualExpressionInstructionAST_2D_weak GALGAS_divEqualExpressionInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_divEqualExpressionInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divEqualExpressionInstructionAST GALGAS_divEqualExpressionInstructionAST_2D_weak::bang_divEqualExpressionInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_divEqualExpressionInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_divEqualExpressionInstructionAST) ;
      result = GALGAS_divEqualExpressionInstructionAST ((cPtr_divEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@divEqualExpressionInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST_2D_weak ("divEqualExpressionInstructionAST-weak",
                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_divEqualExpressionInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_divEqualExpressionInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_divEqualExpressionInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divEqualExpressionInstructionAST_2D_weak GALGAS_divEqualExpressionInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_divEqualExpressionInstructionAST_2D_weak result ;
  const GALGAS_divEqualExpressionInstructionAST_2D_weak * p = (const GALGAS_divEqualExpressionInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_divEqualExpressionInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("divEqualExpressionInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @plusEqualnstructionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_plusEqualnstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_plusEqualnstructionForGeneration * p = (const cPtr_plusEqualnstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverCppName.objectCompare (p->mProperty_mReceiverCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetType.objectCompare (p->mProperty_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNameForCheckingFormalParameterUsing.objectCompare (p->mProperty_mNameForCheckingFormalParameterUsing) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionList.objectCompare (p->mProperty_mExpressionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_plusEqualnstructionForGeneration::objectCompare (const GALGAS_plusEqualnstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualnstructionForGeneration::GALGAS_plusEqualnstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualnstructionForGeneration GALGAS_plusEqualnstructionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_plusEqualnstructionForGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                   GALGAS_semanticExpressionListForGeneration::constructor_emptyList (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualnstructionForGeneration::GALGAS_plusEqualnstructionForGeneration (const cPtr_plusEqualnstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_plusEqualnstructionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualnstructionForGeneration GALGAS_plusEqualnstructionForGeneration::constructor_new (const GALGAS_string & inAttribute_mReceiverCppName,
                                                                                                  const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mTargetType,
                                                                                                  const GALGAS_string & inAttribute_mNameForCheckingFormalParameterUsing,
                                                                                                  const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                  const GALGAS_semanticExpressionListForGeneration & inAttribute_mExpressionList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualnstructionForGeneration result ;
  if (inAttribute_mReceiverCppName.isValid () && inAttribute_mTargetType.isValid () && inAttribute_mNameForCheckingFormalParameterUsing.isValid () && inAttribute_mInstructionLocation.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_plusEqualnstructionForGeneration (inAttribute_mReceiverCppName, inAttribute_mTargetType, inAttribute_mNameForCheckingFormalParameterUsing, inAttribute_mInstructionLocation, inAttribute_mStructAttributeList, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_plusEqualnstructionForGeneration::readProperty_mReceiverCppName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    return p->mProperty_mReceiverCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_plusEqualnstructionForGeneration::readProperty_mTargetType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    return p->mProperty_mTargetType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_plusEqualnstructionForGeneration::readProperty_mNameForCheckingFormalParameterUsing (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    return p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_plusEqualnstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_plusEqualnstructionForGeneration::readProperty_mStructAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration GALGAS_plusEqualnstructionForGeneration::readProperty_mExpressionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    return p->mProperty_mExpressionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @plusEqualnstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_plusEqualnstructionForGeneration::cPtr_plusEqualnstructionForGeneration (const GALGAS_string & in_mReceiverCppName,
                                                                              const GALGAS_unifiedTypeMap_2D_entry & in_mTargetType,
                                                                              const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                                              const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstringlist & in_mStructAttributeList,
                                                                              const GALGAS_semanticExpressionListForGeneration & in_mExpressionList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mReceiverCppName (in_mReceiverCppName),
mProperty_mTargetType (in_mTargetType),
mProperty_mNameForCheckingFormalParameterUsing (in_mNameForCheckingFormalParameterUsing),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mExpressionList (in_mExpressionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_plusEqualnstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration ;
}

void cPtr_plusEqualnstructionForGeneration::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@plusEqualnstructionForGeneration:" ;
  mProperty_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_plusEqualnstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_plusEqualnstructionForGeneration (mProperty_mReceiverCppName, mProperty_mTargetType, mProperty_mNameForCheckingFormalParameterUsing, mProperty_mInstructionLocation, mProperty_mStructAttributeList, mProperty_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@plusEqualnstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration ("plusEqualnstructionForGeneration",
                                                         & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_plusEqualnstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_plusEqualnstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_plusEqualnstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualnstructionForGeneration GALGAS_plusEqualnstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualnstructionForGeneration result ;
  const GALGAS_plusEqualnstructionForGeneration * p = (const GALGAS_plusEqualnstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_plusEqualnstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusEqualnstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_plusEqualnstructionForGeneration_2D_weak::objectCompare (const GALGAS_plusEqualnstructionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualnstructionForGeneration_2D_weak::GALGAS_plusEqualnstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualnstructionForGeneration_2D_weak & GALGAS_plusEqualnstructionForGeneration_2D_weak::operator = (const GALGAS_plusEqualnstructionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualnstructionForGeneration_2D_weak::GALGAS_plusEqualnstructionForGeneration_2D_weak (const GALGAS_plusEqualnstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualnstructionForGeneration_2D_weak GALGAS_plusEqualnstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_plusEqualnstructionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualnstructionForGeneration GALGAS_plusEqualnstructionForGeneration_2D_weak::bang_plusEqualnstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_plusEqualnstructionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_plusEqualnstructionForGeneration) ;
      result = GALGAS_plusEqualnstructionForGeneration ((cPtr_plusEqualnstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@plusEqualnstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration_2D_weak ("plusEqualnstructionForGeneration-weak",
                                                                 & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_plusEqualnstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_plusEqualnstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_plusEqualnstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_plusEqualnstructionForGeneration_2D_weak GALGAS_plusEqualnstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualnstructionForGeneration_2D_weak result ;
  const GALGAS_plusEqualnstructionForGeneration_2D_weak * p = (const GALGAS_plusEqualnstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_plusEqualnstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusEqualnstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @enumeratedCollectionImplicitVarInExpAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_enumeratedCollectionImplicitVarInExpAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumeratedCollectionImplicitVarInExpAST * p = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mPrefix.objectCompare (p->mProperty_mPrefix) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumeratedExpression.objectCompare (p->mProperty_mEnumeratedExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfAnonymousEnumeration.objectCompare (p->mProperty_mEndOfAnonymousEnumeration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_enumeratedCollectionImplicitVarInExpAST::objectCompare (const GALGAS_enumeratedCollectionImplicitVarInExpAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST::GALGAS_enumeratedCollectionImplicitVarInExpAST (void) :
GALGAS_abstractEnumeratedCollectionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST::GALGAS_enumeratedCollectionImplicitVarInExpAST (const cPtr_enumeratedCollectionImplicitVarInExpAST * inSourcePtr) :
GALGAS_abstractEnumeratedCollectionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST GALGAS_enumeratedCollectionImplicitVarInExpAST::constructor_new (const GALGAS_lstring & inAttribute_mPrefix,
                                                                                                                const GALGAS_semanticExpressionAST & inAttribute_mEnumeratedExpression,
                                                                                                                const GALGAS_location & inAttribute_mEndOfAnonymousEnumeration
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionImplicitVarInExpAST result ;
  if (inAttribute_mPrefix.isValid () && inAttribute_mEnumeratedExpression.isValid () && inAttribute_mEndOfAnonymousEnumeration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumeratedCollectionImplicitVarInExpAST (inAttribute_mPrefix, inAttribute_mEnumeratedExpression, inAttribute_mEndOfAnonymousEnumeration COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumeratedCollectionImplicitVarInExpAST::readProperty_mPrefix (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_enumeratedCollectionImplicitVarInExpAST * p = (cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
    return p->mProperty_mPrefix ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_enumeratedCollectionImplicitVarInExpAST::readProperty_mEnumeratedExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_enumeratedCollectionImplicitVarInExpAST * p = (cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
    return p->mProperty_mEnumeratedExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_enumeratedCollectionImplicitVarInExpAST::readProperty_mEndOfAnonymousEnumeration (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_enumeratedCollectionImplicitVarInExpAST * p = (cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
    return p->mProperty_mEndOfAnonymousEnumeration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @enumeratedCollectionImplicitVarInExpAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_enumeratedCollectionImplicitVarInExpAST::cPtr_enumeratedCollectionImplicitVarInExpAST (const GALGAS_lstring & in_mPrefix,
                                                                                            const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                                            const GALGAS_location & in_mEndOfAnonymousEnumeration
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (THERE),
mProperty_mPrefix (in_mPrefix),
mProperty_mEnumeratedExpression (in_mEnumeratedExpression),
mProperty_mEndOfAnonymousEnumeration (in_mEndOfAnonymousEnumeration) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumeratedCollectionImplicitVarInExpAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ;
}

void cPtr_enumeratedCollectionImplicitVarInExpAST::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@enumeratedCollectionImplicitVarInExpAST:" ;
  mProperty_mPrefix.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumeratedExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfAnonymousEnumeration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumeratedCollectionImplicitVarInExpAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumeratedCollectionImplicitVarInExpAST (mProperty_mPrefix, mProperty_mEnumeratedExpression, mProperty_mEndOfAnonymousEnumeration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@enumeratedCollectionImplicitVarInExpAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ("enumeratedCollectionImplicitVarInExpAST",
                                                                & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionImplicitVarInExpAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumeratedCollectionImplicitVarInExpAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionImplicitVarInExpAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST GALGAS_enumeratedCollectionImplicitVarInExpAST::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionImplicitVarInExpAST result ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST * p = (const GALGAS_enumeratedCollectionImplicitVarInExpAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumeratedCollectionImplicitVarInExpAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionImplicitVarInExpAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::objectCompare (const GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak (void) :
GALGAS_abstractEnumeratedCollectionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak & GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::operator = (const GALGAS_enumeratedCollectionImplicitVarInExpAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak (const GALGAS_enumeratedCollectionImplicitVarInExpAST & inSource) :
GALGAS_abstractEnumeratedCollectionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::bang_enumeratedCollectionImplicitVarInExpAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumeratedCollectionImplicitVarInExpAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
      result = GALGAS_enumeratedCollectionImplicitVarInExpAST ((cPtr_enumeratedCollectionImplicitVarInExpAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@enumeratedCollectionImplicitVarInExpAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak ("enumeratedCollectionImplicitVarInExpAST-weak",
                                                                        & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak result ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak * p = (const GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionImplicitVarInExpAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @enumeratedCollectionVarInExpAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_enumeratedCollectionVarInExpAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumeratedCollectionVarInExpAST * p = (const cPtr_enumeratedCollectionVarInExpAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mEnumerationOptionalTypeName.objectCompare (p->mProperty_mEnumerationOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumerationVariable.objectCompare (p->mProperty_mEnumerationVariable) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumeratedExpression.objectCompare (p->mProperty_mEnumeratedExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfEnumerationExpression.objectCompare (p->mProperty_mEndOfEnumerationExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_enumeratedCollectionVarInExpAST::objectCompare (const GALGAS_enumeratedCollectionVarInExpAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST::GALGAS_enumeratedCollectionVarInExpAST (void) :
GALGAS_abstractEnumeratedCollectionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST::GALGAS_enumeratedCollectionVarInExpAST (const cPtr_enumeratedCollectionVarInExpAST * inSourcePtr) :
GALGAS_abstractEnumeratedCollectionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumeratedCollectionVarInExpAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST GALGAS_enumeratedCollectionVarInExpAST::constructor_new (const GALGAS_lstring & inAttribute_mEnumerationOptionalTypeName,
                                                                                                const GALGAS_lstring & inAttribute_mEnumerationVariable,
                                                                                                const GALGAS_semanticExpressionAST & inAttribute_mEnumeratedExpression,
                                                                                                const GALGAS_location & inAttribute_mEndOfEnumerationExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionVarInExpAST result ;
  if (inAttribute_mEnumerationOptionalTypeName.isValid () && inAttribute_mEnumerationVariable.isValid () && inAttribute_mEnumeratedExpression.isValid () && inAttribute_mEndOfEnumerationExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumeratedCollectionVarInExpAST (inAttribute_mEnumerationOptionalTypeName, inAttribute_mEnumerationVariable, inAttribute_mEnumeratedExpression, inAttribute_mEndOfEnumerationExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumeratedCollectionVarInExpAST::readProperty_mEnumerationOptionalTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    return p->mProperty_mEnumerationOptionalTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumeratedCollectionVarInExpAST::readProperty_mEnumerationVariable (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    return p->mProperty_mEnumerationVariable ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_enumeratedCollectionVarInExpAST::readProperty_mEnumeratedExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    return p->mProperty_mEnumeratedExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_enumeratedCollectionVarInExpAST::readProperty_mEndOfEnumerationExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    return p->mProperty_mEndOfEnumerationExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @enumeratedCollectionVarInExpAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_enumeratedCollectionVarInExpAST::cPtr_enumeratedCollectionVarInExpAST (const GALGAS_lstring & in_mEnumerationOptionalTypeName,
                                                                            const GALGAS_lstring & in_mEnumerationVariable,
                                                                            const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                            const GALGAS_location & in_mEndOfEnumerationExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (THERE),
mProperty_mEnumerationOptionalTypeName (in_mEnumerationOptionalTypeName),
mProperty_mEnumerationVariable (in_mEnumerationVariable),
mProperty_mEnumeratedExpression (in_mEnumeratedExpression),
mProperty_mEndOfEnumerationExpression (in_mEndOfEnumerationExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumeratedCollectionVarInExpAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ;
}

void cPtr_enumeratedCollectionVarInExpAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@enumeratedCollectionVarInExpAST:" ;
  mProperty_mEnumerationOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumerationVariable.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumeratedExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfEnumerationExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumeratedCollectionVarInExpAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumeratedCollectionVarInExpAST (mProperty_mEnumerationOptionalTypeName, mProperty_mEnumerationVariable, mProperty_mEnumeratedExpression, mProperty_mEndOfEnumerationExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@enumeratedCollectionVarInExpAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ("enumeratedCollectionVarInExpAST",
                                                        & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionVarInExpAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumeratedCollectionVarInExpAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionVarInExpAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST GALGAS_enumeratedCollectionVarInExpAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionVarInExpAST result ;
  const GALGAS_enumeratedCollectionVarInExpAST * p = (const GALGAS_enumeratedCollectionVarInExpAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumeratedCollectionVarInExpAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionVarInExpAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumeratedCollectionVarInExpAST_2D_weak::objectCompare (const GALGAS_enumeratedCollectionVarInExpAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST_2D_weak::GALGAS_enumeratedCollectionVarInExpAST_2D_weak (void) :
GALGAS_abstractEnumeratedCollectionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST_2D_weak & GALGAS_enumeratedCollectionVarInExpAST_2D_weak::operator = (const GALGAS_enumeratedCollectionVarInExpAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST_2D_weak::GALGAS_enumeratedCollectionVarInExpAST_2D_weak (const GALGAS_enumeratedCollectionVarInExpAST & inSource) :
GALGAS_abstractEnumeratedCollectionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST_2D_weak GALGAS_enumeratedCollectionVarInExpAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_enumeratedCollectionVarInExpAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST GALGAS_enumeratedCollectionVarInExpAST_2D_weak::bang_enumeratedCollectionVarInExpAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumeratedCollectionVarInExpAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumeratedCollectionVarInExpAST) ;
      result = GALGAS_enumeratedCollectionVarInExpAST ((cPtr_enumeratedCollectionVarInExpAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@enumeratedCollectionVarInExpAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST_2D_weak ("enumeratedCollectionVarInExpAST-weak",
                                                                & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionVarInExpAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumeratedCollectionVarInExpAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionVarInExpAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST_2D_weak GALGAS_enumeratedCollectionVarInExpAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionVarInExpAST_2D_weak result ;
  const GALGAS_enumeratedCollectionVarInExpAST_2D_weak * p = (const GALGAS_enumeratedCollectionVarInExpAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumeratedCollectionVarInExpAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionVarInExpAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @forInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_forInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumeratedObjectList.objectCompare (p->mProperty_mEnumeratedObjectList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexVariableName.objectCompare (p->mProperty_mIndexVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileExpression.objectCompare (p->mProperty_mWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_while_5F_expression.objectCompare (p->mProperty_mEndOf_5F_while_5F_expression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBeforeInstructionList.objectCompare (p->mProperty_mBeforeInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_before_5F_branch.objectCompare (p->mProperty_mEndOf_5F_before_5F_branch) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBetweenInstructionList.objectCompare (p->mProperty_mBetweenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_between_5F_branch.objectCompare (p->mProperty_mEndOf_5F_between_5F_branch) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_do_5F_branch.objectCompare (p->mProperty_mEndOf_5F_do_5F_branch) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAfterInstructionList.objectCompare (p->mProperty_mAfterInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_after_5F_branch.objectCompare (p->mProperty_mEndOf_5F_after_5F_branch) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_foreach_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_foreach_5F_instruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_forInstructionAST::objectCompare (const GALGAS_forInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST::GALGAS_forInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST::GALGAS_forInstructionAST (const cPtr_forInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST GALGAS_forInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                    const GALGAS_forInstructionEnumeratedObjectListAST & inAttribute_mEnumeratedObjectList,
                                                                    const GALGAS_lstring & inAttribute_mIndexVariableName,
                                                                    const GALGAS_semanticExpressionAST & inAttribute_mWhileExpression,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_while_5F_expression,
                                                                    const GALGAS_semanticInstructionListAST & inAttribute_mBeforeInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_before_5F_branch,
                                                                    const GALGAS_semanticInstructionListAST & inAttribute_mBetweenInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_between_5F_branch,
                                                                    const GALGAS_semanticInstructionListAST & inAttribute_mDoInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_do_5F_branch,
                                                                    const GALGAS_semanticInstructionListAST & inAttribute_mAfterInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_after_5F_branch,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_foreach_5F_instruction
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mEnumeratedObjectList.isValid () && inAttribute_mIndexVariableName.isValid () && inAttribute_mWhileExpression.isValid () && inAttribute_mEndOf_5F_while_5F_expression.isValid () && inAttribute_mBeforeInstructionList.isValid () && inAttribute_mEndOf_5F_before_5F_branch.isValid () && inAttribute_mBetweenInstructionList.isValid () && inAttribute_mEndOf_5F_between_5F_branch.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mEndOf_5F_do_5F_branch.isValid () && inAttribute_mAfterInstructionList.isValid () && inAttribute_mEndOf_5F_after_5F_branch.isValid () && inAttribute_mEndOf_5F_foreach_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forInstructionAST (inAttribute_mInstructionLocation, inAttribute_mEnumeratedObjectList, inAttribute_mIndexVariableName, inAttribute_mWhileExpression, inAttribute_mEndOf_5F_while_5F_expression, inAttribute_mBeforeInstructionList, inAttribute_mEndOf_5F_before_5F_branch, inAttribute_mBetweenInstructionList, inAttribute_mEndOf_5F_between_5F_branch, inAttribute_mDoInstructionList, inAttribute_mEndOf_5F_do_5F_branch, inAttribute_mAfterInstructionList, inAttribute_mEndOf_5F_after_5F_branch, inAttribute_mEndOf_5F_foreach_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionAST::readProperty_mEnumeratedObjectList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_forInstructionEnumeratedObjectListAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEnumeratedObjectList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_forInstructionAST::readProperty_mIndexVariableName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mIndexVariableName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_forInstructionAST::readProperty_mWhileExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mWhileExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_while_5F_expression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_while_5F_expression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_forInstructionAST::readProperty_mBeforeInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mBeforeInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_before_5F_branch (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_before_5F_branch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_forInstructionAST::readProperty_mBetweenInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mBetweenInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_between_5F_branch (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_between_5F_branch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_forInstructionAST::readProperty_mDoInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_do_5F_branch (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_do_5F_branch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_forInstructionAST::readProperty_mAfterInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mAfterInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_after_5F_branch (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_after_5F_branch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_foreach_5F_instruction (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_foreach_5F_instruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @forInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_forInstructionAST::cPtr_forInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_forInstructionEnumeratedObjectListAST & in_mEnumeratedObjectList,
                                                const GALGAS_lstring & in_mIndexVariableName,
                                                const GALGAS_semanticExpressionAST & in_mWhileExpression,
                                                const GALGAS_location & in_mEndOf_5F_while_5F_expression,
                                                const GALGAS_semanticInstructionListAST & in_mBeforeInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_before_5F_branch,
                                                const GALGAS_semanticInstructionListAST & in_mBetweenInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_between_5F_branch,
                                                const GALGAS_semanticInstructionListAST & in_mDoInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_do_5F_branch,
                                                const GALGAS_semanticInstructionListAST & in_mAfterInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_after_5F_branch,
                                                const GALGAS_location & in_mEndOf_5F_foreach_5F_instruction
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mEnumeratedObjectList (in_mEnumeratedObjectList),
mProperty_mIndexVariableName (in_mIndexVariableName),
mProperty_mWhileExpression (in_mWhileExpression),
mProperty_mEndOf_5F_while_5F_expression (in_mEndOf_5F_while_5F_expression),
mProperty_mBeforeInstructionList (in_mBeforeInstructionList),
mProperty_mEndOf_5F_before_5F_branch (in_mEndOf_5F_before_5F_branch),
mProperty_mBetweenInstructionList (in_mBetweenInstructionList),
mProperty_mEndOf_5F_between_5F_branch (in_mEndOf_5F_between_5F_branch),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mEndOf_5F_do_5F_branch (in_mEndOf_5F_do_5F_branch),
mProperty_mAfterInstructionList (in_mAfterInstructionList),
mProperty_mEndOf_5F_after_5F_branch (in_mEndOf_5F_after_5F_branch),
mProperty_mEndOf_5F_foreach_5F_instruction (in_mEndOf_5F_foreach_5F_instruction) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_forInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

void cPtr_forInstructionAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@forInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumeratedObjectList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIndexVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_while_5F_expression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_before_5F_branch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_between_5F_branch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_do_5F_branch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_after_5F_branch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_foreach_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_forInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forInstructionAST (mProperty_mInstructionLocation, mProperty_mEnumeratedObjectList, mProperty_mIndexVariableName, mProperty_mWhileExpression, mProperty_mEndOf_5F_while_5F_expression, mProperty_mBeforeInstructionList, mProperty_mEndOf_5F_before_5F_branch, mProperty_mBetweenInstructionList, mProperty_mEndOf_5F_between_5F_branch, mProperty_mDoInstructionList, mProperty_mEndOf_5F_do_5F_branch, mProperty_mAfterInstructionList, mProperty_mEndOf_5F_after_5F_branch, mProperty_mEndOf_5F_foreach_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@forInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionAST ("forInstructionAST",
                                          & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST GALGAS_forInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST result ;
  const GALGAS_forInstructionAST * p = (const GALGAS_forInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_forInstructionAST_2D_weak::objectCompare (const GALGAS_forInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak::GALGAS_forInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak & GALGAS_forInstructionAST_2D_weak::operator = (const GALGAS_forInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak::GALGAS_forInstructionAST_2D_weak (const GALGAS_forInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak GALGAS_forInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_forInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST GALGAS_forInstructionAST_2D_weak::bang_forInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forInstructionAST) ;
      result = GALGAS_forInstructionAST ((cPtr_forInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@forInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionAST_2D_weak ("forInstructionAST-weak",
                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST_2D_weak GALGAS_forInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST_2D_weak result ;
  const GALGAS_forInstructionAST_2D_weak * p = (const GALGAS_forInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationResultInVar reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterName.objectCompare (p->mProperty_mActualParameterName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_default (LOCATION_ARGS) {
  return GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  if (inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::readProperty_mActualParameterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
    return p->mProperty_mActualParameterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInVar class
//----------------------------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (const GALGAS_lstring & in_mActualParameterName
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE),
mProperty_mActualParameterName (in_mActualParameterName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "[@grammarInstructionSyntaxDirectedTranslationResultInVar:" ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (mProperty_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInstructionSyntaxDirectedTranslationResultInVar type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ("grammarInstructionSyntaxDirectedTranslationResultInVar",
                                                                               & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInVar", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak & GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::operator = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
      result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInstructionSyntaxDirectedTranslationResultInVar-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak ("grammarInstructionSyntaxDirectedTranslationResultInVar-weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInVar-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterTypeName.objectCompare (p->mProperty_mActualParameterTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterName.objectCompare (p->mProperty_mActualParameterName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_default (LOCATION_ARGS) {
  return GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                                 GALGAS_lstring::constructor_default (HERE)
                                                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterTypeName,
                                                                                                                                                              const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  if (inAttribute_mActualParameterTypeName.isValid () && inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (inAttribute_mActualParameterTypeName, inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::readProperty_mActualParameterTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::readProperty_mActualParameterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
    return p->mProperty_mActualParameterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class
//----------------------------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                                                                          const GALGAS_lstring & in_mActualParameterName
                                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE),
mProperty_mActualParameterTypeName (in_mActualParameterTypeName),
mProperty_mActualParameterName (in_mActualParameterName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::description (C_String & ioString,
                                                                                       const int32_t inIndentation) const {
  ioString << "[@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar:" ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (mProperty_mActualParameterTypeName, mProperty_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar",
                                                                                       & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::extractObject (const GALGAS_object & inObject,
                                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak & GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::operator = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
      result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar-weak",
                                                                                               & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterTypeName.objectCompare (p->mProperty_mActualParameterTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterName.objectCompare (p->mProperty_mActualParameterName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_default (LOCATION_ARGS) {
  return GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                                   GALGAS_lstring::constructor_default (HERE)
                                                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterTypeName,
                                                                                                                                                                  const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  if (inAttribute_mActualParameterTypeName.isValid () && inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (inAttribute_mActualParameterTypeName, inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::readProperty_mActualParameterTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::readProperty_mActualParameterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
    return p->mProperty_mActualParameterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class
//----------------------------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                                                                              const GALGAS_lstring & in_mActualParameterName
                                                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE),
mProperty_mActualParameterTypeName (in_mActualParameterTypeName),
mProperty_mActualParameterName (in_mActualParameterName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::description (C_String & ioString,
                                                                                         const int32_t inIndentation) const {
  ioString << "[@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst:" ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (mProperty_mActualParameterTypeName, mProperty_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst",
                                                                                         & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak & GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::operator = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
      result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst-weak",
                                                                                                 & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @grammarInFileInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_grammarInFileInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInFileInstructionAST * p = (const cPtr_grammarInFileInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarComponentName.objectCompare (p->mProperty_mGrammarComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLabelName.objectCompare (p->mProperty_mLabelName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfSourceExpression.objectCompare (p->mProperty_mEndOfSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.objectCompare (p->mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_grammarInFileInstructionAST::objectCompare (const GALGAS_grammarInFileInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST::GALGAS_grammarInFileInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST::GALGAS_grammarInFileInstructionAST (const cPtr_grammarInFileInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInFileInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST GALGAS_grammarInFileInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                        const GALGAS_lstring & inAttribute_mGrammarComponentName,
                                                                                        const GALGAS_lstring & inAttribute_mLabelName,
                                                                                        const GALGAS_semanticExpressionAST & inAttribute_mSourceExpression,
                                                                                        const GALGAS_location & inAttribute_mEndOfSourceExpression,
                                                                                        const GALGAS_actualParameterListAST & inAttribute_mActualParameterList,
                                                                                        const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_grammarInFileInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mGrammarComponentName.isValid () && inAttribute_mLabelName.isValid () && inAttribute_mSourceExpression.isValid () && inAttribute_mEndOfSourceExpression.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInFileInstructionAST (inAttribute_mInstructionLocation, inAttribute_mGrammarComponentName, inAttribute_mLabelName, inAttribute_mSourceExpression, inAttribute_mEndOfSourceExpression, inAttribute_mActualParameterList, inAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInFileInstructionAST::readProperty_mGrammarComponentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mGrammarComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInFileInstructionAST::readProperty_mLabelName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mLabelName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_grammarInFileInstructionAST::readProperty_mSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_grammarInFileInstructionAST::readProperty_mEndOfSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mEndOfSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_grammarInFileInstructionAST::readProperty_mActualParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualParameterListAST () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_grammarInFileInstructionAST::readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @grammarInFileInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_grammarInFileInstructionAST::cPtr_grammarInFileInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_lstring & in_mGrammarComponentName,
                                                                    const GALGAS_lstring & in_mLabelName,
                                                                    const GALGAS_semanticExpressionAST & in_mSourceExpression,
                                                                    const GALGAS_location & in_mEndOfSourceExpression,
                                                                    const GALGAS_actualParameterListAST & in_mActualParameterList,
                                                                    const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mGrammarComponentName (in_mGrammarComponentName),
mProperty_mLabelName (in_mLabelName),
mProperty_mSourceExpression (in_mSourceExpression),
mProperty_mEndOfSourceExpression (in_mEndOfSourceExpression),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInFileInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInFileInstructionAST ;
}

void cPtr_grammarInFileInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@grammarInFileInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGrammarComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInFileInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInFileInstructionAST (mProperty_mInstructionLocation, mProperty_mGrammarComponentName, mProperty_mLabelName, mProperty_mSourceExpression, mProperty_mEndOfSourceExpression, mProperty_mActualParameterList, mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInFileInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInFileInstructionAST ("grammarInFileInstructionAST",
                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInFileInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInFileInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInFileInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInFileInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST GALGAS_grammarInFileInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_grammarInFileInstructionAST result ;
  const GALGAS_grammarInFileInstructionAST * p = (const GALGAS_grammarInFileInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInFileInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInFileInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_grammarInFileInstructionAST_2D_weak::objectCompare (const GALGAS_grammarInFileInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST_2D_weak::GALGAS_grammarInFileInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST_2D_weak & GALGAS_grammarInFileInstructionAST_2D_weak::operator = (const GALGAS_grammarInFileInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST_2D_weak::GALGAS_grammarInFileInstructionAST_2D_weak (const GALGAS_grammarInFileInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST_2D_weak GALGAS_grammarInFileInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_grammarInFileInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST GALGAS_grammarInFileInstructionAST_2D_weak::bang_grammarInFileInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInFileInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInFileInstructionAST) ;
      result = GALGAS_grammarInFileInstructionAST ((cPtr_grammarInFileInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInFileInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2D_weak ("grammarInFileInstructionAST-weak",
                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInFileInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInFileInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInFileInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST_2D_weak GALGAS_grammarInFileInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_grammarInFileInstructionAST_2D_weak result ;
  const GALGAS_grammarInFileInstructionAST_2D_weak * p = (const GALGAS_grammarInFileInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInFileInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInFileInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @grammarInStringInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_grammarInStringInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInStringInstructionAST * p = (const cPtr_grammarInStringInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarComponentName.objectCompare (p->mProperty_mGrammarComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLabelName.objectCompare (p->mProperty_mLabelName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfSourceExpression.objectCompare (p->mProperty_mEndOfSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNameExpression.objectCompare (p->mProperty_mNameExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfNameExpression.objectCompare (p->mProperty_mEndOfNameExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.objectCompare (p->mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_grammarInStringInstructionAST::objectCompare (const GALGAS_grammarInStringInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST::GALGAS_grammarInStringInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST::GALGAS_grammarInStringInstructionAST (const cPtr_grammarInStringInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInStringInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST GALGAS_grammarInStringInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_lstring & inAttribute_mGrammarComponentName,
                                                                                            const GALGAS_lstring & inAttribute_mLabelName,
                                                                                            const GALGAS_semanticExpressionAST & inAttribute_mSourceExpression,
                                                                                            const GALGAS_location & inAttribute_mEndOfSourceExpression,
                                                                                            const GALGAS_semanticExpressionAST & inAttribute_mNameExpression,
                                                                                            const GALGAS_location & inAttribute_mEndOfNameExpression,
                                                                                            const GALGAS_actualParameterListAST & inAttribute_mActualParameterList,
                                                                                            const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInStringInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mGrammarComponentName.isValid () && inAttribute_mLabelName.isValid () && inAttribute_mSourceExpression.isValid () && inAttribute_mEndOfSourceExpression.isValid () && inAttribute_mNameExpression.isValid () && inAttribute_mEndOfNameExpression.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInStringInstructionAST (inAttribute_mInstructionLocation, inAttribute_mGrammarComponentName, inAttribute_mLabelName, inAttribute_mSourceExpression, inAttribute_mEndOfSourceExpression, inAttribute_mNameExpression, inAttribute_mEndOfNameExpression, inAttribute_mActualParameterList, inAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInStringInstructionAST::readProperty_mGrammarComponentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mGrammarComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInStringInstructionAST::readProperty_mLabelName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mLabelName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_grammarInStringInstructionAST::readProperty_mSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_grammarInStringInstructionAST::readProperty_mEndOfSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mEndOfSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_grammarInStringInstructionAST::readProperty_mNameExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mNameExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_grammarInStringInstructionAST::readProperty_mEndOfNameExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mEndOfNameExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_grammarInStringInstructionAST::readProperty_mActualParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualParameterListAST () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_grammarInStringInstructionAST::readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @grammarInStringInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_grammarInStringInstructionAST::cPtr_grammarInStringInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_lstring & in_mGrammarComponentName,
                                                                        const GALGAS_lstring & in_mLabelName,
                                                                        const GALGAS_semanticExpressionAST & in_mSourceExpression,
                                                                        const GALGAS_location & in_mEndOfSourceExpression,
                                                                        const GALGAS_semanticExpressionAST & in_mNameExpression,
                                                                        const GALGAS_location & in_mEndOfNameExpression,
                                                                        const GALGAS_actualParameterListAST & in_mActualParameterList,
                                                                        const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mGrammarComponentName (in_mGrammarComponentName),
mProperty_mLabelName (in_mLabelName),
mProperty_mSourceExpression (in_mSourceExpression),
mProperty_mEndOfSourceExpression (in_mEndOfSourceExpression),
mProperty_mNameExpression (in_mNameExpression),
mProperty_mEndOfNameExpression (in_mEndOfNameExpression),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInStringInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInStringInstructionAST ;
}

void cPtr_grammarInStringInstructionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@grammarInStringInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGrammarComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNameExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfNameExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInStringInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInStringInstructionAST (mProperty_mInstructionLocation, mProperty_mGrammarComponentName, mProperty_mLabelName, mProperty_mSourceExpression, mProperty_mEndOfSourceExpression, mProperty_mNameExpression, mProperty_mEndOfNameExpression, mProperty_mActualParameterList, mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInStringInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInStringInstructionAST ("grammarInStringInstructionAST",
                                                      & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInStringInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInStringInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInStringInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInStringInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST GALGAS_grammarInStringInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarInStringInstructionAST result ;
  const GALGAS_grammarInStringInstructionAST * p = (const GALGAS_grammarInStringInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInStringInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInStringInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_grammarInStringInstructionAST_2D_weak::objectCompare (const GALGAS_grammarInStringInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST_2D_weak::GALGAS_grammarInStringInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST_2D_weak & GALGAS_grammarInStringInstructionAST_2D_weak::operator = (const GALGAS_grammarInStringInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST_2D_weak::GALGAS_grammarInStringInstructionAST_2D_weak (const GALGAS_grammarInStringInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST_2D_weak GALGAS_grammarInStringInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_grammarInStringInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST GALGAS_grammarInStringInstructionAST_2D_weak::bang_grammarInStringInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInStringInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInStringInstructionAST) ;
      result = GALGAS_grammarInStringInstructionAST ((cPtr_grammarInStringInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@grammarInStringInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2D_weak ("grammarInStringInstructionAST-weak",
                                                              & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInStringInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInStringInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInStringInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST_2D_weak GALGAS_grammarInStringInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarInStringInstructionAST_2D_weak result ;
  const GALGAS_grammarInStringInstructionAST_2D_weak * p = (const GALGAS_grammarInStringInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInStringInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInStringInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @incDecInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_incDecInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_incDecInstructionAST * p = (const cPtr_incDecInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPrefixedBySelf.objectCompare (p->mProperty_mPrefixedBySelf) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_incDecInstructionAST::objectCompare (const GALGAS_incDecInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST::GALGAS_incDecInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST::GALGAS_incDecInstructionAST (const cPtr_incDecInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST GALGAS_incDecInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                          const GALGAS_bool & inAttribute_mPrefixedBySelf,
                                                                          const GALGAS_lstring & inAttribute_mReceiverName,
                                                                          const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                          const GALGAS_incDecKind & inAttribute_mKind
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mPrefixedBySelf.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_incDecInstructionAST (inAttribute_mInstructionLocation, inAttribute_mPrefixedBySelf, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecInstructionAST::setter_setMPrefixedBySelf (GALGAS_bool inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    p->mProperty_mPrefixedBySelf = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecInstructionAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecInstructionAST::setter_setMKind (GALGAS_incDecKind inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_incDecInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_incDecInstructionAST::readProperty_mReceiverName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_incDecInstructionAST::readProperty_mStructAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_incDecInstructionAST::readProperty_mKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_incDecKind () ;
  }else{
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @incDecInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_incDecInstructionAST::cPtr_incDecInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_bool & in_mPrefixedBySelf,
                                                      const GALGAS_lstring & in_mReceiverName,
                                                      const GALGAS_lstringlist & in_mStructAttributeList,
                                                      const GALGAS_incDecKind & in_mKind
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mPrefixedBySelf (in_mPrefixedBySelf),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mKind (in_mKind) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_incDecInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST ;
}

void cPtr_incDecInstructionAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@incDecInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_incDecInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_incDecInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@incDecInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecInstructionAST ("incDecInstructionAST",
                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST GALGAS_incDecInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionAST result ;
  const GALGAS_incDecInstructionAST * p = (const GALGAS_incDecInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_incDecInstructionAST_2D_weak::objectCompare (const GALGAS_incDecInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST_2D_weak::GALGAS_incDecInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST_2D_weak & GALGAS_incDecInstructionAST_2D_weak::operator = (const GALGAS_incDecInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST_2D_weak::GALGAS_incDecInstructionAST_2D_weak (const GALGAS_incDecInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST_2D_weak GALGAS_incDecInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_incDecInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST GALGAS_incDecInstructionAST_2D_weak::bang_incDecInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_incDecInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecInstructionAST) ;
      result = GALGAS_incDecInstructionAST ((cPtr_incDecInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@incDecInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecInstructionAST_2D_weak ("incDecInstructionAST-weak",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST_2D_weak GALGAS_incDecInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionAST_2D_weak result ;
  const GALGAS_incDecInstructionAST_2D_weak * p = (const GALGAS_incDecInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @incDecNoOVFInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_incDecNoOVFInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_incDecNoOVFInstructionAST * p = (const cPtr_incDecNoOVFInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPrefixedBySelf.objectCompare (p->mProperty_mPrefixedBySelf) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_incDecNoOVFInstructionAST::objectCompare (const GALGAS_incDecNoOVFInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST::GALGAS_incDecNoOVFInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST::GALGAS_incDecNoOVFInstructionAST (const cPtr_incDecNoOVFInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecNoOVFInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST GALGAS_incDecNoOVFInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                    const GALGAS_bool & inAttribute_mPrefixedBySelf,
                                                                                    const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                    const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                    const GALGAS_incDecKind & inAttribute_mKind
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mPrefixedBySelf.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_incDecNoOVFInstructionAST (inAttribute_mInstructionLocation, inAttribute_mPrefixedBySelf, inAttribute_mReceiverName, inAttribute_mStructAttributeList, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecNoOVFInstructionAST::setter_setMPrefixedBySelf (GALGAS_bool inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    p->mProperty_mPrefixedBySelf = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecNoOVFInstructionAST::setter_setMReceiverName (GALGAS_lstring inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecNoOVFInstructionAST::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecNoOVFInstructionAST::setter_setMKind (GALGAS_incDecKind inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_incDecNoOVFInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_incDecNoOVFInstructionAST::readProperty_mReceiverName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_incDecNoOVFInstructionAST::readProperty_mStructAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_incDecNoOVFInstructionAST::readProperty_mKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_incDecKind () ;
  }else{
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @incDecNoOVFInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_incDecNoOVFInstructionAST::cPtr_incDecNoOVFInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                const GALGAS_bool & in_mPrefixedBySelf,
                                                                const GALGAS_lstring & in_mReceiverName,
                                                                const GALGAS_lstringlist & in_mStructAttributeList,
                                                                const GALGAS_incDecKind & in_mKind
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mPrefixedBySelf (in_mPrefixedBySelf),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mKind (in_mKind) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_incDecNoOVFInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ;
}

void cPtr_incDecNoOVFInstructionAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@incDecNoOVFInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_incDecNoOVFInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_incDecNoOVFInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@incDecNoOVFInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ("incDecNoOVFInstructionAST",
                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecNoOVFInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecNoOVFInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecNoOVFInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST GALGAS_incDecNoOVFInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionAST result ;
  const GALGAS_incDecNoOVFInstructionAST * p = (const GALGAS_incDecNoOVFInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecNoOVFInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_incDecNoOVFInstructionAST_2D_weak::objectCompare (const GALGAS_incDecNoOVFInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST_2D_weak::GALGAS_incDecNoOVFInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST_2D_weak & GALGAS_incDecNoOVFInstructionAST_2D_weak::operator = (const GALGAS_incDecNoOVFInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST_2D_weak::GALGAS_incDecNoOVFInstructionAST_2D_weak (const GALGAS_incDecNoOVFInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST_2D_weak GALGAS_incDecNoOVFInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST GALGAS_incDecNoOVFInstructionAST_2D_weak::bang_incDecNoOVFInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_incDecNoOVFInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecNoOVFInstructionAST) ;
      result = GALGAS_incDecNoOVFInstructionAST ((cPtr_incDecNoOVFInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@incDecNoOVFInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST_2D_weak ("incDecNoOVFInstructionAST-weak",
                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecNoOVFInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecNoOVFInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecNoOVFInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST_2D_weak GALGAS_incDecNoOVFInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionAST_2D_weak result ;
  const GALGAS_incDecNoOVFInstructionAST_2D_weak * p = (const GALGAS_incDecNoOVFInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecNoOVFInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @incDecInstructionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_incDecInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_incDecInstructionForGeneration * p = (const cPtr_incDecInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverCppName.objectCompare (p->mProperty_mReceiverCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_incDecInstructionForGeneration::objectCompare (const GALGAS_incDecInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration::GALGAS_incDecInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration::GALGAS_incDecInstructionForGeneration (const cPtr_incDecInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecInstructionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration GALGAS_incDecInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_string & inAttribute_mReceiverCppName,
                                                                                              const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReceiverType,
                                                                                              const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                              const GALGAS_incDecKind & inAttribute_mKind
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverCppName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_incDecInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverCppName, inAttribute_mReceiverType, inAttribute_mStructAttributeList, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecInstructionForGeneration::setter_setMReceiverCppName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    p->mProperty_mReceiverCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecInstructionForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecInstructionForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecInstructionForGeneration::setter_setMKind (GALGAS_incDecKind inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_incDecInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_incDecInstructionForGeneration::readProperty_mReceiverCppName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mReceiverCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_incDecInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_incDecInstructionForGeneration::readProperty_mStructAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_incDecInstructionForGeneration::readProperty_mKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_incDecKind () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @incDecInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_incDecInstructionForGeneration::cPtr_incDecInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_string & in_mReceiverCppName,
                                                                          const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                                          const GALGAS_lstringlist & in_mStructAttributeList,
                                                                          const GALGAS_incDecKind & in_mKind
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mReceiverCppName (in_mReceiverCppName),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mKind (in_mKind) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_incDecInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionForGeneration ;
}

void cPtr_incDecInstructionForGeneration::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@incDecInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_incDecInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_incDecInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverCppName, mProperty_mReceiverType, mProperty_mStructAttributeList, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@incDecInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecInstructionForGeneration ("incDecInstructionForGeneration",
                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration GALGAS_incDecInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionForGeneration result ;
  const GALGAS_incDecInstructionForGeneration * p = (const GALGAS_incDecInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_incDecInstructionForGeneration_2D_weak::objectCompare (const GALGAS_incDecInstructionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration_2D_weak::GALGAS_incDecInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration_2D_weak & GALGAS_incDecInstructionForGeneration_2D_weak::operator = (const GALGAS_incDecInstructionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration_2D_weak::GALGAS_incDecInstructionForGeneration_2D_weak (const GALGAS_incDecInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration_2D_weak GALGAS_incDecInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_incDecInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration GALGAS_incDecInstructionForGeneration_2D_weak::bang_incDecInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_incDecInstructionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecInstructionForGeneration) ;
      result = GALGAS_incDecInstructionForGeneration ((cPtr_incDecInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@incDecInstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecInstructionForGeneration_2D_weak ("incDecInstructionForGeneration-weak",
                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration_2D_weak GALGAS_incDecInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionForGeneration_2D_weak result ;
  const GALGAS_incDecInstructionForGeneration_2D_weak * p = (const GALGAS_incDecInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @incDecNoOVFInstructionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_incDecNoOVFInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_incDecNoOVFInstructionForGeneration * p = (const cPtr_incDecNoOVFInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverCppName.objectCompare (p->mProperty_mReceiverCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_incDecNoOVFInstructionForGeneration::objectCompare (const GALGAS_incDecNoOVFInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration::GALGAS_incDecNoOVFInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration::GALGAS_incDecNoOVFInstructionForGeneration (const cPtr_incDecNoOVFInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecNoOVFInstructionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                        const GALGAS_string & inAttribute_mReceiverCppName,
                                                                                                        const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReceiverType,
                                                                                                        const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                        const GALGAS_incDecKind & inAttribute_mKind
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverCppName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_incDecNoOVFInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverCppName, inAttribute_mReceiverType, inAttribute_mStructAttributeList, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecNoOVFInstructionForGeneration::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecNoOVFInstructionForGeneration::setter_setMReceiverCppName (GALGAS_string inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    p->mProperty_mReceiverCppName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecNoOVFInstructionForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecNoOVFInstructionForGeneration::setter_setMStructAttributeList (GALGAS_lstringlist inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    p->mProperty_mStructAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_incDecNoOVFInstructionForGeneration::setter_setMKind (GALGAS_incDecKind inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_incDecNoOVFInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_incDecNoOVFInstructionForGeneration::readProperty_mReceiverCppName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mReceiverCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_incDecNoOVFInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_incDecNoOVFInstructionForGeneration::readProperty_mStructAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_incDecNoOVFInstructionForGeneration::readProperty_mKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_incDecKind () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @incDecNoOVFInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_incDecNoOVFInstructionForGeneration::cPtr_incDecNoOVFInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_string & in_mReceiverCppName,
                                                                                    const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                                                    const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                    const GALGAS_incDecKind & in_mKind
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mReceiverCppName (in_mReceiverCppName),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mKind (in_mKind) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_incDecNoOVFInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ;
}

void cPtr_incDecNoOVFInstructionForGeneration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@incDecNoOVFInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_incDecNoOVFInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_incDecNoOVFInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverCppName, mProperty_mReceiverType, mProperty_mStructAttributeList, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@incDecNoOVFInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ("incDecNoOVFInstructionForGeneration",
                                                            & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecNoOVFInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecNoOVFInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecNoOVFInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration GALGAS_incDecNoOVFInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionForGeneration result ;
  const GALGAS_incDecNoOVFInstructionForGeneration * p = (const GALGAS_incDecNoOVFInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecNoOVFInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::objectCompare (const GALGAS_incDecNoOVFInstructionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::GALGAS_incDecNoOVFInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration_2D_weak & GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::operator = (const GALGAS_incDecNoOVFInstructionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::GALGAS_incDecNoOVFInstructionForGeneration_2D_weak (const GALGAS_incDecNoOVFInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration_2D_weak GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::bang_incDecNoOVFInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_incDecNoOVFInstructionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecNoOVFInstructionForGeneration) ;
      result = GALGAS_incDecNoOVFInstructionForGeneration ((cPtr_incDecNoOVFInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@incDecNoOVFInstructionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration_2D_weak ("incDecNoOVFInstructionForGeneration-weak",
                                                                    & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecNoOVFInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration_2D_weak GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionForGeneration_2D_weak result ;
  const GALGAS_incDecNoOVFInstructionForGeneration_2D_weak * p = (const GALGAS_incDecNoOVFInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecNoOVFInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @localVariableOrConstantDeclarationWithAssignmentAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_localVariableOrConstantDeclarationWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsConstant.objectCompare (p->mProperty_mIsConstant) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionalTypeName.objectCompare (p->mProperty_mOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVariableName.objectCompare (p->mProperty_mVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::objectCompare (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                        const GALGAS_bool & inAttribute_mIsConstant,
                                                                                                                                        const GALGAS_lstring & inAttribute_mOptionalTypeName,
                                                                                                                                        const GALGAS_lstring & inAttribute_mVariableName,
                                                                                                                                        const GALGAS_semanticExpressionAST & inAttribute_mSourceExpression
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithAssignmentAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mIsConstant.isValid () && inAttribute_mOptionalTypeName.isValid () && inAttribute_mVariableName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST (inAttribute_mInstructionLocation, inAttribute_mIsConstant, inAttribute_mOptionalTypeName, inAttribute_mVariableName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::readProperty_mIsConstant (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mIsConstant ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::readProperty_mOptionalTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mOptionalTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::readProperty_mVariableName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mVariableName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::readProperty_mSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @localVariableOrConstantDeclarationWithAssignmentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_localVariableOrConstantDeclarationWithAssignmentAST::cPtr_localVariableOrConstantDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                                                                    const GALGAS_bool & in_mIsConstant,
                                                                                                                    const GALGAS_lstring & in_mOptionalTypeName,
                                                                                                                    const GALGAS_lstring & in_mVariableName,
                                                                                                                    const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mIsConstant (in_mIsConstant),
mProperty_mOptionalTypeName (in_mOptionalTypeName),
mProperty_mVariableName (in_mVariableName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_localVariableOrConstantDeclarationWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ;
}

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "[@localVariableOrConstantDeclarationWithAssignmentAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsConstant.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_localVariableOrConstantDeclarationWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mIsConstant, mProperty_mOptionalTypeName, mProperty_mVariableName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@localVariableOrConstantDeclarationWithAssignmentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ("localVariableOrConstantDeclarationWithAssignmentAST",
                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithAssignmentAST result ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST * p = (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableOrConstantDeclarationWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::objectCompare (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak & GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::operator = (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::bang_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_localVariableOrConstantDeclarationWithAssignmentAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
      result = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ((cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@localVariableOrConstantDeclarationWithAssignmentAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak ("localVariableOrConstantDeclarationWithAssignmentAST-weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak result ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak * p = (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableOrConstantDeclarationWithAssignmentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @undefinedLocalConstantDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_undefinedLocalConstantDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_undefinedLocalConstantDeclarationAST * p = (const cPtr_undefinedLocalConstantDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantTypeName.objectCompare (p->mProperty_mConstantTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_undefinedLocalConstantDeclarationAST::objectCompare (const GALGAS_undefinedLocalConstantDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST::GALGAS_undefinedLocalConstantDeclarationAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST GALGAS_undefinedLocalConstantDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_undefinedLocalConstantDeclarationAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST::GALGAS_undefinedLocalConstantDeclarationAST (const cPtr_undefinedLocalConstantDeclarationAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_undefinedLocalConstantDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST GALGAS_undefinedLocalConstantDeclarationAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                          const GALGAS_lstring & inAttribute_mConstantTypeName,
                                                                                                          const GALGAS_lstring & inAttribute_mConstantName
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mConstantTypeName.isValid () && inAttribute_mConstantName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_undefinedLocalConstantDeclarationAST (inAttribute_mInstructionLocation, inAttribute_mConstantTypeName, inAttribute_mConstantName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_undefinedLocalConstantDeclarationAST::readProperty_mConstantTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationAST * p = (cPtr_undefinedLocalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationAST) ;
    return p->mProperty_mConstantTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_undefinedLocalConstantDeclarationAST::readProperty_mConstantName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationAST * p = (cPtr_undefinedLocalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationAST) ;
    return p->mProperty_mConstantName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @undefinedLocalConstantDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_undefinedLocalConstantDeclarationAST::cPtr_undefinedLocalConstantDeclarationAST (const GALGAS_location & in_mInstructionLocation,
                                                                                      const GALGAS_lstring & in_mConstantTypeName,
                                                                                      const GALGAS_lstring & in_mConstantName
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mConstantTypeName (in_mConstantTypeName),
mProperty_mConstantName (in_mConstantName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_undefinedLocalConstantDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ;
}

void cPtr_undefinedLocalConstantDeclarationAST::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@undefinedLocalConstantDeclarationAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_undefinedLocalConstantDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_undefinedLocalConstantDeclarationAST (mProperty_mInstructionLocation, mProperty_mConstantTypeName, mProperty_mConstantName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@undefinedLocalConstantDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ("undefinedLocalConstantDeclarationAST",
                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_undefinedLocalConstantDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_undefinedLocalConstantDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_undefinedLocalConstantDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST GALGAS_undefinedLocalConstantDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationAST result ;
  const GALGAS_undefinedLocalConstantDeclarationAST * p = (const GALGAS_undefinedLocalConstantDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_undefinedLocalConstantDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::objectCompare (const GALGAS_undefinedLocalConstantDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::GALGAS_undefinedLocalConstantDeclarationAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST_2D_weak & GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::operator = (const GALGAS_undefinedLocalConstantDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::GALGAS_undefinedLocalConstantDeclarationAST_2D_weak (const GALGAS_undefinedLocalConstantDeclarationAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST_2D_weak GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::bang_undefinedLocalConstantDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_undefinedLocalConstantDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_undefinedLocalConstantDeclarationAST) ;
      result = GALGAS_undefinedLocalConstantDeclarationAST ((cPtr_undefinedLocalConstantDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@undefinedLocalConstantDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST_2D_weak ("undefinedLocalConstantDeclarationAST-weak",
                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_undefinedLocalConstantDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST_2D_weak GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationAST_2D_weak result ;
  const GALGAS_undefinedLocalConstantDeclarationAST_2D_weak * p = (const GALGAS_undefinedLocalConstantDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_undefinedLocalConstantDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @localConstantDeclarationWithAssignmentAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_localConstantDeclarationWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localConstantDeclarationWithAssignmentAST * p = (const cPtr_localConstantDeclarationWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localConstantDeclarationWithAssignmentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVariableName.objectCompare (p->mProperty_mVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_localConstantDeclarationWithAssignmentAST::objectCompare (const GALGAS_localConstantDeclarationWithAssignmentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST::GALGAS_localConstantDeclarationWithAssignmentAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST::GALGAS_localConstantDeclarationWithAssignmentAST (const cPtr_localConstantDeclarationWithAssignmentAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localConstantDeclarationWithAssignmentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST GALGAS_localConstantDeclarationWithAssignmentAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                    const GALGAS_lstring & inAttribute_mVariableName,
                                                                                                                    const GALGAS_semanticExpressionAST & inAttribute_mSourceExpression
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_localConstantDeclarationWithAssignmentAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVariableName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_localConstantDeclarationWithAssignmentAST (inAttribute_mInstructionLocation, inAttribute_mVariableName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_localConstantDeclarationWithAssignmentAST::readProperty_mVariableName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_localConstantDeclarationWithAssignmentAST * p = (cPtr_localConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mVariableName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_localConstantDeclarationWithAssignmentAST::readProperty_mSourceExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_localConstantDeclarationWithAssignmentAST * p = (cPtr_localConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @localConstantDeclarationWithAssignmentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_localConstantDeclarationWithAssignmentAST::cPtr_localConstantDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                                                const GALGAS_lstring & in_mVariableName,
                                                                                                const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVariableName (in_mVariableName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_localConstantDeclarationWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ;
}

void cPtr_localConstantDeclarationWithAssignmentAST::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@localConstantDeclarationWithAssignmentAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_localConstantDeclarationWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_localConstantDeclarationWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mVariableName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@localConstantDeclarationWithAssignmentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ("localConstantDeclarationWithAssignmentAST",
                                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localConstantDeclarationWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localConstantDeclarationWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localConstantDeclarationWithAssignmentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST GALGAS_localConstantDeclarationWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_localConstantDeclarationWithAssignmentAST result ;
  const GALGAS_localConstantDeclarationWithAssignmentAST * p = (const GALGAS_localConstantDeclarationWithAssignmentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localConstantDeclarationWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantDeclarationWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::objectCompare (const GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak & GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::operator = (const GALGAS_localConstantDeclarationWithAssignmentAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak (const GALGAS_localConstantDeclarationWithAssignmentAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::bang_localConstantDeclarationWithAssignmentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_localConstantDeclarationWithAssignmentAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localConstantDeclarationWithAssignmentAST) ;
      result = GALGAS_localConstantDeclarationWithAssignmentAST ((cPtr_localConstantDeclarationWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@localConstantDeclarationWithAssignmentAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak ("localConstantDeclarationWithAssignmentAST-weak",
                                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak result ;
  const GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak * p = (const GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantDeclarationWithAssignmentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @undefinedLocalConstantDeclarationForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_undefinedLocalConstantDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_undefinedLocalConstantDeclarationForGeneration * p = (const cPtr_undefinedLocalConstantDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetType.objectCompare (p->mProperty_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppVariableName.objectCompare (p->mProperty_mCppVariableName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_undefinedLocalConstantDeclarationForGeneration::objectCompare (const GALGAS_undefinedLocalConstantDeclarationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration::GALGAS_undefinedLocalConstantDeclarationForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                                 GALGAS_string::constructor_default (HERE)
                                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration::GALGAS_undefinedLocalConstantDeclarationForGeneration (const cPtr_undefinedLocalConstantDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mTargetType,
                                                                                                                              const GALGAS_string & inAttribute_mCppVariableName
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationForGeneration result ;
  if (inAttribute_mTargetType.isValid () && inAttribute_mCppVariableName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_undefinedLocalConstantDeclarationForGeneration (inAttribute_mTargetType, inAttribute_mCppVariableName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_undefinedLocalConstantDeclarationForGeneration::readProperty_mTargetType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationForGeneration * p = (cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
    return p->mProperty_mTargetType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_undefinedLocalConstantDeclarationForGeneration::readProperty_mCppVariableName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationForGeneration * p = (cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
    return p->mProperty_mCppVariableName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @undefinedLocalConstantDeclarationForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_undefinedLocalConstantDeclarationForGeneration::cPtr_undefinedLocalConstantDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mTargetType,
                                                                                                          const GALGAS_string & in_mCppVariableName
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mTargetType (in_mTargetType),
mProperty_mCppVariableName (in_mCppVariableName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_undefinedLocalConstantDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;
}

void cPtr_undefinedLocalConstantDeclarationForGeneration::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "[@undefinedLocalConstantDeclarationForGeneration:" ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCppVariableName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_undefinedLocalConstantDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_undefinedLocalConstantDeclarationForGeneration (mProperty_mTargetType, mProperty_mCppVariableName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@undefinedLocalConstantDeclarationForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ("undefinedLocalConstantDeclarationForGeneration",
                                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_undefinedLocalConstantDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_undefinedLocalConstantDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_undefinedLocalConstantDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration GALGAS_undefinedLocalConstantDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationForGeneration result ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration * p = (const GALGAS_undefinedLocalConstantDeclarationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_undefinedLocalConstantDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak & GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::operator = (const GALGAS_undefinedLocalConstantDeclarationForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak (const GALGAS_undefinedLocalConstantDeclarationForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::bang_undefinedLocalConstantDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_undefinedLocalConstantDeclarationForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
      result = GALGAS_undefinedLocalConstantDeclarationForGeneration ((cPtr_undefinedLocalConstantDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@undefinedLocalConstantDeclarationForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak ("undefinedLocalConstantDeclarationForGeneration-weak",
                                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak result ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak * p = (const GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

