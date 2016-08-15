#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-19.h"


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueAnalysisContext::GALGAS_lexiqueAnalysisContext (void) :
mAttribute_mLexiqueName (),
mAttribute_mLexicalRoutineMessageMap (),
mAttribute_mLexicalFunctionMap (),
mAttribute_mLexicalMessageMap (),
mAttribute_mTerminalMap (),
mAttribute_mTerminalList (),
mAttribute_mLexicalAttributeMap (),
mAttribute_mLexicalTokenListMap (),
mAttribute_mUnicodeStringToGenerate (),
mAttribute_mTemplateDelimitorList (),
mAttribute_mStyleMap (),
mAttribute_mExternUnicodeTestFunctions () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueAnalysisContext::~ GALGAS_lexiqueAnalysisContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueAnalysisContext::GALGAS_lexiqueAnalysisContext (const GALGAS_string & inOperand0,
                                                              const GALGAS_lexicalRoutineMap & inOperand1,
                                                              const GALGAS_lexicalFunctionMap & inOperand2,
                                                              const GALGAS_lexicalMessageMap & inOperand3,
                                                              const GALGAS_terminalMap & inOperand4,
                                                              const GALGAS_terminalList & inOperand5,
                                                              const GALGAS_lexicalAttributeMap & inOperand6,
                                                              const GALGAS_lexicalExplicitTokenListMapMap & inOperand7,
                                                              const GALGAS_stringset & inOperand8,
                                                              const GALGAS_templateDelimitorList & inOperand9,
                                                              const GALGAS_styleMap & inOperand10,
                                                              const GALGAS_stringset & inOperand11) :
mAttribute_mLexiqueName (inOperand0),
mAttribute_mLexicalRoutineMessageMap (inOperand1),
mAttribute_mLexicalFunctionMap (inOperand2),
mAttribute_mLexicalMessageMap (inOperand3),
mAttribute_mTerminalMap (inOperand4),
mAttribute_mTerminalList (inOperand5),
mAttribute_mLexicalAttributeMap (inOperand6),
mAttribute_mLexicalTokenListMap (inOperand7),
mAttribute_mUnicodeStringToGenerate (inOperand8),
mAttribute_mTemplateDelimitorList (inOperand9),
mAttribute_mStyleMap (inOperand10),
mAttribute_mExternUnicodeTestFunctions (inOperand11) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueAnalysisContext GALGAS_lexiqueAnalysisContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexiqueAnalysisContext (GALGAS_string::constructor_default (HERE),
                                        GALGAS_lexicalRoutineMap::constructor_emptyMap (HERE),
                                        GALGAS_lexicalFunctionMap::constructor_emptyMap (HERE),
                                        GALGAS_lexicalMessageMap::constructor_emptyMap (HERE),
                                        GALGAS_terminalMap::constructor_emptyMap (HERE),
                                        GALGAS_terminalList::constructor_emptyList (HERE),
                                        GALGAS_lexicalAttributeMap::constructor_emptyMap (HERE),
                                        GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (HERE),
                                        GALGAS_stringset::constructor_emptySet (HERE),
                                        GALGAS_templateDelimitorList::constructor_emptyList (HERE),
                                        GALGAS_styleMap::constructor_emptyMap (HERE),
                                        GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueAnalysisContext GALGAS_lexiqueAnalysisContext::constructor_new (const GALGAS_string & inOperand0,
                                                                              const GALGAS_lexicalRoutineMap & inOperand1,
                                                                              const GALGAS_lexicalFunctionMap & inOperand2,
                                                                              const GALGAS_lexicalMessageMap & inOperand3,
                                                                              const GALGAS_terminalMap & inOperand4,
                                                                              const GALGAS_terminalList & inOperand5,
                                                                              const GALGAS_lexicalAttributeMap & inOperand6,
                                                                              const GALGAS_lexicalExplicitTokenListMapMap & inOperand7,
                                                                              const GALGAS_stringset & inOperand8,
                                                                              const GALGAS_templateDelimitorList & inOperand9,
                                                                              const GALGAS_styleMap & inOperand10,
                                                                              const GALGAS_stringset & inOperand11 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexiqueAnalysisContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid ()) {
    result = GALGAS_lexiqueAnalysisContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexiqueAnalysisContext::objectCompare (const GALGAS_lexiqueAnalysisContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLexiqueName.objectCompare (inOperand.mAttribute_mLexiqueName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalRoutineMessageMap.objectCompare (inOperand.mAttribute_mLexicalRoutineMessageMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalFunctionMap.objectCompare (inOperand.mAttribute_mLexicalFunctionMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalMessageMap.objectCompare (inOperand.mAttribute_mLexicalMessageMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTerminalMap.objectCompare (inOperand.mAttribute_mTerminalMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTerminalList.objectCompare (inOperand.mAttribute_mTerminalList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalAttributeMap.objectCompare (inOperand.mAttribute_mLexicalAttributeMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalTokenListMap.objectCompare (inOperand.mAttribute_mLexicalTokenListMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUnicodeStringToGenerate.objectCompare (inOperand.mAttribute_mUnicodeStringToGenerate) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTemplateDelimitorList.objectCompare (inOperand.mAttribute_mTemplateDelimitorList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStyleMap.objectCompare (inOperand.mAttribute_mStyleMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExternUnicodeTestFunctions.objectCompare (inOperand.mAttribute_mExternUnicodeTestFunctions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexiqueAnalysisContext::isValid (void) const {
  return mAttribute_mLexiqueName.isValid () && mAttribute_mLexicalRoutineMessageMap.isValid () && mAttribute_mLexicalFunctionMap.isValid () && mAttribute_mLexicalMessageMap.isValid () && mAttribute_mTerminalMap.isValid () && mAttribute_mTerminalList.isValid () && mAttribute_mLexicalAttributeMap.isValid () && mAttribute_mLexicalTokenListMap.isValid () && mAttribute_mUnicodeStringToGenerate.isValid () && mAttribute_mTemplateDelimitorList.isValid () && mAttribute_mStyleMap.isValid () && mAttribute_mExternUnicodeTestFunctions.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueAnalysisContext::drop (void) {
  mAttribute_mLexiqueName.drop () ;
  mAttribute_mLexicalRoutineMessageMap.drop () ;
  mAttribute_mLexicalFunctionMap.drop () ;
  mAttribute_mLexicalMessageMap.drop () ;
  mAttribute_mTerminalMap.drop () ;
  mAttribute_mTerminalList.drop () ;
  mAttribute_mLexicalAttributeMap.drop () ;
  mAttribute_mLexicalTokenListMap.drop () ;
  mAttribute_mUnicodeStringToGenerate.drop () ;
  mAttribute_mTemplateDelimitorList.drop () ;
  mAttribute_mStyleMap.drop () ;
  mAttribute_mExternUnicodeTestFunctions.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueAnalysisContext::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @lexiqueAnalysisContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLexiqueName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalRoutineMessageMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalFunctionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalMessageMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTerminalMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTerminalList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalAttributeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalTokenListMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUnicodeStringToGenerate.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTemplateDelimitorList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStyleMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExternUnicodeTestFunctions.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexiqueAnalysisContext::getter_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexiqueName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap GALGAS_lexiqueAnalysisContext::getter_mLexicalRoutineMessageMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalRoutineMessageMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap GALGAS_lexiqueAnalysisContext::getter_mLexicalFunctionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalFunctionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap GALGAS_lexiqueAnalysisContext::getter_mLexicalMessageMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalMessageMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap GALGAS_lexiqueAnalysisContext::getter_mTerminalMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList GALGAS_lexiqueAnalysisContext::getter_mTerminalList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap GALGAS_lexiqueAnalysisContext::getter_mLexicalAttributeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalAttributeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexiqueAnalysisContext::getter_mLexicalTokenListMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalTokenListMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_lexiqueAnalysisContext::getter_mUnicodeStringToGenerate (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnicodeStringToGenerate ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList GALGAS_lexiqueAnalysisContext::getter_mTemplateDelimitorList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateDelimitorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap GALGAS_lexiqueAnalysisContext::getter_mStyleMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStyleMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_lexiqueAnalysisContext::getter_mExternUnicodeTestFunctions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternUnicodeTestFunctions ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexiqueAnalysisContext type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueAnalysisContext ("lexiqueAnalysisContext",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexiqueAnalysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueAnalysisContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexiqueAnalysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueAnalysisContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueAnalysisContext GALGAS_lexiqueAnalysisContext::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueAnalysisContext result ;
  const GALGAS_lexiqueAnalysisContext * p = (const GALGAS_lexiqueAnalysisContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueAnalysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueAnalysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension Getter '@unifiedTypeMap-proxy baseType'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy extensionGetter_baseType (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result_outBaseType ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  result_outBaseType = temp_0 ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticsTypes.galgas", 352)).isValid ()) {
    uint32_t variant_19113 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticsTypes.galgas", 352)).uintValue () ;
    bool loop_19113 = true ;
    while (loop_19113) {
      loop_19113 = result_outBaseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 352)).getter_isNull (SOURCE_FILE ("semanticsTypes.galgas", 352)).operator_not (SOURCE_FILE ("semanticsTypes.galgas", 352)).isValid () ;
      if (loop_19113) {
        loop_19113 = result_outBaseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 352)).getter_isNull (SOURCE_FILE ("semanticsTypes.galgas", 352)).operator_not (SOURCE_FILE ("semanticsTypes.galgas", 352)).boolValue () ;
      }
      if (loop_19113 && (0 == variant_19113)) {
        loop_19113 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticsTypes.galgas", 352)) ;
      }
      if (loop_19113) {
        variant_19113 -- ;
        result_outBaseType = result_outBaseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 353)) ;
      }
    }
  }
//---
  return result_outBaseType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@unifiedTypeMap-proxy addHeaderFileName'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_addHeaderFileName (const GALGAS_unifiedTypeMap_2D_proxy inObject,
                                        GALGAS_stringset & ioArgument_ioInclusions,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  const GALGAS_unifiedTypeMap_2D_proxy temp_1 = inObject ;
  const enumGalgasBool test_2 = temp_0.getter_mIsPredefined (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 361)).operator_not (SOURCE_FILE ("semanticsTypes.galgas", 361)).operator_and (GALGAS_bool (kIsNotEqual, temp_1.getter_mHeaderKind (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 361)).objectCompare (GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticsTypes.galgas", 361)))) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 361)).boolEnum () ;
  if (kBoolTrue == test_2) {
    const GALGAS_unifiedTypeMap_2D_proxy temp_3 = inObject ;
    ioArgument_ioInclusions.addAssign_operation (temp_3.getter_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 362))  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 362)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@unifiedTypeMap-proxy addHeaderFileName1'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_addHeaderFileName_31_ (const GALGAS_unifiedTypeMap_2D_proxy inObject,
                                            GALGAS_stringset & ioArgument_ioInclusions,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  const enumGalgasBool test_1 = temp_0.getter_mIsPredefined (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 370)).operator_not (SOURCE_FILE ("semanticsTypes.galgas", 370)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_unifiedTypeMap_2D_proxy temp_2 = inObject ;
    switch (temp_2.getter_mHeaderKind (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 371)).enumValue ()) {
    case GALGAS_headerKind::kNotBuilt:
      break ;
    case GALGAS_headerKind::kEnum_noHeader:
      {
      }
      break ;
    case GALGAS_headerKind::kEnum_oneHeader:
      {
        const GALGAS_unifiedTypeMap_2D_proxy temp_3 = inObject ;
        ioArgument_ioInclusions.addAssign_operation (temp_3.getter_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 374))  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 374)) ;
      }
      break ;
    case GALGAS_headerKind::kEnum_twoHeaders:
      {
        const GALGAS_unifiedTypeMap_2D_proxy temp_4 = inObject ;
        ioArgument_ioInclusions.addAssign_operation (temp_4.getter_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 376)).add_operation (GALGAS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 376))  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 376)) ;
      }
      break ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract extension method '@actualParameterForGeneration generateActualParameter'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_actualParameterForGeneration_generateActualParameter> gExtensionMethodTable_actualParameterForGeneration_generateActualParameter ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_generateActualParameter (const int32_t inClassIndex,
                                                   extensionMethodSignature_actualParameterForGeneration_generateActualParameter inMethod) {
  gExtensionMethodTable_actualParameterForGeneration_generateActualParameter.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_actualParameterForGeneration_generateActualParameter (void) {
  gExtensionMethodTable_actualParameterForGeneration_generateActualParameter.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_actualParameterForGeneration_generateActualParameter (NULL,
                                                                                 freeExtensionMethod_actualParameterForGeneration_generateActualParameter) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                  GALGAS_stringset & io_ioInclusionSet,
                                                  GALGAS_uint & io_ioTemporaryVariableIndex,
                                                  GALGAS_string & io_ioImplementation,
                                                  GALGAS_stringlist & io_ioJokerParametersToReleaseList,
                                                  GALGAS_stringlist & io_ioOutputVariableList,
                                                  GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                  GALGAS_string & out_outCppName,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCppName.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_actualParameterForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_actualParameterForGeneration_generateActualParameter f = NULL ;
    if (classIndex < gExtensionMethodTable_actualParameterForGeneration_generateActualParameter.count ()) {
      f = gExtensionMethodTable_actualParameterForGeneration_generateActualParameter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_actualParameterForGeneration_generateActualParameter.count ()) {
           f = gExtensionMethodTable_actualParameterForGeneration_generateActualParameter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_actualParameterForGeneration_generateActualParameter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioImplementation, io_ioJokerParametersToReleaseList, io_ioOutputVariableList, io_ioUnusedVariableCppNameSet, out_outCppName, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_analysisContext::GALGAS_analysisContext (void) :
mAttribute_mSemanticContext (),
mAttribute_mPredefinedTypes (),
mAttribute_mSelfCopyTypeProxy (),
mAttribute_mSelfObjectCppName (),
mAttribute_mSelfTypeProxy () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_analysisContext::~ GALGAS_analysisContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_analysisContext::GALGAS_analysisContext (const GALGAS_semanticContext & inOperand0,
                                                const GALGAS_predefinedTypes & inOperand1,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                const GALGAS_string & inOperand3,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand4) :
mAttribute_mSemanticContext (inOperand0),
mAttribute_mPredefinedTypes (inOperand1),
mAttribute_mSelfCopyTypeProxy (inOperand2),
mAttribute_mSelfObjectCppName (inOperand3),
mAttribute_mSelfTypeProxy (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_analysisContext GALGAS_analysisContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_analysisContext (GALGAS_semanticContext::constructor_default (HERE),
                                 GALGAS_predefinedTypes::constructor_default (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_string::constructor_default (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_analysisContext GALGAS_analysisContext::constructor_new (const GALGAS_semanticContext & inOperand0,
                                                                const GALGAS_predefinedTypes & inOperand1,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                const GALGAS_string & inOperand3,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand4 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_analysisContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_analysisContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_analysisContext::objectCompare (const GALGAS_analysisContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSemanticContext.objectCompare (inOperand.mAttribute_mSemanticContext) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPredefinedTypes.objectCompare (inOperand.mAttribute_mPredefinedTypes) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelfCopyTypeProxy.objectCompare (inOperand.mAttribute_mSelfCopyTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelfObjectCppName.objectCompare (inOperand.mAttribute_mSelfObjectCppName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelfTypeProxy.objectCompare (inOperand.mAttribute_mSelfTypeProxy) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_analysisContext::isValid (void) const {
  return mAttribute_mSemanticContext.isValid () && mAttribute_mPredefinedTypes.isValid () && mAttribute_mSelfCopyTypeProxy.isValid () && mAttribute_mSelfObjectCppName.isValid () && mAttribute_mSelfTypeProxy.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_analysisContext::drop (void) {
  mAttribute_mSemanticContext.drop () ;
  mAttribute_mPredefinedTypes.drop () ;
  mAttribute_mSelfCopyTypeProxy.drop () ;
  mAttribute_mSelfObjectCppName.drop () ;
  mAttribute_mSelfTypeProxy.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_analysisContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @analysisContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSemanticContext.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPredefinedTypes.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelfCopyTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelfObjectCppName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelfTypeProxy.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_analysisContext::getter_mSemanticContext (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypes GALGAS_analysisContext::getter_mPredefinedTypes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPredefinedTypes ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_analysisContext::getter_mSelfCopyTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelfCopyTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_analysisContext::getter_mSelfObjectCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelfObjectCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_analysisContext::getter_mSelfTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelfTypeProxy ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @analysisContext type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_analysisContext ("analysisContext",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_analysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_analysisContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_analysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_analysisContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeGrammarInstructionSDT' *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT> gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeGrammarInstructionSDT (const int32_t inClassIndex,
                                                        extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT inMethod) {
  gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT (void) {
  gExtensionMethodTable_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT (NULL,
                                                                                                                   freeExtensionMethod_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                       const GALGAS_analysisContext constin_inAnalysisContext,
                                                       const GALGAS_bool constin_inHasTranslateFeature,
                                                       const GALGAS_string constin_inSyntaxDirectedTranslationResultVarName,
                                                       GALGAS_stringlist & io_ioAssignementList,
                                                       GALGAS_variableMap & io_ioVariableMap,
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_ProjectComponentAST::GALGAS_galgas_33_ProjectComponentAST (void) :
mAttribute_mProjectSourceList (),
mAttribute_mMajorVersion (),
mAttribute_mMinorVersion (),
mAttribute_mRevisionVersion (),
mAttribute_mGenerationFeatureList (),
mAttribute_mQualifiedFeatureList (),
mAttribute_mTargetName (),
mAttribute_mEndOfSourceFile () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_ProjectComponentAST::~ GALGAS_galgas_33_ProjectComponentAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_ProjectComponentAST::GALGAS_galgas_33_ProjectComponentAST (const GALGAS_lstringlist & inOperand0,
                                                                            const GALGAS_luint & inOperand1,
                                                                            const GALGAS_luint & inOperand2,
                                                                            const GALGAS_luint & inOperand3,
                                                                            const GALGAS_lstringlist & inOperand4,
                                                                            const GALGAS_galgas_33_QualifiedFeatureList & inOperand5,
                                                                            const GALGAS_lstring & inOperand6,
                                                                            const GALGAS_location & inOperand7) :
mAttribute_mProjectSourceList (inOperand0),
mAttribute_mMajorVersion (inOperand1),
mAttribute_mMinorVersion (inOperand2),
mAttribute_mRevisionVersion (inOperand3),
mAttribute_mGenerationFeatureList (inOperand4),
mAttribute_mQualifiedFeatureList (inOperand5),
mAttribute_mTargetName (inOperand6),
mAttribute_mEndOfSourceFile (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_ProjectComponentAST GALGAS_galgas_33_ProjectComponentAST::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgas_33_ProjectComponentAST (GALGAS_lstringlist::constructor_emptyList (HERE),
                                               GALGAS_luint::constructor_default (HERE),
                                               GALGAS_luint::constructor_default (HERE),
                                               GALGAS_luint::constructor_default (HERE),
                                               GALGAS_lstringlist::constructor_emptyList (HERE),
                                               GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (HERE),
                                               GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_ProjectComponentAST GALGAS_galgas_33_ProjectComponentAST::constructor_new (const GALGAS_lstringlist & inOperand0,
                                                                                            const GALGAS_luint & inOperand1,
                                                                                            const GALGAS_luint & inOperand2,
                                                                                            const GALGAS_luint & inOperand3,
                                                                                            const GALGAS_lstringlist & inOperand4,
                                                                                            const GALGAS_galgas_33_QualifiedFeatureList & inOperand5,
                                                                                            const GALGAS_lstring & inOperand6,
                                                                                            const GALGAS_location & inOperand7 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgas_33_ProjectComponentAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_galgas_33_ProjectComponentAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_galgas_33_ProjectComponentAST::objectCompare (const GALGAS_galgas_33_ProjectComponentAST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mProjectSourceList.objectCompare (inOperand.mAttribute_mProjectSourceList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMajorVersion.objectCompare (inOperand.mAttribute_mMajorVersion) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMinorVersion.objectCompare (inOperand.mAttribute_mMinorVersion) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRevisionVersion.objectCompare (inOperand.mAttribute_mRevisionVersion) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGenerationFeatureList.objectCompare (inOperand.mAttribute_mGenerationFeatureList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mQualifiedFeatureList.objectCompare (inOperand.mAttribute_mQualifiedFeatureList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetName.objectCompare (inOperand.mAttribute_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfSourceFile.objectCompare (inOperand.mAttribute_mEndOfSourceFile) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_galgas_33_ProjectComponentAST::isValid (void) const {
  return mAttribute_mProjectSourceList.isValid () && mAttribute_mMajorVersion.isValid () && mAttribute_mMinorVersion.isValid () && mAttribute_mRevisionVersion.isValid () && mAttribute_mGenerationFeatureList.isValid () && mAttribute_mQualifiedFeatureList.isValid () && mAttribute_mTargetName.isValid () && mAttribute_mEndOfSourceFile.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_ProjectComponentAST::drop (void) {
  mAttribute_mProjectSourceList.drop () ;
  mAttribute_mMajorVersion.drop () ;
  mAttribute_mMinorVersion.drop () ;
  mAttribute_mRevisionVersion.drop () ;
  mAttribute_mGenerationFeatureList.drop () ;
  mAttribute_mQualifiedFeatureList.drop () ;
  mAttribute_mTargetName.drop () ;
  mAttribute_mEndOfSourceFile.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_ProjectComponentAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @galgas3ProjectComponentAST:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mProjectSourceList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMajorVersion.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMinorVersion.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRevisionVersion.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGenerationFeatureList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mQualifiedFeatureList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfSourceFile.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_galgas_33_ProjectComponentAST::getter_mProjectSourceList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProjectSourceList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_galgas_33_ProjectComponentAST::getter_mMajorVersion (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMajorVersion ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_galgas_33_ProjectComponentAST::getter_mMinorVersion (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMinorVersion ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_galgas_33_ProjectComponentAST::getter_mRevisionVersion (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRevisionVersion ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_galgas_33_ProjectComponentAST::getter_mGenerationFeatureList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGenerationFeatureList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_ProjectComponentAST::getter_mQualifiedFeatureList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mQualifiedFeatureList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_ProjectComponentAST::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_galgas_33_ProjectComponentAST::getter_mEndOfSourceFile (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfSourceFile ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @galgas3ProjectComponentAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_ProjectComponentAST ("galgas3ProjectComponentAST",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_galgas_33_ProjectComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_ProjectComponentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_galgas_33_ProjectComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_ProjectComponentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_ProjectComponentAST GALGAS_galgas_33_ProjectComponentAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_ProjectComponentAST result ;
  const GALGAS_galgas_33_ProjectComponentAST * p = (const GALGAS_galgas_33_ProjectComponentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_ProjectComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3ProjectComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XcodeProjectDescriptor::GALGAS_XcodeProjectDescriptor (void) :
mAttribute_mSequenceNumber (),
mAttribute_mMainGroupReference (),
mAttribute_mMainGroupChildrenRefs (),
mAttribute_mProjectObjectReference (),
mAttribute_mGroupList (),
mAttribute_mToolTargetList (),
mAttribute_mAppTargetList (),
mAttribute_mCFileList (),
mAttribute_mCppFileList (),
mAttribute_m_5F_M_5F_FileList (),
mAttribute_m_5F_MM_5F_FileList (),
mAttribute_mFrameworkFileList (),
mAttribute_mHeaderFileList (),
mAttribute_mBuildFileList (),
mAttribute_mDefaultConfigurationRef (),
mAttribute_mDefaultConfigurationSettingList (),
mAttribute_mProjectBuildConfigurationRef (),
mAttribute_mInfoPlistFileList (),
mAttribute_mXIB_5F_fileList (),
mAttribute_mTIFF_5F_fileList (),
mAttribute_mICNS_5F_fileList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XcodeProjectDescriptor::~ GALGAS_XcodeProjectDescriptor (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XcodeProjectDescriptor::GALGAS_XcodeProjectDescriptor (const GALGAS_uint & inOperand0,
                                                              const GALGAS_string & inOperand1,
                                                              const GALGAS_stringlist & inOperand2,
                                                              const GALGAS_string & inOperand3,
                                                              const GALGAS_XCodeGroupList & inOperand4,
                                                              const GALGAS_XCodeToolTargetList & inOperand5,
                                                              const GALGAS_XCodeAppTargetList & inOperand6,
                                                              const GALGAS__32_stringlist & inOperand7,
                                                              const GALGAS__32_stringlist & inOperand8,
                                                              const GALGAS__32_stringlist & inOperand9,
                                                              const GALGAS__32_stringlist & inOperand10,
                                                              const GALGAS__32_stringlist & inOperand11,
                                                              const GALGAS__32_stringlist & inOperand12,
                                                              const GALGAS_BuildFileList & inOperand13,
                                                              const GALGAS_string & inOperand14,
                                                              const GALGAS_stringlist & inOperand15,
                                                              const GALGAS_string & inOperand16,
                                                              const GALGAS__32_stringlist & inOperand17,
                                                              const GALGAS__32_stringlist & inOperand18,
                                                              const GALGAS__32_stringlist & inOperand19,
                                                              const GALGAS__32_stringlist & inOperand20) :
mAttribute_mSequenceNumber (inOperand0),
mAttribute_mMainGroupReference (inOperand1),
mAttribute_mMainGroupChildrenRefs (inOperand2),
mAttribute_mProjectObjectReference (inOperand3),
mAttribute_mGroupList (inOperand4),
mAttribute_mToolTargetList (inOperand5),
mAttribute_mAppTargetList (inOperand6),
mAttribute_mCFileList (inOperand7),
mAttribute_mCppFileList (inOperand8),
mAttribute_m_5F_M_5F_FileList (inOperand9),
mAttribute_m_5F_MM_5F_FileList (inOperand10),
mAttribute_mFrameworkFileList (inOperand11),
mAttribute_mHeaderFileList (inOperand12),
mAttribute_mBuildFileList (inOperand13),
mAttribute_mDefaultConfigurationRef (inOperand14),
mAttribute_mDefaultConfigurationSettingList (inOperand15),
mAttribute_mProjectBuildConfigurationRef (inOperand16),
mAttribute_mInfoPlistFileList (inOperand17),
mAttribute_mXIB_5F_fileList (inOperand18),
mAttribute_mTIFF_5F_fileList (inOperand19),
mAttribute_mICNS_5F_fileList (inOperand20) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XcodeProjectDescriptor GALGAS_XcodeProjectDescriptor::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XcodeProjectDescriptor (GALGAS_uint::constructor_default (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS_stringlist::constructor_emptyList (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS_XCodeGroupList::constructor_emptyList (HERE),
                                        GALGAS_XCodeToolTargetList::constructor_emptyList (HERE),
                                        GALGAS_XCodeAppTargetList::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS_BuildFileList::constructor_emptyList (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS_stringlist::constructor_emptyList (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XcodeProjectDescriptor GALGAS_XcodeProjectDescriptor::constructor_new (const GALGAS_uint & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_stringlist & inOperand2,
                                                                              const GALGAS_string & inOperand3,
                                                                              const GALGAS_XCodeGroupList & inOperand4,
                                                                              const GALGAS_XCodeToolTargetList & inOperand5,
                                                                              const GALGAS_XCodeAppTargetList & inOperand6,
                                                                              const GALGAS__32_stringlist & inOperand7,
                                                                              const GALGAS__32_stringlist & inOperand8,
                                                                              const GALGAS__32_stringlist & inOperand9,
                                                                              const GALGAS__32_stringlist & inOperand10,
                                                                              const GALGAS__32_stringlist & inOperand11,
                                                                              const GALGAS__32_stringlist & inOperand12,
                                                                              const GALGAS_BuildFileList & inOperand13,
                                                                              const GALGAS_string & inOperand14,
                                                                              const GALGAS_stringlist & inOperand15,
                                                                              const GALGAS_string & inOperand16,
                                                                              const GALGAS__32_stringlist & inOperand17,
                                                                              const GALGAS__32_stringlist & inOperand18,
                                                                              const GALGAS__32_stringlist & inOperand19,
                                                                              const GALGAS__32_stringlist & inOperand20 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XcodeProjectDescriptor result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid () && inOperand19.isValid () && inOperand20.isValid ()) {
    result = GALGAS_XcodeProjectDescriptor (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18, inOperand19, inOperand20) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_XcodeProjectDescriptor::objectCompare (const GALGAS_XcodeProjectDescriptor & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSequenceNumber.objectCompare (inOperand.mAttribute_mSequenceNumber) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMainGroupReference.objectCompare (inOperand.mAttribute_mMainGroupReference) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMainGroupChildrenRefs.objectCompare (inOperand.mAttribute_mMainGroupChildrenRefs) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProjectObjectReference.objectCompare (inOperand.mAttribute_mProjectObjectReference) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGroupList.objectCompare (inOperand.mAttribute_mGroupList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mToolTargetList.objectCompare (inOperand.mAttribute_mToolTargetList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAppTargetList.objectCompare (inOperand.mAttribute_mAppTargetList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCFileList.objectCompare (inOperand.mAttribute_mCFileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCppFileList.objectCompare (inOperand.mAttribute_mCppFileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_m_5F_M_5F_FileList.objectCompare (inOperand.mAttribute_m_5F_M_5F_FileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_m_5F_MM_5F_FileList.objectCompare (inOperand.mAttribute_m_5F_MM_5F_FileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFrameworkFileList.objectCompare (inOperand.mAttribute_mFrameworkFileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHeaderFileList.objectCompare (inOperand.mAttribute_mHeaderFileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildFileList.objectCompare (inOperand.mAttribute_mBuildFileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDefaultConfigurationRef.objectCompare (inOperand.mAttribute_mDefaultConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDefaultConfigurationSettingList.objectCompare (inOperand.mAttribute_mDefaultConfigurationSettingList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProjectBuildConfigurationRef.objectCompare (inOperand.mAttribute_mProjectBuildConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInfoPlistFileList.objectCompare (inOperand.mAttribute_mInfoPlistFileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mXIB_5F_fileList.objectCompare (inOperand.mAttribute_mXIB_5F_fileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTIFF_5F_fileList.objectCompare (inOperand.mAttribute_mTIFF_5F_fileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mICNS_5F_fileList.objectCompare (inOperand.mAttribute_mICNS_5F_fileList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_XcodeProjectDescriptor::isValid (void) const {
  return mAttribute_mSequenceNumber.isValid () && mAttribute_mMainGroupReference.isValid () && mAttribute_mMainGroupChildrenRefs.isValid () && mAttribute_mProjectObjectReference.isValid () && mAttribute_mGroupList.isValid () && mAttribute_mToolTargetList.isValid () && mAttribute_mAppTargetList.isValid () && mAttribute_mCFileList.isValid () && mAttribute_mCppFileList.isValid () && mAttribute_m_5F_M_5F_FileList.isValid () && mAttribute_m_5F_MM_5F_FileList.isValid () && mAttribute_mFrameworkFileList.isValid () && mAttribute_mHeaderFileList.isValid () && mAttribute_mBuildFileList.isValid () && mAttribute_mDefaultConfigurationRef.isValid () && mAttribute_mDefaultConfigurationSettingList.isValid () && mAttribute_mProjectBuildConfigurationRef.isValid () && mAttribute_mInfoPlistFileList.isValid () && mAttribute_mXIB_5F_fileList.isValid () && mAttribute_mTIFF_5F_fileList.isValid () && mAttribute_mICNS_5F_fileList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XcodeProjectDescriptor::drop (void) {
  mAttribute_mSequenceNumber.drop () ;
  mAttribute_mMainGroupReference.drop () ;
  mAttribute_mMainGroupChildrenRefs.drop () ;
  mAttribute_mProjectObjectReference.drop () ;
  mAttribute_mGroupList.drop () ;
  mAttribute_mToolTargetList.drop () ;
  mAttribute_mAppTargetList.drop () ;
  mAttribute_mCFileList.drop () ;
  mAttribute_mCppFileList.drop () ;
  mAttribute_m_5F_M_5F_FileList.drop () ;
  mAttribute_m_5F_MM_5F_FileList.drop () ;
  mAttribute_mFrameworkFileList.drop () ;
  mAttribute_mHeaderFileList.drop () ;
  mAttribute_mBuildFileList.drop () ;
  mAttribute_mDefaultConfigurationRef.drop () ;
  mAttribute_mDefaultConfigurationSettingList.drop () ;
  mAttribute_mProjectBuildConfigurationRef.drop () ;
  mAttribute_mInfoPlistFileList.drop () ;
  mAttribute_mXIB_5F_fileList.drop () ;
  mAttribute_mTIFF_5F_fileList.drop () ;
  mAttribute_mICNS_5F_fileList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XcodeProjectDescriptor::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @XcodeProjectDescriptor:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMainGroupReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMainGroupChildrenRefs.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProjectObjectReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGroupList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mToolTargetList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAppTargetList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCppFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_m_5F_M_5F_FileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_m_5F_MM_5F_FileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFrameworkFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHeaderFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDefaultConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDefaultConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProjectBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInfoPlistFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mXIB_5F_fileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTIFF_5F_fileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mICNS_5F_fileList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_XcodeProjectDescriptor::getter_mSequenceNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSequenceNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XcodeProjectDescriptor::getter_mMainGroupReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMainGroupReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XcodeProjectDescriptor::getter_mMainGroupChildrenRefs (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMainGroupChildrenRefs ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XcodeProjectDescriptor::getter_mProjectObjectReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProjectObjectReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList GALGAS_XcodeProjectDescriptor::getter_mGroupList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGroupList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList GALGAS_XcodeProjectDescriptor::getter_mToolTargetList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mToolTargetList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList GALGAS_XcodeProjectDescriptor::getter_mAppTargetList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAppTargetList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mCFileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCFileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mCppFileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppFileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_m_5F_M_5F_FileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_M_5F_FileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_m_5F_MM_5F_FileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_MM_5F_FileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mFrameworkFileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFrameworkFileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mHeaderFileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHeaderFileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_XcodeProjectDescriptor::getter_mBuildFileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildFileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XcodeProjectDescriptor::getter_mDefaultConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefaultConfigurationRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XcodeProjectDescriptor::getter_mDefaultConfigurationSettingList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefaultConfigurationSettingList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XcodeProjectDescriptor::getter_mProjectBuildConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProjectBuildConfigurationRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mInfoPlistFileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInfoPlistFileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mXIB_5F_fileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mXIB_5F_fileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mTIFF_5F_fileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTIFF_5F_fileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mICNS_5F_fileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mICNS_5F_fileList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @XcodeProjectDescriptor type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XcodeProjectDescriptor ("XcodeProjectDescriptor",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_XcodeProjectDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XcodeProjectDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_XcodeProjectDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XcodeProjectDescriptor (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XcodeProjectDescriptor GALGAS_XcodeProjectDescriptor::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_XcodeProjectDescriptor result ;
  const GALGAS_XcodeProjectDescriptor * p = (const GALGAS_XcodeProjectDescriptor *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XcodeProjectDescriptor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XcodeProjectDescriptor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@XcodeProjectDescriptor addTIFF_file'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_addTIFF_5F_file (GALGAS_XcodeProjectDescriptor & ioObject,
                                      const GALGAS_string constinArgument_inFileName,
                                      GALGAS_string & outArgument_outFileRef,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 29)) ;
  }
  ioObject.mAttribute_mTIFF_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 30)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@XcodeProjectDescriptor addInfoPlistFile'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_addInfoPlistFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                       const GALGAS_string constinArgument_inFileName,
                                       GALGAS_string & outArgument_outFileRef,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 38)) ;
  }
  ioObject.mAttribute_mInfoPlistFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 39)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@XcodeProjectDescriptor addXIBFile'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_addXIBFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                 const GALGAS_string constinArgument_inFileName,
                                 GALGAS_string & outArgument_outFileRef,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 47)) ;
  }
  ioObject.mAttribute_mXIB_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 48)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@XcodeProjectDescriptor addFrameworkFile'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_addFrameworkFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                       const GALGAS_string constinArgument_inFileName,
                                       GALGAS_string & outArgument_outFileRef,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 56)) ;
  }
  ioObject.mAttribute_mFrameworkFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 57)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@XcodeProjectDescriptor addMFile'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_addMFile (GALGAS_XcodeProjectDescriptor & ioObject,
                               const GALGAS_string constinArgument_inFileName,
                               GALGAS_string & outArgument_outFileRef,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 65)) ;
  }
  ioObject.mAttribute_m_5F_M_5F_FileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 66)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@XcodeProjectDescriptor addMMFile'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_addMMFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                const GALGAS_string constinArgument_inFileName,
                                GALGAS_string & outArgument_outFileRef,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 74)) ;
  }
  ioObject.mAttribute_m_5F_MM_5F_FileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 75)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@XcodeProjectDescriptor addCppFile'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_addCppFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                 const GALGAS_string constinArgument_inFileName,
                                 GALGAS_string & outArgument_outFileRef,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 83)) ;
  }
  ioObject.mAttribute_mCppFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 84)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@XcodeProjectDescriptor addCFile'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_addCFile (GALGAS_XcodeProjectDescriptor & ioObject,
                               const GALGAS_string constinArgument_inFileName,
                               GALGAS_string & outArgument_outFileRef,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 92)) ;
  }
  ioObject.mAttribute_mCFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 93)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@XcodeProjectDescriptor addHeaderFile'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_addHeaderFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                    const GALGAS_string constinArgument_inFileName,
                                    GALGAS_string & outArgument_outFileRef,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 101)) ;
  }
  ioObject.mAttribute_mHeaderFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 102)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@XcodeProjectDescriptor addBuildFile'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_addBuildFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                   const GALGAS_string constinArgument_inFileReference,
                                   const GALGAS_string constinArgument_inFileName,
                                   GALGAS_string & outArgument_outBuildRef,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outBuildRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 111)) ;
  }
  ioObject.mAttribute_mBuildFileList.addAssign_operation (constinArgument_inFileReference, constinArgument_inFileName, outArgument_outBuildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 112)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@XcodeProjectDescriptor addToolTarget'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_addToolTarget (GALGAS_XcodeProjectDescriptor & ioObject,
                                    const GALGAS_string constinArgument_inTargetName,
                                    const GALGAS_string constinArgument_inProductFileName,
                                    const GALGAS_stringlist constinArgument_inSourceList,
                                    const GALGAS_stringlist constinArgument_inToolFrameworksFileRefList,
                                    const GALGAS_stringlist constinArgument_inBuildConfigurationSettingList,
                                    GALGAS_string & outArgument_outTargetRef,
                                    GALGAS_string & outArgument_outProductFileRef,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTargetRef.drop () ; // Release 'out' argument
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 125)) ;
  }
  GALGAS_string var_buildPhaseRef_5272 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_5272, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 126)) ;
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outTargetRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 127)) ;
  }
  GALGAS_string var_buildConfigurationListRef_5379 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_5379, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 128)) ;
  }
  GALGAS_string var_buildConfigurationRef_5437 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_5437, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 129)) ;
  }
  GALGAS_string var_frameworkBuildRef_5491 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_5491, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 130)) ;
  }
  ioObject.mAttribute_mToolTargetList.addAssign_operation (outArgument_outTargetRef, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_5272, var_buildConfigurationListRef_5379, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_5437, constinArgument_inToolFrameworksFileRefList, var_frameworkBuildRef_5491  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 131)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@XcodeProjectDescriptor addAppTarget'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_addAppTarget (GALGAS_XcodeProjectDescriptor & ioObject,
                                   const GALGAS_string constinArgument_inTargetName,
                                   const GALGAS_string constinArgument_inProductFileName,
                                   const GALGAS_stringlist constinArgument_inSourceList,
                                   const GALGAS_stringlist constinArgument_inFrameworksFileRefList,
                                   const GALGAS_stringlist constinArgument_inResourceFileBuildRefs,
                                   const GALGAS_stringlist constinArgument_inBuildConfigurationSettingList,
                                   const GALGAS_stringlist constinArgument_inDependentTargetRefList,
                                   const GALGAS__32_stringlist constinArgument_inProductCopyList,
                                   GALGAS_string & outArgument_outProductFileRef,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 157)) ;
  }
  GALGAS_string var_buildPhaseRef_6545 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_6545, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 158)) ;
  }
  GALGAS_string var_targetRef_6591 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_targetRef_6591, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 159)) ;
  }
  GALGAS_string var_buildConfigurationListRef_6653 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_6653, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 160)) ;
  }
  GALGAS_string var_buildConfigurationRef_6711 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_6711, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 161)) ;
  }
  GALGAS_string var_frameworkBuildRef_6765 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_6765, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 162)) ;
  }
  GALGAS_string var_resourceBuildRef_6818 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_resourceBuildRef_6818, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 163)) ;
  }
  GALGAS__32_stringlist var_dependentTargets_6851 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 164)) ;
  cEnumerator_stringlist enumerator_6896 (constinArgument_inDependentTargetRefList, kEnumeration_up) ;
  while (enumerator_6896.hasCurrentObject ()) {
    GALGAS_string var_dependencyBuildRef_6955 ;
    {
    extensionSetter_getReferenceKey (ioObject, var_dependencyBuildRef_6955, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 166)) ;
    }
    var_dependentTargets_6851.addAssign_operation (var_dependencyBuildRef_6955, enumerator_6896.current_mValue (HERE)  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 167)) ;
    enumerator_6896.gotoNextObject () ;
  }
  GALGAS_stringlist var_resourceFileBuildRefs_7047 = constinArgument_inResourceFileBuildRefs ;
  cEnumerator__32_stringlist enumerator_7111 (constinArgument_inProductCopyList, kEnumeration_up) ;
  while (enumerator_7111.hasCurrentObject ()) {
    GALGAS_string var_buildRef_7198 ;
    {
    extensionSetter_addBuildFile (ioObject, enumerator_7111.current_mValue_30_ (HERE), enumerator_7111.current_mValue_31_ (HERE), var_buildRef_7198, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 171)) ;
    }
    var_resourceFileBuildRefs_7047.addAssign_operation (var_buildRef_7198  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 172)) ;
    enumerator_7111.gotoNextObject () ;
  }
  ioObject.mAttribute_mAppTargetList.addAssign_operation (var_targetRef_6591, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_6545, var_buildConfigurationListRef_6653, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_6711, constinArgument_inFrameworksFileRefList, var_frameworkBuildRef_6765, var_dependentTargets_6851, var_resourceBuildRef_6818, var_resourceFileBuildRefs_7047  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 174)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@XcodeProjectDescriptor addGroup'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_addGroup (GALGAS_XcodeProjectDescriptor & ioObject,
                               const GALGAS_string constinArgument_inGroupName,
                               const GALGAS_string constinArgument_inGroupPath,
                               const GALGAS_stringlist constinArgument_inChildrenRefs,
                               GALGAS_string & outArgument_outGroupRef,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioObject.mAttribute_mDefaultConfigurationRef.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    extensionSetter_getReferenceKey (ioObject, ioObject.mAttribute_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 199)) ;
    }
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioObject.mAttribute_mProjectBuildConfigurationRef.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    extensionSetter_getReferenceKey (ioObject, ioObject.mAttribute_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 202)) ;
    }
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, ioObject.mAttribute_mMainGroupReference.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    extensionSetter_getReferenceKey (ioObject, ioObject.mAttribute_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 205)) ;
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 207)) ;
  }
  ioObject.mAttribute_mGroupList.addAssign_operation (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, constinArgument_inChildrenRefs  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 208)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@XcodeProjectDescriptor addGroupWithFiles'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_addGroupWithFiles (GALGAS_XcodeProjectDescriptor & ioObject,
                                        const GALGAS_string constinArgument_inGroupName,
                                        const GALGAS_string constinArgument_inGroupPath,
                                        const GALGAS_stringset constinArgument_inFileNames,
                                        GALGAS_stringlist & ioArgument_ioCFileBuildRefs,
                                        GALGAS_stringlist & ioArgument_ioCppFileBuildRefs,
                                        GALGAS_stringlist & ioArgument_ioMFileBuildRefs,
                                        GALGAS_stringlist & ioArgument_ioMMFileBuildRefs,
                                        GALGAS_stringlist & ioArgument_ioFrameWorkFileBuildRefs,
                                        GALGAS_stringlist & ioArgument_ioResourceFileBuildRefs,
                                        GALGAS_string & outArgument_outGroupRef,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioObject.mAttribute_mDefaultConfigurationRef.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    extensionSetter_getReferenceKey (ioObject, ioObject.mAttribute_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 225)) ;
    }
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioObject.mAttribute_mProjectBuildConfigurationRef.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    extensionSetter_getReferenceKey (ioObject, ioObject.mAttribute_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 228)) ;
    }
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, ioObject.mAttribute_mMainGroupReference.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    extensionSetter_getReferenceKey (ioObject, ioObject.mAttribute_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 231)) ;
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 233)) ;
  }
  GALGAS_stringlist var_childrenRefs_9361 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 235)) ;
  cEnumerator_stringset enumerator_9391 (constinArgument_inFileNames, kEnumeration_up) ;
  while (enumerator_9391.hasCurrentObject ()) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_9391.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 237)).objectCompare (GALGAS_string ("c"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_cFileRef_9496 ;
      {
      extensionSetter_addCFile (ioObject, enumerator_9391.current_key (HERE), var_cFileRef_9496, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 238)) ;
      }
      var_childrenRefs_9361.addAssign_operation (var_cFileRef_9496  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 239)) ;
      GALGAS_string var_buildRef_9617 ;
      {
      extensionSetter_addBuildFile (ioObject, var_cFileRef_9496, enumerator_9391.current_key (HERE), var_buildRef_9617, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 240)) ;
      }
      ioArgument_ioCFileBuildRefs.addAssign_operation (var_buildRef_9617  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 241)) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_9391.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 242)).objectCompare (GALGAS_string ("cpp"))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_cppFileRef_9765 ;
        {
        extensionSetter_addCppFile (ioObject, enumerator_9391.current_key (HERE), var_cppFileRef_9765, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 243)) ;
        }
        var_childrenRefs_9361.addAssign_operation (var_cppFileRef_9765  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 244)) ;
        GALGAS_string var_buildRef_9890 ;
        {
        extensionSetter_addBuildFile (ioObject, var_cppFileRef_9765, enumerator_9391.current_key (HERE), var_buildRef_9890, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 245)) ;
        }
        ioArgument_ioCppFileBuildRefs.addAssign_operation (var_buildRef_9890  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 246)) ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_9391.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 247)).objectCompare (GALGAS_string ("h"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_string var_headerFileRef_10044 ;
          {
          extensionSetter_addHeaderFile (ioObject, enumerator_9391.current_key (HERE), var_headerFileRef_10044, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 248)) ;
          }
          var_childrenRefs_9361.addAssign_operation (var_headerFileRef_10044  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 249)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_9391.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 250)).objectCompare (GALGAS_string ("m"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_string var_m_5F_FileRef_10188 ;
            {
            extensionSetter_addMFile (ioObject, enumerator_9391.current_key (HERE), var_m_5F_FileRef_10188, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 251)) ;
            }
            GALGAS_string var_buildRef_10278 ;
            {
            extensionSetter_addBuildFile (ioObject, var_m_5F_FileRef_10188, enumerator_9391.current_key (HERE), var_buildRef_10278, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 252)) ;
            }
            var_childrenRefs_9361.addAssign_operation (var_m_5F_FileRef_10188  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 253)) ;
            ioArgument_ioMFileBuildRefs.addAssign_operation (var_buildRef_10278  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 254)) ;
          }else if (kBoolFalse == test_6) {
            const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_9391.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 255)).objectCompare (GALGAS_string ("mm"))).boolEnum () ;
            if (kBoolTrue == test_7) {
              GALGAS_string var_m_5F_FileRef_10456 ;
              {
              extensionSetter_addMMFile (ioObject, enumerator_9391.current_key (HERE), var_m_5F_FileRef_10456, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 256)) ;
              }
              GALGAS_string var_buildRef_10546 ;
              {
              extensionSetter_addBuildFile (ioObject, var_m_5F_FileRef_10456, enumerator_9391.current_key (HERE), var_buildRef_10546, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 257)) ;
              }
              var_childrenRefs_9361.addAssign_operation (var_m_5F_FileRef_10456  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 258)) ;
              ioArgument_ioMMFileBuildRefs.addAssign_operation (var_buildRef_10546  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 259)) ;
            }else if (kBoolFalse == test_7) {
              const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_9391.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 260)).objectCompare (GALGAS_string ("framework"))).boolEnum () ;
              if (kBoolTrue == test_8) {
                GALGAS_string var_framework_5F_FileRef_10747 ;
                {
                extensionSetter_addFrameworkFile (ioObject, enumerator_9391.current_key (HERE), var_framework_5F_FileRef_10747, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 261)) ;
                }
                GALGAS_string var_buildRef_10845 ;
                {
                extensionSetter_addBuildFile (ioObject, var_framework_5F_FileRef_10747, enumerator_9391.current_key (HERE), var_buildRef_10845, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 262)) ;
                }
                var_childrenRefs_9361.addAssign_operation (var_framework_5F_FileRef_10747  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 263)) ;
                ioArgument_ioFrameWorkFileBuildRefs.addAssign_operation (var_buildRef_10845  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 264)) ;
              }else if (kBoolFalse == test_8) {
                const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, enumerator_9391.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 265)).objectCompare (GALGAS_string ("plist"))).boolEnum () ;
                if (kBoolTrue == test_9) {
                  GALGAS_string var_resource_5F_FileRef_11056 ;
                  {
                  extensionSetter_addInfoPlistFile (ioObject, enumerator_9391.current_key (HERE), var_resource_5F_FileRef_11056, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 266)) ;
                  }
                  var_childrenRefs_9361.addAssign_operation (var_resource_5F_FileRef_11056  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 267)) ;
                }else if (kBoolFalse == test_9) {
                  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_9391.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 268)).objectCompare (GALGAS_string ("xib"))).boolEnum () ;
                  if (kBoolTrue == test_10) {
                    GALGAS_string var_resource_5F_FileRef_11214 ;
                    {
                    extensionSetter_addXIBFile (ioObject, enumerator_9391.current_key (HERE), var_resource_5F_FileRef_11214, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 269)) ;
                    }
                    var_childrenRefs_9361.addAssign_operation (var_resource_5F_FileRef_11214  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 270)) ;
                    GALGAS_string var_buildRef_11351 ;
                    {
                    extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11214, enumerator_9391.current_key (HERE), var_buildRef_11351, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 271)) ;
                    }
                    ioArgument_ioResourceFileBuildRefs.addAssign_operation (var_buildRef_11351  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 272)) ;
                  }else if (kBoolFalse == test_10) {
                    const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_9391.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 273)).objectCompare (GALGAS_string ("tiff"))).boolEnum () ;
                    if (kBoolTrue == test_11) {
                      GALGAS_string var_resource_5F_FileRef_11515 ;
                      {
                      extensionSetter_addTIFF_5F_file (ioObject, enumerator_9391.current_key (HERE), var_resource_5F_FileRef_11515, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 274)) ;
                      }
                      var_childrenRefs_9361.addAssign_operation (var_resource_5F_FileRef_11515  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 275)) ;
                      GALGAS_string var_buildRef_11652 ;
                      {
                      extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11515, enumerator_9391.current_key (HERE), var_buildRef_11652, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 276)) ;
                      }
                      ioArgument_ioResourceFileBuildRefs.addAssign_operation (var_buildRef_11652  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 277)) ;
                    }else if (kBoolFalse == test_11) {
                      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_9391.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 278)).objectCompare (GALGAS_string ("icns"))).boolEnum () ;
                      if (kBoolTrue == test_12) {
                        GALGAS_string var_resource_5F_FileRef_11816 ;
                        {
                        extensionSetter_addICNS_5F_file (ioObject, enumerator_9391.current_key (HERE), var_resource_5F_FileRef_11816, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 279)) ;
                        }
                        var_childrenRefs_9361.addAssign_operation (var_resource_5F_FileRef_11816  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 280)) ;
                        GALGAS_string var_buildRef_11953 ;
                        {
                        extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11816, enumerator_9391.current_key (HERE), var_buildRef_11953, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 281)) ;
                        }
                        ioArgument_ioResourceFileBuildRefs.addAssign_operation (var_buildRef_11953  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 282)) ;
                      }else if (kBoolFalse == test_12) {
                        TC_Array <C_FixItDescription> fixItArray13 ;
                        inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 284)), GALGAS_string ("unhandled extension for file '").add_operation (enumerator_9391.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 284)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 284)), fixItArray13  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 284)) ;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    enumerator_9391.gotoNextObject () ;
  }
  ioObject.mAttribute_mGroupList.addAssign_operation (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, var_childrenRefs_9361  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 287)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@XcodeProjectDescriptor placeGroupAsMainGroup'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_placeGroupAsMainGroup (GALGAS_XcodeProjectDescriptor & ioObject,
                                            const GALGAS_string constinArgument_inGroupRef,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mAttribute_mMainGroupChildrenRefs.addAssign_operation (constinArgument_inGroupRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 294)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Extension method '@XcodeProjectDescriptor addSettingsToDefaultConfiguration'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_addSettingsToDefaultConfiguration (GALGAS_XcodeProjectDescriptor & ioObject,
                                                        const GALGAS_stringlist constinArgument_inSettingList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mAttribute_mDefaultConfigurationSettingList.plusAssign_operation(constinArgument_inSettingList, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 301)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@XcodeProjectDescriptor getReferenceKey'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_getReferenceKey (GALGAS_XcodeProjectDescriptor & ioObject,
                                      GALGAS_string & outArgument_outRef,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRef.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioObject.mAttribute_mProjectObjectReference.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioObject.mAttribute_mProjectObjectReference = ioObject.mAttribute_mSequenceNumber.getter_string (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 361)).getter_md_35_ (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 361)).getter_rightSubString (GALGAS_uint ((uint32_t) 24U) COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 361)) ;
    ioObject.mAttribute_mSequenceNumber.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 362)) ;
  }
  outArgument_outRef = ioObject.mAttribute_mSequenceNumber.getter_string (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 364)).getter_md_35_ (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 364)).getter_rightSubString (GALGAS_uint ((uint32_t) 24U) COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 364)) ;
  ioObject.mAttribute_mSequenceNumber.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 365)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@XcodeProjectDescriptor generateAtPath'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateAtPath (const GALGAS_XcodeProjectDescriptor inObject,
                                     const GALGAS_string constinArgument_inPath,
                                     const GALGAS_string constinArgument_inCacheFilePath,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_contents_16873 = GALGAS_string (filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (inCompiler, inObject.mAttribute_mProjectObjectReference, inObject.mAttribute_mMainGroupReference, inObject.mAttribute_mGroupList, inObject.mAttribute_mMainGroupChildrenRefs, inObject.mAttribute_mToolTargetList, inObject.mAttribute_mAppTargetList, inObject.mAttribute_mCFileList, inObject.mAttribute_mCppFileList, inObject.mAttribute_m_5F_M_5F_FileList, inObject.mAttribute_m_5F_MM_5F_FileList, inObject.mAttribute_mFrameworkFileList, inObject.mAttribute_mHeaderFileList, inObject.mAttribute_mInfoPlistFileList, inObject.mAttribute_mTIFF_5F_fileList, inObject.mAttribute_mICNS_5F_fileList, inObject.mAttribute_mXIB_5F_fileList, inObject.mAttribute_mBuildFileList, inObject.mAttribute_mDefaultConfigurationRef, inObject.mAttribute_mDefaultConfigurationSettingList, inObject.mAttribute_mProjectBuildConfigurationRef COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 429))) ;
  GALGAS_string var_projectCoreFile_17419 = constinArgument_inPath.add_operation (GALGAS_string ("/project.pbxproj"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 451)) ;
  GALGAS_bool test_0 = var_projectCoreFile_17419.getter_fileExists (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 452)).operator_not (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 452)) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = constinArgument_inCacheFilePath.getter_fileExists (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 452)).operator_not (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 452)) ;
  }
  GALGAS_bool test_1 = test_0 ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = GALGAS_bool (kIsNotEqual, GALGAS_string::constructor_stringWithContentsOfFile (constinArgument_inCacheFilePath, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 452)).objectCompare (var_contents_16873)) ;
  }
  const enumGalgasBool test_2 = test_1.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_bool joker_17669 ; // Joker input parameter
    var_contents_16873.method_writeToFileWhenDifferentContents (constinArgument_inCacheFilePath, joker_17669, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 453)) ;
    var_contents_16873.method_makeDirectoryAndWriteToFile (var_projectCoreFile_17419, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 454)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST_2D_element::GALGAS_templateExpressionListAST_2D_element (void) :
mAttribute_mActualSelector (),
mAttribute_mExpression (),
mAttribute_mEndOfExpressionLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST_2D_element::~ GALGAS_templateExpressionListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST_2D_element::GALGAS_templateExpressionListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_templateExpressionAST & inOperand1,
                                                                                          const GALGAS_location & inOperand2) :
mAttribute_mActualSelector (inOperand0),
mAttribute_mExpression (inOperand1),
mAttribute_mEndOfExpressionLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST_2D_element GALGAS_templateExpressionListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_templateExpressionAST & inOperand1,
                                                                                                          const GALGAS_location & inOperand2 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateExpressionListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_templateExpressionListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_templateExpressionListAST_2D_element::objectCompare (const GALGAS_templateExpressionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mActualSelector.objectCompare (inOperand.mAttribute_mActualSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExpression.objectCompare (inOperand.mAttribute_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfExpressionLocation.objectCompare (inOperand.mAttribute_mEndOfExpressionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_templateExpressionListAST_2D_element::isValid (void) const {
  return mAttribute_mActualSelector.isValid () && mAttribute_mExpression.isValid () && mAttribute_mEndOfExpressionLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateExpressionListAST_2D_element::drop (void) {
  mAttribute_mActualSelector.drop () ;
  mAttribute_mExpression.drop () ;
  mAttribute_mEndOfExpressionLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateExpressionListAST_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @templateExpressionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mActualSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfExpressionLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateExpressionListAST_2D_element::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateExpressionListAST_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateExpressionListAST_2D_element::getter_mEndOfExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfExpressionLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @templateExpressionListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateExpressionListAST_2D_element ("templateExpressionListAST-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateExpressionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExpressionListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateExpressionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateExpressionListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST_2D_element GALGAS_templateExpressionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateExpressionListAST_2D_element result ;
  const GALGAS_templateExpressionListAST_2D_element * p = (const GALGAS_templateExpressionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateExpressionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateExpressionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap_2D_element::GALGAS_templateVariableMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mTypeProxy (),
mAttribute_mCppName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap_2D_element::~ GALGAS_templateVariableMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap_2D_element::GALGAS_templateVariableMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                              const GALGAS_string & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mTypeProxy (inOperand1),
mAttribute_mCppName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap_2D_element GALGAS_templateVariableMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateVariableMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap_2D_element GALGAS_templateVariableMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                              const GALGAS_string & inOperand2 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateVariableMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_templateVariableMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_templateVariableMap_2D_element::objectCompare (const GALGAS_templateVariableMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTypeProxy.objectCompare (inOperand.mAttribute_mTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCppName.objectCompare (inOperand.mAttribute_mCppName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_templateVariableMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTypeProxy.isValid () && mAttribute_mCppName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateVariableMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mTypeProxy.drop () ;
  mAttribute_mCppName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateVariableMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @templateVariableMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCppName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateVariableMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_templateVariableMap_2D_element::getter_mTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_templateVariableMap_2D_element::getter_mCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @templateVariableMap-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateVariableMap_2D_element ("templateVariableMap-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateVariableMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVariableMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateVariableMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateVariableMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap_2D_element GALGAS_templateVariableMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateVariableMap_2D_element result ;
  const GALGAS_templateVariableMap_2D_element * p = (const GALGAS_templateVariableMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateVariableMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateVariableMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST_2D_element::GALGAS_metamodelTemplateDelimitorListAST_2D_element (void) :
mAttribute_mStartString (),
mAttribute_mOptionList (),
mAttribute_mEndString () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST_2D_element::~ GALGAS_metamodelTemplateDelimitorListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST_2D_element::GALGAS_metamodelTemplateDelimitorListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_lstringlist & inOperand1,
                                                                                                          const GALGAS_lstring & inOperand2) :
mAttribute_mStartString (inOperand0),
mAttribute_mOptionList (inOperand1),
mAttribute_mEndString (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST_2D_element GALGAS_metamodelTemplateDelimitorListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_metamodelTemplateDelimitorListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstringlist::constructor_emptyList (HERE),
                                                              GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST_2D_element GALGAS_metamodelTemplateDelimitorListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                          const GALGAS_lstringlist & inOperand1,
                                                                                                                          const GALGAS_lstring & inOperand2 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_metamodelTemplateDelimitorListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_metamodelTemplateDelimitorListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_metamodelTemplateDelimitorListAST_2D_element::objectCompare (const GALGAS_metamodelTemplateDelimitorListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mStartString.objectCompare (inOperand.mAttribute_mStartString) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionList.objectCompare (inOperand.mAttribute_mOptionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndString.objectCompare (inOperand.mAttribute_mEndString) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_metamodelTemplateDelimitorListAST_2D_element::isValid (void) const {
  return mAttribute_mStartString.isValid () && mAttribute_mOptionList.isValid () && mAttribute_mEndString.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST_2D_element::drop (void) {
  mAttribute_mStartString.drop () ;
  mAttribute_mOptionList.drop () ;
  mAttribute_mEndString.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @metamodelTemplateDelimitorListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mStartString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_metamodelTemplateDelimitorListAST_2D_element::getter_mStartString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_metamodelTemplateDelimitorListAST_2D_element::getter_mOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_metamodelTemplateDelimitorListAST_2D_element::getter_mEndString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndString ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @metamodelTemplateDelimitorListAST-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_metamodelTemplateDelimitorListAST_2D_element ("metamodelTemplateDelimitorListAST-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_metamodelTemplateDelimitorListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_metamodelTemplateDelimitorListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_metamodelTemplateDelimitorListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_metamodelTemplateDelimitorListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST_2D_element GALGAS_metamodelTemplateDelimitorListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_metamodelTemplateDelimitorListAST_2D_element result ;
  const GALGAS_metamodelTemplateDelimitorListAST_2D_element * p = (const GALGAS_metamodelTemplateDelimitorListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_metamodelTemplateDelimitorListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("metamodelTemplateDelimitorListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST_2D_element::GALGAS_templateReplacementListAST_2D_element (void) :
mAttribute_mMatchString (),
mAttribute_mReplacementString (),
mAttribute_mReplacementFunction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST_2D_element::~ GALGAS_templateReplacementListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST_2D_element::GALGAS_templateReplacementListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_lstring & inOperand2) :
mAttribute_mMatchString (inOperand0),
mAttribute_mReplacementString (inOperand1),
mAttribute_mReplacementFunction (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST_2D_element GALGAS_templateReplacementListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateReplacementListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST_2D_element GALGAS_templateReplacementListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1,
                                                                                                            const GALGAS_lstring & inOperand2 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateReplacementListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_templateReplacementListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_templateReplacementListAST_2D_element::objectCompare (const GALGAS_templateReplacementListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mMatchString.objectCompare (inOperand.mAttribute_mMatchString) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReplacementString.objectCompare (inOperand.mAttribute_mReplacementString) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReplacementFunction.objectCompare (inOperand.mAttribute_mReplacementFunction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_templateReplacementListAST_2D_element::isValid (void) const {
  return mAttribute_mMatchString.isValid () && mAttribute_mReplacementString.isValid () && mAttribute_mReplacementFunction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST_2D_element::drop (void) {
  mAttribute_mMatchString.drop () ;
  mAttribute_mReplacementString.drop () ;
  mAttribute_mReplacementFunction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @templateReplacementListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mMatchString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReplacementString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReplacementFunction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateReplacementListAST_2D_element::getter_mMatchString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMatchString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateReplacementListAST_2D_element::getter_mReplacementString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReplacementString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateReplacementListAST_2D_element::getter_mReplacementFunction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReplacementFunction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @templateReplacementListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateReplacementListAST_2D_element ("templateReplacementListAST-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateReplacementListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateReplacementListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateReplacementListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateReplacementListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST_2D_element GALGAS_templateReplacementListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateReplacementListAST_2D_element result ;
  const GALGAS_templateReplacementListAST_2D_element * p = (const GALGAS_templateReplacementListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateReplacementListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateReplacementListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST_2D_element::GALGAS_lexicalMessageDeclarationListAST_2D_element (void) :
mAttribute_mMessageName (),
mAttribute_mMessageValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST_2D_element::~ GALGAS_lexicalMessageDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST_2D_element::GALGAS_lexicalMessageDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1) :
mAttribute_mMessageName (inOperand0),
mAttribute_mMessageValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST_2D_element GALGAS_lexicalMessageDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalMessageDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST_2D_element GALGAS_lexicalMessageDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_lstring & inOperand1 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalMessageDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalMessageDeclarationListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalMessageDeclarationListAST_2D_element::objectCompare (const GALGAS_lexicalMessageDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mMessageName.objectCompare (inOperand.mAttribute_mMessageName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMessageValue.objectCompare (inOperand.mAttribute_mMessageValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalMessageDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mMessageName.isValid () && mAttribute_mMessageValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST_2D_element::drop (void) {
  mAttribute_mMessageName.drop () ;
  mAttribute_mMessageValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @lexicalMessageDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mMessageName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMessageValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalMessageDeclarationListAST_2D_element::getter_mMessageName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMessageName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalMessageDeclarationListAST_2D_element::getter_mMessageValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMessageValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @lexicalMessageDeclarationListAST-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST_2D_element ("lexicalMessageDeclarationListAST-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalMessageDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalMessageDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalMessageDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST_2D_element GALGAS_lexicalMessageDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageDeclarationListAST_2D_element result ;
  const GALGAS_lexicalMessageDeclarationListAST_2D_element * p = (const GALGAS_lexicalMessageDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalMessageDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalMessageDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST_2D_element::GALGAS_lexicalAttributeListAST_2D_element (void) :
mAttribute_mTypeName (),
mAttribute_mName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST_2D_element::~ GALGAS_lexicalAttributeListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST_2D_element::GALGAS_lexicalAttributeListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1) :
mAttribute_mTypeName (inOperand0),
mAttribute_mName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST_2D_element GALGAS_lexicalAttributeListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalAttributeListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST_2D_element GALGAS_lexicalAttributeListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalAttributeListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalAttributeListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalAttributeListAST_2D_element::objectCompare (const GALGAS_lexicalAttributeListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTypeName.objectCompare (inOperand.mAttribute_mTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mName.objectCompare (inOperand.mAttribute_mName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalAttributeListAST_2D_element::isValid (void) const {
  return mAttribute_mTypeName.isValid () && mAttribute_mName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST_2D_element::drop (void) {
  mAttribute_mTypeName.drop () ;
  mAttribute_mName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @lexicalAttributeListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalAttributeListAST_2D_element::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalAttributeListAST_2D_element::getter_mName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @lexicalAttributeListAST-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeListAST_2D_element ("lexicalAttributeListAST-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalAttributeListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalAttributeListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST_2D_element GALGAS_lexicalAttributeListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeListAST_2D_element result ;
  const GALGAS_lexicalAttributeListAST_2D_element * p = (const GALGAS_lexicalAttributeListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalAttributeListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST_2D_element::GALGAS_lexicalStyleListAST_2D_element (void) :
mAttribute_mName (),
mAttribute_mComment () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST_2D_element::~ GALGAS_lexicalStyleListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST_2D_element::GALGAS_lexicalStyleListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_lstring & inOperand1) :
mAttribute_mName (inOperand0),
mAttribute_mComment (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST_2D_element GALGAS_lexicalStyleListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalStyleListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST_2D_element GALGAS_lexicalStyleListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalStyleListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalStyleListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalStyleListAST_2D_element::objectCompare (const GALGAS_lexicalStyleListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mName.objectCompare (inOperand.mAttribute_mName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mComment.objectCompare (inOperand.mAttribute_mComment) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalStyleListAST_2D_element::isValid (void) const {
  return mAttribute_mName.isValid () && mAttribute_mComment.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST_2D_element::drop (void) {
  mAttribute_mName.drop () ;
  mAttribute_mComment.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @lexicalStyleListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mComment.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalStyleListAST_2D_element::getter_mName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalStyleListAST_2D_element::getter_mComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mComment ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalStyleListAST-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStyleListAST_2D_element ("lexicalStyleListAST-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalStyleListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStyleListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalStyleListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStyleListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST_2D_element GALGAS_lexicalStyleListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStyleListAST_2D_element result ;
  const GALGAS_lexicalStyleListAST_2D_element * p = (const GALGAS_lexicalStyleListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalStyleListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStyleListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST_2D_element::GALGAS_terminalDeclarationListAST_2D_element (void) :
mAttribute_mName (),
mAttribute_mSentAttributeList (),
mAttribute_mSyntaxErrorMessage (),
mAttribute_mStyle (),
mAttribute_mOptionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST_2D_element::~ GALGAS_terminalDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST_2D_element::GALGAS_terminalDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                                                            const GALGAS_lstring & inOperand2,
                                                                                            const GALGAS_lstring & inOperand3,
                                                                                            const GALGAS_lstringlist & inOperand4) :
mAttribute_mName (inOperand0),
mAttribute_mSentAttributeList (inOperand1),
mAttribute_mSyntaxErrorMessage (inOperand2),
mAttribute_mStyle (inOperand3),
mAttribute_mOptionList (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST_2D_element GALGAS_terminalDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_sentLexicalAttributeListAST::constructor_emptyList (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST_2D_element GALGAS_terminalDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                                                                            const GALGAS_lstring & inOperand2,
                                                                                                            const GALGAS_lstring & inOperand3,
                                                                                                            const GALGAS_lstringlist & inOperand4 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_terminalDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_terminalDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_terminalDeclarationListAST_2D_element::objectCompare (const GALGAS_terminalDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mName.objectCompare (inOperand.mAttribute_mName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSentAttributeList.objectCompare (inOperand.mAttribute_mSentAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSyntaxErrorMessage.objectCompare (inOperand.mAttribute_mSyntaxErrorMessage) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStyle.objectCompare (inOperand.mAttribute_mStyle) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionList.objectCompare (inOperand.mAttribute_mOptionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_terminalDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mName.isValid () && mAttribute_mSentAttributeList.isValid () && mAttribute_mSyntaxErrorMessage.isValid () && mAttribute_mStyle.isValid () && mAttribute_mOptionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST_2D_element::drop (void) {
  mAttribute_mName.drop () ;
  mAttribute_mSentAttributeList.drop () ;
  mAttribute_mSyntaxErrorMessage.drop () ;
  mAttribute_mStyle.drop () ;
  mAttribute_mOptionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @terminalDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSentAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSyntaxErrorMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStyle.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_terminalDeclarationListAST_2D_element::getter_mName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_terminalDeclarationListAST_2D_element::getter_mSentAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSentAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_terminalDeclarationListAST_2D_element::getter_mSyntaxErrorMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_terminalDeclarationListAST_2D_element::getter_mStyle (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStyle ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_terminalDeclarationListAST_2D_element::getter_mOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @terminalDeclarationListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalDeclarationListAST_2D_element ("terminalDeclarationListAST-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST_2D_element GALGAS_terminalDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_terminalDeclarationListAST_2D_element result ;
  const GALGAS_terminalDeclarationListAST_2D_element * p = (const GALGAS_terminalDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST_2D_element::GALGAS_lexicalListEntryListAST_2D_element (void) :
mAttribute_mEntrySpelling (),
mAttribute_mTerminalSpelling (),
mAttribute_mFeatureList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST_2D_element::~ GALGAS_lexicalListEntryListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST_2D_element::GALGAS_lexicalListEntryListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_lstringlist & inOperand2) :
mAttribute_mEntrySpelling (inOperand0),
mAttribute_mTerminalSpelling (inOperand1),
mAttribute_mFeatureList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST_2D_element GALGAS_lexicalListEntryListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalListEntryListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST_2D_element GALGAS_lexicalListEntryListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1,
                                                                                                      const GALGAS_lstringlist & inOperand2 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalListEntryListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_lexicalListEntryListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalListEntryListAST_2D_element::objectCompare (const GALGAS_lexicalListEntryListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mEntrySpelling.objectCompare (inOperand.mAttribute_mEntrySpelling) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTerminalSpelling.objectCompare (inOperand.mAttribute_mTerminalSpelling) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFeatureList.objectCompare (inOperand.mAttribute_mFeatureList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalListEntryListAST_2D_element::isValid (void) const {
  return mAttribute_mEntrySpelling.isValid () && mAttribute_mTerminalSpelling.isValid () && mAttribute_mFeatureList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST_2D_element::drop (void) {
  mAttribute_mEntrySpelling.drop () ;
  mAttribute_mTerminalSpelling.drop () ;
  mAttribute_mFeatureList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @lexicalListEntryListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mEntrySpelling.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTerminalSpelling.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFeatureList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalListEntryListAST_2D_element::getter_mEntrySpelling (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEntrySpelling ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalListEntryListAST_2D_element::getter_mTerminalSpelling (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalSpelling ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_lexicalListEntryListAST_2D_element::getter_mFeatureList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFeatureList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @lexicalListEntryListAST-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalListEntryListAST_2D_element ("lexicalListEntryListAST-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalListEntryListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalListEntryListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalListEntryListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalListEntryListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST_2D_element GALGAS_lexicalListEntryListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListEntryListAST_2D_element result ;
  const GALGAS_lexicalListEntryListAST_2D_element * p = (const GALGAS_lexicalListEntryListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalListEntryListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalListEntryListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST_2D_element::GALGAS_sentLexicalAttributeListAST_2D_element (void) :
mAttribute_mFormalSelector (),
mAttribute_mAttributeName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST_2D_element::~ GALGAS_sentLexicalAttributeListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST_2D_element::GALGAS_sentLexicalAttributeListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1) :
mAttribute_mFormalSelector (inOperand0),
mAttribute_mAttributeName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST_2D_element GALGAS_sentLexicalAttributeListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_sentLexicalAttributeListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST_2D_element GALGAS_sentLexicalAttributeListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sentLexicalAttributeListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sentLexicalAttributeListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sentLexicalAttributeListAST_2D_element::objectCompare (const GALGAS_sentLexicalAttributeListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalSelector.objectCompare (inOperand.mAttribute_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeName.objectCompare (inOperand.mAttribute_mAttributeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_sentLexicalAttributeListAST_2D_element::isValid (void) const {
  return mAttribute_mFormalSelector.isValid () && mAttribute_mAttributeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST_2D_element::drop (void) {
  mAttribute_mFormalSelector.drop () ;
  mAttribute_mAttributeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @sentLexicalAttributeListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAttributeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sentLexicalAttributeListAST_2D_element::getter_mFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sentLexicalAttributeListAST_2D_element::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @sentLexicalAttributeListAST-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sentLexicalAttributeListAST_2D_element ("sentLexicalAttributeListAST-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sentLexicalAttributeListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sentLexicalAttributeListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sentLexicalAttributeListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sentLexicalAttributeListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST_2D_element GALGAS_sentLexicalAttributeListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sentLexicalAttributeListAST_2D_element result ;
  const GALGAS_sentLexicalAttributeListAST_2D_element * p = (const GALGAS_sentLexicalAttributeListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sentLexicalAttributeListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sentLexicalAttributeListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST_2D_element::GALGAS_lexicalListDeclarationListAST_2D_element (void) :
mAttribute_mName (),
mAttribute_mStyle (),
mAttribute_mSyntaxErrorMessage (),
mAttribute_mSentAttributeList (),
mAttribute_mEntryList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST_2D_element::~ GALGAS_lexicalListDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST_2D_element::GALGAS_lexicalListDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                  const GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                                                  const GALGAS_lexicalListEntryListAST & inOperand4) :
mAttribute_mName (inOperand0),
mAttribute_mStyle (inOperand1),
mAttribute_mSyntaxErrorMessage (inOperand2),
mAttribute_mSentAttributeList (inOperand3),
mAttribute_mEntryList (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST_2D_element GALGAS_lexicalListDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalListDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_sentLexicalAttributeListAST::constructor_emptyList (HERE),
                                                          GALGAS_lexicalListEntryListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST_2D_element GALGAS_lexicalListDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                                  const GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                                                                  const GALGAS_lexicalListEntryListAST & inOperand4 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalListDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_lexicalListDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalListDeclarationListAST_2D_element::objectCompare (const GALGAS_lexicalListDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mName.objectCompare (inOperand.mAttribute_mName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStyle.objectCompare (inOperand.mAttribute_mStyle) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSyntaxErrorMessage.objectCompare (inOperand.mAttribute_mSyntaxErrorMessage) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSentAttributeList.objectCompare (inOperand.mAttribute_mSentAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEntryList.objectCompare (inOperand.mAttribute_mEntryList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalListDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mName.isValid () && mAttribute_mStyle.isValid () && mAttribute_mSyntaxErrorMessage.isValid () && mAttribute_mSentAttributeList.isValid () && mAttribute_mEntryList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST_2D_element::drop (void) {
  mAttribute_mName.drop () ;
  mAttribute_mStyle.drop () ;
  mAttribute_mSyntaxErrorMessage.drop () ;
  mAttribute_mSentAttributeList.drop () ;
  mAttribute_mEntryList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @lexicalListDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStyle.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSyntaxErrorMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSentAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEntryList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalListDeclarationListAST_2D_element::getter_mName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalListDeclarationListAST_2D_element::getter_mStyle (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStyle ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalListDeclarationListAST_2D_element::getter_mSyntaxErrorMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_lexicalListDeclarationListAST_2D_element::getter_mSentAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSentAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListDeclarationListAST_2D_element::getter_mEntryList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEntryList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @lexicalListDeclarationListAST-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalListDeclarationListAST_2D_element ("lexicalListDeclarationListAST-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalListDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalListDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalListDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalListDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST_2D_element GALGAS_lexicalListDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListDeclarationListAST_2D_element result ;
  const GALGAS_lexicalListDeclarationListAST_2D_element * p = (const GALGAS_lexicalListDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalListDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalListDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST_2D_element::GALGAS_lexicalSendSearchListAST_2D_element (void) :
mAttribute_mAttributeName (),
mAttribute_mSearchListName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST_2D_element::~ GALGAS_lexicalSendSearchListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST_2D_element::GALGAS_lexicalSendSearchListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1) :
mAttribute_mAttributeName (inOperand0),
mAttribute_mSearchListName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST_2D_element GALGAS_lexicalSendSearchListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalSendSearchListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST_2D_element GALGAS_lexicalSendSearchListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalSendSearchListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalSendSearchListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalSendSearchListAST_2D_element::objectCompare (const GALGAS_lexicalSendSearchListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeName.objectCompare (inOperand.mAttribute_mAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSearchListName.objectCompare (inOperand.mAttribute_mSearchListName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalSendSearchListAST_2D_element::isValid (void) const {
  return mAttribute_mAttributeName.isValid () && mAttribute_mSearchListName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST_2D_element::drop (void) {
  mAttribute_mAttributeName.drop () ;
  mAttribute_mSearchListName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @lexicalSendSearchListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSearchListName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalSendSearchListAST_2D_element::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalSendSearchListAST_2D_element::getter_mSearchListName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSearchListName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalSendSearchListAST-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSendSearchListAST_2D_element ("lexicalSendSearchListAST-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalSendSearchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendSearchListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalSendSearchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSendSearchListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST_2D_element GALGAS_lexicalSendSearchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendSearchListAST_2D_element result ;
  const GALGAS_lexicalSendSearchListAST_2D_element * p = (const GALGAS_lexicalSendSearchListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSendSearchListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendSearchListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element (void) :
mAttribute_mPassingMode (),
mAttribute_mLexicalTypeName (),
mAttribute_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::~ GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                                          const GALGAS_lstring & inOperand2) :
mAttribute_mPassingMode (inOperand0),
mAttribute_mLexicalTypeName (inOperand1),
mAttribute_mFormalArgumentName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::constructor_new (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                                                          const GALGAS_lstring & inOperand2 
                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::objectCompare (const GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mPassingMode.objectCompare (inOperand.mAttribute_mPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalTypeName.objectCompare (inOperand.mAttribute_mLexicalTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::isValid (void) const {
  return mAttribute_mPassingMode.isValid () && mAttribute_mLexicalTypeName.isValid () && mAttribute_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::drop (void) {
  mAttribute_mPassingMode.drop () ;
  mAttribute_mLexicalTypeName.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "<struct @lexicalExternRoutineFormalArgumentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalArgumentModeAST GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::getter_mPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::getter_mLexicalTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @lexicalExternRoutineFormalArgumentListAST-element type                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element ("lexicalExternRoutineFormalArgumentListAST-element",
                                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element result ;
  const GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element * p = (const GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExternRoutineFormalArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST_2D_element::GALGAS_externRoutineListAST_2D_element (void) :
mAttribute_mRoutineName (),
mAttribute_mLexicalRoutineFormalArgumentList (),
mAttribute_mErrorMessageList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST_2D_element::~ GALGAS_externRoutineListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST_2D_element::GALGAS_externRoutineListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand1,
                                                                                const GALGAS_stringlist & inOperand2) :
mAttribute_mRoutineName (inOperand0),
mAttribute_mLexicalRoutineFormalArgumentList (inOperand1),
mAttribute_mErrorMessageList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST_2D_element GALGAS_externRoutineListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externRoutineListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_emptyList (HERE),
                                                 GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST_2D_element GALGAS_externRoutineListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand1,
                                                                                                const GALGAS_stringlist & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externRoutineListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externRoutineListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_externRoutineListAST_2D_element::objectCompare (const GALGAS_externRoutineListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineName.objectCompare (inOperand.mAttribute_mRoutineName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalRoutineFormalArgumentList.objectCompare (inOperand.mAttribute_mLexicalRoutineFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mErrorMessageList.objectCompare (inOperand.mAttribute_mErrorMessageList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_externRoutineListAST_2D_element::isValid (void) const {
  return mAttribute_mRoutineName.isValid () && mAttribute_mLexicalRoutineFormalArgumentList.isValid () && mAttribute_mErrorMessageList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externRoutineListAST_2D_element::drop (void) {
  mAttribute_mRoutineName.drop () ;
  mAttribute_mLexicalRoutineFormalArgumentList.drop () ;
  mAttribute_mErrorMessageList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externRoutineListAST_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @externRoutineListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalRoutineFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mErrorMessageList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externRoutineListAST_2D_element::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_externRoutineListAST_2D_element::getter_mLexicalRoutineFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalRoutineFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_externRoutineListAST_2D_element::getter_mErrorMessageList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorMessageList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @externRoutineListAST-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externRoutineListAST_2D_element ("externRoutineListAST-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externRoutineListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externRoutineListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externRoutineListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST_2D_element GALGAS_externRoutineListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externRoutineListAST_2D_element result ;
  const GALGAS_externRoutineListAST_2D_element * p = (const GALGAS_externRoutineListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externRoutineListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externRoutineListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element (void) :
mAttribute_mLexicalTypeName (),
mAttribute_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::~ GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                            const GALGAS_lstring & inOperand1) :
mAttribute_mLexicalTypeName (inOperand0),
mAttribute_mFormalArgumentName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                       GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                            const GALGAS_lstring & inOperand1 
                                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::objectCompare (const GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalTypeName.objectCompare (inOperand.mAttribute_mLexicalTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::isValid (void) const {
  return mAttribute_mLexicalTypeName.isValid () && mAttribute_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::drop (void) {
  mAttribute_mLexicalTypeName.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "<struct @lexicalExternFunctionFormalArgumentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLexicalTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::getter_mLexicalTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @lexicalExternFunctionFormalArgumentListAST-element type                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element ("lexicalExternFunctionFormalArgumentListAST-element",
                                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element result ;
  const GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element * p = (const GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExternFunctionFormalArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST_2D_element::GALGAS_externFunctionListAST_2D_element (void) :
mAttribute_mFunctionName (),
mAttribute_mLexicalFunctionFormalArgumentList (),
mAttribute_mReturnedTypeName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST_2D_element::~ GALGAS_externFunctionListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST_2D_element::GALGAS_externFunctionListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand1,
                                                                                  const GALGAS_lstring & inOperand2) :
mAttribute_mFunctionName (inOperand0),
mAttribute_mLexicalFunctionFormalArgumentList (inOperand1),
mAttribute_mReturnedTypeName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST_2D_element GALGAS_externFunctionListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externFunctionListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_emptyList (HERE),
                                                  GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST_2D_element GALGAS_externFunctionListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externFunctionListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externFunctionListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_externFunctionListAST_2D_element::objectCompare (const GALGAS_externFunctionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionName.objectCompare (inOperand.mAttribute_mFunctionName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalFunctionFormalArgumentList.objectCompare (inOperand.mAttribute_mLexicalFunctionFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReturnedTypeName.objectCompare (inOperand.mAttribute_mReturnedTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_externFunctionListAST_2D_element::isValid (void) const {
  return mAttribute_mFunctionName.isValid () && mAttribute_mLexicalFunctionFormalArgumentList.isValid () && mAttribute_mReturnedTypeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externFunctionListAST_2D_element::drop (void) {
  mAttribute_mFunctionName.drop () ;
  mAttribute_mLexicalFunctionFormalArgumentList.drop () ;
  mAttribute_mReturnedTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externFunctionListAST_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @externFunctionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFunctionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalFunctionFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReturnedTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externFunctionListAST_2D_element::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_externFunctionListAST_2D_element::getter_mLexicalFunctionFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalFunctionFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externFunctionListAST_2D_element::getter_mReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnedTypeName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @externFunctionListAST-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externFunctionListAST_2D_element ("externFunctionListAST-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externFunctionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externFunctionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST_2D_element GALGAS_externFunctionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionListAST_2D_element result ;
  const GALGAS_externFunctionListAST_2D_element * p = (const GALGAS_externFunctionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externFunctionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST_2D_element::GALGAS_indexingListAST_2D_element (void) :
mAttribute_mIndexName (),
mAttribute_mIndexComment () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST_2D_element::~ GALGAS_indexingListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST_2D_element::GALGAS_indexingListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_lstring & inOperand1) :
mAttribute_mIndexName (inOperand0),
mAttribute_mIndexComment (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST_2D_element GALGAS_indexingListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_indexingListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST_2D_element GALGAS_indexingListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_indexingListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_indexingListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_indexingListAST_2D_element::objectCompare (const GALGAS_indexingListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mIndexName.objectCompare (inOperand.mAttribute_mIndexName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndexComment.objectCompare (inOperand.mAttribute_mIndexComment) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_indexingListAST_2D_element::isValid (void) const {
  return mAttribute_mIndexName.isValid () && mAttribute_mIndexComment.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_indexingListAST_2D_element::drop (void) {
  mAttribute_mIndexName.drop () ;
  mAttribute_mIndexComment.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_indexingListAST_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @indexingListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mIndexName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndexComment.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_indexingListAST_2D_element::getter_mIndexName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_indexingListAST_2D_element::getter_mIndexComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexComment ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @indexingListAST-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_indexingListAST_2D_element ("indexingListAST-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_indexingListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_indexingListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_indexingListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_indexingListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST_2D_element GALGAS_indexingListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_indexingListAST_2D_element result ;
  const GALGAS_indexingListAST_2D_element * p = (const GALGAS_indexingListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_indexingListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("indexingListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList_2D_element::GALGAS_lexicalSentValueList_2D_element (void) :
mAttribute_mLexicalFormalSelector (),
mAttribute_mLexicalAttributeName (),
mAttribute_mLexicalType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList_2D_element::~ GALGAS_lexicalSentValueList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList_2D_element::GALGAS_lexicalSentValueList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_string & inOperand1,
                                                                                const GALGAS_lexicalTypeEnum & inOperand2) :
mAttribute_mLexicalFormalSelector (inOperand0),
mAttribute_mLexicalAttributeName (inOperand1),
mAttribute_mLexicalType (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList_2D_element GALGAS_lexicalSentValueList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_string & inOperand1,
                                                                                                const GALGAS_lexicalTypeEnum & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalSentValueList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_lexicalSentValueList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalSentValueList_2D_element::objectCompare (const GALGAS_lexicalSentValueList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalFormalSelector.objectCompare (inOperand.mAttribute_mLexicalFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalAttributeName.objectCompare (inOperand.mAttribute_mLexicalAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalType.objectCompare (inOperand.mAttribute_mLexicalType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalSentValueList_2D_element::isValid (void) const {
  return mAttribute_mLexicalFormalSelector.isValid () && mAttribute_mLexicalAttributeName.isValid () && mAttribute_mLexicalType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSentValueList_2D_element::drop (void) {
  mAttribute_mLexicalFormalSelector.drop () ;
  mAttribute_mLexicalAttributeName.drop () ;
  mAttribute_mLexicalType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSentValueList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @lexicalSentValueList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLexicalFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalSentValueList_2D_element::getter_mLexicalFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexicalSentValueList_2D_element::getter_mLexicalAttributeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalSentValueList_2D_element::getter_mLexicalType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @lexicalSentValueList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSentValueList_2D_element ("lexicalSentValueList-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalSentValueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSentValueList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalSentValueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSentValueList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList_2D_element GALGAS_lexicalSentValueList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSentValueList_2D_element result ;
  const GALGAS_lexicalSentValueList_2D_element * p = (const GALGAS_lexicalSentValueList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSentValueList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSentValueList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap_2D_element::GALGAS_terminalMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mSentAttributeList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap_2D_element::~ GALGAS_terminalMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap_2D_element::GALGAS_terminalMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lexicalSentValueList & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mSentAttributeList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap_2D_element GALGAS_terminalMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_lexicalSentValueList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap_2D_element GALGAS_terminalMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_lexicalSentValueList & inOperand1 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_terminalMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_terminalMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_terminalMap_2D_element::objectCompare (const GALGAS_terminalMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSentAttributeList.objectCompare (inOperand.mAttribute_mSentAttributeList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_terminalMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSentAttributeList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mSentAttributeList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @terminalMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSentAttributeList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_terminalMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_terminalMap_2D_element::getter_mSentAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSentAttributeList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @terminalMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalMap_2D_element ("terminalMap-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap_2D_element GALGAS_terminalMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_terminalMap_2D_element result ;
  const GALGAS_terminalMap_2D_element * p = (const GALGAS_terminalMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap_2D_element::GALGAS_lexicalTypeMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mLexicalType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap_2D_element::~ GALGAS_lexicalTypeMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap_2D_element::GALGAS_lexicalTypeMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lexicalTypeEnum & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mLexicalType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap_2D_element GALGAS_lexicalTypeMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lexicalTypeEnum & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalTypeMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalTypeMap_2D_element::objectCompare (const GALGAS_lexicalTypeMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalType.objectCompare (inOperand.mAttribute_mLexicalType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalTypeMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexicalType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTypeMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mLexicalType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTypeMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @lexicalTypeMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalTypeMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeMap_2D_element::getter_mLexicalType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalTypeMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTypeMap_2D_element ("lexicalTypeMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalTypeMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTypeMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalTypeMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTypeMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap_2D_element GALGAS_lexicalTypeMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap_2D_element result ;
  const GALGAS_lexicalTypeMap_2D_element * p = (const GALGAS_lexicalTypeMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalTypeMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTypeMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap_2D_element::GALGAS_lexicalAttributeMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mLexicalType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap_2D_element::~ GALGAS_lexicalAttributeMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap_2D_element::GALGAS_lexicalAttributeMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_lexicalTypeEnum & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mLexicalType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap_2D_element GALGAS_lexicalAttributeMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lexicalTypeEnum & inOperand1 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalAttributeMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalAttributeMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalAttributeMap_2D_element::objectCompare (const GALGAS_lexicalAttributeMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalType.objectCompare (inOperand.mAttribute_mLexicalType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalAttributeMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexicalType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mLexicalType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @lexicalAttributeMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalAttributeMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalAttributeMap_2D_element::getter_mLexicalType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalAttributeMap-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeMap_2D_element ("lexicalAttributeMap-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalAttributeMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalAttributeMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap_2D_element GALGAS_lexicalAttributeMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeMap_2D_element result ;
  const GALGAS_lexicalAttributeMap_2D_element * p = (const GALGAS_lexicalAttributeMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalAttributeMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList_2D_element::GALGAS_terminalList_2D_element (void) :
mAttribute_mTerminalName (),
mAttribute_mSentAttributeList (),
mAttribute_mSyntaxErrorMessage (),
mAttribute_mIsEndOfTemplateMark (),
mAttribute_mAtomicSelection (),
mAttribute_mStyleIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList_2D_element::~ GALGAS_terminalList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList_2D_element::GALGAS_terminalList_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lexicalSentValueList & inOperand1,
                                                                const GALGAS_string & inOperand2,
                                                                const GALGAS_bool & inOperand3,
                                                                const GALGAS_bool & inOperand4,
                                                                const GALGAS_uint & inOperand5) :
mAttribute_mTerminalName (inOperand0),
mAttribute_mSentAttributeList (inOperand1),
mAttribute_mSyntaxErrorMessage (inOperand2),
mAttribute_mIsEndOfTemplateMark (inOperand3),
mAttribute_mAtomicSelection (inOperand4),
mAttribute_mStyleIndex (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList_2D_element GALGAS_terminalList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_lexicalSentValueList::constructor_emptyList (HERE),
                                         GALGAS_string::constructor_default (HERE),
                                         GALGAS_bool::constructor_default (HERE),
                                         GALGAS_bool::constructor_default (HERE),
                                         GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList_2D_element GALGAS_terminalList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_lexicalSentValueList & inOperand1,
                                                                                const GALGAS_string & inOperand2,
                                                                                const GALGAS_bool & inOperand3,
                                                                                const GALGAS_bool & inOperand4,
                                                                                const GALGAS_uint & inOperand5 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_terminalList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_terminalList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_terminalList_2D_element::objectCompare (const GALGAS_terminalList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTerminalName.objectCompare (inOperand.mAttribute_mTerminalName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSentAttributeList.objectCompare (inOperand.mAttribute_mSentAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSyntaxErrorMessage.objectCompare (inOperand.mAttribute_mSyntaxErrorMessage) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsEndOfTemplateMark.objectCompare (inOperand.mAttribute_mIsEndOfTemplateMark) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAtomicSelection.objectCompare (inOperand.mAttribute_mAtomicSelection) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStyleIndex.objectCompare (inOperand.mAttribute_mStyleIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_terminalList_2D_element::isValid (void) const {
  return mAttribute_mTerminalName.isValid () && mAttribute_mSentAttributeList.isValid () && mAttribute_mSyntaxErrorMessage.isValid () && mAttribute_mIsEndOfTemplateMark.isValid () && mAttribute_mAtomicSelection.isValid () && mAttribute_mStyleIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalList_2D_element::drop (void) {
  mAttribute_mTerminalName.drop () ;
  mAttribute_mSentAttributeList.drop () ;
  mAttribute_mSyntaxErrorMessage.drop () ;
  mAttribute_mIsEndOfTemplateMark.drop () ;
  mAttribute_mAtomicSelection.drop () ;
  mAttribute_mStyleIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @terminalList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTerminalName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSentAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSyntaxErrorMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsEndOfTemplateMark.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAtomicSelection.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStyleIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_terminalList_2D_element::getter_mTerminalName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_terminalList_2D_element::getter_mSentAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSentAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_terminalList_2D_element::getter_mSyntaxErrorMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_terminalList_2D_element::getter_mIsEndOfTemplateMark (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsEndOfTemplateMark ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_terminalList_2D_element::getter_mAtomicSelection (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAtomicSelection ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_terminalList_2D_element::getter_mStyleIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStyleIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @terminalList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalList_2D_element ("terminalList-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList_2D_element GALGAS_terminalList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_terminalList_2D_element result ;
  const GALGAS_terminalList_2D_element * p = (const GALGAS_terminalList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap_2D_element::GALGAS_lexicalExplicitTokenListMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mTerminal (),
mAttribute_mFeatureList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap_2D_element::~ GALGAS_lexicalExplicitTokenListMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap_2D_element::GALGAS_lexicalExplicitTokenListMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1,
                                                                                              const GALGAS_lstringlist & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mTerminal (inOperand1),
mAttribute_mFeatureList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap_2D_element GALGAS_lexicalExplicitTokenListMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalExplicitTokenListMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap_2D_element GALGAS_lexicalExplicitTokenListMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_lstringlist & inOperand2 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_lexicalExplicitTokenListMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalExplicitTokenListMap_2D_element::objectCompare (const GALGAS_lexicalExplicitTokenListMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTerminal.objectCompare (inOperand.mAttribute_mTerminal) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFeatureList.objectCompare (inOperand.mAttribute_mFeatureList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalExplicitTokenListMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTerminal.isValid () && mAttribute_mFeatureList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mTerminal.drop () ;
  mAttribute_mFeatureList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMap_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @lexicalExplicitTokenListMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTerminal.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFeatureList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalExplicitTokenListMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalExplicitTokenListMap_2D_element::getter_mTerminal (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminal ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_lexicalExplicitTokenListMap_2D_element::getter_mFeatureList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFeatureList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @lexicalExplicitTokenListMap-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap_2D_element ("lexicalExplicitTokenListMap-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalExplicitTokenListMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalExplicitTokenListMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExplicitTokenListMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap_2D_element GALGAS_lexicalExplicitTokenListMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMap_2D_element result ;
  const GALGAS_lexicalExplicitTokenListMap_2D_element * p = (const GALGAS_lexicalExplicitTokenListMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExplicitTokenListMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitTokenListMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap_2D_element::GALGAS_lexicalExplicitTokenListMapMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mExplicitTokenListMap (),
mAttribute_mTokenSortedList (),
mAttribute_mShouldBeGenerated () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap_2D_element::~ GALGAS_lexicalExplicitTokenListMapMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap_2D_element::GALGAS_lexicalExplicitTokenListMapMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lexicalExplicitTokenListMap & inOperand1,
                                                                                                    const GALGAS_tokenSortedlist & inOperand2,
                                                                                                    const GALGAS_bool & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mExplicitTokenListMap (inOperand1),
mAttribute_mTokenSortedList (inOperand2),
mAttribute_mShouldBeGenerated (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap_2D_element GALGAS_lexicalExplicitTokenListMapMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalExplicitTokenListMapMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_lexicalExplicitTokenListMap::constructor_emptyMap (HERE),
                                                           GALGAS_tokenSortedlist::constructor_emptySortedList (HERE),
                                                           GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap_2D_element GALGAS_lexicalExplicitTokenListMapMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_lexicalExplicitTokenListMap & inOperand1,
                                                                                                                    const GALGAS_tokenSortedlist & inOperand2,
                                                                                                                    const GALGAS_bool & inOperand3 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMapMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_lexicalExplicitTokenListMapMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalExplicitTokenListMapMap_2D_element::objectCompare (const GALGAS_lexicalExplicitTokenListMapMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExplicitTokenListMap.objectCompare (inOperand.mAttribute_mExplicitTokenListMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTokenSortedList.objectCompare (inOperand.mAttribute_mTokenSortedList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mShouldBeGenerated.objectCompare (inOperand.mAttribute_mShouldBeGenerated) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalExplicitTokenListMapMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mExplicitTokenListMap.isValid () && mAttribute_mTokenSortedList.isValid () && mAttribute_mShouldBeGenerated.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMapMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mExplicitTokenListMap.drop () ;
  mAttribute_mTokenSortedList.drop () ;
  mAttribute_mShouldBeGenerated.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExplicitTokenListMapMap_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @lexicalExplicitTokenListMapMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExplicitTokenListMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTokenSortedList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mShouldBeGenerated.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalExplicitTokenListMapMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMapMap_2D_element::getter_mExplicitTokenListMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExplicitTokenListMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist GALGAS_lexicalExplicitTokenListMapMap_2D_element::getter_mTokenSortedList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTokenSortedList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalExplicitTokenListMapMap_2D_element::getter_mShouldBeGenerated (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mShouldBeGenerated ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @lexicalExplicitTokenListMapMap-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap_2D_element ("lexicalExplicitTokenListMapMap-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalExplicitTokenListMapMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalExplicitTokenListMapMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExplicitTokenListMapMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap_2D_element GALGAS_lexicalExplicitTokenListMapMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMapMap_2D_element result ;
  const GALGAS_lexicalExplicitTokenListMapMap_2D_element * p = (const GALGAS_lexicalExplicitTokenListMapMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExplicitTokenListMapMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitTokenListMapMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap_2D_element::GALGAS_lexicalMessageMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mLexicalMessage (),
mAttribute_mMessageIsUsed () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap_2D_element::~ GALGAS_lexicalMessageMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap_2D_element::GALGAS_lexicalMessageMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstring & inOperand1,
                                                                          const GALGAS_bool & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mLexicalMessage (inOperand1),
mAttribute_mMessageIsUsed (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap_2D_element GALGAS_lexicalMessageMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalMessageMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap_2D_element GALGAS_lexicalMessageMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_bool & inOperand2 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalMessageMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_lexicalMessageMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalMessageMap_2D_element::objectCompare (const GALGAS_lexicalMessageMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalMessage.objectCompare (inOperand.mAttribute_mLexicalMessage) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMessageIsUsed.objectCompare (inOperand.mAttribute_mMessageIsUsed) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalMessageMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexicalMessage.isValid () && mAttribute_mMessageIsUsed.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mLexicalMessage.drop () ;
  mAttribute_mMessageIsUsed.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @lexicalMessageMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMessageIsUsed.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalMessageMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalMessageMap_2D_element::getter_mLexicalMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalMessageMap_2D_element::getter_mMessageIsUsed (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMessageIsUsed ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalMessageMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalMessageMap_2D_element ("lexicalMessageMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalMessageMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalMessageMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalMessageMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap_2D_element GALGAS_lexicalMessageMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageMap_2D_element result ;
  const GALGAS_lexicalMessageMap_2D_element * p = (const GALGAS_lexicalMessageMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalMessageMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalMessageMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap_2D_element::GALGAS_lexicalRoutineMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mLexicalRoutineFormalArgumentList (),
mAttribute_mErrorMessageList (),
mAttribute_mIsExtern () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap_2D_element::~ GALGAS_lexicalRoutineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap_2D_element::GALGAS_lexicalRoutineMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lexicalRoutineFormalArgumentList & inOperand1,
                                                                          const GALGAS_stringlist & inOperand2,
                                                                          const GALGAS_bool & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mLexicalRoutineFormalArgumentList (inOperand1),
mAttribute_mErrorMessageList (inOperand2),
mAttribute_mIsExtern (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap_2D_element GALGAS_lexicalRoutineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalRoutineMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (HERE),
                                              GALGAS_stringlist::constructor_emptyList (HERE),
                                              GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap_2D_element GALGAS_lexicalRoutineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lexicalRoutineFormalArgumentList & inOperand1,
                                                                                          const GALGAS_stringlist & inOperand2,
                                                                                          const GALGAS_bool & inOperand3 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_lexicalRoutineMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalRoutineMap_2D_element::objectCompare (const GALGAS_lexicalRoutineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalRoutineFormalArgumentList.objectCompare (inOperand.mAttribute_mLexicalRoutineFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mErrorMessageList.objectCompare (inOperand.mAttribute_mErrorMessageList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsExtern.objectCompare (inOperand.mAttribute_mIsExtern) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalRoutineMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexicalRoutineFormalArgumentList.isValid () && mAttribute_mErrorMessageList.isValid () && mAttribute_mIsExtern.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mLexicalRoutineFormalArgumentList.drop () ;
  mAttribute_mErrorMessageList.drop () ;
  mAttribute_mIsExtern.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @lexicalRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalRoutineFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mErrorMessageList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsExtern.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalRoutineMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineMap_2D_element::getter_mLexicalRoutineFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalRoutineFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_lexicalRoutineMap_2D_element::getter_mErrorMessageList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorMessageList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalRoutineMap_2D_element::getter_mIsExtern (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsExtern ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalRoutineMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineMap_2D_element ("lexicalRoutineMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineMap_2D_element GALGAS_lexicalRoutineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap_2D_element result ;
  const GALGAS_lexicalRoutineMap_2D_element * p = (const GALGAS_lexicalRoutineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRoutineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap_2D_element::GALGAS_lexicalFunctionMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mLexicalTypeList (),
mAttribute_mReturnedLexicalType (),
mAttribute_mReplacementFunctionName (),
mAttribute_mIsExtern () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap_2D_element::~ GALGAS_lexicalFunctionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap_2D_element::GALGAS_lexicalFunctionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_lexicalFunctionFormalArgumentList & inOperand1,
                                                                            const GALGAS_lexicalTypeEnum & inOperand2,
                                                                            const GALGAS_string & inOperand3,
                                                                            const GALGAS_bool & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mLexicalTypeList (inOperand1),
mAttribute_mReturnedLexicalType (inOperand2),
mAttribute_mReplacementFunctionName (inOperand3),
mAttribute_mIsExtern (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap_2D_element GALGAS_lexicalFunctionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lexicalFunctionFormalArgumentList & inOperand1,
                                                                                            const GALGAS_lexicalTypeEnum & inOperand2,
                                                                                            const GALGAS_string & inOperand3,
                                                                                            const GALGAS_bool & inOperand4 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalFunctionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_lexicalFunctionMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalFunctionMap_2D_element::objectCompare (const GALGAS_lexicalFunctionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalTypeList.objectCompare (inOperand.mAttribute_mLexicalTypeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReturnedLexicalType.objectCompare (inOperand.mAttribute_mReturnedLexicalType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReplacementFunctionName.objectCompare (inOperand.mAttribute_mReplacementFunctionName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsExtern.objectCompare (inOperand.mAttribute_mIsExtern) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalFunctionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexicalTypeList.isValid () && mAttribute_mReturnedLexicalType.isValid () && mAttribute_mReplacementFunctionName.isValid () && mAttribute_mIsExtern.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mLexicalTypeList.drop () ;
  mAttribute_mReturnedLexicalType.drop () ;
  mAttribute_mReplacementFunctionName.drop () ;
  mAttribute_mIsExtern.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @lexicalFunctionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalTypeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReturnedLexicalType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReplacementFunctionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsExtern.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalFunctionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionMap_2D_element::getter_mLexicalTypeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalTypeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalFunctionMap_2D_element::getter_mReturnedLexicalType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnedLexicalType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexicalFunctionMap_2D_element::getter_mReplacementFunctionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReplacementFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalFunctionMap_2D_element::getter_mIsExtern (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsExtern ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalFunctionMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionMap_2D_element ("lexicalFunctionMap-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalFunctionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalFunctionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap_2D_element GALGAS_lexicalFunctionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionMap_2D_element result ;
  const GALGAS_lexicalFunctionMap_2D_element * p = (const GALGAS_lexicalFunctionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList_2D_element::GALGAS_templateDelimitorList_2D_element (void) :
mAttribute_mStartString (),
mAttribute_mEndString (),
mAttribute_mPreservesStartDelimiter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList_2D_element::~ GALGAS_templateDelimitorList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList_2D_element::GALGAS_templateDelimitorList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_bool & inOperand2) :
mAttribute_mStartString (inOperand0),
mAttribute_mEndString (inOperand1),
mAttribute_mPreservesStartDelimiter (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList_2D_element GALGAS_templateDelimitorList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateDelimitorList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList_2D_element GALGAS_templateDelimitorList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_bool & inOperand2 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateDelimitorList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_templateDelimitorList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_templateDelimitorList_2D_element::objectCompare (const GALGAS_templateDelimitorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mStartString.objectCompare (inOperand.mAttribute_mStartString) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndString.objectCompare (inOperand.mAttribute_mEndString) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPreservesStartDelimiter.objectCompare (inOperand.mAttribute_mPreservesStartDelimiter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_templateDelimitorList_2D_element::isValid (void) const {
  return mAttribute_mStartString.isValid () && mAttribute_mEndString.isValid () && mAttribute_mPreservesStartDelimiter.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList_2D_element::drop (void) {
  mAttribute_mStartString.drop () ;
  mAttribute_mEndString.drop () ;
  mAttribute_mPreservesStartDelimiter.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateDelimitorList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @templateDelimitorList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mStartString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPreservesStartDelimiter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateDelimitorList_2D_element::getter_mStartString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateDelimitorList_2D_element::getter_mEndString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_templateDelimitorList_2D_element::getter_mPreservesStartDelimiter (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreservesStartDelimiter ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @templateDelimitorList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateDelimitorList_2D_element ("templateDelimitorList-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateDelimitorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDelimitorList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateDelimitorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateDelimitorList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList_2D_element GALGAS_templateDelimitorList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateDelimitorList_2D_element result ;
  const GALGAS_templateDelimitorList_2D_element * p = (const GALGAS_templateDelimitorList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateDelimitorList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateDelimitorList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap_2D_element::GALGAS_styleMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mComment (),
mAttribute_mStyleIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap_2D_element::~ GALGAS_styleMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap_2D_element::GALGAS_styleMap_2D_element (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lstring & inOperand1,
                                                        const GALGAS_uint & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mComment (inOperand1),
mAttribute_mStyleIndex (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap_2D_element GALGAS_styleMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_styleMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap_2D_element GALGAS_styleMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_lstring & inOperand1,
                                                                        const GALGAS_uint & inOperand2 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_styleMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_styleMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_styleMap_2D_element::objectCompare (const GALGAS_styleMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mComment.objectCompare (inOperand.mAttribute_mComment) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStyleIndex.objectCompare (inOperand.mAttribute_mStyleIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_styleMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mComment.isValid () && mAttribute_mStyleIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_styleMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mComment.drop () ;
  mAttribute_mStyleIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_styleMap_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @styleMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mComment.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStyleIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_styleMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_styleMap_2D_element::getter_mComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_styleMap_2D_element::getter_mStyleIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStyleIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @styleMap-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_styleMap_2D_element ("styleMap-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_styleMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_styleMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_styleMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_styleMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap_2D_element GALGAS_styleMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_styleMap_2D_element result ;
  const GALGAS_styleMap_2D_element * p = (const GALGAS_styleMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_styleMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("styleMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap_2D_element::GALGAS_lexicalTagMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap_2D_element::~ GALGAS_lexicalTagMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap_2D_element::GALGAS_lexicalTagMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap_2D_element GALGAS_lexicalTagMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalTagMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap_2D_element GALGAS_lexicalTagMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTagMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lexicalTagMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalTagMap_2D_element::objectCompare (const GALGAS_lexicalTagMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalTagMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTagMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTagMap_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @lexicalTagMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalTagMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @lexicalTagMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTagMap_2D_element ("lexicalTagMap-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalTagMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalTagMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTagMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTagMap_2D_element GALGAS_lexicalTagMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagMap_2D_element result ;
  const GALGAS_lexicalTagMap_2D_element * p = (const GALGAS_lexicalTagMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalTagMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST_2D_element::GALGAS_commandLineOptionListAST_2D_element (void) :
mAttribute_mOptionTypeName (),
mAttribute_mOptionInternalName (),
mAttribute_mOptionInvocationLetter (),
mAttribute_mOptionInvocationString (),
mAttribute_mOptionComment (),
mAttribute_mOptionDefaultValue (),
mAttribute_mOptionDefaultValueKind () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST_2D_element::~ GALGAS_commandLineOptionListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST_2D_element::GALGAS_commandLineOptionListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_lchar & inOperand2,
                                                                                        const GALGAS_lstring & inOperand3,
                                                                                        const GALGAS_lstring & inOperand4,
                                                                                        const GALGAS_lstring & inOperand5,
                                                                                        const GALGAS_optionDefaultValueEnumAST & inOperand6) :
mAttribute_mOptionTypeName (inOperand0),
mAttribute_mOptionInternalName (inOperand1),
mAttribute_mOptionInvocationLetter (inOperand2),
mAttribute_mOptionInvocationString (inOperand3),
mAttribute_mOptionComment (inOperand4),
mAttribute_mOptionDefaultValue (inOperand5),
mAttribute_mOptionDefaultValueKind (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST_2D_element GALGAS_commandLineOptionListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                        const GALGAS_lchar & inOperand2,
                                                                                                        const GALGAS_lstring & inOperand3,
                                                                                                        const GALGAS_lstring & inOperand4,
                                                                                                        const GALGAS_lstring & inOperand5,
                                                                                                        const GALGAS_optionDefaultValueEnumAST & inOperand6 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_commandLineOptionListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_commandLineOptionListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_commandLineOptionListAST_2D_element::objectCompare (const GALGAS_commandLineOptionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOptionTypeName.objectCompare (inOperand.mAttribute_mOptionTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionInternalName.objectCompare (inOperand.mAttribute_mOptionInternalName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionInvocationLetter.objectCompare (inOperand.mAttribute_mOptionInvocationLetter) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionInvocationString.objectCompare (inOperand.mAttribute_mOptionInvocationString) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionComment.objectCompare (inOperand.mAttribute_mOptionComment) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionDefaultValue.objectCompare (inOperand.mAttribute_mOptionDefaultValue) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionDefaultValueKind.objectCompare (inOperand.mAttribute_mOptionDefaultValueKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_commandLineOptionListAST_2D_element::isValid (void) const {
  return mAttribute_mOptionTypeName.isValid () && mAttribute_mOptionInternalName.isValid () && mAttribute_mOptionInvocationLetter.isValid () && mAttribute_mOptionInvocationString.isValid () && mAttribute_mOptionComment.isValid () && mAttribute_mOptionDefaultValue.isValid () && mAttribute_mOptionDefaultValueKind.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST_2D_element::drop (void) {
  mAttribute_mOptionTypeName.drop () ;
  mAttribute_mOptionInternalName.drop () ;
  mAttribute_mOptionInvocationLetter.drop () ;
  mAttribute_mOptionInvocationString.drop () ;
  mAttribute_mOptionComment.drop () ;
  mAttribute_mOptionDefaultValue.drop () ;
  mAttribute_mOptionDefaultValueKind.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionListAST_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @commandLineOptionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOptionTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionInternalName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionInvocationLetter.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionInvocationString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionComment.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionDefaultValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionDefaultValueKind.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST_2D_element::getter_mOptionTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST_2D_element::getter_mOptionInternalName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionInternalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar GALGAS_commandLineOptionListAST_2D_element::getter_mOptionInvocationLetter (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionInvocationLetter ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST_2D_element::getter_mOptionInvocationString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionInvocationString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST_2D_element::getter_mOptionComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST_2D_element::getter_mOptionDefaultValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionDefaultValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST GALGAS_commandLineOptionListAST_2D_element::getter_mOptionDefaultValueKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionDefaultValueKind ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @commandLineOptionListAST-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_commandLineOptionListAST_2D_element ("commandLineOptionListAST-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_commandLineOptionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_commandLineOptionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_commandLineOptionListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST_2D_element GALGAS_commandLineOptionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_commandLineOptionListAST_2D_element result ;
  const GALGAS_commandLineOptionListAST_2D_element * p = (const GALGAS_commandLineOptionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_commandLineOptionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap_2D_element::GALGAS_commandLineOptionMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mOptionChar (),
mAttribute_mOptionString (),
mAttribute_mComment (),
mAttribute_mDefaultValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap_2D_element::~ GALGAS_commandLineOptionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap_2D_element::GALGAS_commandLineOptionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_char & inOperand1,
                                                                                const GALGAS_string & inOperand2,
                                                                                const GALGAS_string & inOperand3,
                                                                                const GALGAS_string & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mOptionChar (inOperand1),
mAttribute_mOptionString (inOperand2),
mAttribute_mComment (inOperand3),
mAttribute_mDefaultValue (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap_2D_element GALGAS_commandLineOptionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_commandLineOptionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_char::constructor_default (HERE),
                                                 GALGAS_string::constructor_default (HERE),
                                                 GALGAS_string::constructor_default (HERE),
                                                 GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap_2D_element GALGAS_commandLineOptionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_char & inOperand1,
                                                                                                const GALGAS_string & inOperand2,
                                                                                                const GALGAS_string & inOperand3,
                                                                                                const GALGAS_string & inOperand4 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_commandLineOptionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_commandLineOptionMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_commandLineOptionMap_2D_element::objectCompare (const GALGAS_commandLineOptionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionChar.objectCompare (inOperand.mAttribute_mOptionChar) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionString.objectCompare (inOperand.mAttribute_mOptionString) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mComment.objectCompare (inOperand.mAttribute_mComment) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDefaultValue.objectCompare (inOperand.mAttribute_mDefaultValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_commandLineOptionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mOptionChar.isValid () && mAttribute_mOptionString.isValid () && mAttribute_mComment.isValid () && mAttribute_mDefaultValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mOptionChar.drop () ;
  mAttribute_mOptionString.drop () ;
  mAttribute_mComment.drop () ;
  mAttribute_mDefaultValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_commandLineOptionMap_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @commandLineOptionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionChar.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mComment.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDefaultValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char GALGAS_commandLineOptionMap_2D_element::getter_mOptionChar (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionChar ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_commandLineOptionMap_2D_element::getter_mOptionString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_commandLineOptionMap_2D_element::getter_mComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_commandLineOptionMap_2D_element::getter_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefaultValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @commandLineOptionMap-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_commandLineOptionMap_2D_element ("commandLineOptionMap-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_commandLineOptionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_commandLineOptionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_commandLineOptionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap_2D_element GALGAS_commandLineOptionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_commandLineOptionMap_2D_element result ;
  const GALGAS_commandLineOptionMap_2D_element * p = (const GALGAS_commandLineOptionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_commandLineOptionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST_2D_element::GALGAS_guiSimpleAttributeListAST_2D_element (void) :
mAttribute_mKey (),
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST_2D_element::~ GALGAS_guiSimpleAttributeListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST_2D_element::GALGAS_guiSimpleAttributeListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1) :
mAttribute_mKey (inOperand0),
mAttribute_mValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST_2D_element GALGAS_guiSimpleAttributeListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiSimpleAttributeListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST_2D_element GALGAS_guiSimpleAttributeListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guiSimpleAttributeListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_guiSimpleAttributeListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guiSimpleAttributeListAST_2D_element::objectCompare (const GALGAS_guiSimpleAttributeListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mKey.objectCompare (inOperand.mAttribute_mKey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_guiSimpleAttributeListAST_2D_element::isValid (void) const {
  return mAttribute_mKey.isValid () && mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST_2D_element::drop (void) {
  mAttribute_mKey.drop () ;
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiSimpleAttributeListAST_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @guiSimpleAttributeListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mKey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guiSimpleAttributeListAST_2D_element::getter_mKey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guiSimpleAttributeListAST_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @guiSimpleAttributeListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiSimpleAttributeListAST_2D_element ("guiSimpleAttributeListAST-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guiSimpleAttributeListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiSimpleAttributeListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guiSimpleAttributeListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiSimpleAttributeListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST_2D_element GALGAS_guiSimpleAttributeListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_guiSimpleAttributeListAST_2D_element result ;
  const GALGAS_guiSimpleAttributeListAST_2D_element * p = (const GALGAS_guiSimpleAttributeListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiSimpleAttributeListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiSimpleAttributeListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST_2D_element::GALGAS_guiCompoundAttributeListAST_2D_element (void) :
mAttribute_mKey (),
mAttribute_mAttributeName (),
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST_2D_element::~ GALGAS_guiCompoundAttributeListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST_2D_element::GALGAS_guiCompoundAttributeListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1,
                                                                                              const GALGAS_lstring & inOperand2) :
mAttribute_mKey (inOperand0),
mAttribute_mAttributeName (inOperand1),
mAttribute_mValue (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST_2D_element GALGAS_guiCompoundAttributeListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiCompoundAttributeListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST_2D_element GALGAS_guiCompoundAttributeListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_lstring & inOperand2 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guiCompoundAttributeListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_guiCompoundAttributeListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guiCompoundAttributeListAST_2D_element::objectCompare (const GALGAS_guiCompoundAttributeListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mKey.objectCompare (inOperand.mAttribute_mKey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeName.objectCompare (inOperand.mAttribute_mAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_guiCompoundAttributeListAST_2D_element::isValid (void) const {
  return mAttribute_mKey.isValid () && mAttribute_mAttributeName.isValid () && mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST_2D_element::drop (void) {
  mAttribute_mKey.drop () ;
  mAttribute_mAttributeName.drop () ;
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCompoundAttributeListAST_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @guiCompoundAttributeListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mKey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guiCompoundAttributeListAST_2D_element::getter_mKey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guiCompoundAttributeListAST_2D_element::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guiCompoundAttributeListAST_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @guiCompoundAttributeListAST-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiCompoundAttributeListAST_2D_element ("guiCompoundAttributeListAST-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guiCompoundAttributeListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCompoundAttributeListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guiCompoundAttributeListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiCompoundAttributeListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST_2D_element GALGAS_guiCompoundAttributeListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_guiCompoundAttributeListAST_2D_element result ;
  const GALGAS_guiCompoundAttributeListAST_2D_element * p = (const GALGAS_guiCompoundAttributeListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiCompoundAttributeListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCompoundAttributeListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST_2D_element::GALGAS_terminalLabelListAST_2D_element (void) :
mAttribute_mTerminal (),
mAttribute_mDisplayFlags () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST_2D_element::~ GALGAS_terminalLabelListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST_2D_element::GALGAS_terminalLabelListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_uint & inOperand1) :
mAttribute_mTerminal (inOperand0),
mAttribute_mDisplayFlags (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST_2D_element GALGAS_terminalLabelListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalLabelListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST_2D_element GALGAS_terminalLabelListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_uint & inOperand1 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_terminalLabelListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_terminalLabelListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_terminalLabelListAST_2D_element::objectCompare (const GALGAS_terminalLabelListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTerminal.objectCompare (inOperand.mAttribute_mTerminal) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDisplayFlags.objectCompare (inOperand.mAttribute_mDisplayFlags) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_terminalLabelListAST_2D_element::isValid (void) const {
  return mAttribute_mTerminal.isValid () && mAttribute_mDisplayFlags.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST_2D_element::drop (void) {
  mAttribute_mTerminal.drop () ;
  mAttribute_mDisplayFlags.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalLabelListAST_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @terminalLabelListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTerminal.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDisplayFlags.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_terminalLabelListAST_2D_element::getter_mTerminal (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminal ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_terminalLabelListAST_2D_element::getter_mDisplayFlags (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDisplayFlags ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @terminalLabelListAST-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalLabelListAST_2D_element ("terminalLabelListAST-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalLabelListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalLabelListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalLabelListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalLabelListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST_2D_element GALGAS_terminalLabelListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_terminalLabelListAST_2D_element result ;
  const GALGAS_terminalLabelListAST_2D_element * p = (const GALGAS_terminalLabelListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalLabelListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalLabelListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST_2D_element::GALGAS_withLexiqueListAST_2D_element (void) :
mAttribute_mLexiqueFileName (),
mAttribute_mLabels (),
mAttribute_mSimpleAttributes (),
mAttribute_mCompoundAttributes () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST_2D_element::~ GALGAS_withLexiqueListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST_2D_element::GALGAS_withLexiqueListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_guiLabelListAST & inOperand1,
                                                                            const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                            const GALGAS_guiCompoundAttributeListAST & inOperand3) :
mAttribute_mLexiqueFileName (inOperand0),
mAttribute_mLabels (inOperand1),
mAttribute_mSimpleAttributes (inOperand2),
mAttribute_mCompoundAttributes (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST_2D_element GALGAS_withLexiqueListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_withLexiqueListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_guiLabelListAST::constructor_emptyList (HERE),
                                               GALGAS_guiSimpleAttributeListAST::constructor_emptyList (HERE),
                                               GALGAS_guiCompoundAttributeListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST_2D_element GALGAS_withLexiqueListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_guiLabelListAST & inOperand1,
                                                                                            const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                                            const GALGAS_guiCompoundAttributeListAST & inOperand3 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_withLexiqueListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_withLexiqueListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_withLexiqueListAST_2D_element::objectCompare (const GALGAS_withLexiqueListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLexiqueFileName.objectCompare (inOperand.mAttribute_mLexiqueFileName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLabels.objectCompare (inOperand.mAttribute_mLabels) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSimpleAttributes.objectCompare (inOperand.mAttribute_mSimpleAttributes) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCompoundAttributes.objectCompare (inOperand.mAttribute_mCompoundAttributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_withLexiqueListAST_2D_element::isValid (void) const {
  return mAttribute_mLexiqueFileName.isValid () && mAttribute_mLabels.isValid () && mAttribute_mSimpleAttributes.isValid () && mAttribute_mCompoundAttributes.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST_2D_element::drop (void) {
  mAttribute_mLexiqueFileName.drop () ;
  mAttribute_mLabels.drop () ;
  mAttribute_mSimpleAttributes.drop () ;
  mAttribute_mCompoundAttributes.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_withLexiqueListAST_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @withLexiqueListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLexiqueFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLabels.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSimpleAttributes.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCompoundAttributes.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_withLexiqueListAST_2D_element::getter_mLexiqueFileName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexiqueFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_withLexiqueListAST_2D_element::getter_mLabels (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabels ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_withLexiqueListAST_2D_element::getter_mSimpleAttributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSimpleAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST GALGAS_withLexiqueListAST_2D_element::getter_mCompoundAttributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCompoundAttributes ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @withLexiqueListAST-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_withLexiqueListAST_2D_element ("withLexiqueListAST-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_withLexiqueListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_withLexiqueListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_withLexiqueListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_withLexiqueListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST_2D_element GALGAS_withLexiqueListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_withLexiqueListAST_2D_element result ;
  const GALGAS_withLexiqueListAST_2D_element * p = (const GALGAS_withLexiqueListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_withLexiqueListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("withLexiqueListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap_2D_element::GALGAS_extensionMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mLexiqueName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap_2D_element::~ GALGAS_extensionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap_2D_element::GALGAS_extensionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_string & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mLexiqueName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap_2D_element GALGAS_extensionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap_2D_element GALGAS_extensionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_string & inOperand1 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extensionMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_extensionMap_2D_element::objectCompare (const GALGAS_extensionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexiqueName.objectCompare (inOperand.mAttribute_mLexiqueName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_extensionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexiqueName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mLexiqueName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMap_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @extensionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexiqueName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_extensionMap_2D_element::getter_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexiqueName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @extensionMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMap_2D_element ("extensionMap-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMap_2D_element GALGAS_extensionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_extensionMap_2D_element result ;
  const GALGAS_extensionMap_2D_element * p = (const GALGAS_extensionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration_2D_element::GALGAS_optionComponentMapForGeneration_2D_element (void) :
mAttribute_lkey (),
mAttribute_mGuiComponentContext () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration_2D_element::~ GALGAS_optionComponentMapForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration_2D_element::GALGAS_optionComponentMapForGeneration_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_guiAnalysisContext & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mGuiComponentContext (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration_2D_element GALGAS_optionComponentMapForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_optionComponentMapForGeneration_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_guiAnalysisContext::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration_2D_element GALGAS_optionComponentMapForGeneration_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                      const GALGAS_guiAnalysisContext & inOperand1 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionComponentMapForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_optionComponentMapForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_optionComponentMapForGeneration_2D_element::objectCompare (const GALGAS_optionComponentMapForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGuiComponentContext.objectCompare (inOperand.mAttribute_mGuiComponentContext) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_optionComponentMapForGeneration_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mGuiComponentContext.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForGeneration_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mGuiComponentContext.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForGeneration_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @optionComponentMapForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGuiComponentContext.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_optionComponentMapForGeneration_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiAnalysisContext GALGAS_optionComponentMapForGeneration_2D_element::getter_mGuiComponentContext (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGuiComponentContext ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @optionComponentMapForGeneration-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentMapForGeneration_2D_element ("optionComponentMapForGeneration-element",
                                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_optionComponentMapForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_optionComponentMapForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentMapForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForGeneration_2D_element GALGAS_optionComponentMapForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentMapForGeneration_2D_element result ;
  const GALGAS_optionComponentMapForGeneration_2D_element * p = (const GALGAS_optionComponentMapForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionComponentMapForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList_2D_element::GALGAS_enumConstantList_2D_element (void) :
mAttribute_mConstantName (),
mAttribute_mAssociatedValueDefinitionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList_2D_element::~ GALGAS_enumConstantList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList_2D_element::GALGAS_enumConstantList_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS__32_lstringlist & inOperand1) :
mAttribute_mConstantName (inOperand0),
mAttribute_mAssociatedValueDefinitionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList_2D_element GALGAS_enumConstantList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS__32_lstringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList_2D_element GALGAS_enumConstantList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS__32_lstringlist & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumConstantList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_enumConstantList_2D_element::objectCompare (const GALGAS_enumConstantList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mConstantName.objectCompare (inOperand.mAttribute_mConstantName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAssociatedValueDefinitionList.objectCompare (inOperand.mAttribute_mAssociatedValueDefinitionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_enumConstantList_2D_element::isValid (void) const {
  return mAttribute_mConstantName.isValid () && mAttribute_mAssociatedValueDefinitionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList_2D_element::drop (void) {
  mAttribute_mConstantName.drop () ;
  mAttribute_mAssociatedValueDefinitionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @enumConstantList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mConstantName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAssociatedValueDefinitionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumConstantList_2D_element::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS_enumConstantList_2D_element::getter_mAssociatedValueDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssociatedValueDefinitionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @enumConstantList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantList_2D_element ("enumConstantList-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumConstantList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumConstantList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList_2D_element GALGAS_enumConstantList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantList_2D_element result ;
  const GALGAS_enumConstantList_2D_element * p = (const GALGAS_enumConstantList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumConstantList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList_2D_element::GALGAS_typeNameFormalParameterNameList_2D_element (void) :
mAttribute_mFormalSelector (),
mAttribute_mFormalParameterTypeName (),
mAttribute_mFormalParameterName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList_2D_element::~ GALGAS_typeNameFormalParameterNameList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList_2D_element::GALGAS_typeNameFormalParameterNameList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1,
                                                                                                      const GALGAS_lstring & inOperand2) :
mAttribute_mFormalSelector (inOperand0),
mAttribute_mFormalParameterTypeName (inOperand1),
mAttribute_mFormalParameterName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList_2D_element GALGAS_typeNameFormalParameterNameList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_typeNameFormalParameterNameList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList_2D_element GALGAS_typeNameFormalParameterNameList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                      const GALGAS_lstring & inOperand1,
                                                                                                                      const GALGAS_lstring & inOperand2 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeNameFormalParameterNameList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_typeNameFormalParameterNameList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typeNameFormalParameterNameList_2D_element::objectCompare (const GALGAS_typeNameFormalParameterNameList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalSelector.objectCompare (inOperand.mAttribute_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalParameterTypeName.objectCompare (inOperand.mAttribute_mFormalParameterTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalParameterName.objectCompare (inOperand.mAttribute_mFormalParameterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_typeNameFormalParameterNameList_2D_element::isValid (void) const {
  return mAttribute_mFormalSelector.isValid () && mAttribute_mFormalParameterTypeName.isValid () && mAttribute_mFormalParameterName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeNameFormalParameterNameList_2D_element::drop (void) {
  mAttribute_mFormalSelector.drop () ;
  mAttribute_mFormalParameterTypeName.drop () ;
  mAttribute_mFormalParameterName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeNameFormalParameterNameList_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @typeNameFormalParameterNameList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalParameterTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalParameterName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeNameFormalParameterNameList_2D_element::getter_mFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeNameFormalParameterNameList_2D_element::getter_mFormalParameterTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalParameterTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeNameFormalParameterNameList_2D_element::getter_mFormalParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalParameterName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @typeNameFormalParameterNameList-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeNameFormalParameterNameList_2D_element ("typeNameFormalParameterNameList-element",
                                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeNameFormalParameterNameList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeNameFormalParameterNameList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeNameFormalParameterNameList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeNameFormalParameterNameList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList_2D_element GALGAS_typeNameFormalParameterNameList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_typeNameFormalParameterNameList_2D_element result ;
  const GALGAS_typeNameFormalParameterNameList_2D_element * p = (const GALGAS_typeNameFormalParameterNameList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeNameFormalParameterNameList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeNameFormalParameterNameList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList_2D_element::GALGAS_externTypeConstructorList_2D_element (void) :
mAttribute_mConstructorName (),
mAttribute_mResultTypeName (),
mAttribute_mParameterList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList_2D_element::~ GALGAS_externTypeConstructorList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList_2D_element::GALGAS_externTypeConstructorList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_typeNameFormalParameterNameList & inOperand2) :
mAttribute_mConstructorName (inOperand0),
mAttribute_mResultTypeName (inOperand1),
mAttribute_mParameterList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList_2D_element GALGAS_externTypeConstructorList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeConstructorList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_typeNameFormalParameterNameList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList_2D_element GALGAS_externTypeConstructorList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                          const GALGAS_typeNameFormalParameterNameList & inOperand2 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externTypeConstructorList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externTypeConstructorList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_externTypeConstructorList_2D_element::objectCompare (const GALGAS_externTypeConstructorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mConstructorName.objectCompare (inOperand.mAttribute_mConstructorName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultTypeName.objectCompare (inOperand.mAttribute_mResultTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mParameterList.objectCompare (inOperand.mAttribute_mParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_externTypeConstructorList_2D_element::isValid (void) const {
  return mAttribute_mConstructorName.isValid () && mAttribute_mResultTypeName.isValid () && mAttribute_mParameterList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeConstructorList_2D_element::drop (void) {
  mAttribute_mConstructorName.drop () ;
  mAttribute_mResultTypeName.drop () ;
  mAttribute_mParameterList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeConstructorList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @externTypeConstructorList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mConstructorName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeConstructorList_2D_element::getter_mConstructorName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstructorName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeConstructorList_2D_element::getter_mResultTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList GALGAS_externTypeConstructorList_2D_element::getter_mParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParameterList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @externTypeConstructorList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeConstructorList_2D_element ("externTypeConstructorList-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externTypeConstructorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeConstructorList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externTypeConstructorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeConstructorList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList_2D_element GALGAS_externTypeConstructorList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externTypeConstructorList_2D_element result ;
  const GALGAS_externTypeConstructorList_2D_element * p = (const GALGAS_externTypeConstructorList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeConstructorList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeConstructorList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList_2D_element::GALGAS_externTypeGetterList_2D_element (void) :
mAttribute_mGetterName (),
mAttribute_mResultTypeName (),
mAttribute_mParameterList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList_2D_element::~ GALGAS_externTypeGetterList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList_2D_element::GALGAS_externTypeGetterList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_lstring & inOperand1,
                                                                                const GALGAS_typeNameFormalParameterNameList & inOperand2) :
mAttribute_mGetterName (inOperand0),
mAttribute_mResultTypeName (inOperand1),
mAttribute_mParameterList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList_2D_element GALGAS_externTypeGetterList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeGetterList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_typeNameFormalParameterNameList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList_2D_element GALGAS_externTypeGetterList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_typeNameFormalParameterNameList & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externTypeGetterList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externTypeGetterList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_externTypeGetterList_2D_element::objectCompare (const GALGAS_externTypeGetterList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mGetterName.objectCompare (inOperand.mAttribute_mGetterName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultTypeName.objectCompare (inOperand.mAttribute_mResultTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mParameterList.objectCompare (inOperand.mAttribute_mParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_externTypeGetterList_2D_element::isValid (void) const {
  return mAttribute_mGetterName.isValid () && mAttribute_mResultTypeName.isValid () && mAttribute_mParameterList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeGetterList_2D_element::drop (void) {
  mAttribute_mGetterName.drop () ;
  mAttribute_mResultTypeName.drop () ;
  mAttribute_mParameterList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeGetterList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @externTypeGetterList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mGetterName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeGetterList_2D_element::getter_mGetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeGetterList_2D_element::getter_mResultTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList GALGAS_externTypeGetterList_2D_element::getter_mParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParameterList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @externTypeGetterList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeGetterList_2D_element ("externTypeGetterList-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externTypeGetterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeGetterList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externTypeGetterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeGetterList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeGetterList_2D_element GALGAS_externTypeGetterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externTypeGetterList_2D_element result ;
  const GALGAS_externTypeGetterList_2D_element * p = (const GALGAS_externTypeGetterList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeGetterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeGetterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList_2D_element::GALGAS_externTypeModifierList_2D_element (void) :
mAttribute_mSetterName (),
mAttribute_mFormalParameterList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList_2D_element::~ GALGAS_externTypeModifierList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList_2D_element::GALGAS_externTypeModifierList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_formalParameterListAST & inOperand1) :
mAttribute_mSetterName (inOperand0),
mAttribute_mFormalParameterList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList_2D_element GALGAS_externTypeModifierList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeModifierList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_formalParameterListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList_2D_element GALGAS_externTypeModifierList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_formalParameterListAST & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externTypeModifierList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_externTypeModifierList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_externTypeModifierList_2D_element::objectCompare (const GALGAS_externTypeModifierList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSetterName.objectCompare (inOperand.mAttribute_mSetterName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalParameterList.objectCompare (inOperand.mAttribute_mFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_externTypeModifierList_2D_element::isValid (void) const {
  return mAttribute_mSetterName.isValid () && mAttribute_mFormalParameterList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeModifierList_2D_element::drop (void) {
  mAttribute_mSetterName.drop () ;
  mAttribute_mFormalParameterList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeModifierList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @externTypeModifierList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSetterName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeModifierList_2D_element::getter_mSetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_externTypeModifierList_2D_element::getter_mFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalParameterList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @externTypeModifierList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeModifierList_2D_element ("externTypeModifierList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externTypeModifierList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeModifierList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externTypeModifierList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeModifierList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList_2D_element GALGAS_externTypeModifierList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_externTypeModifierList_2D_element result ;
  const GALGAS_externTypeModifierList_2D_element * p = (const GALGAS_externTypeModifierList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeModifierList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeModifierList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList_2D_element::GALGAS_externTypeMethodList_2D_element (void) :
mAttribute_mMethodName (),
mAttribute_mFormalParameterList (),
mAttribute_mDeclarationLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList_2D_element::~ GALGAS_externTypeMethodList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList_2D_element::GALGAS_externTypeMethodList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_formalParameterListAST & inOperand1,
                                                                                const GALGAS_location & inOperand2) :
mAttribute_mMethodName (inOperand0),
mAttribute_mFormalParameterList (inOperand1),
mAttribute_mDeclarationLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList_2D_element GALGAS_externTypeMethodList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeMethodList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_formalParameterListAST::constructor_emptyList (HERE),
                                                 GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList_2D_element GALGAS_externTypeMethodList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_formalParameterListAST & inOperand1,
                                                                                                const GALGAS_location & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externTypeMethodList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externTypeMethodList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_externTypeMethodList_2D_element::objectCompare (const GALGAS_externTypeMethodList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mMethodName.objectCompare (inOperand.mAttribute_mMethodName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalParameterList.objectCompare (inOperand.mAttribute_mFormalParameterList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDeclarationLocation.objectCompare (inOperand.mAttribute_mDeclarationLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_externTypeMethodList_2D_element::isValid (void) const {
  return mAttribute_mMethodName.isValid () && mAttribute_mFormalParameterList.isValid () && mAttribute_mDeclarationLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeMethodList_2D_element::drop (void) {
  mAttribute_mMethodName.drop () ;
  mAttribute_mFormalParameterList.drop () ;
  mAttribute_mDeclarationLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeMethodList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @externTypeMethodList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mMethodName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalParameterList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDeclarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeMethodList_2D_element::getter_mMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_externTypeMethodList_2D_element::getter_mFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_externTypeMethodList_2D_element::getter_mDeclarationLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclarationLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @externTypeMethodList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeMethodList_2D_element ("externTypeMethodList-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externTypeMethodList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeMethodList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externTypeMethodList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeMethodList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList_2D_element GALGAS_externTypeMethodList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externTypeMethodList_2D_element result ;
  const GALGAS_externTypeMethodList_2D_element * p = (const GALGAS_externTypeMethodList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeMethodList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeMethodList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList_2D_element::GALGAS_graphInsertModifierList_2D_element (void) :
mAttribute_mInsertModifierName (),
mAttribute_mInsertErrorMessage () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList_2D_element::~ GALGAS_graphInsertModifierList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList_2D_element::GALGAS_graphInsertModifierList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1) :
mAttribute_mInsertModifierName (inOperand0),
mAttribute_mInsertErrorMessage (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList_2D_element GALGAS_graphInsertModifierList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_graphInsertModifierList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList_2D_element GALGAS_graphInsertModifierList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_graphInsertModifierList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_graphInsertModifierList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_graphInsertModifierList_2D_element::objectCompare (const GALGAS_graphInsertModifierList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInsertModifierName.objectCompare (inOperand.mAttribute_mInsertModifierName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInsertErrorMessage.objectCompare (inOperand.mAttribute_mInsertErrorMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_graphInsertModifierList_2D_element::isValid (void) const {
  return mAttribute_mInsertModifierName.isValid () && mAttribute_mInsertErrorMessage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_graphInsertModifierList_2D_element::drop (void) {
  mAttribute_mInsertModifierName.drop () ;
  mAttribute_mInsertErrorMessage.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_graphInsertModifierList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @graphInsertModifierList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInsertModifierName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInsertErrorMessage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_graphInsertModifierList_2D_element::getter_mInsertModifierName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInsertModifierName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_graphInsertModifierList_2D_element::getter_mInsertErrorMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInsertErrorMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @graphInsertModifierList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphInsertModifierList_2D_element ("graphInsertModifierList-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_graphInsertModifierList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphInsertModifierList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_graphInsertModifierList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphInsertModifierList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList_2D_element GALGAS_graphInsertModifierList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_graphInsertModifierList_2D_element result ;
  const GALGAS_graphInsertModifierList_2D_element * p = (const GALGAS_graphInsertModifierList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_graphInsertModifierList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphInsertModifierList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST_2D_element::GALGAS_insertMethodListAST_2D_element (void) :
mAttribute_mInsertMethodName (),
mAttribute_mErrorMessage (),
mAttribute_mShadowErrorMessage (),
mAttribute_mInitialStateName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST_2D_element::~ GALGAS_insertMethodListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST_2D_element::GALGAS_insertMethodListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_lstring & inOperand1,
                                                                              const GALGAS_lstring & inOperand2,
                                                                              const GALGAS_lstring & inOperand3) :
mAttribute_mInsertMethodName (inOperand0),
mAttribute_mErrorMessage (inOperand1),
mAttribute_mShadowErrorMessage (inOperand2),
mAttribute_mInitialStateName (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST_2D_element GALGAS_insertMethodListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_insertMethodListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST_2D_element GALGAS_insertMethodListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1,
                                                                                              const GALGAS_lstring & inOperand2,
                                                                                              const GALGAS_lstring & inOperand3 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_insertMethodListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_insertMethodListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_insertMethodListAST_2D_element::objectCompare (const GALGAS_insertMethodListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInsertMethodName.objectCompare (inOperand.mAttribute_mInsertMethodName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mErrorMessage.objectCompare (inOperand.mAttribute_mErrorMessage) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mShadowErrorMessage.objectCompare (inOperand.mAttribute_mShadowErrorMessage) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitialStateName.objectCompare (inOperand.mAttribute_mInitialStateName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_insertMethodListAST_2D_element::isValid (void) const {
  return mAttribute_mInsertMethodName.isValid () && mAttribute_mErrorMessage.isValid () && mAttribute_mShadowErrorMessage.isValid () && mAttribute_mInitialStateName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodListAST_2D_element::drop (void) {
  mAttribute_mInsertMethodName.drop () ;
  mAttribute_mErrorMessage.drop () ;
  mAttribute_mShadowErrorMessage.drop () ;
  mAttribute_mInitialStateName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodListAST_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @insertMethodListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInsertMethodName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mErrorMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mShadowErrorMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitialStateName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_insertMethodListAST_2D_element::getter_mInsertMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInsertMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_insertMethodListAST_2D_element::getter_mErrorMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_insertMethodListAST_2D_element::getter_mShadowErrorMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mShadowErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_insertMethodListAST_2D_element::getter_mInitialStateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitialStateName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @insertMethodListAST-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_insertMethodListAST_2D_element ("insertMethodListAST-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_insertMethodListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertMethodListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_insertMethodListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertMethodListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST_2D_element GALGAS_insertMethodListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodListAST_2D_element result ;
  const GALGAS_insertMethodListAST_2D_element * p = (const GALGAS_insertMethodListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_insertMethodListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertMethodListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST_2D_element::GALGAS_mapSearchMethodListAST_2D_element (void) :
mAttribute_mSearchMethodName (),
mAttribute_mErrorMessage (),
mAttribute_mActionName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST_2D_element::~ GALGAS_mapSearchMethodListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST_2D_element::GALGAS_mapSearchMethodListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2) :
mAttribute_mSearchMethodName (inOperand0),
mAttribute_mErrorMessage (inOperand1),
mAttribute_mActionName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST_2D_element GALGAS_mapSearchMethodListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapSearchMethodListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST_2D_element GALGAS_mapSearchMethodListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_lstring & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mapSearchMethodListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_mapSearchMethodListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_mapSearchMethodListAST_2D_element::objectCompare (const GALGAS_mapSearchMethodListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSearchMethodName.objectCompare (inOperand.mAttribute_mSearchMethodName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mErrorMessage.objectCompare (inOperand.mAttribute_mErrorMessage) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mActionName.objectCompare (inOperand.mAttribute_mActionName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_mapSearchMethodListAST_2D_element::isValid (void) const {
  return mAttribute_mSearchMethodName.isValid () && mAttribute_mErrorMessage.isValid () && mAttribute_mActionName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapSearchMethodListAST_2D_element::drop (void) {
  mAttribute_mSearchMethodName.drop () ;
  mAttribute_mErrorMessage.drop () ;
  mAttribute_mActionName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapSearchMethodListAST_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @mapSearchMethodListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSearchMethodName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mErrorMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mActionName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapSearchMethodListAST_2D_element::getter_mSearchMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSearchMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapSearchMethodListAST_2D_element::getter_mErrorMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapSearchMethodListAST_2D_element::getter_mActionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @mapSearchMethodListAST-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapSearchMethodListAST_2D_element ("mapSearchMethodListAST-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapSearchMethodListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapSearchMethodListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapSearchMethodListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapSearchMethodListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST_2D_element GALGAS_mapSearchMethodListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mapSearchMethodListAST_2D_element result ;
  const GALGAS_mapSearchMethodListAST_2D_element * p = (const GALGAS_mapSearchMethodListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapSearchMethodListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapSearchMethodListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST_2D_element::GALGAS_mapRemoveMethodListAST_2D_element (void) :
mAttribute_mMethodName (),
mAttribute_mErrorMessage () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST_2D_element::~ GALGAS_mapRemoveMethodListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST_2D_element::GALGAS_mapRemoveMethodListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1) :
mAttribute_mMethodName (inOperand0),
mAttribute_mErrorMessage (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST_2D_element GALGAS_mapRemoveMethodListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapRemoveMethodListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST_2D_element GALGAS_mapRemoveMethodListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mapRemoveMethodListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_mapRemoveMethodListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_mapRemoveMethodListAST_2D_element::objectCompare (const GALGAS_mapRemoveMethodListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mMethodName.objectCompare (inOperand.mAttribute_mMethodName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mErrorMessage.objectCompare (inOperand.mAttribute_mErrorMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_mapRemoveMethodListAST_2D_element::isValid (void) const {
  return mAttribute_mMethodName.isValid () && mAttribute_mErrorMessage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapRemoveMethodListAST_2D_element::drop (void) {
  mAttribute_mMethodName.drop () ;
  mAttribute_mErrorMessage.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapRemoveMethodListAST_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @mapRemoveMethodListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mMethodName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mErrorMessage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapRemoveMethodListAST_2D_element::getter_mMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapRemoveMethodListAST_2D_element::getter_mErrorMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @mapRemoveMethodListAST-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapRemoveMethodListAST_2D_element ("mapRemoveMethodListAST-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapRemoveMethodListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapRemoveMethodListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapRemoveMethodListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapRemoveMethodListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST_2D_element GALGAS_mapRemoveMethodListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mapRemoveMethodListAST_2D_element result ;
  const GALGAS_mapRemoveMethodListAST_2D_element * p = (const GALGAS_mapRemoveMethodListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapRemoveMethodListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapRemoveMethodListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap_2D_element::GALGAS_insertMethodMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap_2D_element::~ GALGAS_insertMethodMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap_2D_element::GALGAS_insertMethodMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap_2D_element GALGAS_insertMethodMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_insertMethodMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap_2D_element GALGAS_insertMethodMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_insertMethodMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_insertMethodMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_insertMethodMap_2D_element::objectCompare (const GALGAS_insertMethodMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_insertMethodMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertMethodMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @insertMethodMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_insertMethodMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @insertMethodMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_insertMethodMap_2D_element ("insertMethodMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_insertMethodMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertMethodMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_insertMethodMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertMethodMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodMap_2D_element GALGAS_insertMethodMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_insertMethodMap_2D_element result ;
  const GALGAS_insertMethodMap_2D_element * p = (const GALGAS_insertMethodMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_insertMethodMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertMethodMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap_2D_element::GALGAS_searchMethodMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap_2D_element::~ GALGAS_searchMethodMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap_2D_element::GALGAS_searchMethodMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap_2D_element GALGAS_searchMethodMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_searchMethodMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap_2D_element GALGAS_searchMethodMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_searchMethodMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_searchMethodMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_searchMethodMap_2D_element::objectCompare (const GALGAS_searchMethodMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_searchMethodMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_searchMethodMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_searchMethodMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @searchMethodMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_searchMethodMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @searchMethodMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_searchMethodMap_2D_element ("searchMethodMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_searchMethodMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_searchMethodMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_searchMethodMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_searchMethodMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_searchMethodMap_2D_element GALGAS_searchMethodMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_searchMethodMap_2D_element result ;
  const GALGAS_searchMethodMap_2D_element * p = (const GALGAS_searchMethodMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_searchMethodMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("searchMethodMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionList_2D_element::GALGAS_mapStateTransitionList_2D_element (void) :
mAttribute_mActionName (),
mAttribute_mTargetStateName (),
mAttribute_mTransitionMessageKind (),
mAttribute_mTransitionMessage () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionList_2D_element::~ GALGAS_mapStateTransitionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionList_2D_element::GALGAS_mapStateTransitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_mapAutomatonMessageKind & inOperand2,
                                                                                    const GALGAS_lstring & inOperand3) :
mAttribute_mActionName (inOperand0),
mAttribute_mTargetStateName (inOperand1),
mAttribute_mTransitionMessageKind (inOperand2),
mAttribute_mTransitionMessage (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionList_2D_element GALGAS_mapStateTransitionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_mapAutomatonMessageKind & inOperand2,
                                                                                                    const GALGAS_lstring & inOperand3 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mapStateTransitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_mapStateTransitionList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_mapStateTransitionList_2D_element::objectCompare (const GALGAS_mapStateTransitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mActionName.objectCompare (inOperand.mAttribute_mActionName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetStateName.objectCompare (inOperand.mAttribute_mTargetStateName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransitionMessageKind.objectCompare (inOperand.mAttribute_mTransitionMessageKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransitionMessage.objectCompare (inOperand.mAttribute_mTransitionMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_mapStateTransitionList_2D_element::isValid (void) const {
  return mAttribute_mActionName.isValid () && mAttribute_mTargetStateName.isValid () && mAttribute_mTransitionMessageKind.isValid () && mAttribute_mTransitionMessage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateTransitionList_2D_element::drop (void) {
  mAttribute_mActionName.drop () ;
  mAttribute_mTargetStateName.drop () ;
  mAttribute_mTransitionMessageKind.drop () ;
  mAttribute_mTransitionMessage.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateTransitionList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @mapStateTransitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mActionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetStateName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransitionMessageKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransitionMessage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapStateTransitionList_2D_element::getter_mActionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapStateTransitionList_2D_element::getter_mTargetStateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetStateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind GALGAS_mapStateTransitionList_2D_element::getter_mTransitionMessageKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransitionMessageKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapStateTransitionList_2D_element::getter_mTransitionMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransitionMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @mapStateTransitionList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapStateTransitionList_2D_element ("mapStateTransitionList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapStateTransitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapStateTransitionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapStateTransitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapStateTransitionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionList_2D_element GALGAS_mapStateTransitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mapStateTransitionList_2D_element result ;
  const GALGAS_mapStateTransitionList_2D_element * p = (const GALGAS_mapStateTransitionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapStateTransitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapStateTransitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateList_2D_element::GALGAS_mapStateList_2D_element (void) :
mAttribute_mStateName (),
mAttribute_mStateMessageKind (),
mAttribute_mStateMessage (),
mAttribute_mTransitionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateList_2D_element::~ GALGAS_mapStateList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateList_2D_element::GALGAS_mapStateList_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_mapAutomatonMessageKind & inOperand1,
                                                                const GALGAS_lstring & inOperand2,
                                                                const GALGAS_mapStateTransitionList & inOperand3) :
mAttribute_mStateName (inOperand0),
mAttribute_mStateMessageKind (inOperand1),
mAttribute_mStateMessage (inOperand2),
mAttribute_mTransitionList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateList_2D_element GALGAS_mapStateList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_mapAutomatonMessageKind & inOperand1,
                                                                                const GALGAS_lstring & inOperand2,
                                                                                const GALGAS_mapStateTransitionList & inOperand3 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mapStateList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_mapStateList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_mapStateList_2D_element::objectCompare (const GALGAS_mapStateList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mStateName.objectCompare (inOperand.mAttribute_mStateName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStateMessageKind.objectCompare (inOperand.mAttribute_mStateMessageKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStateMessage.objectCompare (inOperand.mAttribute_mStateMessage) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransitionList.objectCompare (inOperand.mAttribute_mTransitionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_mapStateList_2D_element::isValid (void) const {
  return mAttribute_mStateName.isValid () && mAttribute_mStateMessageKind.isValid () && mAttribute_mStateMessage.isValid () && mAttribute_mTransitionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateList_2D_element::drop (void) {
  mAttribute_mStateName.drop () ;
  mAttribute_mStateMessageKind.drop () ;
  mAttribute_mStateMessage.drop () ;
  mAttribute_mTransitionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @mapStateList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mStateName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStateMessageKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStateMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransitionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapStateList_2D_element::getter_mStateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind GALGAS_mapStateList_2D_element::getter_mStateMessageKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateMessageKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapStateList_2D_element::getter_mStateMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionList GALGAS_mapStateList_2D_element::getter_mTransitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransitionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @mapStateList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapStateList_2D_element ("mapStateList-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapStateList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapStateList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapStateList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapStateList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateList_2D_element GALGAS_mapStateList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_mapStateList_2D_element result ;
  const GALGAS_mapStateList_2D_element * p = (const GALGAS_mapStateList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapStateList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapStateList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockDescriptorAST_2D_element::GALGAS_mapOverrideBlockDescriptorAST_2D_element (void) :
mAttribute_mLeftState (),
mAttribute_mRightState (),
mAttribute_mResultingState (),
mAttribute_mMessageKind (),
mAttribute_mTransitionMessage () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockDescriptorAST_2D_element::~ GALGAS_mapOverrideBlockDescriptorAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockDescriptorAST_2D_element::GALGAS_mapOverrideBlockDescriptorAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                  const GALGAS_mapAutomatonMessageKind & inOperand3,
                                                                                                  const GALGAS_lstring & inOperand4) :
mAttribute_mLeftState (inOperand0),
mAttribute_mRightState (inOperand1),
mAttribute_mResultingState (inOperand2),
mAttribute_mMessageKind (inOperand3),
mAttribute_mTransitionMessage (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockDescriptorAST_2D_element GALGAS_mapOverrideBlockDescriptorAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                                  const GALGAS_mapAutomatonMessageKind & inOperand3,
                                                                                                                  const GALGAS_lstring & inOperand4 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mapOverrideBlockDescriptorAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_mapOverrideBlockDescriptorAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_mapOverrideBlockDescriptorAST_2D_element::objectCompare (const GALGAS_mapOverrideBlockDescriptorAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLeftState.objectCompare (inOperand.mAttribute_mLeftState) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRightState.objectCompare (inOperand.mAttribute_mRightState) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultingState.objectCompare (inOperand.mAttribute_mResultingState) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMessageKind.objectCompare (inOperand.mAttribute_mMessageKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransitionMessage.objectCompare (inOperand.mAttribute_mTransitionMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_mapOverrideBlockDescriptorAST_2D_element::isValid (void) const {
  return mAttribute_mLeftState.isValid () && mAttribute_mRightState.isValid () && mAttribute_mResultingState.isValid () && mAttribute_mMessageKind.isValid () && mAttribute_mTransitionMessage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideBlockDescriptorAST_2D_element::drop (void) {
  mAttribute_mLeftState.drop () ;
  mAttribute_mRightState.drop () ;
  mAttribute_mResultingState.drop () ;
  mAttribute_mMessageKind.drop () ;
  mAttribute_mTransitionMessage.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideBlockDescriptorAST_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @mapOverrideBlockDescriptorAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLeftState.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRightState.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultingState.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMessageKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransitionMessage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapOverrideBlockDescriptorAST_2D_element::getter_mLeftState (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftState ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapOverrideBlockDescriptorAST_2D_element::getter_mRightState (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightState ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapOverrideBlockDescriptorAST_2D_element::getter_mResultingState (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultingState ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind GALGAS_mapOverrideBlockDescriptorAST_2D_element::getter_mMessageKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMessageKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapOverrideBlockDescriptorAST_2D_element::getter_mTransitionMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransitionMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @mapOverrideBlockDescriptorAST-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapOverrideBlockDescriptorAST_2D_element ("mapOverrideBlockDescriptorAST-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapOverrideBlockDescriptorAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapOverrideBlockDescriptorAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapOverrideBlockDescriptorAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapOverrideBlockDescriptorAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockDescriptorAST_2D_element GALGAS_mapOverrideBlockDescriptorAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_mapOverrideBlockDescriptorAST_2D_element result ;
  const GALGAS_mapOverrideBlockDescriptorAST_2D_element * p = (const GALGAS_mapOverrideBlockDescriptorAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapOverrideBlockDescriptorAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapOverrideBlockDescriptorAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockListAST_2D_element::GALGAS_mapOverrideBlockListAST_2D_element (void) :
mAttribute_mOverrideBlockName (),
mAttribute_mMapOverrideBlockDescriptor_31_AST (),
mAttribute_mMapOverrideBlockDescriptor_32_AST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockListAST_2D_element::~ GALGAS_mapOverrideBlockListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockListAST_2D_element::GALGAS_mapOverrideBlockListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_mapOverrideBlockDescriptorAST & inOperand1,
                                                                                      const GALGAS_mapOverrideBlockDescriptorAST & inOperand2) :
mAttribute_mOverrideBlockName (inOperand0),
mAttribute_mMapOverrideBlockDescriptor_31_AST (inOperand1),
mAttribute_mMapOverrideBlockDescriptor_32_AST (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockListAST_2D_element GALGAS_mapOverrideBlockListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapOverrideBlockListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_mapOverrideBlockDescriptorAST::constructor_emptyList (HERE),
                                                    GALGAS_mapOverrideBlockDescriptorAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockListAST_2D_element GALGAS_mapOverrideBlockListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_mapOverrideBlockDescriptorAST & inOperand1,
                                                                                                      const GALGAS_mapOverrideBlockDescriptorAST & inOperand2 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mapOverrideBlockListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_mapOverrideBlockListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_mapOverrideBlockListAST_2D_element::objectCompare (const GALGAS_mapOverrideBlockListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOverrideBlockName.objectCompare (inOperand.mAttribute_mOverrideBlockName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMapOverrideBlockDescriptor_31_AST.objectCompare (inOperand.mAttribute_mMapOverrideBlockDescriptor_31_AST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMapOverrideBlockDescriptor_32_AST.objectCompare (inOperand.mAttribute_mMapOverrideBlockDescriptor_32_AST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_mapOverrideBlockListAST_2D_element::isValid (void) const {
  return mAttribute_mOverrideBlockName.isValid () && mAttribute_mMapOverrideBlockDescriptor_31_AST.isValid () && mAttribute_mMapOverrideBlockDescriptor_32_AST.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideBlockListAST_2D_element::drop (void) {
  mAttribute_mOverrideBlockName.drop () ;
  mAttribute_mMapOverrideBlockDescriptor_31_AST.drop () ;
  mAttribute_mMapOverrideBlockDescriptor_32_AST.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideBlockListAST_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @mapOverrideBlockListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOverrideBlockName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMapOverrideBlockDescriptor_31_AST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMapOverrideBlockDescriptor_32_AST.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapOverrideBlockListAST_2D_element::getter_mOverrideBlockName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverrideBlockName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockDescriptorAST GALGAS_mapOverrideBlockListAST_2D_element::getter_mMapOverrideBlockDescriptor_31_AST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMapOverrideBlockDescriptor_31_AST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockDescriptorAST GALGAS_mapOverrideBlockListAST_2D_element::getter_mMapOverrideBlockDescriptor_32_AST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMapOverrideBlockDescriptor_32_AST ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @mapOverrideBlockListAST-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapOverrideBlockListAST_2D_element ("mapOverrideBlockListAST-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapOverrideBlockListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapOverrideBlockListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapOverrideBlockListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapOverrideBlockListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockListAST_2D_element GALGAS_mapOverrideBlockListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_mapOverrideBlockListAST_2D_element result ;
  const GALGAS_mapOverrideBlockListAST_2D_element * p = (const GALGAS_mapOverrideBlockListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapOverrideBlockListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapOverrideBlockListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapAttributeListAST_2D_element::GALGAS_sharedMapAttributeListAST_2D_element (void) :
mAttribute_mAttributeName (),
mAttribute_mIsError (),
mAttribute_mMessage () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapAttributeListAST_2D_element::~ GALGAS_sharedMapAttributeListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapAttributeListAST_2D_element::GALGAS_sharedMapAttributeListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_bool & inOperand1,
                                                                                          const GALGAS_lstring & inOperand2) :
mAttribute_mAttributeName (inOperand0),
mAttribute_mIsError (inOperand1),
mAttribute_mMessage (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapAttributeListAST_2D_element GALGAS_sharedMapAttributeListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_sharedMapAttributeListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapAttributeListAST_2D_element GALGAS_sharedMapAttributeListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_bool & inOperand1,
                                                                                                          const GALGAS_lstring & inOperand2 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sharedMapAttributeListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_sharedMapAttributeListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sharedMapAttributeListAST_2D_element::objectCompare (const GALGAS_sharedMapAttributeListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeName.objectCompare (inOperand.mAttribute_mAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsError.objectCompare (inOperand.mAttribute_mIsError) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMessage.objectCompare (inOperand.mAttribute_mMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_sharedMapAttributeListAST_2D_element::isValid (void) const {
  return mAttribute_mAttributeName.isValid () && mAttribute_mIsError.isValid () && mAttribute_mMessage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sharedMapAttributeListAST_2D_element::drop (void) {
  mAttribute_mAttributeName.drop () ;
  mAttribute_mIsError.drop () ;
  mAttribute_mMessage.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sharedMapAttributeListAST_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @sharedMapAttributeListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsError.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMessage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sharedMapAttributeListAST_2D_element::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_sharedMapAttributeListAST_2D_element::getter_mIsError (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsError ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sharedMapAttributeListAST_2D_element::getter_mMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @sharedMapAttributeListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sharedMapAttributeListAST_2D_element ("sharedMapAttributeListAST-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sharedMapAttributeListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sharedMapAttributeListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sharedMapAttributeListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sharedMapAttributeListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapAttributeListAST_2D_element GALGAS_sharedMapAttributeListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sharedMapAttributeListAST_2D_element result ;
  const GALGAS_sharedMapAttributeListAST_2D_element * p = (const GALGAS_sharedMapAttributeListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sharedMapAttributeListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sharedMapAttributeListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonStateMap_2D_element::GALGAS_mapAutomatonStateMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mStateIndex (),
mAttribute_mStateMessageKind () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonStateMap_2D_element::~ GALGAS_mapAutomatonStateMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonStateMap_2D_element::GALGAS_mapAutomatonStateMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_uint & inOperand1,
                                                                                const GALGAS_mapAutomatonMessageKind & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mStateIndex (inOperand1),
mAttribute_mStateMessageKind (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonStateMap_2D_element GALGAS_mapAutomatonStateMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_uint & inOperand1,
                                                                                                const GALGAS_mapAutomatonMessageKind & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mapAutomatonStateMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_mapAutomatonStateMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_mapAutomatonStateMap_2D_element::objectCompare (const GALGAS_mapAutomatonStateMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStateIndex.objectCompare (inOperand.mAttribute_mStateIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStateMessageKind.objectCompare (inOperand.mAttribute_mStateMessageKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_mapAutomatonStateMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mStateIndex.isValid () && mAttribute_mStateMessageKind.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapAutomatonStateMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mStateIndex.drop () ;
  mAttribute_mStateMessageKind.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapAutomatonStateMap_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @mapAutomatonStateMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStateIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStateMessageKind.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapAutomatonStateMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_mapAutomatonStateMap_2D_element::getter_mStateIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind GALGAS_mapAutomatonStateMap_2D_element::getter_mStateMessageKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateMessageKind ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @mapAutomatonStateMap-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapAutomatonStateMap_2D_element ("mapAutomatonStateMap-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapAutomatonStateMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapAutomatonStateMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapAutomatonStateMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapAutomatonStateMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonStateMap_2D_element GALGAS_mapAutomatonStateMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_mapAutomatonStateMap_2D_element result ;
  const GALGAS_mapAutomatonStateMap_2D_element * p = (const GALGAS_mapAutomatonStateMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapAutomatonStateMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapAutomatonStateMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonActionMap_2D_element::GALGAS_mapAutomatonActionMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mActionIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonActionMap_2D_element::~ GALGAS_mapAutomatonActionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonActionMap_2D_element::GALGAS_mapAutomatonActionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mActionIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonActionMap_2D_element GALGAS_mapAutomatonActionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapAutomatonActionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonActionMap_2D_element GALGAS_mapAutomatonActionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_uint & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mapAutomatonActionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_mapAutomatonActionMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_mapAutomatonActionMap_2D_element::objectCompare (const GALGAS_mapAutomatonActionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mActionIndex.objectCompare (inOperand.mAttribute_mActionIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_mapAutomatonActionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mActionIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapAutomatonActionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mActionIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapAutomatonActionMap_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @mapAutomatonActionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mActionIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapAutomatonActionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_mapAutomatonActionMap_2D_element::getter_mActionIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @mapAutomatonActionMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapAutomatonActionMap_2D_element ("mapAutomatonActionMap-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapAutomatonActionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapAutomatonActionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapAutomatonActionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapAutomatonActionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonActionMap_2D_element GALGAS_mapAutomatonActionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_mapAutomatonActionMap_2D_element result ;
  const GALGAS_mapAutomatonActionMap_2D_element * p = (const GALGAS_mapAutomatonActionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapAutomatonActionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapAutomatonActionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListSortDescriptorListAST_2D_element::GALGAS_sortedListSortDescriptorListAST_2D_element (void) :
mAttribute_mSortedAttributeName (),
mAttribute_mAscending () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListSortDescriptorListAST_2D_element::~ GALGAS_sortedListSortDescriptorListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListSortDescriptorListAST_2D_element::GALGAS_sortedListSortDescriptorListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_bool & inOperand1) :
mAttribute_mSortedAttributeName (inOperand0),
mAttribute_mAscending (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListSortDescriptorListAST_2D_element GALGAS_sortedListSortDescriptorListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_sortedListSortDescriptorListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListSortDescriptorListAST_2D_element GALGAS_sortedListSortDescriptorListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                      const GALGAS_bool & inOperand1 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sortedListSortDescriptorListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sortedListSortDescriptorListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sortedListSortDescriptorListAST_2D_element::objectCompare (const GALGAS_sortedListSortDescriptorListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSortedAttributeName.objectCompare (inOperand.mAttribute_mSortedAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAscending.objectCompare (inOperand.mAttribute_mAscending) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_sortedListSortDescriptorListAST_2D_element::isValid (void) const {
  return mAttribute_mSortedAttributeName.isValid () && mAttribute_mAscending.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortedListSortDescriptorListAST_2D_element::drop (void) {
  mAttribute_mSortedAttributeName.drop () ;
  mAttribute_mAscending.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortedListSortDescriptorListAST_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @sortedListSortDescriptorListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSortedAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAscending.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sortedListSortDescriptorListAST_2D_element::getter_mSortedAttributeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSortedAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_sortedListSortDescriptorListAST_2D_element::getter_mAscending (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAscending ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @sortedListSortDescriptorListAST-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST_2D_element ("sortedListSortDescriptorListAST-element",
                                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sortedListSortDescriptorListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sortedListSortDescriptorListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListSortDescriptorListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListSortDescriptorListAST_2D_element GALGAS_sortedListSortDescriptorListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_sortedListSortDescriptorListAST_2D_element result ;
  const GALGAS_sortedListSortDescriptorListAST_2D_element * p = (const GALGAS_sortedListSortDescriptorListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortedListSortDescriptorListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListSortDescriptorListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortDescriptorListForGeneration_2D_element::GALGAS_sortDescriptorListForGeneration_2D_element (void) :
mAttribute_mAttributeTypeIndex (),
mAttribute_mAttributeName (),
mAttribute_mAscendingOrder () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortDescriptorListForGeneration_2D_element::~ GALGAS_sortDescriptorListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortDescriptorListForGeneration_2D_element::GALGAS_sortDescriptorListForGeneration_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                      const GALGAS_string & inOperand1,
                                                                                                      const GALGAS_bool & inOperand2) :
mAttribute_mAttributeTypeIndex (inOperand0),
mAttribute_mAttributeName (inOperand1),
mAttribute_mAscendingOrder (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortDescriptorListForGeneration_2D_element GALGAS_sortDescriptorListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_sortDescriptorListForGeneration_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                            GALGAS_string::constructor_default (HERE),
                                                            GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortDescriptorListForGeneration_2D_element GALGAS_sortDescriptorListForGeneration_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                                      const GALGAS_string & inOperand1,
                                                                                                                      const GALGAS_bool & inOperand2 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sortDescriptorListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_sortDescriptorListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sortDescriptorListForGeneration_2D_element::objectCompare (const GALGAS_sortDescriptorListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeTypeIndex.objectCompare (inOperand.mAttribute_mAttributeTypeIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeName.objectCompare (inOperand.mAttribute_mAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAscendingOrder.objectCompare (inOperand.mAttribute_mAscendingOrder) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_sortDescriptorListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mAttributeTypeIndex.isValid () && mAttribute_mAttributeName.isValid () && mAttribute_mAscendingOrder.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortDescriptorListForGeneration_2D_element::drop (void) {
  mAttribute_mAttributeTypeIndex.drop () ;
  mAttribute_mAttributeName.drop () ;
  mAttribute_mAscendingOrder.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortDescriptorListForGeneration_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @sortDescriptorListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mAttributeTypeIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAscendingOrder.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_sortDescriptorListForGeneration_2D_element::getter_mAttributeTypeIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeTypeIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_sortDescriptorListForGeneration_2D_element::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_sortDescriptorListForGeneration_2D_element::getter_mAscendingOrder (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAscendingOrder ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @sortDescriptorListForGeneration-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortDescriptorListForGeneration_2D_element ("sortDescriptorListForGeneration-element",
                                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sortDescriptorListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortDescriptorListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sortDescriptorListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortDescriptorListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortDescriptorListForGeneration_2D_element GALGAS_sortDescriptorListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_sortDescriptorListForGeneration_2D_element result ;
  const GALGAS_sortDescriptorListForGeneration_2D_element * p = (const GALGAS_sortDescriptorListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortDescriptorListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortDescriptorListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList_2D_element::GALGAS_actualOutputExpressionList_2D_element (void) :
mAttribute_mActualSelector (),
mAttribute_mExpression (),
mAttribute_mEndOfExpressionLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList_2D_element::~ GALGAS_actualOutputExpressionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList_2D_element::GALGAS_actualOutputExpressionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_semanticExpressionAST & inOperand1,
                                                                                            const GALGAS_location & inOperand2) :
mAttribute_mActualSelector (inOperand0),
mAttribute_mExpression (inOperand1),
mAttribute_mEndOfExpressionLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList_2D_element GALGAS_actualOutputExpressionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_semanticExpressionAST & inOperand1,
                                                                                                            const GALGAS_location & inOperand2 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualOutputExpressionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_actualOutputExpressionList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_actualOutputExpressionList_2D_element::objectCompare (const GALGAS_actualOutputExpressionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mActualSelector.objectCompare (inOperand.mAttribute_mActualSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExpression.objectCompare (inOperand.mAttribute_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfExpressionLocation.objectCompare (inOperand.mAttribute_mEndOfExpressionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_actualOutputExpressionList_2D_element::isValid (void) const {
  return mAttribute_mActualSelector.isValid () && mAttribute_mExpression.isValid () && mAttribute_mEndOfExpressionLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualOutputExpressionList_2D_element::drop (void) {
  mAttribute_mActualSelector.drop () ;
  mAttribute_mExpression.drop () ;
  mAttribute_mEndOfExpressionLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualOutputExpressionList_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @actualOutputExpressionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mActualSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfExpressionLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_actualOutputExpressionList_2D_element::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_actualOutputExpressionList_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_actualOutputExpressionList_2D_element::getter_mEndOfExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfExpressionLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @actualOutputExpressionList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualOutputExpressionList_2D_element ("actualOutputExpressionList-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actualOutputExpressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualOutputExpressionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actualOutputExpressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualOutputExpressionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList_2D_element GALGAS_actualOutputExpressionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_actualOutputExpressionList_2D_element result ;
  const GALGAS_actualOutputExpressionList_2D_element * p = (const GALGAS_actualOutputExpressionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualOutputExpressionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualOutputExpressionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST_2D_element::GALGAS_formalParameterListAST_2D_element (void) :
mAttribute_mFormalSelector (),
mAttribute_mFormalArgumentPassingMode (),
mAttribute_mFormalArgumentTypeName (),
mAttribute_mFormalArgumentName (),
mAttribute_mIsUnused () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST_2D_element::~ GALGAS_formalParameterListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST_2D_element::GALGAS_formalParameterListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2,
                                                                                    const GALGAS_lstring & inOperand3,
                                                                                    const GALGAS_bool & inOperand4) :
mAttribute_mFormalSelector (inOperand0),
mAttribute_mFormalArgumentPassingMode (inOperand1),
mAttribute_mFormalArgumentTypeName (inOperand2),
mAttribute_mFormalArgumentName (inOperand3),
mAttribute_mIsUnused (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST_2D_element GALGAS_formalParameterListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                                    const GALGAS_lstring & inOperand2,
                                                                                                    const GALGAS_lstring & inOperand3,
                                                                                                    const GALGAS_bool & inOperand4 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_formalParameterListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_formalParameterListAST_2D_element::objectCompare (const GALGAS_formalParameterListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalSelector.objectCompare (inOperand.mAttribute_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentPassingMode.objectCompare (inOperand.mAttribute_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentTypeName.objectCompare (inOperand.mAttribute_mFormalArgumentTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsUnused.objectCompare (inOperand.mAttribute_mIsUnused) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_formalParameterListAST_2D_element::isValid (void) const {
  return mAttribute_mFormalSelector.isValid () && mAttribute_mFormalArgumentPassingMode.isValid () && mAttribute_mFormalArgumentTypeName.isValid () && mAttribute_mFormalArgumentName.isValid () && mAttribute_mIsUnused.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListAST_2D_element::drop (void) {
  mAttribute_mFormalSelector.drop () ;
  mAttribute_mFormalArgumentPassingMode.drop () ;
  mAttribute_mFormalArgumentTypeName.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
  mAttribute_mIsUnused.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListAST_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @formalParameterListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsUnused.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalParameterListAST_2D_element::getter_mFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST GALGAS_formalParameterListAST_2D_element::getter_mFormalArgumentPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalParameterListAST_2D_element::getter_mFormalArgumentTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalParameterListAST_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_formalParameterListAST_2D_element::getter_mIsUnused (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsUnused ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @formalParameterListAST-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalParameterListAST_2D_element ("formalParameterListAST-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formalParameterListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formalParameterListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalParameterListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST_2D_element GALGAS_formalParameterListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterListAST_2D_element result ;
  const GALGAS_formalParameterListAST_2D_element * p = (const GALGAS_formalParameterListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalParameterListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST_2D_element::GALGAS_formalInputParameterListAST_2D_element (void) :
mAttribute_mFormalSelector (),
mAttribute_mFormalArgumentTypeName (),
mAttribute_mFormalArgumentName (),
mAttribute_mIsUnused (),
mAttribute_mIsConstant () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST_2D_element::~ GALGAS_formalInputParameterListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST_2D_element::GALGAS_formalInputParameterListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1,
                                                                                              const GALGAS_lstring & inOperand2,
                                                                                              const GALGAS_bool & inOperand3,
                                                                                              const GALGAS_bool & inOperand4) :
mAttribute_mFormalSelector (inOperand0),
mAttribute_mFormalArgumentTypeName (inOperand1),
mAttribute_mFormalArgumentName (inOperand2),
mAttribute_mIsUnused (inOperand3),
mAttribute_mIsConstant (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST_2D_element GALGAS_formalInputParameterListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalInputParameterListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_bool::constructor_default (HERE),
                                                        GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST_2D_element GALGAS_formalInputParameterListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_lstring & inOperand2,
                                                                                                              const GALGAS_bool & inOperand3,
                                                                                                              const GALGAS_bool & inOperand4 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalInputParameterListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_formalInputParameterListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_formalInputParameterListAST_2D_element::objectCompare (const GALGAS_formalInputParameterListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalSelector.objectCompare (inOperand.mAttribute_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentTypeName.objectCompare (inOperand.mAttribute_mFormalArgumentTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsUnused.objectCompare (inOperand.mAttribute_mIsUnused) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsConstant.objectCompare (inOperand.mAttribute_mIsConstant) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_formalInputParameterListAST_2D_element::isValid (void) const {
  return mAttribute_mFormalSelector.isValid () && mAttribute_mFormalArgumentTypeName.isValid () && mAttribute_mFormalArgumentName.isValid () && mAttribute_mIsUnused.isValid () && mAttribute_mIsConstant.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListAST_2D_element::drop (void) {
  mAttribute_mFormalSelector.drop () ;
  mAttribute_mFormalArgumentTypeName.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
  mAttribute_mIsUnused.drop () ;
  mAttribute_mIsConstant.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListAST_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @formalInputParameterListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsUnused.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsConstant.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalInputParameterListAST_2D_element::getter_mFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalInputParameterListAST_2D_element::getter_mFormalArgumentTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalInputParameterListAST_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_formalInputParameterListAST_2D_element::getter_mIsUnused (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsUnused ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_formalInputParameterListAST_2D_element::getter_mIsConstant (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsConstant ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @formalInputParameterListAST-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalInputParameterListAST_2D_element ("formalInputParameterListAST-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formalInputParameterListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalInputParameterListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formalInputParameterListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalInputParameterListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST_2D_element GALGAS_formalInputParameterListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_formalInputParameterListAST_2D_element result ;
  const GALGAS_formalInputParameterListAST_2D_element * p = (const GALGAS_formalInputParameterListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalInputParameterListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalInputParameterListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualInputParameterListAST_2D_element::GALGAS_actualInputParameterListAST_2D_element (void) :
mAttribute_mActualSelector (),
mAttribute_mInputParameter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualInputParameterListAST_2D_element::~ GALGAS_actualInputParameterListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualInputParameterListAST_2D_element::GALGAS_actualInputParameterListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_abstractInputParameter & inOperand1) :
mAttribute_mActualSelector (inOperand0),
mAttribute_mInputParameter (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualInputParameterListAST_2D_element GALGAS_actualInputParameterListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_abstractInputParameter & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualInputParameterListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_actualInputParameterListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_actualInputParameterListAST_2D_element::objectCompare (const GALGAS_actualInputParameterListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mActualSelector.objectCompare (inOperand.mAttribute_mActualSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInputParameter.objectCompare (inOperand.mAttribute_mInputParameter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_actualInputParameterListAST_2D_element::isValid (void) const {
  return mAttribute_mActualSelector.isValid () && mAttribute_mInputParameter.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualInputParameterListAST_2D_element::drop (void) {
  mAttribute_mActualSelector.drop () ;
  mAttribute_mInputParameter.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualInputParameterListAST_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @actualInputParameterListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mActualSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInputParameter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_actualInputParameterListAST_2D_element::getter_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractInputParameter GALGAS_actualInputParameterListAST_2D_element::getter_mInputParameter (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputParameter ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @actualInputParameterListAST-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualInputParameterListAST_2D_element ("actualInputParameterListAST-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actualInputParameterListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualInputParameterListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actualInputParameterListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualInputParameterListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualInputParameterListAST_2D_element GALGAS_actualInputParameterListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_actualInputParameterListAST_2D_element result ;
  const GALGAS_actualInputParameterListAST_2D_element * p = (const GALGAS_actualInputParameterListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualInputParameterListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualInputParameterListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST_2D_element::GALGAS_propertyInCollectionListAST_2D_element (void) :
mAttribute_mPropertyTypeName (),
mAttribute_mPropertyName (),
mAttribute_mFeatureList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST_2D_element::~ GALGAS_propertyInCollectionListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST_2D_element::GALGAS_propertyInCollectionListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1,
                                                                                              const GALGAS_lstringlist & inOperand2) :
mAttribute_mPropertyTypeName (inOperand0),
mAttribute_mPropertyName (inOperand1),
mAttribute_mFeatureList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST_2D_element GALGAS_propertyInCollectionListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyInCollectionListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST_2D_element GALGAS_propertyInCollectionListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_lstringlist & inOperand2 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_propertyInCollectionListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_propertyInCollectionListAST_2D_element::objectCompare (const GALGAS_propertyInCollectionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mPropertyTypeName.objectCompare (inOperand.mAttribute_mPropertyTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPropertyName.objectCompare (inOperand.mAttribute_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFeatureList.objectCompare (inOperand.mAttribute_mFeatureList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_propertyInCollectionListAST_2D_element::isValid (void) const {
  return mAttribute_mPropertyTypeName.isValid () && mAttribute_mPropertyName.isValid () && mAttribute_mFeatureList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST_2D_element::drop (void) {
  mAttribute_mPropertyTypeName.drop () ;
  mAttribute_mPropertyName.drop () ;
  mAttribute_mFeatureList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyInCollectionListAST_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @propertyInCollectionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mPropertyTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFeatureList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_propertyInCollectionListAST_2D_element::getter_mPropertyTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_propertyInCollectionListAST_2D_element::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_propertyInCollectionListAST_2D_element::getter_mFeatureList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFeatureList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @propertyInCollectionListAST-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyInCollectionListAST_2D_element ("propertyInCollectionListAST-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_propertyInCollectionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_propertyInCollectionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyInCollectionListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST_2D_element GALGAS_propertyInCollectionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST_2D_element result ;
  const GALGAS_propertyInCollectionListAST_2D_element * p = (const GALGAS_propertyInCollectionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyInCollectionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyInCollectionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalTemplateInputParameterListAST_2D_element::GALGAS_formalTemplateInputParameterListAST_2D_element (void) :
mAttribute_mFormalTemplateSelector (),
mAttribute_mFormalArgumentTypeName (),
mAttribute_mFormalArgumentName (),
mAttribute_mIsUnused () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalTemplateInputParameterListAST_2D_element::~ GALGAS_formalTemplateInputParameterListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalTemplateInputParameterListAST_2D_element::GALGAS_formalTemplateInputParameterListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_lstring & inOperand2,
                                                                                                              const GALGAS_bool & inOperand3) :
mAttribute_mFormalTemplateSelector (inOperand0),
mAttribute_mFormalArgumentTypeName (inOperand1),
mAttribute_mFormalArgumentName (inOperand2),
mAttribute_mIsUnused (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalTemplateInputParameterListAST_2D_element GALGAS_formalTemplateInputParameterListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalTemplateInputParameterListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalTemplateInputParameterListAST_2D_element GALGAS_formalTemplateInputParameterListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                                              const GALGAS_lstring & inOperand2,
                                                                                                                              const GALGAS_bool & inOperand3 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalTemplateInputParameterListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_formalTemplateInputParameterListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_formalTemplateInputParameterListAST_2D_element::objectCompare (const GALGAS_formalTemplateInputParameterListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalTemplateSelector.objectCompare (inOperand.mAttribute_mFormalTemplateSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentTypeName.objectCompare (inOperand.mAttribute_mFormalArgumentTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsUnused.objectCompare (inOperand.mAttribute_mIsUnused) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_formalTemplateInputParameterListAST_2D_element::isValid (void) const {
  return mAttribute_mFormalTemplateSelector.isValid () && mAttribute_mFormalArgumentTypeName.isValid () && mAttribute_mFormalArgumentName.isValid () && mAttribute_mIsUnused.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalTemplateInputParameterListAST_2D_element::drop (void) {
  mAttribute_mFormalTemplateSelector.drop () ;
  mAttribute_mFormalArgumentTypeName.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
  mAttribute_mIsUnused.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalTemplateInputParameterListAST_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @formalTemplateInputParameterListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalTemplateSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsUnused.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalTemplateInputParameterListAST_2D_element::getter_mFormalTemplateSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalTemplateSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalTemplateInputParameterListAST_2D_element::getter_mFormalArgumentTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalTemplateInputParameterListAST_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_formalTemplateInputParameterListAST_2D_element::getter_mIsUnused (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsUnused ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @formalTemplateInputParameterListAST-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST_2D_element ("formalTemplateInputParameterListAST-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formalTemplateInputParameterListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formalTemplateInputParameterListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalTemplateInputParameterListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalTemplateInputParameterListAST_2D_element GALGAS_formalTemplateInputParameterListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_formalTemplateInputParameterListAST_2D_element result ;
  const GALGAS_formalTemplateInputParameterListAST_2D_element * p = (const GALGAS_formalTemplateInputParameterListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalTemplateInputParameterListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalTemplateInputParameterListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST_2D_element::GALGAS_filewrapperTemplateListAST_2D_element (void) :
mAttribute_mFilewrapperTemplateName (),
mAttribute_mFilewrapperTemplatePath (),
mAttribute_mFilewrapperTemplateFormalInputParameters () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST_2D_element::~ GALGAS_filewrapperTemplateListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST_2D_element::GALGAS_filewrapperTemplateListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_formalTemplateInputParameterListAST & inOperand2) :
mAttribute_mFilewrapperTemplateName (inOperand0),
mAttribute_mFilewrapperTemplatePath (inOperand1),
mAttribute_mFilewrapperTemplateFormalInputParameters (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST_2D_element GALGAS_filewrapperTemplateListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_filewrapperTemplateListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST_2D_element GALGAS_filewrapperTemplateListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1,
                                                                                                            const GALGAS_formalTemplateInputParameterListAST & inOperand2 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_filewrapperTemplateListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_filewrapperTemplateListAST_2D_element::objectCompare (const GALGAS_filewrapperTemplateListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFilewrapperTemplateName.objectCompare (inOperand.mAttribute_mFilewrapperTemplateName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFilewrapperTemplatePath.objectCompare (inOperand.mAttribute_mFilewrapperTemplatePath) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFilewrapperTemplateFormalInputParameters.objectCompare (inOperand.mAttribute_mFilewrapperTemplateFormalInputParameters) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_filewrapperTemplateListAST_2D_element::isValid (void) const {
  return mAttribute_mFilewrapperTemplateName.isValid () && mAttribute_mFilewrapperTemplatePath.isValid () && mAttribute_mFilewrapperTemplateFormalInputParameters.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListAST_2D_element::drop (void) {
  mAttribute_mFilewrapperTemplateName.drop () ;
  mAttribute_mFilewrapperTemplatePath.drop () ;
  mAttribute_mFilewrapperTemplateFormalInputParameters.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @filewrapperTemplateListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFilewrapperTemplateName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFilewrapperTemplatePath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperTemplateListAST_2D_element::getter_mFilewrapperTemplateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperTemplateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperTemplateListAST_2D_element::getter_mFilewrapperTemplatePath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperTemplatePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalTemplateInputParameterListAST GALGAS_filewrapperTemplateListAST_2D_element::getter_mFilewrapperTemplateFormalInputParameters (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperTemplateFormalInputParameters ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @filewrapperTemplateListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateListAST_2D_element ("filewrapperTemplateListAST-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperTemplateListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST_2D_element GALGAS_filewrapperTemplateListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListAST_2D_element result ;
  const GALGAS_filewrapperTemplateListAST_2D_element * p = (const GALGAS_filewrapperTemplateListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperTemplateListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST_2D_element::GALGAS_nonTerminalLabelListAST_2D_element (void) :
mAttribute_mLabelName (),
mAttribute_mFormalArgumentList (),
mAttribute_mEndOfArgumentLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST_2D_element::~ GALGAS_nonTerminalLabelListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST_2D_element::GALGAS_nonTerminalLabelListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_formalParameterListAST & inOperand1,
                                                                                      const GALGAS_location & inOperand2) :
mAttribute_mLabelName (inOperand0),
mAttribute_mFormalArgumentList (inOperand1),
mAttribute_mEndOfArgumentLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST_2D_element GALGAS_nonTerminalLabelListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonTerminalLabelListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_formalParameterListAST::constructor_emptyList (HERE),
                                                    GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST_2D_element GALGAS_nonTerminalLabelListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_formalParameterListAST & inOperand1,
                                                                                                      const GALGAS_location & inOperand2 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonTerminalLabelListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_nonTerminalLabelListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_nonTerminalLabelListAST_2D_element::objectCompare (const GALGAS_nonTerminalLabelListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLabelName.objectCompare (inOperand.mAttribute_mLabelName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentList.objectCompare (inOperand.mAttribute_mFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfArgumentLocation.objectCompare (inOperand.mAttribute_mEndOfArgumentLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_nonTerminalLabelListAST_2D_element::isValid (void) const {
  return mAttribute_mLabelName.isValid () && mAttribute_mFormalArgumentList.isValid () && mAttribute_mEndOfArgumentLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalLabelListAST_2D_element::drop (void) {
  mAttribute_mLabelName.drop () ;
  mAttribute_mFormalArgumentList.drop () ;
  mAttribute_mEndOfArgumentLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalLabelListAST_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @nonTerminalLabelListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLabelName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfArgumentLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_nonTerminalLabelListAST_2D_element::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_nonTerminalLabelListAST_2D_element::getter_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_nonTerminalLabelListAST_2D_element::getter_mEndOfArgumentLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfArgumentLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @nonTerminalLabelListAST-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonTerminalLabelListAST_2D_element ("nonTerminalLabelListAST-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonTerminalLabelListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalLabelListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonTerminalLabelListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalLabelListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST_2D_element GALGAS_nonTerminalLabelListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalLabelListAST_2D_element result ;
  const GALGAS_nonTerminalLabelListAST_2D_element * p = (const GALGAS_nonTerminalLabelListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonTerminalLabelListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalLabelListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST_2D_element::GALGAS_nonterminalDeclarationListAST_2D_element (void) :
mAttribute_mNonterminalName (),
mAttribute_mLabels () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST_2D_element::~ GALGAS_nonterminalDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST_2D_element::GALGAS_nonterminalDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_nonTerminalLabelListAST & inOperand1) :
mAttribute_mNonterminalName (inOperand0),
mAttribute_mLabels (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST_2D_element GALGAS_nonterminalDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonterminalDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_nonTerminalLabelListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST_2D_element GALGAS_nonterminalDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_nonTerminalLabelListAST & inOperand1 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_nonterminalDeclarationListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_nonterminalDeclarationListAST_2D_element::objectCompare (const GALGAS_nonterminalDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mNonterminalName.objectCompare (inOperand.mAttribute_mNonterminalName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLabels.objectCompare (inOperand.mAttribute_mLabels) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_nonterminalDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mNonterminalName.isValid () && mAttribute_mLabels.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalDeclarationListAST_2D_element::drop (void) {
  mAttribute_mNonterminalName.drop () ;
  mAttribute_mLabels.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalDeclarationListAST_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @nonterminalDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mNonterminalName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLabels.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_nonterminalDeclarationListAST_2D_element::getter_mNonterminalName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonterminalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST GALGAS_nonterminalDeclarationListAST_2D_element::getter_mLabels (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabels ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @nonterminalDeclarationListAST-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalDeclarationListAST_2D_element ("nonterminalDeclarationListAST-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonterminalDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonterminalDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST_2D_element GALGAS_nonterminalDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalDeclarationListAST_2D_element result ;
  const GALGAS_nonterminalDeclarationListAST_2D_element * p = (const GALGAS_nonterminalDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonterminalDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleLabelListAST_2D_element::GALGAS_syntaxRuleLabelListAST_2D_element (void) :
mAttribute_mLabelName (),
mAttribute_mFormalArguments (),
mAttribute_mEndOfArgumentLocation (),
mAttribute_mSyntaxInstructionList (),
mAttribute_mEndOfInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleLabelListAST_2D_element::~ GALGAS_syntaxRuleLabelListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleLabelListAST_2D_element::GALGAS_syntaxRuleLabelListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_formalParameterListAST & inOperand1,
                                                                                    const GALGAS_location & inOperand2,
                                                                                    const GALGAS_syntaxInstructionList & inOperand3,
                                                                                    const GALGAS_location & inOperand4) :
mAttribute_mLabelName (inOperand0),
mAttribute_mFormalArguments (inOperand1),
mAttribute_mEndOfArgumentLocation (inOperand2),
mAttribute_mSyntaxInstructionList (inOperand3),
mAttribute_mEndOfInstructionList (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleLabelListAST_2D_element GALGAS_syntaxRuleLabelListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxRuleLabelListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_formalParameterListAST::constructor_emptyList (HERE),
                                                   GALGAS_location::constructor_nowhere (HERE),
                                                   GALGAS_syntaxInstructionList::constructor_emptyList (HERE),
                                                   GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleLabelListAST_2D_element GALGAS_syntaxRuleLabelListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_formalParameterListAST & inOperand1,
                                                                                                    const GALGAS_location & inOperand2,
                                                                                                    const GALGAS_syntaxInstructionList & inOperand3,
                                                                                                    const GALGAS_location & inOperand4 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxRuleLabelListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_syntaxRuleLabelListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_syntaxRuleLabelListAST_2D_element::objectCompare (const GALGAS_syntaxRuleLabelListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLabelName.objectCompare (inOperand.mAttribute_mLabelName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArguments.objectCompare (inOperand.mAttribute_mFormalArguments) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfArgumentLocation.objectCompare (inOperand.mAttribute_mEndOfArgumentLocation) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSyntaxInstructionList.objectCompare (inOperand.mAttribute_mSyntaxInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfInstructionList.objectCompare (inOperand.mAttribute_mEndOfInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_syntaxRuleLabelListAST_2D_element::isValid (void) const {
  return mAttribute_mLabelName.isValid () && mAttribute_mFormalArguments.isValid () && mAttribute_mEndOfArgumentLocation.isValid () && mAttribute_mSyntaxInstructionList.isValid () && mAttribute_mEndOfInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleLabelListAST_2D_element::drop (void) {
  mAttribute_mLabelName.drop () ;
  mAttribute_mFormalArguments.drop () ;
  mAttribute_mEndOfArgumentLocation.drop () ;
  mAttribute_mSyntaxInstructionList.drop () ;
  mAttribute_mEndOfInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleLabelListAST_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @syntaxRuleLabelListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLabelName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArguments.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfArgumentLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSyntaxInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_syntaxRuleLabelListAST_2D_element::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_syntaxRuleLabelListAST_2D_element::getter_mFormalArguments (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_syntaxRuleLabelListAST_2D_element::getter_mEndOfArgumentLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfArgumentLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList GALGAS_syntaxRuleLabelListAST_2D_element::getter_mSyntaxInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_syntaxRuleLabelListAST_2D_element::getter_mEndOfInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @syntaxRuleLabelListAST-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxRuleLabelListAST_2D_element ("syntaxRuleLabelListAST-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxRuleLabelListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxRuleLabelListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxRuleLabelListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxRuleLabelListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleLabelListAST_2D_element GALGAS_syntaxRuleLabelListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_syntaxRuleLabelListAST_2D_element result ;
  const GALGAS_syntaxRuleLabelListAST_2D_element * p = (const GALGAS_syntaxRuleLabelListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxRuleLabelListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxRuleLabelListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST_2D_element::GALGAS_syntaxRuleListAST_2D_element (void) :
mAttribute_mNonterminalName (),
mAttribute_mLabelList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST_2D_element::~ GALGAS_syntaxRuleListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST_2D_element::GALGAS_syntaxRuleListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_syntaxRuleLabelListAST & inOperand1) :
mAttribute_mNonterminalName (inOperand0),
mAttribute_mLabelList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST_2D_element GALGAS_syntaxRuleListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxRuleListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_syntaxRuleLabelListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST_2D_element GALGAS_syntaxRuleListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_syntaxRuleLabelListAST & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxRuleListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_syntaxRuleListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_syntaxRuleListAST_2D_element::objectCompare (const GALGAS_syntaxRuleListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mNonterminalName.objectCompare (inOperand.mAttribute_mNonterminalName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLabelList.objectCompare (inOperand.mAttribute_mLabelList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_syntaxRuleListAST_2D_element::isValid (void) const {
  return mAttribute_mNonterminalName.isValid () && mAttribute_mLabelList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleListAST_2D_element::drop (void) {
  mAttribute_mNonterminalName.drop () ;
  mAttribute_mLabelList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxRuleListAST_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @syntaxRuleListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mNonterminalName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLabelList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_syntaxRuleListAST_2D_element::getter_mNonterminalName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonterminalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleLabelListAST GALGAS_syntaxRuleListAST_2D_element::getter_mLabelList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @syntaxRuleListAST-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxRuleListAST_2D_element ("syntaxRuleListAST-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxRuleListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxRuleListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxRuleListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxRuleListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST_2D_element GALGAS_syntaxRuleListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_syntaxRuleListAST_2D_element result ;
  const GALGAS_syntaxRuleListAST_2D_element * p = (const GALGAS_syntaxRuleListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxRuleListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxRuleListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST_2D_element::GALGAS_galgas_33_SyntaxComponentListAST_2D_element (void) :
mAttribute_mSyntaxComponentName (),
mAttribute_mImportedLexiqueFilePath (),
mAttribute_mImportedComponentFileNameList (),
mAttribute_mNonterminalDeclarationList (),
mAttribute_mRuleList (),
mAttribute_mSemanticDeclarationList (),
mAttribute_mHasTranslateFeature () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST_2D_element::~ GALGAS_galgas_33_SyntaxComponentListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST_2D_element::GALGAS_galgas_33_SyntaxComponentListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                        const GALGAS_lstringlist & inOperand2,
                                                                                                        const GALGAS_nonterminalDeclarationListAST & inOperand3,
                                                                                                        const GALGAS_syntaxRuleListAST & inOperand4,
                                                                                                        const GALGAS_semanticDeclarationListAST & inOperand5,
                                                                                                        const GALGAS_bool & inOperand6) :
mAttribute_mSyntaxComponentName (inOperand0),
mAttribute_mImportedLexiqueFilePath (inOperand1),
mAttribute_mImportedComponentFileNameList (inOperand2),
mAttribute_mNonterminalDeclarationList (inOperand3),
mAttribute_mRuleList (inOperand4),
mAttribute_mSemanticDeclarationList (inOperand5),
mAttribute_mHasTranslateFeature (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST_2D_element GALGAS_galgas_33_SyntaxComponentListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgas_33_SyntaxComponentListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstringlist::constructor_emptyList (HERE),
                                                             GALGAS_nonterminalDeclarationListAST::constructor_emptyList (HERE),
                                                             GALGAS_syntaxRuleListAST::constructor_emptyList (HERE),
                                                             GALGAS_semanticDeclarationListAST::constructor_emptyList (HERE),
                                                             GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST_2D_element GALGAS_galgas_33_SyntaxComponentListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                                        const GALGAS_lstringlist & inOperand2,
                                                                                                                        const GALGAS_nonterminalDeclarationListAST & inOperand3,
                                                                                                                        const GALGAS_syntaxRuleListAST & inOperand4,
                                                                                                                        const GALGAS_semanticDeclarationListAST & inOperand5,
                                                                                                                        const GALGAS_bool & inOperand6 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_galgas_33_SyntaxComponentListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_galgas_33_SyntaxComponentListAST_2D_element::objectCompare (const GALGAS_galgas_33_SyntaxComponentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSyntaxComponentName.objectCompare (inOperand.mAttribute_mSyntaxComponentName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mImportedLexiqueFilePath.objectCompare (inOperand.mAttribute_mImportedLexiqueFilePath) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mImportedComponentFileNameList.objectCompare (inOperand.mAttribute_mImportedComponentFileNameList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNonterminalDeclarationList.objectCompare (inOperand.mAttribute_mNonterminalDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRuleList.objectCompare (inOperand.mAttribute_mRuleList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSemanticDeclarationList.objectCompare (inOperand.mAttribute_mSemanticDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasTranslateFeature.objectCompare (inOperand.mAttribute_mHasTranslateFeature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_galgas_33_SyntaxComponentListAST_2D_element::isValid (void) const {
  return mAttribute_mSyntaxComponentName.isValid () && mAttribute_mImportedLexiqueFilePath.isValid () && mAttribute_mImportedComponentFileNameList.isValid () && mAttribute_mNonterminalDeclarationList.isValid () && mAttribute_mRuleList.isValid () && mAttribute_mSemanticDeclarationList.isValid () && mAttribute_mHasTranslateFeature.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxComponentListAST_2D_element::drop (void) {
  mAttribute_mSyntaxComponentName.drop () ;
  mAttribute_mImportedLexiqueFilePath.drop () ;
  mAttribute_mImportedComponentFileNameList.drop () ;
  mAttribute_mNonterminalDeclarationList.drop () ;
  mAttribute_mRuleList.drop () ;
  mAttribute_mSemanticDeclarationList.drop () ;
  mAttribute_mHasTranslateFeature.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxComponentListAST_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @galgas3SyntaxComponentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSyntaxComponentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mImportedLexiqueFilePath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mImportedComponentFileNameList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNonterminalDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRuleList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSemanticDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentListAST_2D_element::getter_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentListAST_2D_element::getter_mImportedLexiqueFilePath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImportedLexiqueFilePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_galgas_33_SyntaxComponentListAST_2D_element::getter_mImportedComponentFileNameList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImportedComponentFileNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST GALGAS_galgas_33_SyntaxComponentListAST_2D_element::getter_mNonterminalDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonterminalDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST GALGAS_galgas_33_SyntaxComponentListAST_2D_element::getter_mRuleList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRuleList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST GALGAS_galgas_33_SyntaxComponentListAST_2D_element::getter_mSemanticDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_galgas_33_SyntaxComponentListAST_2D_element::getter_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasTranslateFeature ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @galgas3SyntaxComponentListAST-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST_2D_element ("galgas3SyntaxComponentListAST-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_galgas_33_SyntaxComponentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_galgas_33_SyntaxComponentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_SyntaxComponentListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST_2D_element GALGAS_galgas_33_SyntaxComponentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentListAST_2D_element result ;
  const GALGAS_galgas_33_SyntaxComponentListAST_2D_element * p = (const GALGAS_galgas_33_SyntaxComponentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_SyntaxComponentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxComponentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (void) :
mAttribute_mSyntaxComponentName (),
mAttribute_mNonterminalDeclarationList (),
mAttribute_mRuleList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::~ GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                                                        const GALGAS_syntaxRuleListAST & inOperand2) :
mAttribute_mSyntaxComponentName (inOperand0),
mAttribute_mNonterminalDeclarationList (inOperand1),
mAttribute_mRuleList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxExtensionListAST_2D_element GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_nonterminalDeclarationListAST::constructor_emptyList (HERE),
                                                             GALGAS_syntaxRuleListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxExtensionListAST_2D_element GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                                                                        const GALGAS_syntaxRuleListAST & inOperand2 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxExtensionListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::objectCompare (const GALGAS_galgas_33_SyntaxExtensionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSyntaxComponentName.objectCompare (inOperand.mAttribute_mSyntaxComponentName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNonterminalDeclarationList.objectCompare (inOperand.mAttribute_mNonterminalDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRuleList.objectCompare (inOperand.mAttribute_mRuleList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::isValid (void) const {
  return mAttribute_mSyntaxComponentName.isValid () && mAttribute_mNonterminalDeclarationList.isValid () && mAttribute_mRuleList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::drop (void) {
  mAttribute_mSyntaxComponentName.drop () ;
  mAttribute_mNonterminalDeclarationList.drop () ;
  mAttribute_mRuleList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @galgas3SyntaxExtensionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSyntaxComponentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNonterminalDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRuleList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::getter_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::getter_mNonterminalDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonterminalDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::getter_mRuleList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRuleList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @galgas3SyntaxExtensionListAST-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST_2D_element ("galgas3SyntaxExtensionListAST-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxExtensionListAST_2D_element GALGAS_galgas_33_SyntaxExtensionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxExtensionListAST_2D_element result ;
  const GALGAS_galgas_33_SyntaxExtensionListAST_2D_element * p = (const GALGAS_galgas_33_SyntaxExtensionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_SyntaxExtensionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxExtensionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programRuleList_2D_element::GALGAS_programRuleList_2D_element (void) :
mAttribute_mSourceFileExtension (),
mAttribute_mSourceFileHelp (),
mAttribute_mSourceFileVariableName (),
mAttribute_mSourceFileVariableNameIsUnused (),
mAttribute_mReferenceGrammar (),
mAttribute_mInstructionList (),
mAttribute_mEndOfInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programRuleList_2D_element::~ GALGAS_programRuleList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programRuleList_2D_element::GALGAS_programRuleList_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_lstring & inOperand1,
                                                                      const GALGAS_lstring & inOperand2,
                                                                      const GALGAS_bool & inOperand3,
                                                                      const GALGAS_lstring & inOperand4,
                                                                      const GALGAS_semanticInstructionListAST & inOperand5,
                                                                      const GALGAS_location & inOperand6) :
mAttribute_mSourceFileExtension (inOperand0),
mAttribute_mSourceFileHelp (inOperand1),
mAttribute_mSourceFileVariableName (inOperand2),
mAttribute_mSourceFileVariableNameIsUnused (inOperand3),
mAttribute_mReferenceGrammar (inOperand4),
mAttribute_mInstructionList (inOperand5),
mAttribute_mEndOfInstructionList (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programRuleList_2D_element GALGAS_programRuleList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_programRuleList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_bool::constructor_default (HERE),
                                            GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                            GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programRuleList_2D_element GALGAS_programRuleList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_lstring & inOperand2,
                                                                                      const GALGAS_bool & inOperand3,
                                                                                      const GALGAS_lstring & inOperand4,
                                                                                      const GALGAS_semanticInstructionListAST & inOperand5,
                                                                                      const GALGAS_location & inOperand6 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_programRuleList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_programRuleList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_programRuleList_2D_element::objectCompare (const GALGAS_programRuleList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSourceFileExtension.objectCompare (inOperand.mAttribute_mSourceFileExtension) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSourceFileHelp.objectCompare (inOperand.mAttribute_mSourceFileHelp) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSourceFileVariableName.objectCompare (inOperand.mAttribute_mSourceFileVariableName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSourceFileVariableNameIsUnused.objectCompare (inOperand.mAttribute_mSourceFileVariableNameIsUnused) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReferenceGrammar.objectCompare (inOperand.mAttribute_mReferenceGrammar) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfInstructionList.objectCompare (inOperand.mAttribute_mEndOfInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_programRuleList_2D_element::isValid (void) const {
  return mAttribute_mSourceFileExtension.isValid () && mAttribute_mSourceFileHelp.isValid () && mAttribute_mSourceFileVariableName.isValid () && mAttribute_mSourceFileVariableNameIsUnused.isValid () && mAttribute_mReferenceGrammar.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programRuleList_2D_element::drop (void) {
  mAttribute_mSourceFileExtension.drop () ;
  mAttribute_mSourceFileHelp.drop () ;
  mAttribute_mSourceFileVariableName.drop () ;
  mAttribute_mSourceFileVariableNameIsUnused.drop () ;
  mAttribute_mReferenceGrammar.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programRuleList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @programRuleList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSourceFileExtension.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSourceFileHelp.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSourceFileVariableName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSourceFileVariableNameIsUnused.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReferenceGrammar.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_programRuleList_2D_element::getter_mSourceFileExtension (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceFileExtension ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_programRuleList_2D_element::getter_mSourceFileHelp (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceFileHelp ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_programRuleList_2D_element::getter_mSourceFileVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceFileVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_programRuleList_2D_element::getter_mSourceFileVariableNameIsUnused (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceFileVariableNameIsUnused ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_programRuleList_2D_element::getter_mReferenceGrammar (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReferenceGrammar ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_programRuleList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_programRuleList_2D_element::getter_mEndOfInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @programRuleList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_programRuleList_2D_element ("programRuleList-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_programRuleList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programRuleList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_programRuleList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programRuleList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programRuleList_2D_element GALGAS_programRuleList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_programRuleList_2D_element result ;
  const GALGAS_programRuleList_2D_element * p = (const GALGAS_programRuleList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_programRuleList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programRuleList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST_2D_element::GALGAS_galgas_33_GUIComponentListAST_2D_element (void) :
mAttribute_mGUIComponentName (),
mAttribute_mImportedOptionList (),
mAttribute_mGlobalSimpleAttributeList (),
mAttribute_mWithLexiqueList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST_2D_element::~ GALGAS_galgas_33_GUIComponentListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST_2D_element::GALGAS_galgas_33_GUIComponentListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstringlist & inOperand1,
                                                                                                  const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                                                  const GALGAS_withLexiqueListAST & inOperand3) :
mAttribute_mGUIComponentName (inOperand0),
mAttribute_mImportedOptionList (inOperand1),
mAttribute_mGlobalSimpleAttributeList (inOperand2),
mAttribute_mWithLexiqueList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST_2D_element GALGAS_galgas_33_GUIComponentListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgas_33_GUIComponentListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstringlist::constructor_emptyList (HERE),
                                                          GALGAS_guiSimpleAttributeListAST::constructor_emptyList (HERE),
                                                          GALGAS_withLexiqueListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST_2D_element GALGAS_galgas_33_GUIComponentListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_lstringlist & inOperand1,
                                                                                                                  const GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                                                                  const GALGAS_withLexiqueListAST & inOperand3 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgas_33_GUIComponentListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_galgas_33_GUIComponentListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_galgas_33_GUIComponentListAST_2D_element::objectCompare (const GALGAS_galgas_33_GUIComponentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mGUIComponentName.objectCompare (inOperand.mAttribute_mGUIComponentName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mImportedOptionList.objectCompare (inOperand.mAttribute_mImportedOptionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalSimpleAttributeList.objectCompare (inOperand.mAttribute_mGlobalSimpleAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWithLexiqueList.objectCompare (inOperand.mAttribute_mWithLexiqueList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_galgas_33_GUIComponentListAST_2D_element::isValid (void) const {
  return mAttribute_mGUIComponentName.isValid () && mAttribute_mImportedOptionList.isValid () && mAttribute_mGlobalSimpleAttributeList.isValid () && mAttribute_mWithLexiqueList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GUIComponentListAST_2D_element::drop (void) {
  mAttribute_mGUIComponentName.drop () ;
  mAttribute_mImportedOptionList.drop () ;
  mAttribute_mGlobalSimpleAttributeList.drop () ;
  mAttribute_mWithLexiqueList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GUIComponentListAST_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @galgas3GUIComponentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mGUIComponentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mImportedOptionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalSimpleAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWithLexiqueList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_GUIComponentListAST_2D_element::getter_mGUIComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGUIComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_galgas_33_GUIComponentListAST_2D_element::getter_mImportedOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImportedOptionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_galgas_33_GUIComponentListAST_2D_element::getter_mGlobalSimpleAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalSimpleAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST GALGAS_galgas_33_GUIComponentListAST_2D_element::getter_mWithLexiqueList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWithLexiqueList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @galgas3GUIComponentListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_GUIComponentListAST_2D_element ("galgas3GUIComponentListAST-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_galgas_33_GUIComponentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GUIComponentListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_galgas_33_GUIComponentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_GUIComponentListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GUIComponentListAST_2D_element GALGAS_galgas_33_GUIComponentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_GUIComponentListAST_2D_element result ;
  const GALGAS_galgas_33_GUIComponentListAST_2D_element * p = (const GALGAS_galgas_33_GUIComponentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_GUIComponentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3GUIComponentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature_2D_element::GALGAS_functionSignature_2D_element (void) :
mAttribute_mFormalSelector (),
mAttribute_mFormalArgumentType (),
mAttribute_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature_2D_element::~ GALGAS_functionSignature_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature_2D_element::GALGAS_functionSignature_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                          const GALGAS_string & inOperand2) :
mAttribute_mFormalSelector (inOperand0),
mAttribute_mFormalArgumentType (inOperand1),
mAttribute_mFormalArgumentName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature_2D_element GALGAS_functionSignature_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionSignature_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                              GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature_2D_element GALGAS_functionSignature_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                          const GALGAS_string & inOperand2 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionSignature_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_functionSignature_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionSignature_2D_element::objectCompare (const GALGAS_functionSignature_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalSelector.objectCompare (inOperand.mAttribute_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentType.objectCompare (inOperand.mAttribute_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionSignature_2D_element::isValid (void) const {
  return mAttribute_mFormalSelector.isValid () && mAttribute_mFormalArgumentType.isValid () && mAttribute_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionSignature_2D_element::drop (void) {
  mAttribute_mFormalSelector.drop () ;
  mAttribute_mFormalArgumentType.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionSignature_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @functionSignature-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionSignature_2D_element::getter_mFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_functionSignature_2D_element::getter_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_functionSignature_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @functionSignature-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionSignature_2D_element ("functionSignature-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionSignature_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionSignature_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature_2D_element GALGAS_functionSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_functionSignature_2D_element result ;
  const GALGAS_functionSignature_2D_element * p = (const GALGAS_functionSignature_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList_2D_element::GALGAS_unifiedTypeMapProxyList_2D_element (void) :
mAttribute_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList_2D_element::~ GALGAS_unifiedTypeMapProxyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList_2D_element::GALGAS_unifiedTypeMapProxyList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0) :
mAttribute_mType (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList_2D_element GALGAS_unifiedTypeMapProxyList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_unifiedTypeMapProxyList_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList_2D_element GALGAS_unifiedTypeMapProxyList_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_unifiedTypeMapProxyList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_unifiedTypeMapProxyList_2D_element::objectCompare (const GALGAS_unifiedTypeMapProxyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_unifiedTypeMapProxyList_2D_element::isValid (void) const {
  return mAttribute_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList_2D_element::drop (void) {
  mAttribute_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @unifiedTypeMapProxyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMapProxyList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @unifiedTypeMapProxyList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMapProxyList_2D_element ("unifiedTypeMapProxyList-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapProxyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapProxyList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedTypeMapProxyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapProxyList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList_2D_element GALGAS_unifiedTypeMapProxyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyList_2D_element result ;
  const GALGAS_unifiedTypeMapProxyList_2D_element * p = (const GALGAS_unifiedTypeMapProxyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMapProxyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapProxyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mArgumentTypeList (),
mAttribute_mHasCompilerArgument (),
mAttribute_mReturnedType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::~ GALGAS_constructorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_functionSignature & inOperand1,
                                                                    const GALGAS_bool & inOperand2,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mArgumentTypeList (inOperand1),
mAttribute_mHasCompilerArgument (inOperand2),
mAttribute_mReturnedType (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_constructorMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_functionSignature::constructor_emptyList (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_functionSignature & inOperand1,
                                                                                    const GALGAS_bool & inOperand2,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand3 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_constructorMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_constructorMap_2D_element::objectCompare (const GALGAS_constructorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArgumentTypeList.objectCompare (inOperand.mAttribute_mArgumentTypeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasCompilerArgument.objectCompare (inOperand.mAttribute_mHasCompilerArgument) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReturnedType.objectCompare (inOperand.mAttribute_mReturnedType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_constructorMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mArgumentTypeList.isValid () && mAttribute_mHasCompilerArgument.isValid () && mAttribute_mReturnedType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mArgumentTypeList.drop () ;
  mAttribute_mHasCompilerArgument.drop () ;
  mAttribute_mReturnedType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @constructorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArgumentTypeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasCompilerArgument.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReturnedType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constructorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_constructorMap_2D_element::getter_mArgumentTypeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArgumentTypeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_constructorMap_2D_element::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasCompilerArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_constructorMap_2D_element::getter_mReturnedType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnedType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @constructorMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorMap_2D_element ("constructorMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constructorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constructorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap_2D_element result ;
  const GALGAS_constructorMap_2D_element * p = (const GALGAS_constructorMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap_2D_element::GALGAS_getterMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mKind (),
mAttribute_mArgumentTypeList (),
mAttribute_mDeclarationLocation (),
mAttribute_mHasCompilerArgument (),
mAttribute_mReturnedType (),
mAttribute_mQualifier (),
mAttribute_mErrorMessage () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap_2D_element::~ GALGAS_getterMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap_2D_element::GALGAS_getterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_methodKind & inOperand1,
                                                          const GALGAS_functionSignature & inOperand2,
                                                          const GALGAS_location & inOperand3,
                                                          const GALGAS_bool & inOperand4,
                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand5,
                                                          const GALGAS_methodQualifier & inOperand6,
                                                          const GALGAS_string & inOperand7) :
mAttribute_lkey (inOperand0),
mAttribute_mKind (inOperand1),
mAttribute_mArgumentTypeList (inOperand2),
mAttribute_mDeclarationLocation (inOperand3),
mAttribute_mHasCompilerArgument (inOperand4),
mAttribute_mReturnedType (inOperand5),
mAttribute_mQualifier (inOperand6),
mAttribute_mErrorMessage (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap_2D_element GALGAS_getterMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_methodKind & inOperand1,
                                                                          const GALGAS_functionSignature & inOperand2,
                                                                          const GALGAS_location & inOperand3,
                                                                          const GALGAS_bool & inOperand4,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand5,
                                                                          const GALGAS_methodQualifier & inOperand6,
                                                                          const GALGAS_string & inOperand7 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_getterMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_getterMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_getterMap_2D_element::objectCompare (const GALGAS_getterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mKind.objectCompare (inOperand.mAttribute_mKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArgumentTypeList.objectCompare (inOperand.mAttribute_mArgumentTypeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDeclarationLocation.objectCompare (inOperand.mAttribute_mDeclarationLocation) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasCompilerArgument.objectCompare (inOperand.mAttribute_mHasCompilerArgument) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReturnedType.objectCompare (inOperand.mAttribute_mReturnedType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mQualifier.objectCompare (inOperand.mAttribute_mQualifier) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mErrorMessage.objectCompare (inOperand.mAttribute_mErrorMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_getterMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mKind.isValid () && mAttribute_mArgumentTypeList.isValid () && mAttribute_mDeclarationLocation.isValid () && mAttribute_mHasCompilerArgument.isValid () && mAttribute_mReturnedType.isValid () && mAttribute_mQualifier.isValid () && mAttribute_mErrorMessage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mKind.drop () ;
  mAttribute_mArgumentTypeList.drop () ;
  mAttribute_mDeclarationLocation.drop () ;
  mAttribute_mHasCompilerArgument.drop () ;
  mAttribute_mReturnedType.drop () ;
  mAttribute_mQualifier.drop () ;
  mAttribute_mErrorMessage.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_getterMap_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @getterMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArgumentTypeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDeclarationLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasCompilerArgument.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReturnedType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mQualifier.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mErrorMessage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_getterMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_getterMap_2D_element::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_getterMap_2D_element::getter_mArgumentTypeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArgumentTypeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_getterMap_2D_element::getter_mDeclarationLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclarationLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_getterMap_2D_element::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasCompilerArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_getterMap_2D_element::getter_mReturnedType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnedType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_getterMap_2D_element::getter_mQualifier (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mQualifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_getterMap_2D_element::getter_mErrorMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @getterMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getterMap_2D_element ("getterMap-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_getterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_getterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getterMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap_2D_element GALGAS_getterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_getterMap_2D_element result ;
  const GALGAS_getterMap_2D_element * p = (const GALGAS_getterMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature_2D_element::GALGAS_formalParameterSignature_2D_element (void) :
mAttribute_mFormalSelector (),
mAttribute_mFormalArgumentType (),
mAttribute_mFormalArgumentPassingMode (),
mAttribute_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature_2D_element::~ GALGAS_formalParameterSignature_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature_2D_element::GALGAS_formalParameterSignature_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                        const GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                                                        const GALGAS_string & inOperand3) :
mAttribute_mFormalSelector (inOperand0),
mAttribute_mFormalArgumentType (inOperand1),
mAttribute_mFormalArgumentPassingMode (inOperand2),
mAttribute_mFormalArgumentName (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature_2D_element GALGAS_formalParameterSignature_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                        const GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                                                                        const GALGAS_string & inOperand3 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterSignature_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_formalParameterSignature_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_formalParameterSignature_2D_element::objectCompare (const GALGAS_formalParameterSignature_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalSelector.objectCompare (inOperand.mAttribute_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentType.objectCompare (inOperand.mAttribute_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentPassingMode.objectCompare (inOperand.mAttribute_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_formalParameterSignature_2D_element::isValid (void) const {
  return mAttribute_mFormalSelector.isValid () && mAttribute_mFormalArgumentType.isValid () && mAttribute_mFormalArgumentPassingMode.isValid () && mAttribute_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterSignature_2D_element::drop (void) {
  mAttribute_mFormalSelector.drop () ;
  mAttribute_mFormalArgumentType.drop () ;
  mAttribute_mFormalArgumentPassingMode.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterSignature_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @formalParameterSignature-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalParameterSignature_2D_element::getter_mFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_formalParameterSignature_2D_element::getter_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST GALGAS_formalParameterSignature_2D_element::getter_mFormalArgumentPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_formalParameterSignature_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @formalParameterSignature-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalParameterSignature_2D_element ("formalParameterSignature-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formalParameterSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterSignature_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formalParameterSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalParameterSignature_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature_2D_element GALGAS_formalParameterSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterSignature_2D_element result ;
  const GALGAS_formalParameterSignature_2D_element * p = (const GALGAS_formalParameterSignature_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalParameterSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap_2D_element::GALGAS_setterMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mKind (),
mAttribute_mParameterList (),
mAttribute_mHasCompilerArgument (),
mAttribute_mQualifier (),
mAttribute_mErrorMessage () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap_2D_element::~ GALGAS_setterMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap_2D_element::GALGAS_setterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_methodKind & inOperand1,
                                                          const GALGAS_formalParameterSignature & inOperand2,
                                                          const GALGAS_bool & inOperand3,
                                                          const GALGAS_methodQualifier & inOperand4,
                                                          const GALGAS_string & inOperand5) :
mAttribute_lkey (inOperand0),
mAttribute_mKind (inOperand1),
mAttribute_mParameterList (inOperand2),
mAttribute_mHasCompilerArgument (inOperand3),
mAttribute_mQualifier (inOperand4),
mAttribute_mErrorMessage (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap_2D_element GALGAS_setterMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_methodKind & inOperand1,
                                                                          const GALGAS_formalParameterSignature & inOperand2,
                                                                          const GALGAS_bool & inOperand3,
                                                                          const GALGAS_methodQualifier & inOperand4,
                                                                          const GALGAS_string & inOperand5 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_setterMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_setterMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_setterMap_2D_element::objectCompare (const GALGAS_setterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mKind.objectCompare (inOperand.mAttribute_mKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mParameterList.objectCompare (inOperand.mAttribute_mParameterList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasCompilerArgument.objectCompare (inOperand.mAttribute_mHasCompilerArgument) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mQualifier.objectCompare (inOperand.mAttribute_mQualifier) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mErrorMessage.objectCompare (inOperand.mAttribute_mErrorMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_setterMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mKind.isValid () && mAttribute_mParameterList.isValid () && mAttribute_mHasCompilerArgument.isValid () && mAttribute_mQualifier.isValid () && mAttribute_mErrorMessage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mKind.drop () ;
  mAttribute_mParameterList.drop () ;
  mAttribute_mHasCompilerArgument.drop () ;
  mAttribute_mQualifier.drop () ;
  mAttribute_mErrorMessage.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @setterMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mParameterList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasCompilerArgument.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mQualifier.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mErrorMessage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_setterMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_setterMap_2D_element::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_setterMap_2D_element::getter_mParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_setterMap_2D_element::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasCompilerArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_setterMap_2D_element::getter_mQualifier (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mQualifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_setterMap_2D_element::getter_mErrorMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @setterMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setterMap_2D_element ("setterMap-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_setterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_setterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setterMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap_2D_element GALGAS_setterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_setterMap_2D_element result ;
  const GALGAS_setterMap_2D_element * p = (const GALGAS_setterMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_setterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap_2D_element::GALGAS_instanceMethodMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mKind (),
mAttribute_mParameterList (),
mAttribute_mDeclarationLocation (),
mAttribute_mHasCompilerArgument (),
mAttribute_mQualifier (),
mAttribute_mErrorMessage () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap_2D_element::~ GALGAS_instanceMethodMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap_2D_element::GALGAS_instanceMethodMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_methodKind & inOperand1,
                                                                          const GALGAS_formalParameterSignature & inOperand2,
                                                                          const GALGAS_location & inOperand3,
                                                                          const GALGAS_bool & inOperand4,
                                                                          const GALGAS_methodQualifier & inOperand5,
                                                                          const GALGAS_string & inOperand6) :
mAttribute_lkey (inOperand0),
mAttribute_mKind (inOperand1),
mAttribute_mParameterList (inOperand2),
mAttribute_mDeclarationLocation (inOperand3),
mAttribute_mHasCompilerArgument (inOperand4),
mAttribute_mQualifier (inOperand5),
mAttribute_mErrorMessage (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap_2D_element GALGAS_instanceMethodMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_methodKind & inOperand1,
                                                                                          const GALGAS_formalParameterSignature & inOperand2,
                                                                                          const GALGAS_location & inOperand3,
                                                                                          const GALGAS_bool & inOperand4,
                                                                                          const GALGAS_methodQualifier & inOperand5,
                                                                                          const GALGAS_string & inOperand6 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instanceMethodMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_instanceMethodMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_instanceMethodMap_2D_element::objectCompare (const GALGAS_instanceMethodMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mKind.objectCompare (inOperand.mAttribute_mKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mParameterList.objectCompare (inOperand.mAttribute_mParameterList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDeclarationLocation.objectCompare (inOperand.mAttribute_mDeclarationLocation) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasCompilerArgument.objectCompare (inOperand.mAttribute_mHasCompilerArgument) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mQualifier.objectCompare (inOperand.mAttribute_mQualifier) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mErrorMessage.objectCompare (inOperand.mAttribute_mErrorMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_instanceMethodMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mKind.isValid () && mAttribute_mParameterList.isValid () && mAttribute_mDeclarationLocation.isValid () && mAttribute_mHasCompilerArgument.isValid () && mAttribute_mQualifier.isValid () && mAttribute_mErrorMessage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mKind.drop () ;
  mAttribute_mParameterList.drop () ;
  mAttribute_mDeclarationLocation.drop () ;
  mAttribute_mHasCompilerArgument.drop () ;
  mAttribute_mQualifier.drop () ;
  mAttribute_mErrorMessage.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @instanceMethodMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mParameterList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDeclarationLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasCompilerArgument.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mQualifier.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mErrorMessage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_instanceMethodMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_instanceMethodMap_2D_element::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_instanceMethodMap_2D_element::getter_mParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_instanceMethodMap_2D_element::getter_mDeclarationLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclarationLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_instanceMethodMap_2D_element::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasCompilerArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_instanceMethodMap_2D_element::getter_mQualifier (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mQualifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_instanceMethodMap_2D_element::getter_mErrorMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @instanceMethodMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instanceMethodMap_2D_element ("instanceMethodMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instanceMethodMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanceMethodMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instanceMethodMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instanceMethodMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap_2D_element GALGAS_instanceMethodMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_instanceMethodMap_2D_element result ;
  const GALGAS_instanceMethodMap_2D_element * p = (const GALGAS_instanceMethodMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instanceMethodMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanceMethodMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap_2D_element::GALGAS_classMethodMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mParameterList (),
mAttribute_mHasCompilerArgument () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap_2D_element::~ GALGAS_classMethodMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap_2D_element::GALGAS_classMethodMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_formalParameterSignature & inOperand1,
                                                                    const GALGAS_bool & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mParameterList (inOperand1),
mAttribute_mHasCompilerArgument (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap_2D_element GALGAS_classMethodMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_classMethodMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_formalParameterSignature::constructor_emptyList (HERE),
                                           GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap_2D_element GALGAS_classMethodMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_formalParameterSignature & inOperand1,
                                                                                    const GALGAS_bool & inOperand2 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classMethodMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_classMethodMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_classMethodMap_2D_element::objectCompare (const GALGAS_classMethodMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mParameterList.objectCompare (inOperand.mAttribute_mParameterList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasCompilerArgument.objectCompare (inOperand.mAttribute_mHasCompilerArgument) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_classMethodMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mParameterList.isValid () && mAttribute_mHasCompilerArgument.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classMethodMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mParameterList.drop () ;
  mAttribute_mHasCompilerArgument.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classMethodMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @classMethodMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mParameterList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_classMethodMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_classMethodMap_2D_element::getter_mParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_classMethodMap_2D_element::getter_mHasCompilerArgument (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasCompilerArgument ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @classMethodMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classMethodMap_2D_element ("classMethodMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_classMethodMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classMethodMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_classMethodMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classMethodMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap_2D_element GALGAS_classMethodMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_classMethodMap_2D_element result ;
  const GALGAS_classMethodMap_2D_element * p = (const GALGAS_classMethodMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classMethodMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classMethodMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

