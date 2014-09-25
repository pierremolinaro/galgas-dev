#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-addExpressionForGeneration.h"
#include "class-andExpressionForGeneration.h"
#include "class-constructorExpressionForGeneration.h"
#include "class-divisionExpressionForGeneration.h"
#include "class-equalExpressionForGeneration.h"
#include "class-falseExpressionForGeneration.h"
#include "class-functionCallExpressionForGeneration.h"
#include "class-ifExpressionForGeneration.h"
#include "class-literalCharExpressionForGeneration.h"
#include "class-literalDoubleExpressionForGeneration.h"
#include "class-literalSInt64ExpressionForGeneration.h"
#include "class-literalSIntExpressionForGeneration.h"
#include "class-literalStringExpressionForGeneration.h"
#include "class-literalUInt64ExpressionForGeneration.h"
#include "class-literalUIntExpressionForGeneration.h"
#include "class-lowerOrEqualExpressionForGeneration.h"
#include "class-moduloExpressionForGeneration.h"
#include "class-multiplicationExpressionForGeneration.h"
#include "class-notEqualExpressionForGeneration.h"
#include "class-notExpressionForGeneration.h"
#include "class-optionCharExpressionForGeneration.h"
#include "class-optionCommentExpressionForGeneration.h"
#include "class-optionStringExpressionForGeneration.h"
#include "class-optionValueExpressionForGeneration.h"
#include "class-orExpressionForGeneration.h"
#include "class-readerCallExpressionForGeneration.h"
#include "class-semanticExpressionForGeneration.h"
#include "class-strictLowerExpressionForGeneration.h"
#include "class-structFieldAccessExpressionForGeneration.h"
#include "class-structFieldAccessTemplateExpressionAST.h"
#include "class-subExpressionForGeneration.h"
#include "class-templateAddOperationAST.h"
#include "class-templateAndOperationAST.h"
#include "class-templateCategoryTemplateCallAST.h"
#include "class-templateConstructorAST.h"
#include "class-templateDivideOperationAST.h"
#include "class-templateEqualTestAST.h"
#include "class-templateExpressionAST.h"
#include "class-templateFalseBoolAST.h"
#include "class-templateFileWrapperTemplateCallAST.h"
#include "class-templateFileWrapperWithStaticPathAST.h"
#include "class-templateFunctionCallAST.h"
#include "class-templateIfThenElseExpressionAST.h"
#include "class-templateInfOrEqualTestAST.h"
#include "class-templateLiteralCharExpressionAST.h"
#include "class-templateLiteralDoubleExpressionAST.h"
#include "class-templateLiteralSInt64ExpressionAST.h"
#include "class-templateLiteralSIntExpressionAST.h"
#include "class-templateLiteralStringExpressionAST.h"
#include "class-templateLiteralUInt64ExpressionAST.h"
#include "class-templateLiteralUIntExpressionAST.h"
#include "class-templateLogicalNegateAST.h"
#include "class-templateModuloOperationAST.h"
#include "class-templateMultiplyOperationAST.h"
#include "class-templateNonEqualTestAST.h"
#include "class-templateNotOperatorAST.h"
#include "class-templateOptionAccessAST.h"
#include "class-templateOrOperationAST.h"
#include "class-templateReaderCallInExpressionAST.h"
#include "class-templateStrictInfTestAST.h"
#include "class-templateSubOperationAST.h"
#include "class-templateTrueBoolAST.h"
#include "class-templateUnaryMinusOperationAST.h"
#include "class-templateVarInExpressionAST.h"
#include "class-templateXorOperationAST.h"
#include "class-tildeExpressionForGeneration.h"
#include "class-trueExpressionForGeneration.h"
#include "class-unaryMinusExpressionForGeneration.h"
#include "class-varInExpressionForGeneration.h"
#include "class-xorExpressionForGeneration.h"
#include "enum-methodKind.h"
#include "enum-methodQualifier.h"
#include "enum-typeKindEnum.h"
#include "func-binaryAddOperator.h"
#include "func-binaryAndOperator.h"
#include "func-binaryDivOperator.h"
#include "func-binaryModOperator.h"
#include "func-binaryMulOperator.h"
#include "func-binaryOrOperator.h"
#include "func-binarySubOperator.h"
#include "func-binaryXorOperator.h"
#include "func-isComparable.h"
#include "func-unaryMinusOperator.h"
#include "func-unaryNotOperator.h"
#include "func-unaryTildeOperator.h"
#include "getter-semanticExpressionForGeneration-isTrueExpression.h"
#include "grammar-galgas3Grammar.h"
#include "grammar-galgas3ProjectGrammar.h"
#include "grammar-grammarLL1grammar.h"
#include "grammar-guiGrammar.h"
#include "grammar-lexiqueLL1grammar.h"
#include "grammar-optionLL1grammar.h"
#include "grammar-programSLRgrammar.h"
#include "grammar-projectLL1grammar.h"
#include "grammar-semanticsSLRgrammar.h"
#include "grammar-syntaxSLRgrammar.h"
#include "grammar-templateGrammar.h"
#include "list-functionSignature.h"
#include "list-semanticExpressionListForGeneration.h"
#include "list-templateExpressionListAST.h"
#include "list-typedAttributeList.h"
#include "map-attributeMap.h"
#include "map-commandLineOptionMap.h"
#include "map-constructorMap.h"
#include "map-functionMap.h"
#include "map-optionComponentMapForSemanticAnalysis.h"
#include "map-readerMap.h"
#include "map-templateVariableMap.h"
#include "mapproxy-unifiedTypeMapProxy.h"
#include "method-semanticExpressionForGeneration-generateExpression.h"
#include "method-templateExpressionAST-templateExpressionAnalysis.h"
#include "option-galgas_cli_options.h"
#include "proc-checkAssignmentTypes.h"
#include "proc-checkDiadicOperator.h"
#include "struct-Xcode_PBXFileReference_map-element.h"
#include "struct-abstractMethodDefinitionListForGeneration-element.h"
#include "struct-actualParameterListForGeneration-element.h"
#include "struct-attributeIndexMap-element.h"
#include "struct-attributeMap-element.h"
#include "struct-castInstructionBranchListForGeneration-element.h"
#include "struct-categoryMethodMapForBuildingContext-element.h"
#include "struct-categoryMethodMapForGlobalCheckings-element.h"
#include "struct-categoryMethodMapForType-element.h"
#include "struct-categoryModifierMapForBuildingContext-element.h"
#include "struct-categoryModifierMapForGlobalCheckings-element.h"
#include "struct-categoryModifierMapForType-element.h"
#include "struct-categoryReaderMapForBuildingContext-element.h"
#include "struct-categoryReaderMapForGlobalCheckings-element.h"
#include "struct-categoryReaderMapForType-element.h"
#include "struct-constantIndexMap-element.h"
#include "struct-declaredMethodMap-element.h"
#include "struct-extractedAssociatedValuesForGeneration-element.h"
#include "struct-filewrapperMap-element.h"
#include "struct-filewrapperTemplateMap-element.h"
#include "struct-foreachInstructionEnumeratedObjectListForGeneration-element.h"
#include "struct-formalInputParameterListForGeneration-element.h"
#include "struct-formalParameterListForGeneration-element.h"
#include "struct-functionMap-element.h"
#include "struct-galgas3QualifiedFeatureList-element.h"
#include "struct-grammarComponentASTList-element.h"
#include "struct-grammarLabelMap-element.h"
#include "struct-grammarMap-element.h"
#include "struct-headerCompositionMap-element.h"
#include "struct-headerRepartitionMap-element.h"
#include "struct-insertMethodMap-element.h"
#include "struct-lexiqueComponentMapForSemanticAnalysis-element.h"
#include "struct-localConstantList-element.h"
#include "struct-localInitializedVariableList-element.h"
#include "struct-mapAutomatonActionMap-element.h"
#include "struct-mapAutomatonStateMap-element.h"
#include "struct-methodDefinitionListForGeneration-element.h"
#include "struct-nonTerminalSymbolMapForGrammarAnalysis-element.h"
#include "struct-nonTerminalSymbolSortedListForGrammarAnalysis-element.h"
#include "struct-nonterminalLabelMap-element.h"
#include "struct-nonterminalMap-element.h"
#include "struct-nonterminalSymbolLabelMapForGrammarAnalysis-element.h"
#include "struct-optionComponentMapForSemanticAnalysis-element.h"
#include "struct-optionMapForSemanticAnalysis-element.h"
#include "struct-predefinedTypes.h"
#include "struct-productionRuleListForGrammarAnalysis-element.h"
#include "struct-projectQualifiedFeatureMap-element.h"
#include "struct-projectSourceList-element.h"
#include "struct-qualifiedFeatureList-element.h"
#include "struct-routineMap-element.h"
#include "struct-ruleLabelImplementationList-element.h"
#include "struct-searchMethodMap-element.h"
#include "struct-semanticContext.h"
#include "struct-semanticExpressionListForGeneration-element.h"
#include "struct-signatureForGrammarAnalysis-element.h"
#include "struct-sortDescriptorListForGeneration-element.h"
#include "struct-syntaxComponentListForGrammarAnalysis-element.h"
#include "struct-syntaxListForGeneration-element.h"
#include "struct-templateAnalysisContext.h"
#include "struct-templateInstructionIfBranchListForGeneration-element.h"
#include "struct-terminalSymbolsMapForGrammarAnalysis-element.h"
#include "struct-typedAttributeList-element.h"
#include "struct-unusedNonTerminalSymbolMapForGrammarAnalysis-element.h"
#include "struct-wrapperDirectoryMap-element.h"
#include "struct-wrapperExtensionMap-element.h"
#include "struct-wrapperFileMap-element.h"
#include "uniquemap-unifiedTypeMap.h"


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedAttributeList_2D_element::GALGAS_typedAttributeList_2D_element (void) :
mAttribute_mAttributeTypeProxy (),
mAttribute_mAttributeName (),
mAttribute_mHasSetter (),
mAttribute_mHasGetter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedAttributeList_2D_element::~ GALGAS_typedAttributeList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedAttributeList_2D_element::GALGAS_typedAttributeList_2D_element (const GALGAS_unifiedTypeMapProxy & inOperand0,
                                                                            const GALGAS_lstring & inOperand1,
                                                                            const GALGAS_bool & inOperand2,
                                                                            const GALGAS_bool & inOperand3) :
mAttribute_mAttributeTypeProxy (inOperand0),
mAttribute_mAttributeName (inOperand1),
mAttribute_mHasSetter (inOperand2),
mAttribute_mHasGetter (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedAttributeList_2D_element GALGAS_typedAttributeList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_typedAttributeList_2D_element (GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                               GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedAttributeList_2D_element GALGAS_typedAttributeList_2D_element::constructor_new (const GALGAS_unifiedTypeMapProxy & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_bool & inOperand2,
                                                                                            const GALGAS_bool & inOperand3 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typedAttributeList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_typedAttributeList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typedAttributeList_2D_element::objectCompare (const GALGAS_typedAttributeList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeTypeProxy.objectCompare (inOperand.mAttribute_mAttributeTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeName.objectCompare (inOperand.mAttribute_mAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasSetter.objectCompare (inOperand.mAttribute_mHasSetter) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasGetter.objectCompare (inOperand.mAttribute_mHasGetter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_typedAttributeList_2D_element::isValid (void) const {
  return mAttribute_mAttributeTypeProxy.isValid () && mAttribute_mAttributeName.isValid () && mAttribute_mHasSetter.isValid () && mAttribute_mHasGetter.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedAttributeList_2D_element::drop (void) {
  mAttribute_mAttributeTypeProxy.drop () ;
  mAttribute_mAttributeName.drop () ;
  mAttribute_mHasSetter.drop () ;
  mAttribute_mHasGetter.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedAttributeList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @typedAttributeList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mAttributeTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasSetter.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasGetter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_typedAttributeList_2D_element::reader_mAttributeTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typedAttributeList_2D_element::reader_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typedAttributeList_2D_element::reader_mHasSetter (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasSetter ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typedAttributeList_2D_element::reader_mHasGetter (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasGetter ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @typedAttributeList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typedAttributeList_2D_element ("typedAttributeList-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typedAttributeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedAttributeList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typedAttributeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typedAttributeList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedAttributeList_2D_element GALGAS_typedAttributeList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typedAttributeList_2D_element result ;
  const GALGAS_typedAttributeList_2D_element * p = (const GALGAS_typedAttributeList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typedAttributeList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typedAttributeList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap_2D_element::GALGAS_attributeMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mAttributeType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap_2D_element::~ GALGAS_attributeMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap_2D_element::GALGAS_attributeMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_unifiedTypeMapProxy & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mAttributeType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap_2D_element GALGAS_attributeMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_attributeMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_unifiedTypeMapProxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap_2D_element GALGAS_attributeMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_unifiedTypeMapProxy & inOperand1 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_attributeMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_attributeMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_attributeMap_2D_element::objectCompare (const GALGAS_attributeMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeType.objectCompare (inOperand.mAttribute_mAttributeType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_attributeMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mAttributeType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mAttributeType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeMap_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @attributeMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAttributeType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_attributeMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_attributeMap_2D_element::reader_mAttributeType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @attributeMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_attributeMap_2D_element ("attributeMap-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_attributeMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_attributeMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_attributeMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap_2D_element GALGAS_attributeMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_attributeMap_2D_element result ;
  const GALGAS_attributeMap_2D_element * p = (const GALGAS_attributeMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_attributeMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("attributeMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap_2D_element::GALGAS_constantIndexMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIndex (),
mAttribute_mAssociatedTypeList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap_2D_element::~ GALGAS_constantIndexMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap_2D_element::GALGAS_constantIndexMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_uint & inOperand1,
                                                                        const GALGAS_unifiedTypeMapProxyList & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mIndex (inOperand1),
mAttribute_mAssociatedTypeList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap_2D_element GALGAS_constantIndexMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_constantIndexMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_uint::constructor_default (HERE),
                                             GALGAS_unifiedTypeMapProxyList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap_2D_element GALGAS_constantIndexMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_uint & inOperand1,
                                                                                        const GALGAS_unifiedTypeMapProxyList & inOperand2 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantIndexMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_constantIndexMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_constantIndexMap_2D_element::objectCompare (const GALGAS_constantIndexMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndex.objectCompare (inOperand.mAttribute_mIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAssociatedTypeList.objectCompare (inOperand.mAttribute_mAssociatedTypeList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_constantIndexMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () && mAttribute_mAssociatedTypeList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantIndexMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIndex.drop () ;
  mAttribute_mAssociatedTypeList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantIndexMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @constantIndexMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAssociatedTypeList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constantIndexMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_constantIndexMap_2D_element::reader_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_constantIndexMap_2D_element::reader_mAssociatedTypeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssociatedTypeList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @constantIndexMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantIndexMap_2D_element ("constantIndexMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constantIndexMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantIndexMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constantIndexMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantIndexMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap_2D_element GALGAS_constantIndexMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_constantIndexMap_2D_element result ;
  const GALGAS_constantIndexMap_2D_element * p = (const GALGAS_constantIndexMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constantIndexMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantIndexMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap_2D_element::GALGAS_grammarLabelMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mLabelSignature () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap_2D_element::~ GALGAS_grammarLabelMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap_2D_element::GALGAS_grammarLabelMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_formalParameterSignature & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mLabelSignature (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap_2D_element GALGAS_grammarLabelMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_grammarLabelMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_formalParameterSignature::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap_2D_element GALGAS_grammarLabelMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_formalParameterSignature & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_grammarLabelMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_grammarLabelMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_grammarLabelMap_2D_element::objectCompare (const GALGAS_grammarLabelMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLabelSignature.objectCompare (inOperand.mAttribute_mLabelSignature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_grammarLabelMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLabelSignature.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarLabelMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mLabelSignature.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarLabelMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @grammarLabelMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLabelSignature.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_grammarLabelMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_grammarLabelMap_2D_element::reader_mLabelSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelSignature ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @grammarLabelMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarLabelMap_2D_element ("grammarLabelMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarLabelMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarLabelMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarLabelMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarLabelMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap_2D_element GALGAS_grammarLabelMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_grammarLabelMap_2D_element result ;
  const GALGAS_grammarLabelMap_2D_element * p = (const GALGAS_grammarLabelMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarLabelMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarLabelMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap_2D_element::GALGAS_grammarMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mLabelMap (),
mAttribute_mHasIndexing (),
mAttribute_mHasTranslateFeature () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap_2D_element::~ GALGAS_grammarMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap_2D_element::GALGAS_grammarMap_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_grammarLabelMap & inOperand1,
                                                            const GALGAS_bool & inOperand2,
                                                            const GALGAS_bool & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mLabelMap (inOperand1),
mAttribute_mHasIndexing (inOperand2),
mAttribute_mHasTranslateFeature (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap_2D_element GALGAS_grammarMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_grammarMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_grammarLabelMap::constructor_emptyMap (HERE),
                                       GALGAS_bool::constructor_default (HERE),
                                       GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap_2D_element GALGAS_grammarMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_grammarLabelMap & inOperand1,
                                                                            const GALGAS_bool & inOperand2,
                                                                            const GALGAS_bool & inOperand3 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_grammarMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_grammarMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_grammarMap_2D_element::objectCompare (const GALGAS_grammarMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLabelMap.objectCompare (inOperand.mAttribute_mLabelMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasIndexing.objectCompare (inOperand.mAttribute_mHasIndexing) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasTranslateFeature.objectCompare (inOperand.mAttribute_mHasTranslateFeature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_grammarMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLabelMap.isValid () && mAttribute_mHasIndexing.isValid () && mAttribute_mHasTranslateFeature.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mLabelMap.drop () ;
  mAttribute_mHasIndexing.drop () ;
  mAttribute_mHasTranslateFeature.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarMap_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @grammarMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLabelMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasIndexing.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_grammarMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap GALGAS_grammarMap_2D_element::reader_mLabelMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_grammarMap_2D_element::reader_mHasIndexing (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasIndexing ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_grammarMap_2D_element::reader_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasTranslateFeature ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @grammarMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarMap_2D_element ("grammarMap-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap_2D_element GALGAS_grammarMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarMap_2D_element result ;
  const GALGAS_grammarMap_2D_element * p = (const GALGAS_grammarMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element::GALGAS_routineMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRoutineSignature (),
mAttribute_mIsInternal () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element::~ GALGAS_routineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element::GALGAS_routineMap_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_formalParameterSignature & inOperand1,
                                                            const GALGAS_bool & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mRoutineSignature (inOperand1),
mAttribute_mIsInternal (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element GALGAS_routineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_formalParameterSignature::constructor_emptyList (HERE),
                                       GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element GALGAS_routineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_formalParameterSignature & inOperand1,
                                                                            const GALGAS_bool & inOperand2 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineMap_2D_element::objectCompare (const GALGAS_routineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineSignature.objectCompare (inOperand.mAttribute_mRoutineSignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsInternal.objectCompare (inOperand.mAttribute_mIsInternal) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRoutineSignature.isValid () && mAttribute_mIsInternal.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRoutineSignature.drop () ;
  mAttribute_mIsInternal.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @routineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsInternal.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_routineMap_2D_element::reader_mRoutineSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMap_2D_element::reader_mIsInternal (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsInternal ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @routineMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineMap_2D_element ("routineMap-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element GALGAS_routineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_routineMap_2D_element result ;
  const GALGAS_routineMap_2D_element * p = (const GALGAS_routineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element::GALGAS_functionMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFunctionSignature (),
mAttribute_mResultType (),
mAttribute_mIsInternal () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element::~ GALGAS_functionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element::GALGAS_functionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_functionSignature & inOperand1,
                                                              const GALGAS_unifiedTypeMapProxy & inOperand2,
                                                              const GALGAS_bool & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mFunctionSignature (inOperand1),
mAttribute_mResultType (inOperand2),
mAttribute_mIsInternal (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_functionSignature::constructor_emptyList (HERE),
                                        GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                        GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_functionSignature & inOperand1,
                                                                              const GALGAS_unifiedTypeMapProxy & inOperand2,
                                                                              const GALGAS_bool & inOperand3 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_functionMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionMap_2D_element::objectCompare (const GALGAS_functionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionSignature.objectCompare (inOperand.mAttribute_mFunctionSignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultType.objectCompare (inOperand.mAttribute_mResultType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsInternal.objectCompare (inOperand.mAttribute_mIsInternal) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFunctionSignature.isValid () && mAttribute_mResultType.isValid () && mAttribute_mIsInternal.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFunctionSignature.drop () ;
  mAttribute_mResultType.drop () ;
  mAttribute_mIsInternal.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @functionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsInternal.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_functionMap_2D_element::reader_mFunctionSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_functionMap_2D_element::reader_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_functionMap_2D_element::reader_mIsInternal (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsInternal ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @functionMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionMap_2D_element ("functionMap-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element GALGAS_functionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_functionMap_2D_element result ;
  const GALGAS_functionMap_2D_element * p = (const GALGAS_functionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap_2D_element::GALGAS_wrapperFileMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mAbsoluteFilePath (),
mAttribute_mIsTextFile (),
mAttribute_mWrapperDirectoryIndex (),
mAttribute_mWrapperFileIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap_2D_element::~ GALGAS_wrapperFileMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap_2D_element::GALGAS_wrapperFileMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_string & inOperand1,
                                                                    const GALGAS_bool & inOperand2,
                                                                    const GALGAS_uint & inOperand3,
                                                                    const GALGAS_uint & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mAbsoluteFilePath (inOperand1),
mAttribute_mIsTextFile (inOperand2),
mAttribute_mWrapperDirectoryIndex (inOperand3),
mAttribute_mWrapperFileIndex (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap_2D_element GALGAS_wrapperFileMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_wrapperFileMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_uint::constructor_default (HERE),
                                           GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap_2D_element GALGAS_wrapperFileMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_string & inOperand1,
                                                                                    const GALGAS_bool & inOperand2,
                                                                                    const GALGAS_uint & inOperand3,
                                                                                    const GALGAS_uint & inOperand4 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_wrapperFileMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_wrapperFileMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_wrapperFileMap_2D_element::objectCompare (const GALGAS_wrapperFileMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAbsoluteFilePath.objectCompare (inOperand.mAttribute_mAbsoluteFilePath) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsTextFile.objectCompare (inOperand.mAttribute_mIsTextFile) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWrapperDirectoryIndex.objectCompare (inOperand.mAttribute_mWrapperDirectoryIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWrapperFileIndex.objectCompare (inOperand.mAttribute_mWrapperFileIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_wrapperFileMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mAbsoluteFilePath.isValid () && mAttribute_mIsTextFile.isValid () && mAttribute_mWrapperDirectoryIndex.isValid () && mAttribute_mWrapperFileIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperFileMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mAbsoluteFilePath.drop () ;
  mAttribute_mIsTextFile.drop () ;
  mAttribute_mWrapperDirectoryIndex.drop () ;
  mAttribute_mWrapperFileIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperFileMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @wrapperFileMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAbsoluteFilePath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsTextFile.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWrapperDirectoryIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWrapperFileIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_wrapperFileMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_wrapperFileMap_2D_element::reader_mAbsoluteFilePath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbsoluteFilePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_wrapperFileMap_2D_element::reader_mIsTextFile (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsTextFile ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_wrapperFileMap_2D_element::reader_mWrapperDirectoryIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWrapperDirectoryIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_wrapperFileMap_2D_element::reader_mWrapperFileIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWrapperFileIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @wrapperFileMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_wrapperFileMap_2D_element ("wrapperFileMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_wrapperFileMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperFileMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_wrapperFileMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_wrapperFileMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap_2D_element GALGAS_wrapperFileMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_wrapperFileMap_2D_element result ;
  const GALGAS_wrapperFileMap_2D_element * p = (const GALGAS_wrapperFileMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_wrapperFileMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperFileMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap_2D_element::GALGAS_wrapperDirectoryMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRegularFileMap (),
mAttribute_mDirectoryMap (),
mAttribute_mWrapperDirectoryIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap_2D_element::~ GALGAS_wrapperDirectoryMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap_2D_element::GALGAS_wrapperDirectoryMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_wrapperFileMap & inOperand1,
                                                                              const GALGAS_wrapperDirectoryMap & inOperand2,
                                                                              const GALGAS_uint & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mRegularFileMap (inOperand1),
mAttribute_mDirectoryMap (inOperand2),
mAttribute_mWrapperDirectoryIndex (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap_2D_element GALGAS_wrapperDirectoryMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_wrapperDirectoryMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_wrapperFileMap::constructor_emptyMap (HERE),
                                                GALGAS_wrapperDirectoryMap::constructor_emptyMap (HERE),
                                                GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap_2D_element GALGAS_wrapperDirectoryMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_wrapperFileMap & inOperand1,
                                                                                              const GALGAS_wrapperDirectoryMap & inOperand2,
                                                                                              const GALGAS_uint & inOperand3 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_wrapperDirectoryMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_wrapperDirectoryMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_wrapperDirectoryMap_2D_element::objectCompare (const GALGAS_wrapperDirectoryMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegularFileMap.objectCompare (inOperand.mAttribute_mRegularFileMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDirectoryMap.objectCompare (inOperand.mAttribute_mDirectoryMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWrapperDirectoryIndex.objectCompare (inOperand.mAttribute_mWrapperDirectoryIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_wrapperDirectoryMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRegularFileMap.isValid () && mAttribute_mDirectoryMap.isValid () && mAttribute_mWrapperDirectoryIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperDirectoryMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRegularFileMap.drop () ;
  mAttribute_mDirectoryMap.drop () ;
  mAttribute_mWrapperDirectoryIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperDirectoryMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @wrapperDirectoryMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegularFileMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDirectoryMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWrapperDirectoryIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_wrapperDirectoryMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap GALGAS_wrapperDirectoryMap_2D_element::reader_mRegularFileMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegularFileMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap GALGAS_wrapperDirectoryMap_2D_element::reader_mDirectoryMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDirectoryMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_wrapperDirectoryMap_2D_element::reader_mWrapperDirectoryIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWrapperDirectoryIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @wrapperDirectoryMap-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_wrapperDirectoryMap_2D_element ("wrapperDirectoryMap-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_wrapperDirectoryMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperDirectoryMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_wrapperDirectoryMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_wrapperDirectoryMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap_2D_element GALGAS_wrapperDirectoryMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_wrapperDirectoryMap_2D_element result ;
  const GALGAS_wrapperDirectoryMap_2D_element * p = (const GALGAS_wrapperDirectoryMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_wrapperDirectoryMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperDirectoryMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap_2D_element::GALGAS_filewrapperTemplateMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mTemplateSignature (),
mAttribute_mFilewrapperTemplatePath () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap_2D_element::~ GALGAS_filewrapperTemplateMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap_2D_element::GALGAS_filewrapperTemplateMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_functionSignature & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mTemplateSignature (inOperand1),
mAttribute_mFilewrapperTemplatePath (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap_2D_element GALGAS_filewrapperTemplateMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_filewrapperTemplateMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_functionSignature::constructor_emptyList (HERE),
                                                   GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap_2D_element GALGAS_filewrapperTemplateMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_functionSignature & inOperand1,
                                                                                                    const GALGAS_lstring & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_filewrapperTemplateMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_filewrapperTemplateMap_2D_element::objectCompare (const GALGAS_filewrapperTemplateMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTemplateSignature.objectCompare (inOperand.mAttribute_mTemplateSignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFilewrapperTemplatePath.objectCompare (inOperand.mAttribute_mFilewrapperTemplatePath) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_filewrapperTemplateMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTemplateSignature.isValid () && mAttribute_mFilewrapperTemplatePath.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mTemplateSignature.drop () ;
  mAttribute_mFilewrapperTemplatePath.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @filewrapperTemplateMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTemplateSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFilewrapperTemplatePath.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperTemplateMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_filewrapperTemplateMap_2D_element::reader_mTemplateSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperTemplateMap_2D_element::reader_mFilewrapperTemplatePath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperTemplatePath ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @filewrapperTemplateMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateMap_2D_element ("filewrapperTemplateMap-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperTemplateMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap_2D_element GALGAS_filewrapperTemplateMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateMap_2D_element result ;
  const GALGAS_filewrapperTemplateMap_2D_element * p = (const GALGAS_filewrapperTemplateMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperTemplateMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap_2D_element::GALGAS_filewrapperMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFilewrapperPath (),
mAttribute_mFilewrapperExtensionList (),
mAttribute_mFilewrapperFileMap (),
mAttribute_mFilewrapperDirectoryMap (),
mAttribute_mFilewrapperTemplateMap (),
mAttribute_mIsInternal () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap_2D_element::~ GALGAS_filewrapperMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap_2D_element::GALGAS_filewrapperMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_lstringlist & inOperand2,
                                                                    const GALGAS_wrapperFileMap & inOperand3,
                                                                    const GALGAS_wrapperDirectoryMap & inOperand4,
                                                                    const GALGAS_filewrapperTemplateMap & inOperand5,
                                                                    const GALGAS_bool & inOperand6) :
mAttribute_lkey (inOperand0),
mAttribute_mFilewrapperPath (inOperand1),
mAttribute_mFilewrapperExtensionList (inOperand2),
mAttribute_mFilewrapperFileMap (inOperand3),
mAttribute_mFilewrapperDirectoryMap (inOperand4),
mAttribute_mFilewrapperTemplateMap (inOperand5),
mAttribute_mIsInternal (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap_2D_element GALGAS_filewrapperMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_filewrapperMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_lstringlist::constructor_emptyList (HERE),
                                           GALGAS_wrapperFileMap::constructor_emptyMap (HERE),
                                           GALGAS_wrapperDirectoryMap::constructor_emptyMap (HERE),
                                           GALGAS_filewrapperTemplateMap::constructor_emptyMap (HERE),
                                           GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap_2D_element GALGAS_filewrapperMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstringlist & inOperand2,
                                                                                    const GALGAS_wrapperFileMap & inOperand3,
                                                                                    const GALGAS_wrapperDirectoryMap & inOperand4,
                                                                                    const GALGAS_filewrapperTemplateMap & inOperand5,
                                                                                    const GALGAS_bool & inOperand6 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapperMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_filewrapperMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_filewrapperMap_2D_element::objectCompare (const GALGAS_filewrapperMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFilewrapperPath.objectCompare (inOperand.mAttribute_mFilewrapperPath) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFilewrapperExtensionList.objectCompare (inOperand.mAttribute_mFilewrapperExtensionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFilewrapperFileMap.objectCompare (inOperand.mAttribute_mFilewrapperFileMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFilewrapperDirectoryMap.objectCompare (inOperand.mAttribute_mFilewrapperDirectoryMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFilewrapperTemplateMap.objectCompare (inOperand.mAttribute_mFilewrapperTemplateMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsInternal.objectCompare (inOperand.mAttribute_mIsInternal) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_filewrapperMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFilewrapperPath.isValid () && mAttribute_mFilewrapperExtensionList.isValid () && mAttribute_mFilewrapperFileMap.isValid () && mAttribute_mFilewrapperDirectoryMap.isValid () && mAttribute_mFilewrapperTemplateMap.isValid () && mAttribute_mIsInternal.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFilewrapperPath.drop () ;
  mAttribute_mFilewrapperExtensionList.drop () ;
  mAttribute_mFilewrapperFileMap.drop () ;
  mAttribute_mFilewrapperDirectoryMap.drop () ;
  mAttribute_mFilewrapperTemplateMap.drop () ;
  mAttribute_mIsInternal.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @filewrapperMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFilewrapperPath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFilewrapperExtensionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFilewrapperFileMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFilewrapperDirectoryMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFilewrapperTemplateMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsInternal.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperMap_2D_element::reader_mFilewrapperPath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperPath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_filewrapperMap_2D_element::reader_mFilewrapperExtensionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperExtensionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap GALGAS_filewrapperMap_2D_element::reader_mFilewrapperFileMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperFileMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap GALGAS_filewrapperMap_2D_element::reader_mFilewrapperDirectoryMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperDirectoryMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap GALGAS_filewrapperMap_2D_element::reader_mFilewrapperTemplateMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperTemplateMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_filewrapperMap_2D_element::reader_mIsInternal (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsInternal ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @filewrapperMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperMap_2D_element ("filewrapperMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap_2D_element GALGAS_filewrapperMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperMap_2D_element result ;
  const GALGAS_filewrapperMap_2D_element * p = (const GALGAS_filewrapperMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis_2D_element::GALGAS_optionComponentMapForSemanticAnalysis_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIsPredefined (),
mAttribute_mBoolOptionMap (),
mAttribute_mUIntOptionMap (),
mAttribute_mStringOptionMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis_2D_element::~ GALGAS_optionComponentMapForSemanticAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis_2D_element::GALGAS_optionComponentMapForSemanticAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_bool & inOperand1,
                                                                                                                  const GALGAS_commandLineOptionMap & inOperand2,
                                                                                                                  const GALGAS_commandLineOptionMap & inOperand3,
                                                                                                                  const GALGAS_commandLineOptionMap & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mIsPredefined (inOperand1),
mAttribute_mBoolOptionMap (inOperand2),
mAttribute_mUIntOptionMap (inOperand3),
mAttribute_mStringOptionMap (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis_2D_element GALGAS_optionComponentMapForSemanticAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_optionComponentMapForSemanticAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_bool::constructor_default (HERE),
                                                                  GALGAS_commandLineOptionMap::constructor_emptyMap (HERE),
                                                                  GALGAS_commandLineOptionMap::constructor_emptyMap (HERE),
                                                                  GALGAS_commandLineOptionMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis_2D_element GALGAS_optionComponentMapForSemanticAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_bool & inOperand1,
                                                                                                                                  const GALGAS_commandLineOptionMap & inOperand2,
                                                                                                                                  const GALGAS_commandLineOptionMap & inOperand3,
                                                                                                                                  const GALGAS_commandLineOptionMap & inOperand4 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionComponentMapForSemanticAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_optionComponentMapForSemanticAnalysis_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_optionComponentMapForSemanticAnalysis_2D_element::objectCompare (const GALGAS_optionComponentMapForSemanticAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsPredefined.objectCompare (inOperand.mAttribute_mIsPredefined) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBoolOptionMap.objectCompare (inOperand.mAttribute_mBoolOptionMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUIntOptionMap.objectCompare (inOperand.mAttribute_mUIntOptionMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStringOptionMap.objectCompare (inOperand.mAttribute_mStringOptionMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_optionComponentMapForSemanticAnalysis_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIsPredefined.isValid () && mAttribute_mBoolOptionMap.isValid () && mAttribute_mUIntOptionMap.isValid () && mAttribute_mStringOptionMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForSemanticAnalysis_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIsPredefined.drop () ;
  mAttribute_mBoolOptionMap.drop () ;
  mAttribute_mUIntOptionMap.drop () ;
  mAttribute_mStringOptionMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForSemanticAnalysis_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @optionComponentMapForSemanticAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBoolOptionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUIntOptionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStringOptionMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_optionComponentMapForSemanticAnalysis_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_optionComponentMapForSemanticAnalysis_2D_element::reader_mIsPredefined (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsPredefined ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis_2D_element::reader_mBoolOptionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBoolOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis_2D_element::reader_mUIntOptionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUIntOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis_2D_element::reader_mStringOptionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStringOptionMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @optionComponentMapForSemanticAnalysis-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2D_element ("optionComponentMapForSemanticAnalysis-element",
                                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_optionComponentMapForSemanticAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_optionComponentMapForSemanticAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentMapForSemanticAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis_2D_element GALGAS_optionComponentMapForSemanticAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentMapForSemanticAnalysis_2D_element result ;
  const GALGAS_optionComponentMapForSemanticAnalysis_2D_element * p = (const GALGAS_optionComponentMapForSemanticAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionComponentMapForSemanticAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForSemanticAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionMapForSemanticAnalysis_2D_element::GALGAS_optionMapForSemanticAnalysis_2D_element (void) :
mAttribute_lkey (),
mAttribute_mOptionType (),
mAttribute_mOptionChar (),
mAttribute_mOptionString (),
mAttribute_mComment (),
mAttribute_mDefaultValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionMapForSemanticAnalysis_2D_element::~ GALGAS_optionMapForSemanticAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionMapForSemanticAnalysis_2D_element::GALGAS_optionMapForSemanticAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_unifiedTypeMapProxy & inOperand1,
                                                                                                const GALGAS_char & inOperand2,
                                                                                                const GALGAS_string & inOperand3,
                                                                                                const GALGAS_string & inOperand4,
                                                                                                const GALGAS_string & inOperand5) :
mAttribute_lkey (inOperand0),
mAttribute_mOptionType (inOperand1),
mAttribute_mOptionChar (inOperand2),
mAttribute_mOptionString (inOperand3),
mAttribute_mComment (inOperand4),
mAttribute_mDefaultValue (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionMapForSemanticAnalysis_2D_element GALGAS_optionMapForSemanticAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_optionMapForSemanticAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                                         GALGAS_char::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionMapForSemanticAnalysis_2D_element GALGAS_optionMapForSemanticAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_unifiedTypeMapProxy & inOperand1,
                                                                                                                const GALGAS_char & inOperand2,
                                                                                                                const GALGAS_string & inOperand3,
                                                                                                                const GALGAS_string & inOperand4,
                                                                                                                const GALGAS_string & inOperand5 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionMapForSemanticAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_optionMapForSemanticAnalysis_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_optionMapForSemanticAnalysis_2D_element::objectCompare (const GALGAS_optionMapForSemanticAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionType.objectCompare (inOperand.mAttribute_mOptionType) ;
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

bool GALGAS_optionMapForSemanticAnalysis_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mOptionType.isValid () && mAttribute_mOptionChar.isValid () && mAttribute_mOptionString.isValid () && mAttribute_mComment.isValid () && mAttribute_mDefaultValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionMapForSemanticAnalysis_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mOptionType.drop () ;
  mAttribute_mOptionChar.drop () ;
  mAttribute_mOptionString.drop () ;
  mAttribute_mComment.drop () ;
  mAttribute_mDefaultValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionMapForSemanticAnalysis_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @optionMapForSemanticAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionType.description (ioString, inIndentation+1) ;
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

GALGAS_lstring GALGAS_optionMapForSemanticAnalysis_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_optionMapForSemanticAnalysis_2D_element::reader_mOptionType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char GALGAS_optionMapForSemanticAnalysis_2D_element::reader_mOptionChar (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionChar ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_optionMapForSemanticAnalysis_2D_element::reader_mOptionString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_optionMapForSemanticAnalysis_2D_element::reader_mComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_optionMapForSemanticAnalysis_2D_element::reader_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefaultValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @optionMapForSemanticAnalysis-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionMapForSemanticAnalysis_2D_element ("optionMapForSemanticAnalysis-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_optionMapForSemanticAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionMapForSemanticAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_optionMapForSemanticAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionMapForSemanticAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionMapForSemanticAnalysis_2D_element GALGAS_optionMapForSemanticAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_optionMapForSemanticAnalysis_2D_element result ;
  const GALGAS_optionMapForSemanticAnalysis_2D_element * p = (const GALGAS_optionMapForSemanticAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionMapForSemanticAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionMapForSemanticAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (void) :
mAttribute_lkey (),
mAttribute_mTerminalMap (),
mAttribute_mIndexingListAST (),
mAttribute_mIndexingDirectory () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::~ GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_terminalMap & inOperand1,
                                                                                                                    const GALGAS_indexingListAST & inOperand2,
                                                                                                                    const GALGAS_lstring & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mTerminalMap (inOperand1),
mAttribute_mIndexingListAST (inOperand2),
mAttribute_mIndexingDirectory (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_terminalMap::constructor_emptyMap (HERE),
                                                                   GALGAS_indexingListAST::constructor_emptyList (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                    const GALGAS_terminalMap & inOperand1,
                                                                                                                                    const GALGAS_indexingListAST & inOperand2,
                                                                                                                                    const GALGAS_lstring & inOperand3 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::objectCompare (const GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTerminalMap.objectCompare (inOperand.mAttribute_mTerminalMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndexingListAST.objectCompare (inOperand.mAttribute_mIndexingListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndexingDirectory.objectCompare (inOperand.mAttribute_mIndexingDirectory) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTerminalMap.isValid () && mAttribute_mIndexingListAST.isValid () && mAttribute_mIndexingDirectory.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mTerminalMap.drop () ;
  mAttribute_mIndexingListAST.drop () ;
  mAttribute_mIndexingDirectory.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @lexiqueComponentMapForSemanticAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTerminalMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndexingListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndexingDirectory.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::reader_mTerminalMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::reader_mIndexingListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexingListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::reader_mIndexingDirectory (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexingDirectory ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @lexiqueComponentMapForSemanticAnalysis-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element ("lexiqueComponentMapForSemanticAnalysis-element",
                                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element result ;
  const GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element * p = (const GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentMapForSemanticAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForType_2D_element::GALGAS_categoryMethodMapForType_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFormalParameterList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForType_2D_element::~ GALGAS_categoryMethodMapForType_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForType_2D_element::GALGAS_categoryMethodMapForType_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_formalParameterListAST & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mFormalParameterList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForType_2D_element GALGAS_categoryMethodMapForType_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_categoryMethodMapForType_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_formalParameterListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForType_2D_element GALGAS_categoryMethodMapForType_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_formalParameterListAST & inOperand1 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_categoryMethodMapForType_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_categoryMethodMapForType_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_categoryMethodMapForType_2D_element::objectCompare (const GALGAS_categoryMethodMapForType_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalParameterList.objectCompare (inOperand.mAttribute_mFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_categoryMethodMapForType_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalParameterList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryMethodMapForType_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFormalParameterList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryMethodMapForType_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @categoryMethodMapForType-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_categoryMethodMapForType_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_categoryMethodMapForType_2D_element::reader_mFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalParameterList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @categoryMethodMapForType-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_categoryMethodMapForType_2D_element ("categoryMethodMapForType-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_categoryMethodMapForType_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_categoryMethodMapForType_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_categoryMethodMapForType_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_categoryMethodMapForType_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForType_2D_element GALGAS_categoryMethodMapForType_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_categoryMethodMapForType_2D_element result ;
  const GALGAS_categoryMethodMapForType_2D_element * p = (const GALGAS_categoryMethodMapForType_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_categoryMethodMapForType_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("categoryMethodMapForType-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForBuildingContext_2D_element::GALGAS_categoryMethodMapForBuildingContext_2D_element (void) :
mAttribute_lkey (),
mAttribute_mCategoryMethodMapForType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForBuildingContext_2D_element::~ GALGAS_categoryMethodMapForBuildingContext_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForBuildingContext_2D_element::GALGAS_categoryMethodMapForBuildingContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_categoryMethodMapForType & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mCategoryMethodMapForType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForBuildingContext_2D_element GALGAS_categoryMethodMapForBuildingContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_categoryMethodMapForBuildingContext_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_categoryMethodMapForType::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForBuildingContext_2D_element GALGAS_categoryMethodMapForBuildingContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_categoryMethodMapForType & inOperand1 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_categoryMethodMapForBuildingContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_categoryMethodMapForBuildingContext_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_categoryMethodMapForBuildingContext_2D_element::objectCompare (const GALGAS_categoryMethodMapForBuildingContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCategoryMethodMapForType.objectCompare (inOperand.mAttribute_mCategoryMethodMapForType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_categoryMethodMapForBuildingContext_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mCategoryMethodMapForType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryMethodMapForBuildingContext_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mCategoryMethodMapForType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryMethodMapForBuildingContext_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @categoryMethodMapForBuildingContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCategoryMethodMapForType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_categoryMethodMapForBuildingContext_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForType GALGAS_categoryMethodMapForBuildingContext_2D_element::reader_mCategoryMethodMapForType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCategoryMethodMapForType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @categoryMethodMapForBuildingContext-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_categoryMethodMapForBuildingContext_2D_element ("categoryMethodMapForBuildingContext-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_categoryMethodMapForBuildingContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_categoryMethodMapForBuildingContext_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_categoryMethodMapForBuildingContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_categoryMethodMapForBuildingContext_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForBuildingContext_2D_element GALGAS_categoryMethodMapForBuildingContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_categoryMethodMapForBuildingContext_2D_element result ;
  const GALGAS_categoryMethodMapForBuildingContext_2D_element * p = (const GALGAS_categoryMethodMapForBuildingContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_categoryMethodMapForBuildingContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("categoryMethodMapForBuildingContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForType_2D_element::GALGAS_categoryModifierMapForType_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFormalParameterList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForType_2D_element::~ GALGAS_categoryModifierMapForType_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForType_2D_element::GALGAS_categoryModifierMapForType_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_formalParameterListAST & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mFormalParameterList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForType_2D_element GALGAS_categoryModifierMapForType_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_categoryModifierMapForType_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_formalParameterListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForType_2D_element GALGAS_categoryModifierMapForType_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_formalParameterListAST & inOperand1 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_categoryModifierMapForType_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_categoryModifierMapForType_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_categoryModifierMapForType_2D_element::objectCompare (const GALGAS_categoryModifierMapForType_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalParameterList.objectCompare (inOperand.mAttribute_mFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_categoryModifierMapForType_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalParameterList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryModifierMapForType_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFormalParameterList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryModifierMapForType_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @categoryModifierMapForType-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_categoryModifierMapForType_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_categoryModifierMapForType_2D_element::reader_mFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalParameterList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @categoryModifierMapForType-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_categoryModifierMapForType_2D_element ("categoryModifierMapForType-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_categoryModifierMapForType_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_categoryModifierMapForType_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_categoryModifierMapForType_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_categoryModifierMapForType_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForType_2D_element GALGAS_categoryModifierMapForType_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_categoryModifierMapForType_2D_element result ;
  const GALGAS_categoryModifierMapForType_2D_element * p = (const GALGAS_categoryModifierMapForType_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_categoryModifierMapForType_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("categoryModifierMapForType-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForBuildingContext_2D_element::GALGAS_categoryModifierMapForBuildingContext_2D_element (void) :
mAttribute_lkey (),
mAttribute_mCategoryModifierMapForType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForBuildingContext_2D_element::~ GALGAS_categoryModifierMapForBuildingContext_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForBuildingContext_2D_element::GALGAS_categoryModifierMapForBuildingContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_categoryModifierMapForType & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mCategoryModifierMapForType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForBuildingContext_2D_element GALGAS_categoryModifierMapForBuildingContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_categoryModifierMapForBuildingContext_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_categoryModifierMapForType::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForBuildingContext_2D_element GALGAS_categoryModifierMapForBuildingContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_categoryModifierMapForType & inOperand1 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_categoryModifierMapForBuildingContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_categoryModifierMapForBuildingContext_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_categoryModifierMapForBuildingContext_2D_element::objectCompare (const GALGAS_categoryModifierMapForBuildingContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCategoryModifierMapForType.objectCompare (inOperand.mAttribute_mCategoryModifierMapForType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_categoryModifierMapForBuildingContext_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mCategoryModifierMapForType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryModifierMapForBuildingContext_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mCategoryModifierMapForType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryModifierMapForBuildingContext_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @categoryModifierMapForBuildingContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCategoryModifierMapForType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_categoryModifierMapForBuildingContext_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForType GALGAS_categoryModifierMapForBuildingContext_2D_element::reader_mCategoryModifierMapForType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCategoryModifierMapForType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @categoryModifierMapForBuildingContext-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_categoryModifierMapForBuildingContext_2D_element ("categoryModifierMapForBuildingContext-element",
                                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_categoryModifierMapForBuildingContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_categoryModifierMapForBuildingContext_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_categoryModifierMapForBuildingContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_categoryModifierMapForBuildingContext_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForBuildingContext_2D_element GALGAS_categoryModifierMapForBuildingContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_categoryModifierMapForBuildingContext_2D_element result ;
  const GALGAS_categoryModifierMapForBuildingContext_2D_element * p = (const GALGAS_categoryModifierMapForBuildingContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_categoryModifierMapForBuildingContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("categoryModifierMapForBuildingContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForType_2D_element::GALGAS_categoryReaderMapForType_2D_element (void) :
mAttribute_lkey (),
mAttribute_mResultTypeName (),
mAttribute_mInputFormalParameterList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForType_2D_element::~ GALGAS_categoryReaderMapForType_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForType_2D_element::GALGAS_categoryReaderMapForType_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_formalInputParameterListAST & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mResultTypeName (inOperand1),
mAttribute_mInputFormalParameterList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForType_2D_element GALGAS_categoryReaderMapForType_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_categoryReaderMapForType_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_formalInputParameterListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForType_2D_element GALGAS_categoryReaderMapForType_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                        const GALGAS_formalInputParameterListAST & inOperand2 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_categoryReaderMapForType_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_categoryReaderMapForType_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_categoryReaderMapForType_2D_element::objectCompare (const GALGAS_categoryReaderMapForType_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultTypeName.objectCompare (inOperand.mAttribute_mResultTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInputFormalParameterList.objectCompare (inOperand.mAttribute_mInputFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_categoryReaderMapForType_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mResultTypeName.isValid () && mAttribute_mInputFormalParameterList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryReaderMapForType_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mResultTypeName.drop () ;
  mAttribute_mInputFormalParameterList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryReaderMapForType_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @categoryReaderMapForType-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInputFormalParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_categoryReaderMapForType_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_categoryReaderMapForType_2D_element::reader_mResultTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST GALGAS_categoryReaderMapForType_2D_element::reader_mInputFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputFormalParameterList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @categoryReaderMapForType-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_categoryReaderMapForType_2D_element ("categoryReaderMapForType-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_categoryReaderMapForType_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_categoryReaderMapForType_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_categoryReaderMapForType_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_categoryReaderMapForType_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForType_2D_element GALGAS_categoryReaderMapForType_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_categoryReaderMapForType_2D_element result ;
  const GALGAS_categoryReaderMapForType_2D_element * p = (const GALGAS_categoryReaderMapForType_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_categoryReaderMapForType_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("categoryReaderMapForType-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForBuildingContext_2D_element::GALGAS_categoryReaderMapForBuildingContext_2D_element (void) :
mAttribute_lkey (),
mAttribute_mCategoryReaderMapForType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForBuildingContext_2D_element::~ GALGAS_categoryReaderMapForBuildingContext_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForBuildingContext_2D_element::GALGAS_categoryReaderMapForBuildingContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_categoryReaderMapForType & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mCategoryReaderMapForType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForBuildingContext_2D_element GALGAS_categoryReaderMapForBuildingContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_categoryReaderMapForBuildingContext_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_categoryReaderMapForType::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForBuildingContext_2D_element GALGAS_categoryReaderMapForBuildingContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_categoryReaderMapForType & inOperand1 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_categoryReaderMapForBuildingContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_categoryReaderMapForBuildingContext_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_categoryReaderMapForBuildingContext_2D_element::objectCompare (const GALGAS_categoryReaderMapForBuildingContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCategoryReaderMapForType.objectCompare (inOperand.mAttribute_mCategoryReaderMapForType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_categoryReaderMapForBuildingContext_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mCategoryReaderMapForType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryReaderMapForBuildingContext_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mCategoryReaderMapForType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryReaderMapForBuildingContext_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @categoryReaderMapForBuildingContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCategoryReaderMapForType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_categoryReaderMapForBuildingContext_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForType GALGAS_categoryReaderMapForBuildingContext_2D_element::reader_mCategoryReaderMapForType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCategoryReaderMapForType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @categoryReaderMapForBuildingContext-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_categoryReaderMapForBuildingContext_2D_element ("categoryReaderMapForBuildingContext-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_categoryReaderMapForBuildingContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_categoryReaderMapForBuildingContext_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_categoryReaderMapForBuildingContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_categoryReaderMapForBuildingContext_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForBuildingContext_2D_element GALGAS_categoryReaderMapForBuildingContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_categoryReaderMapForBuildingContext_2D_element result ;
  const GALGAS_categoryReaderMapForBuildingContext_2D_element * p = (const GALGAS_categoryReaderMapForBuildingContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_categoryReaderMapForBuildingContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("categoryReaderMapForBuildingContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperExtensionMap_2D_element::GALGAS_wrapperExtensionMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperExtensionMap_2D_element::~ GALGAS_wrapperExtensionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperExtensionMap_2D_element::GALGAS_wrapperExtensionMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperExtensionMap_2D_element GALGAS_wrapperExtensionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_wrapperExtensionMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperExtensionMap_2D_element GALGAS_wrapperExtensionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_wrapperExtensionMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_wrapperExtensionMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_wrapperExtensionMap_2D_element::objectCompare (const GALGAS_wrapperExtensionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_wrapperExtensionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperExtensionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperExtensionMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @wrapperExtensionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_wrapperExtensionMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @wrapperExtensionMap-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_wrapperExtensionMap_2D_element ("wrapperExtensionMap-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_wrapperExtensionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperExtensionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_wrapperExtensionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_wrapperExtensionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperExtensionMap_2D_element GALGAS_wrapperExtensionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_wrapperExtensionMap_2D_element result ;
  const GALGAS_wrapperExtensionMap_2D_element * p = (const GALGAS_wrapperExtensionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_wrapperExtensionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperExtensionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration_2D_element::GALGAS_formalParameterListForGeneration_2D_element (void) :
mAttribute_mFormalSelector (),
mAttribute_mFormalArgumentPassingMode (),
mAttribute_mFormalArgumentType (),
mAttribute_mFormalArgumentName (),
mAttribute_mFormalArgumentCppName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration_2D_element::~ GALGAS_formalParameterListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration_2D_element::GALGAS_formalParameterListForGeneration_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                                        const GALGAS_unifiedTypeMapProxy & inOperand2,
                                                                                                        const GALGAS_lstring & inOperand3,
                                                                                                        const GALGAS_string & inOperand4) :
mAttribute_mFormalSelector (inOperand0),
mAttribute_mFormalArgumentPassingMode (inOperand1),
mAttribute_mFormalArgumentType (inOperand2),
mAttribute_mFormalArgumentName (inOperand3),
mAttribute_mFormalArgumentCppName (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration_2D_element GALGAS_formalParameterListForGeneration_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                                                        const GALGAS_unifiedTypeMapProxy & inOperand2,
                                                                                                                        const GALGAS_lstring & inOperand3,
                                                                                                                        const GALGAS_string & inOperand4 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_formalParameterListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_formalParameterListForGeneration_2D_element::objectCompare (const GALGAS_formalParameterListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalSelector.objectCompare (inOperand.mAttribute_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentPassingMode.objectCompare (inOperand.mAttribute_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentType.objectCompare (inOperand.mAttribute_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentCppName.objectCompare (inOperand.mAttribute_mFormalArgumentCppName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_formalParameterListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mFormalSelector.isValid () && mAttribute_mFormalArgumentPassingMode.isValid () && mAttribute_mFormalArgumentType.isValid () && mAttribute_mFormalArgumentName.isValid () && mAttribute_mFormalArgumentCppName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListForGeneration_2D_element::drop (void) {
  mAttribute_mFormalSelector.drop () ;
  mAttribute_mFormalArgumentPassingMode.drop () ;
  mAttribute_mFormalArgumentType.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
  mAttribute_mFormalArgumentCppName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListForGeneration_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @formalParameterListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentCppName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalParameterListForGeneration_2D_element::reader_mFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST GALGAS_formalParameterListForGeneration_2D_element::reader_mFormalArgumentPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_formalParameterListForGeneration_2D_element::reader_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalParameterListForGeneration_2D_element::reader_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_formalParameterListForGeneration_2D_element::reader_mFormalArgumentCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentCppName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @formalParameterListForGeneration-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalParameterListForGeneration_2D_element ("formalParameterListForGeneration-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formalParameterListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formalParameterListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalParameterListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration_2D_element GALGAS_formalParameterListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterListForGeneration_2D_element result ;
  const GALGAS_formalParameterListForGeneration_2D_element * p = (const GALGAS_formalParameterListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalParameterListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration_2D_element::GALGAS_formalInputParameterListForGeneration_2D_element (void) :
mAttribute_mFormalSelector (),
mAttribute_mFormalArgumentType (),
mAttribute_mFormalArgumentCppName (),
mAttribute_mFormalArgumentName (),
mAttribute_mIsConstant () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration_2D_element::~ GALGAS_formalInputParameterListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration_2D_element::GALGAS_formalInputParameterListForGeneration_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_unifiedTypeMapProxy & inOperand1,
                                                                                                                  const GALGAS_string & inOperand2,
                                                                                                                  const GALGAS_lstring & inOperand3,
                                                                                                                  const GALGAS_bool & inOperand4) :
mAttribute_mFormalSelector (inOperand0),
mAttribute_mFormalArgumentType (inOperand1),
mAttribute_mFormalArgumentCppName (inOperand2),
mAttribute_mFormalArgumentName (inOperand3),
mAttribute_mIsConstant (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration_2D_element GALGAS_formalInputParameterListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalInputParameterListForGeneration_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                                                  GALGAS_string::constructor_default (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration_2D_element GALGAS_formalInputParameterListForGeneration_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_unifiedTypeMapProxy & inOperand1,
                                                                                                                                  const GALGAS_string & inOperand2,
                                                                                                                                  const GALGAS_lstring & inOperand3,
                                                                                                                                  const GALGAS_bool & inOperand4 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalInputParameterListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_formalInputParameterListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_formalInputParameterListForGeneration_2D_element::objectCompare (const GALGAS_formalInputParameterListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalSelector.objectCompare (inOperand.mAttribute_mFormalSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentType.objectCompare (inOperand.mAttribute_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentCppName.objectCompare (inOperand.mAttribute_mFormalArgumentCppName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsConstant.objectCompare (inOperand.mAttribute_mIsConstant) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_formalInputParameterListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mFormalSelector.isValid () && mAttribute_mFormalArgumentType.isValid () && mAttribute_mFormalArgumentCppName.isValid () && mAttribute_mFormalArgumentName.isValid () && mAttribute_mIsConstant.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListForGeneration_2D_element::drop (void) {
  mAttribute_mFormalSelector.drop () ;
  mAttribute_mFormalArgumentType.drop () ;
  mAttribute_mFormalArgumentCppName.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
  mAttribute_mIsConstant.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListForGeneration_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @formalInputParameterListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentCppName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsConstant.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalInputParameterListForGeneration_2D_element::reader_mFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_formalInputParameterListForGeneration_2D_element::reader_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_formalInputParameterListForGeneration_2D_element::reader_mFormalArgumentCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalInputParameterListForGeneration_2D_element::reader_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_formalInputParameterListForGeneration_2D_element::reader_mIsConstant (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsConstant ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @formalInputParameterListForGeneration-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalInputParameterListForGeneration_2D_element ("formalInputParameterListForGeneration-element",
                                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formalInputParameterListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalInputParameterListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formalInputParameterListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalInputParameterListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration_2D_element GALGAS_formalInputParameterListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_formalInputParameterListForGeneration_2D_element result ;
  const GALGAS_formalInputParameterListForGeneration_2D_element * p = (const GALGAS_formalInputParameterListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalInputParameterListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalInputParameterListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration_2D_element::GALGAS_actualParameterListForGeneration_2D_element (void) :
mAttribute_mActualParameter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration_2D_element::~ GALGAS_actualParameterListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration_2D_element::GALGAS_actualParameterListForGeneration_2D_element (const GALGAS_actualParameterForGeneration & inOperand0) :
mAttribute_mActualParameter (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration_2D_element GALGAS_actualParameterListForGeneration_2D_element::constructor_new (const GALGAS_actualParameterForGeneration & inOperand0 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualParameterListForGeneration_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_actualParameterListForGeneration_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_actualParameterListForGeneration_2D_element::objectCompare (const GALGAS_actualParameterListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mActualParameter.objectCompare (inOperand.mAttribute_mActualParameter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_actualParameterListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mActualParameter.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListForGeneration_2D_element::drop (void) {
  mAttribute_mActualParameter.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListForGeneration_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @actualParameterListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mActualParameter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterForGeneration GALGAS_actualParameterListForGeneration_2D_element::reader_mActualParameter (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameter ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @actualParameterListForGeneration-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualParameterListForGeneration_2D_element ("actualParameterListForGeneration-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actualParameterListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actualParameterListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration_2D_element GALGAS_actualParameterListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterListForGeneration_2D_element result ;
  const GALGAS_actualParameterListForGeneration_2D_element * p = (const GALGAS_actualParameterListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualParameterListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListForGeneration_2D_element::GALGAS_castInstructionBranchListForGeneration_2D_element (void) :
mAttribute_mTypeComparisonKind (),
mAttribute_mType (),
mAttribute_mCastedVarCppName (),
mAttribute_mInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListForGeneration_2D_element::~ GALGAS_castInstructionBranchListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListForGeneration_2D_element::GALGAS_castInstructionBranchListForGeneration_2D_element (const GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                                                                    const GALGAS_unifiedTypeMapProxy & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2,
                                                                                                                    const GALGAS_semanticInstructionListForGeneration & inOperand3) :
mAttribute_mTypeComparisonKind (inOperand0),
mAttribute_mType (inOperand1),
mAttribute_mCastedVarCppName (inOperand2),
mAttribute_mInstructionList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListForGeneration_2D_element GALGAS_castInstructionBranchListForGeneration_2D_element::constructor_new (const GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                                                                                    const GALGAS_unifiedTypeMapProxy & inOperand1,
                                                                                                                                    const GALGAS_string & inOperand2,
                                                                                                                                    const GALGAS_semanticInstructionListForGeneration & inOperand3 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_castInstructionBranchListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_castInstructionBranchListForGeneration_2D_element::objectCompare (const GALGAS_castInstructionBranchListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTypeComparisonKind.objectCompare (inOperand.mAttribute_mTypeComparisonKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCastedVarCppName.objectCompare (inOperand.mAttribute_mCastedVarCppName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_castInstructionBranchListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mTypeComparisonKind.isValid () && mAttribute_mType.isValid () && mAttribute_mCastedVarCppName.isValid () && mAttribute_mInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListForGeneration_2D_element::drop (void) {
  mAttribute_mTypeComparisonKind.drop () ;
  mAttribute_mType.drop () ;
  mAttribute_mCastedVarCppName.drop () ;
  mAttribute_mInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListForGeneration_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @castInstructionBranchListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTypeComparisonKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCastedVarCppName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dynamicTypeComparisonKind GALGAS_castInstructionBranchListForGeneration_2D_element::reader_mTypeComparisonKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeComparisonKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_castInstructionBranchListForGeneration_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_castInstructionBranchListForGeneration_2D_element::reader_mCastedVarCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCastedVarCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_castInstructionBranchListForGeneration_2D_element::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @castInstructionBranchListForGeneration-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration_2D_element ("castInstructionBranchListForGeneration-element",
                                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_castInstructionBranchListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_castInstructionBranchListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInstructionBranchListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListForGeneration_2D_element GALGAS_castInstructionBranchListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListForGeneration_2D_element result ;
  const GALGAS_castInstructionBranchListForGeneration_2D_element * p = (const GALGAS_castInstructionBranchListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_castInstructionBranchListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInstructionBranchListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration_2D_element::GALGAS_extractedAssociatedValuesForGeneration_2D_element (void) :
mAttribute_mType (),
mAttribute_mCppName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration_2D_element::~ GALGAS_extractedAssociatedValuesForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration_2D_element::GALGAS_extractedAssociatedValuesForGeneration_2D_element (const GALGAS_unifiedTypeMapProxy & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1) :
mAttribute_mType (inOperand0),
mAttribute_mCppName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration_2D_element GALGAS_extractedAssociatedValuesForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extractedAssociatedValuesForGeneration_2D_element (GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                                                   GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration_2D_element GALGAS_extractedAssociatedValuesForGeneration_2D_element::constructor_new (const GALGAS_unifiedTypeMapProxy & inOperand0,
                                                                                                                                    const GALGAS_string & inOperand1 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extractedAssociatedValuesForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extractedAssociatedValuesForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_extractedAssociatedValuesForGeneration_2D_element::objectCompare (const GALGAS_extractedAssociatedValuesForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCppName.objectCompare (inOperand.mAttribute_mCppName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_extractedAssociatedValuesForGeneration_2D_element::isValid (void) const {
  return mAttribute_mType.isValid () && mAttribute_mCppName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extractedAssociatedValuesForGeneration_2D_element::drop (void) {
  mAttribute_mType.drop () ;
  mAttribute_mCppName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extractedAssociatedValuesForGeneration_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @extractedAssociatedValuesForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCppName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_extractedAssociatedValuesForGeneration_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_extractedAssociatedValuesForGeneration_2D_element::reader_mCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @extractedAssociatedValuesForGeneration-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration_2D_element ("extractedAssociatedValuesForGeneration-element",
                                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extractedAssociatedValuesForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extractedAssociatedValuesForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extractedAssociatedValuesForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration_2D_element GALGAS_extractedAssociatedValuesForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_extractedAssociatedValuesForGeneration_2D_element result ;
  const GALGAS_extractedAssociatedValuesForGeneration_2D_element * p = (const GALGAS_extractedAssociatedValuesForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extractedAssociatedValuesForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extractedAssociatedValuesForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonStateMap_2D_element::GALGAS_mapAutomatonStateMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mStateIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonStateMap_2D_element::~ GALGAS_mapAutomatonStateMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonStateMap_2D_element::GALGAS_mapAutomatonStateMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mStateIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonStateMap_2D_element GALGAS_mapAutomatonStateMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapAutomatonStateMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonStateMap_2D_element GALGAS_mapAutomatonStateMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_uint & inOperand1 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mapAutomatonStateMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_mapAutomatonStateMap_2D_element (inOperand0, inOperand1) ;
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
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_mapAutomatonStateMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mStateIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapAutomatonStateMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mStateIndex.drop () ;
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
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapAutomatonStateMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_mapAutomatonStateMap_2D_element::reader_mStateIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateIndex ;
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

GALGAS_lstring GALGAS_mapAutomatonActionMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_mapAutomatonActionMap_2D_element::reader_mActionIndex (UNUSED_LOCATION_ARGS) const {
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

GALGAS_abstractMethodDefinitionListForGeneration_2D_element::GALGAS_abstractMethodDefinitionListForGeneration_2D_element (void) :
mAttribute_mIsOverriding (),
mAttribute_mMethodName (),
mAttribute_mSignature () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractMethodDefinitionListForGeneration_2D_element::~ GALGAS_abstractMethodDefinitionListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractMethodDefinitionListForGeneration_2D_element::GALGAS_abstractMethodDefinitionListForGeneration_2D_element (const GALGAS_bool & inOperand0,
                                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                                          const GALGAS_formalParameterListForGeneration & inOperand2) :
mAttribute_mIsOverriding (inOperand0),
mAttribute_mMethodName (inOperand1),
mAttribute_mSignature (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractMethodDefinitionListForGeneration_2D_element GALGAS_abstractMethodDefinitionListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_abstractMethodDefinitionListForGeneration_2D_element (GALGAS_bool::constructor_default (HERE),
                                                                      GALGAS_lstring::constructor_default (HERE),
                                                                      GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractMethodDefinitionListForGeneration_2D_element GALGAS_abstractMethodDefinitionListForGeneration_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                                                          const GALGAS_formalParameterListForGeneration & inOperand2 
                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_abstractMethodDefinitionListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_abstractMethodDefinitionListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_abstractMethodDefinitionListForGeneration_2D_element::objectCompare (const GALGAS_abstractMethodDefinitionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mIsOverriding.objectCompare (inOperand.mAttribute_mIsOverriding) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMethodName.objectCompare (inOperand.mAttribute_mMethodName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSignature.objectCompare (inOperand.mAttribute_mSignature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_abstractMethodDefinitionListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mIsOverriding.isValid () && mAttribute_mMethodName.isValid () && mAttribute_mSignature.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_abstractMethodDefinitionListForGeneration_2D_element::drop (void) {
  mAttribute_mIsOverriding.drop () ;
  mAttribute_mMethodName.drop () ;
  mAttribute_mSignature.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_abstractMethodDefinitionListForGeneration_2D_element::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "<struct @abstractMethodDefinitionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mIsOverriding.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMethodName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSignature.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_abstractMethodDefinitionListForGeneration_2D_element::reader_mIsOverriding (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsOverriding ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_abstractMethodDefinitionListForGeneration_2D_element::reader_mMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_abstractMethodDefinitionListForGeneration_2D_element::reader_mSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignature ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @abstractMethodDefinitionListForGeneration-element type                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractMethodDefinitionListForGeneration_2D_element ("abstractMethodDefinitionListForGeneration-element",
                                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractMethodDefinitionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractMethodDefinitionListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractMethodDefinitionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractMethodDefinitionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractMethodDefinitionListForGeneration_2D_element GALGAS_abstractMethodDefinitionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractMethodDefinitionListForGeneration_2D_element result ;
  const GALGAS_abstractMethodDefinitionListForGeneration_2D_element * p = (const GALGAS_abstractMethodDefinitionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractMethodDefinitionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractMethodDefinitionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodDefinitionListForGeneration_2D_element::GALGAS_methodDefinitionListForGeneration_2D_element (void) :
mAttribute_mIsOverriding (),
mAttribute_mMethodName (),
mAttribute_mSignature (),
mAttribute_mInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodDefinitionListForGeneration_2D_element::~ GALGAS_methodDefinitionListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodDefinitionListForGeneration_2D_element::GALGAS_methodDefinitionListForGeneration_2D_element (const GALGAS_bool & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                          const GALGAS_formalParameterListForGeneration & inOperand2,
                                                                                                          const GALGAS_semanticInstructionListForGeneration & inOperand3) :
mAttribute_mIsOverriding (inOperand0),
mAttribute_mMethodName (inOperand1),
mAttribute_mSignature (inOperand2),
mAttribute_mInstructionList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodDefinitionListForGeneration_2D_element GALGAS_methodDefinitionListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_methodDefinitionListForGeneration_2D_element (GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                              GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodDefinitionListForGeneration_2D_element GALGAS_methodDefinitionListForGeneration_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                                          const GALGAS_formalParameterListForGeneration & inOperand2,
                                                                                                                          const GALGAS_semanticInstructionListForGeneration & inOperand3 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_methodDefinitionListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_methodDefinitionListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_methodDefinitionListForGeneration_2D_element::objectCompare (const GALGAS_methodDefinitionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mIsOverriding.objectCompare (inOperand.mAttribute_mIsOverriding) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMethodName.objectCompare (inOperand.mAttribute_mMethodName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSignature.objectCompare (inOperand.mAttribute_mSignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_methodDefinitionListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mIsOverriding.isValid () && mAttribute_mMethodName.isValid () && mAttribute_mSignature.isValid () && mAttribute_mInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_methodDefinitionListForGeneration_2D_element::drop (void) {
  mAttribute_mIsOverriding.drop () ;
  mAttribute_mMethodName.drop () ;
  mAttribute_mSignature.drop () ;
  mAttribute_mInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_methodDefinitionListForGeneration_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @methodDefinitionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mIsOverriding.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMethodName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_methodDefinitionListForGeneration_2D_element::reader_mIsOverriding (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsOverriding ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_methodDefinitionListForGeneration_2D_element::reader_mMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_methodDefinitionListForGeneration_2D_element::reader_mSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_methodDefinitionListForGeneration_2D_element::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @methodDefinitionListForGeneration-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_methodDefinitionListForGeneration_2D_element ("methodDefinitionListForGeneration-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_methodDefinitionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodDefinitionListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_methodDefinitionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_methodDefinitionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodDefinitionListForGeneration_2D_element GALGAS_methodDefinitionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_methodDefinitionListForGeneration_2D_element result ;
  const GALGAS_methodDefinitionListForGeneration_2D_element * p = (const GALGAS_methodDefinitionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_methodDefinitionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodDefinitionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_sortDescriptorListForGeneration_2D_element::GALGAS_sortDescriptorListForGeneration_2D_element (const GALGAS_unifiedTypeMapProxy & inOperand0,
                                                                                                      const GALGAS_string & inOperand1,
                                                                                                      const GALGAS_bool & inOperand2) :
mAttribute_mAttributeTypeIndex (inOperand0),
mAttribute_mAttributeName (inOperand1),
mAttribute_mAscendingOrder (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortDescriptorListForGeneration_2D_element GALGAS_sortDescriptorListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_sortDescriptorListForGeneration_2D_element (GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                                            GALGAS_string::constructor_default (HERE),
                                                            GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortDescriptorListForGeneration_2D_element GALGAS_sortDescriptorListForGeneration_2D_element::constructor_new (const GALGAS_unifiedTypeMapProxy & inOperand0,
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

GALGAS_unifiedTypeMapProxy GALGAS_sortDescriptorListForGeneration_2D_element::reader_mAttributeTypeIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeTypeIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_sortDescriptorListForGeneration_2D_element::reader_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_sortDescriptorListForGeneration_2D_element::reader_mAscendingOrder (UNUSED_LOCATION_ARGS) const {
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

GALGAS_localConstantList_2D_element::GALGAS_localConstantList_2D_element (void) :
mAttribute_mType (),
mAttribute_mName (),
mAttribute_mNoWarningIfUnused (),
mAttribute_mCppName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantList_2D_element::~ GALGAS_localConstantList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantList_2D_element::GALGAS_localConstantList_2D_element (const GALGAS_unifiedTypeMapProxy & inOperand0,
                                                                          const GALGAS_lstring & inOperand1,
                                                                          const GALGAS_bool & inOperand2,
                                                                          const GALGAS_string & inOperand3) :
mAttribute_mType (inOperand0),
mAttribute_mName (inOperand1),
mAttribute_mNoWarningIfUnused (inOperand2),
mAttribute_mCppName (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantList_2D_element GALGAS_localConstantList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_localConstantList_2D_element (GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                              GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_bool::constructor_default (HERE),
                                              GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantList_2D_element GALGAS_localConstantList_2D_element::constructor_new (const GALGAS_unifiedTypeMapProxy & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_bool & inOperand2,
                                                                                          const GALGAS_string & inOperand3 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_localConstantList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_localConstantList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_localConstantList_2D_element::objectCompare (const GALGAS_localConstantList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mName.objectCompare (inOperand.mAttribute_mName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNoWarningIfUnused.objectCompare (inOperand.mAttribute_mNoWarningIfUnused) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCppName.objectCompare (inOperand.mAttribute_mCppName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_localConstantList_2D_element::isValid (void) const {
  return mAttribute_mType.isValid () && mAttribute_mName.isValid () && mAttribute_mNoWarningIfUnused.isValid () && mAttribute_mCppName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localConstantList_2D_element::drop (void) {
  mAttribute_mType.drop () ;
  mAttribute_mName.drop () ;
  mAttribute_mNoWarningIfUnused.drop () ;
  mAttribute_mCppName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localConstantList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @localConstantList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNoWarningIfUnused.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCppName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_localConstantList_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_localConstantList_2D_element::reader_mName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_localConstantList_2D_element::reader_mNoWarningIfUnused (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNoWarningIfUnused ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_localConstantList_2D_element::reader_mCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @localConstantList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localConstantList_2D_element ("localConstantList-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_localConstantList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_localConstantList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localConstantList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localConstantList_2D_element GALGAS_localConstantList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_localConstantList_2D_element result ;
  const GALGAS_localConstantList_2D_element * p = (const GALGAS_localConstantList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localConstantList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localInitializedVariableList_2D_element::GALGAS_localInitializedVariableList_2D_element (void) :
mAttribute_mType (),
mAttribute_mName (),
mAttribute_mCppName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localInitializedVariableList_2D_element::~ GALGAS_localInitializedVariableList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localInitializedVariableList_2D_element::GALGAS_localInitializedVariableList_2D_element (const GALGAS_unifiedTypeMapProxy & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_string & inOperand2) :
mAttribute_mType (inOperand0),
mAttribute_mName (inOperand1),
mAttribute_mCppName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localInitializedVariableList_2D_element GALGAS_localInitializedVariableList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_localInitializedVariableList_2D_element (GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localInitializedVariableList_2D_element GALGAS_localInitializedVariableList_2D_element::constructor_new (const GALGAS_unifiedTypeMapProxy & inOperand0,
                                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                                const GALGAS_string & inOperand2 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_localInitializedVariableList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_localInitializedVariableList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_localInitializedVariableList_2D_element::objectCompare (const GALGAS_localInitializedVariableList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mName.objectCompare (inOperand.mAttribute_mName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCppName.objectCompare (inOperand.mAttribute_mCppName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_localInitializedVariableList_2D_element::isValid (void) const {
  return mAttribute_mType.isValid () && mAttribute_mName.isValid () && mAttribute_mCppName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localInitializedVariableList_2D_element::drop (void) {
  mAttribute_mType.drop () ;
  mAttribute_mName.drop () ;
  mAttribute_mCppName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_localInitializedVariableList_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @localInitializedVariableList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCppName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_localInitializedVariableList_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_localInitializedVariableList_2D_element::reader_mName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_localInitializedVariableList_2D_element::reader_mCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @localInitializedVariableList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localInitializedVariableList_2D_element ("localInitializedVariableList-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_localInitializedVariableList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localInitializedVariableList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_localInitializedVariableList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localInitializedVariableList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_localInitializedVariableList_2D_element GALGAS_localInitializedVariableList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_localInitializedVariableList_2D_element result ;
  const GALGAS_localInitializedVariableList_2D_element * p = (const GALGAS_localInitializedVariableList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_localInitializedVariableList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localInitializedVariableList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeIndexMap_2D_element::GALGAS_attributeIndexMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mAttributeTypeIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeIndexMap_2D_element::~ GALGAS_attributeIndexMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeIndexMap_2D_element::GALGAS_attributeIndexMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_unifiedTypeMapProxy & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mAttributeTypeIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeIndexMap_2D_element GALGAS_attributeIndexMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_attributeIndexMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_unifiedTypeMapProxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeIndexMap_2D_element GALGAS_attributeIndexMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_unifiedTypeMapProxy & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_attributeIndexMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_attributeIndexMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_attributeIndexMap_2D_element::objectCompare (const GALGAS_attributeIndexMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeTypeIndex.objectCompare (inOperand.mAttribute_mAttributeTypeIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_attributeIndexMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mAttributeTypeIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeIndexMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mAttributeTypeIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeIndexMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @attributeIndexMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAttributeTypeIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_attributeIndexMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_attributeIndexMap_2D_element::reader_mAttributeTypeIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeTypeIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @attributeIndexMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_attributeIndexMap_2D_element ("attributeIndexMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_attributeIndexMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeIndexMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_attributeIndexMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_attributeIndexMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeIndexMap_2D_element GALGAS_attributeIndexMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_attributeIndexMap_2D_element result ;
  const GALGAS_attributeIndexMap_2D_element * p = (const GALGAS_attributeIndexMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_attributeIndexMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("attributeIndexMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_lstring GALGAS_insertMethodMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_searchMethodMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
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

GALGAS_declaredMethodMap_2D_element::GALGAS_declaredMethodMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredMethodMap_2D_element::~ GALGAS_declaredMethodMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredMethodMap_2D_element::GALGAS_declaredMethodMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredMethodMap_2D_element GALGAS_declaredMethodMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_declaredMethodMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredMethodMap_2D_element GALGAS_declaredMethodMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declaredMethodMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_declaredMethodMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_declaredMethodMap_2D_element::objectCompare (const GALGAS_declaredMethodMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_declaredMethodMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declaredMethodMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declaredMethodMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @declaredMethodMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_declaredMethodMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @declaredMethodMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declaredMethodMap_2D_element ("declaredMethodMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_declaredMethodMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredMethodMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_declaredMethodMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declaredMethodMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredMethodMap_2D_element GALGAS_declaredMethodMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_declaredMethodMap_2D_element result ;
  const GALGAS_declaredMethodMap_2D_element * p = (const GALGAS_declaredMethodMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declaredMethodMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredMethodMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarComponentASTList_2D_element::GALGAS_grammarComponentASTList_2D_element (void) :
mAttribute_mGrammarComponentAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarComponentASTList_2D_element::~ GALGAS_grammarComponentASTList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarComponentASTList_2D_element::GALGAS_grammarComponentASTList_2D_element (const GALGAS_galgas_33_GrammarComponentListAST_2D_element & inOperand0) :
mAttribute_mGrammarComponentAST (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarComponentASTList_2D_element GALGAS_grammarComponentASTList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_grammarComponentASTList_2D_element (GALGAS_galgas_33_GrammarComponentListAST_2D_element::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarComponentASTList_2D_element GALGAS_grammarComponentASTList_2D_element::constructor_new (const GALGAS_galgas_33_GrammarComponentListAST_2D_element & inOperand0 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_grammarComponentASTList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_grammarComponentASTList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_grammarComponentASTList_2D_element::objectCompare (const GALGAS_grammarComponentASTList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mGrammarComponentAST.objectCompare (inOperand.mAttribute_mGrammarComponentAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_grammarComponentASTList_2D_element::isValid (void) const {
  return mAttribute_mGrammarComponentAST.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarComponentASTList_2D_element::drop (void) {
  mAttribute_mGrammarComponentAST.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarComponentASTList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @grammarComponentASTList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mGrammarComponentAST.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST_2D_element GALGAS_grammarComponentASTList_2D_element::reader_mGrammarComponentAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarComponentAST ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @grammarComponentASTList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarComponentASTList_2D_element ("grammarComponentASTList-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarComponentASTList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarComponentASTList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarComponentASTList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarComponentASTList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarComponentASTList_2D_element GALGAS_grammarComponentASTList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_grammarComponentASTList_2D_element result ;
  const GALGAS_grammarComponentASTList_2D_element * p = (const GALGAS_grammarComponentASTList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarComponentASTList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarComponentASTList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap_2D_element::GALGAS_nonterminalLabelMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mSignatureForGeneration (),
mAttribute_mSignature (),
mAttribute_mEndOfArgumentLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap_2D_element::~ GALGAS_nonterminalLabelMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap_2D_element::GALGAS_nonterminalLabelMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_formalParameterListForGeneration & inOperand1,
                                                                              const GALGAS_formalParameterSignature & inOperand2,
                                                                              const GALGAS_location & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mSignatureForGeneration (inOperand1),
mAttribute_mSignature (inOperand2),
mAttribute_mEndOfArgumentLocation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap_2D_element GALGAS_nonterminalLabelMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonterminalLabelMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                GALGAS_formalParameterSignature::constructor_emptyList (HERE),
                                                GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap_2D_element GALGAS_nonterminalLabelMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_formalParameterListForGeneration & inOperand1,
                                                                                              const GALGAS_formalParameterSignature & inOperand2,
                                                                                              const GALGAS_location & inOperand3 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalLabelMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_nonterminalLabelMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_nonterminalLabelMap_2D_element::objectCompare (const GALGAS_nonterminalLabelMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSignatureForGeneration.objectCompare (inOperand.mAttribute_mSignatureForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSignature.objectCompare (inOperand.mAttribute_mSignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfArgumentLocation.objectCompare (inOperand.mAttribute_mEndOfArgumentLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_nonterminalLabelMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSignatureForGeneration.isValid () && mAttribute_mSignature.isValid () && mAttribute_mEndOfArgumentLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalLabelMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mSignatureForGeneration.drop () ;
  mAttribute_mSignature.drop () ;
  mAttribute_mEndOfArgumentLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalLabelMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @nonterminalLabelMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSignatureForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfArgumentLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_nonterminalLabelMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_nonterminalLabelMap_2D_element::reader_mSignatureForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignatureForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_nonterminalLabelMap_2D_element::reader_mSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_nonterminalLabelMap_2D_element::reader_mEndOfArgumentLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfArgumentLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @nonterminalLabelMap-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalLabelMap_2D_element ("nonterminalLabelMap-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonterminalLabelMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalLabelMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonterminalLabelMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalLabelMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap_2D_element GALGAS_nonterminalLabelMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalLabelMap_2D_element result ;
  const GALGAS_nonterminalLabelMap_2D_element * p = (const GALGAS_nonterminalLabelMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonterminalLabelMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalLabelMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalMap_2D_element::GALGAS_nonterminalMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mLabelMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalMap_2D_element::~ GALGAS_nonterminalMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalMap_2D_element::GALGAS_nonterminalMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_nonterminalLabelMap & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mLabelMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalMap_2D_element GALGAS_nonterminalMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonterminalMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_nonterminalLabelMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalMap_2D_element GALGAS_nonterminalMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_nonterminalLabelMap & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_nonterminalMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_nonterminalMap_2D_element::objectCompare (const GALGAS_nonterminalMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLabelMap.objectCompare (inOperand.mAttribute_mLabelMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_nonterminalMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLabelMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mLabelMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @nonterminalMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLabelMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_nonterminalMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalLabelMap GALGAS_nonterminalMap_2D_element::reader_mLabelMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @nonterminalMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalMap_2D_element ("nonterminalMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonterminalMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonterminalMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalMap_2D_element GALGAS_nonterminalMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalMap_2D_element result ;
  const GALGAS_nonterminalMap_2D_element * p = (const GALGAS_nonterminalMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonterminalMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList_2D_element::GALGAS_ruleLabelImplementationList_2D_element (void) :
mAttribute_mLabelName (),
mAttribute_mSignatureForGeneration (),
mAttribute_mSignature (),
mAttribute_mEndOfArgumentLocation (),
mAttribute_mInstructionListForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList_2D_element::~ GALGAS_ruleLabelImplementationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList_2D_element::GALGAS_ruleLabelImplementationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_formalParameterListForGeneration & inOperand1,
                                                                                              const GALGAS_formalParameterSignature & inOperand2,
                                                                                              const GALGAS_location & inOperand3,
                                                                                              const GALGAS_semanticInstructionListForGeneration & inOperand4) :
mAttribute_mLabelName (inOperand0),
mAttribute_mSignatureForGeneration (inOperand1),
mAttribute_mSignature (inOperand2),
mAttribute_mEndOfArgumentLocation (inOperand3),
mAttribute_mInstructionListForGeneration (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList_2D_element GALGAS_ruleLabelImplementationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ruleLabelImplementationList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                        GALGAS_formalParameterSignature::constructor_emptyList (HERE),
                                                        GALGAS_location::constructor_nowhere (HERE),
                                                        GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList_2D_element GALGAS_ruleLabelImplementationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_formalParameterListForGeneration & inOperand1,
                                                                                                              const GALGAS_formalParameterSignature & inOperand2,
                                                                                                              const GALGAS_location & inOperand3,
                                                                                                              const GALGAS_semanticInstructionListForGeneration & inOperand4 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ruleLabelImplementationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_ruleLabelImplementationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ruleLabelImplementationList_2D_element::objectCompare (const GALGAS_ruleLabelImplementationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLabelName.objectCompare (inOperand.mAttribute_mLabelName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSignatureForGeneration.objectCompare (inOperand.mAttribute_mSignatureForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSignature.objectCompare (inOperand.mAttribute_mSignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfArgumentLocation.objectCompare (inOperand.mAttribute_mEndOfArgumentLocation) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionListForGeneration.objectCompare (inOperand.mAttribute_mInstructionListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ruleLabelImplementationList_2D_element::isValid (void) const {
  return mAttribute_mLabelName.isValid () && mAttribute_mSignatureForGeneration.isValid () && mAttribute_mSignature.isValid () && mAttribute_mEndOfArgumentLocation.isValid () && mAttribute_mInstructionListForGeneration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleLabelImplementationList_2D_element::drop (void) {
  mAttribute_mLabelName.drop () ;
  mAttribute_mSignatureForGeneration.drop () ;
  mAttribute_mSignature.drop () ;
  mAttribute_mEndOfArgumentLocation.drop () ;
  mAttribute_mInstructionListForGeneration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleLabelImplementationList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @ruleLabelImplementationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLabelName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSignatureForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfArgumentLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionListForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_ruleLabelImplementationList_2D_element::reader_mLabelName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_ruleLabelImplementationList_2D_element::reader_mSignatureForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignatureForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_ruleLabelImplementationList_2D_element::reader_mSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ruleLabelImplementationList_2D_element::reader_mEndOfArgumentLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfArgumentLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_ruleLabelImplementationList_2D_element::reader_mInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionListForGeneration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @ruleLabelImplementationList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ruleLabelImplementationList_2D_element ("ruleLabelImplementationList-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ruleLabelImplementationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleLabelImplementationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ruleLabelImplementationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ruleLabelImplementationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList_2D_element GALGAS_ruleLabelImplementationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ruleLabelImplementationList_2D_element result ;
  const GALGAS_ruleLabelImplementationList_2D_element * p = (const GALGAS_ruleLabelImplementationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ruleLabelImplementationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleLabelImplementationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxListForGeneration_2D_element::GALGAS_syntaxListForGeneration_2D_element (void) :
mAttribute_mSyntaxComponentRoot (),
mAttribute_mSyntaxGeneration (),
mAttribute_mHasIndexing () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxListForGeneration_2D_element::~ GALGAS_syntaxListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxListForGeneration_2D_element::GALGAS_syntaxListForGeneration_2D_element (const GALGAS_galgas_33_SyntaxComponentListAST_2D_element & inOperand0,
                                                                                      const GALGAS_syntaxDeclarationForGeneration & inOperand1,
                                                                                      const GALGAS_bool & inOperand2) :
mAttribute_mSyntaxComponentRoot (inOperand0),
mAttribute_mSyntaxGeneration (inOperand1),
mAttribute_mHasIndexing (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxListForGeneration_2D_element GALGAS_syntaxListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxListForGeneration_2D_element (GALGAS_galgas_33_SyntaxComponentListAST_2D_element::constructor_default (HERE),
                                                    GALGAS_syntaxDeclarationForGeneration::constructor_default (HERE),
                                                    GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxListForGeneration_2D_element GALGAS_syntaxListForGeneration_2D_element::constructor_new (const GALGAS_galgas_33_SyntaxComponentListAST_2D_element & inOperand0,
                                                                                                      const GALGAS_syntaxDeclarationForGeneration & inOperand1,
                                                                                                      const GALGAS_bool & inOperand2 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_syntaxListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_syntaxListForGeneration_2D_element::objectCompare (const GALGAS_syntaxListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSyntaxComponentRoot.objectCompare (inOperand.mAttribute_mSyntaxComponentRoot) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSyntaxGeneration.objectCompare (inOperand.mAttribute_mSyntaxGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasIndexing.objectCompare (inOperand.mAttribute_mHasIndexing) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_syntaxListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mSyntaxComponentRoot.isValid () && mAttribute_mSyntaxGeneration.isValid () && mAttribute_mHasIndexing.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxListForGeneration_2D_element::drop (void) {
  mAttribute_mSyntaxComponentRoot.drop () ;
  mAttribute_mSyntaxGeneration.drop () ;
  mAttribute_mHasIndexing.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxListForGeneration_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @syntaxListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSyntaxComponentRoot.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSyntaxGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasIndexing.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST_2D_element GALGAS_syntaxListForGeneration_2D_element::reader_mSyntaxComponentRoot (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxComponentRoot ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxDeclarationForGeneration GALGAS_syntaxListForGeneration_2D_element::reader_mSyntaxGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_syntaxListForGeneration_2D_element::reader_mHasIndexing (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasIndexing ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @syntaxListForGeneration-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxListForGeneration_2D_element ("syntaxListForGeneration-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxListForGeneration_2D_element GALGAS_syntaxListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syntaxListForGeneration_2D_element result ;
  const GALGAS_syntaxListForGeneration_2D_element * p = (const GALGAS_syntaxListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis_2D_element::GALGAS_signatureForGrammarAnalysis_2D_element (void) :
mAttribute_mFormalArgumentPassingModeForGrammarAnalysis (),
mAttribute_mGalgasTypeNameForGrammarAnalysis () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis_2D_element::~ GALGAS_signatureForGrammarAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis_2D_element::GALGAS_signatureForGrammarAnalysis_2D_element (const GALGAS_formalArgumentPassingModeAST & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1) :
mAttribute_mFormalArgumentPassingModeForGrammarAnalysis (inOperand0),
mAttribute_mGalgasTypeNameForGrammarAnalysis (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis_2D_element GALGAS_signatureForGrammarAnalysis_2D_element::constructor_new (const GALGAS_formalArgumentPassingModeAST & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_signatureForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_signatureForGrammarAnalysis_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_signatureForGrammarAnalysis_2D_element::objectCompare (const GALGAS_signatureForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentPassingModeForGrammarAnalysis.objectCompare (inOperand.mAttribute_mFormalArgumentPassingModeForGrammarAnalysis) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGalgasTypeNameForGrammarAnalysis.objectCompare (inOperand.mAttribute_mGalgasTypeNameForGrammarAnalysis) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_signatureForGrammarAnalysis_2D_element::isValid (void) const {
  return mAttribute_mFormalArgumentPassingModeForGrammarAnalysis.isValid () && mAttribute_mGalgasTypeNameForGrammarAnalysis.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_signatureForGrammarAnalysis_2D_element::drop (void) {
  mAttribute_mFormalArgumentPassingModeForGrammarAnalysis.drop () ;
  mAttribute_mGalgasTypeNameForGrammarAnalysis.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_signatureForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @signatureForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalArgumentPassingModeForGrammarAnalysis.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGalgasTypeNameForGrammarAnalysis.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST GALGAS_signatureForGrammarAnalysis_2D_element::reader_mFormalArgumentPassingModeForGrammarAnalysis (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentPassingModeForGrammarAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_signatureForGrammarAnalysis_2D_element::reader_mGalgasTypeNameForGrammarAnalysis (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGalgasTypeNameForGrammarAnalysis ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @signatureForGrammarAnalysis-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_signatureForGrammarAnalysis_2D_element ("signatureForGrammarAnalysis-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_signatureForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_signatureForGrammarAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_signatureForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_signatureForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis_2D_element GALGAS_signatureForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_signatureForGrammarAnalysis_2D_element result ;
  const GALGAS_signatureForGrammarAnalysis_2D_element * p = (const GALGAS_signatureForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_signatureForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("signatureForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFormalParametersList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::~ GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_signatureForGrammarAnalysis & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mFormalParametersList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                        GALGAS_signatureForGrammarAnalysis::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                              const GALGAS_signatureForGrammarAnalysis & inOperand1 
                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::objectCompare (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalParametersList.objectCompare (inOperand.mAttribute_mFormalParametersList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalParametersList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFormalParametersList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "<struct @nonterminalSymbolLabelMapForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalParametersList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_signatureForGrammarAnalysis GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::reader_mFormalParametersList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalParametersList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @nonterminalSymbolLabelMapForGrammarAnalysis-element type                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element ("nonterminalSymbolLabelMapForGrammarAnalysis-element",
                                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element result ;
  const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element * p = (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalSymbolLabelMapForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis_2D_element::GALGAS_productionRuleListForGrammarAnalysis_2D_element (void) :
mAttribute_mLeftNonterminalSymbol (),
mAttribute_mLeftNonterminalSymbolIndex (),
mAttribute_mInstructionList (),
mAttribute_mProductionIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis_2D_element::~ GALGAS_productionRuleListForGrammarAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis_2D_element::GALGAS_productionRuleListForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_uint & inOperand1,
                                                                                                                const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                                                const GALGAS_uint & inOperand3) :
mAttribute_mLeftNonterminalSymbol (inOperand0),
mAttribute_mLeftNonterminalSymbolIndex (inOperand1),
mAttribute_mInstructionList (inOperand2),
mAttribute_mProductionIndex (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis_2D_element GALGAS_productionRuleListForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_productionRuleListForGrammarAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_uint::constructor_default (HERE),
                                                                 GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (HERE),
                                                                 GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis_2D_element GALGAS_productionRuleListForGrammarAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_uint & inOperand1,
                                                                                                                                const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                                                                const GALGAS_uint & inOperand3 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_productionRuleListForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_productionRuleListForGrammarAnalysis_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_productionRuleListForGrammarAnalysis_2D_element::objectCompare (const GALGAS_productionRuleListForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLeftNonterminalSymbol.objectCompare (inOperand.mAttribute_mLeftNonterminalSymbol) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLeftNonterminalSymbolIndex.objectCompare (inOperand.mAttribute_mLeftNonterminalSymbolIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProductionIndex.objectCompare (inOperand.mAttribute_mProductionIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_productionRuleListForGrammarAnalysis_2D_element::isValid (void) const {
  return mAttribute_mLeftNonterminalSymbol.isValid () && mAttribute_mLeftNonterminalSymbolIndex.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mProductionIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_productionRuleListForGrammarAnalysis_2D_element::drop (void) {
  mAttribute_mLeftNonterminalSymbol.drop () ;
  mAttribute_mLeftNonterminalSymbolIndex.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mProductionIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_productionRuleListForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @productionRuleListForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLeftNonterminalSymbol.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLeftNonterminalSymbolIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProductionIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_productionRuleListForGrammarAnalysis_2D_element::reader_mLeftNonterminalSymbol (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftNonterminalSymbol ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_productionRuleListForGrammarAnalysis_2D_element::reader_mLeftNonterminalSymbolIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftNonterminalSymbolIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis_2D_element::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_productionRuleListForGrammarAnalysis_2D_element::reader_mProductionIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProductionIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @productionRuleListForGrammarAnalysis-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis_2D_element ("productionRuleListForGrammarAnalysis-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_productionRuleListForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_productionRuleListForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_productionRuleListForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis_2D_element GALGAS_productionRuleListForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_productionRuleListForGrammarAnalysis_2D_element result ;
  const GALGAS_productionRuleListForGrammarAnalysis_2D_element * p = (const GALGAS_productionRuleListForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_productionRuleListForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("productionRuleListForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (void) :
mAttribute_lkey (),
mAttribute_mNonTerminalIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::~ GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mNonTerminalIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                         GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                                const GALGAS_uint & inOperand1 
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::objectCompare (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNonTerminalIndex.objectCompare (inOperand.mAttribute_mNonTerminalIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mNonTerminalIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mNonTerminalIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "<struct @unusedNonTerminalSymbolMapForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNonTerminalIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::reader_mNonTerminalIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonTerminalIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @unusedNonTerminalSymbolMapForGrammarAnalysis-element type                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element ("unusedNonTerminalSymbolMapForGrammarAnalysis-element",
                                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                              C_Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element result ;
  const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element * p = (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unusedNonTerminalSymbolMapForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (void) :
mAttribute_lkey (),
mAttribute_mNonTerminalIndex (),
mAttribute_mNonterminalSymbolParametersMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::~ GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_uint & inOperand1,
                                                                                                                    const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mNonTerminalIndex (inOperand1),
mAttribute_mNonterminalSymbolParametersMap (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_uint::constructor_default (HERE),
                                                                   GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                    const GALGAS_uint & inOperand1,
                                                                                                                                    const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::objectCompare (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNonTerminalIndex.objectCompare (inOperand.mAttribute_mNonTerminalIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNonterminalSymbolParametersMap.objectCompare (inOperand.mAttribute_mNonterminalSymbolParametersMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mNonTerminalIndex.isValid () && mAttribute_mNonterminalSymbolParametersMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mNonTerminalIndex.drop () ;
  mAttribute_mNonterminalSymbolParametersMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @nonTerminalSymbolMapForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNonTerminalIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNonterminalSymbolParametersMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::reader_mNonTerminalIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonTerminalIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::reader_mNonterminalSymbolParametersMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonterminalSymbolParametersMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @nonTerminalSymbolMapForGrammarAnalysis-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element ("nonTerminalSymbolMapForGrammarAnalysis-element",
                                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element result ;
  const GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element * p = (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalSymbolMapForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (void) :
mAttribute_mNonTerminalSymbol (),
mAttribute_mNonTerminalIndex (),
mAttribute_mNonterminalSymbolParametersMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::~ GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_uint & inOperand1,
                                                                                                                                  const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2) :
mAttribute_mNonTerminalSymbol (inOperand0),
mAttribute_mNonTerminalIndex (inOperand1),
mAttribute_mNonterminalSymbolParametersMap (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                          GALGAS_uint::constructor_default (HERE),
                                                                          GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                                  const GALGAS_uint & inOperand1,
                                                                                                                                                  const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2 
                                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::objectCompare (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mNonTerminalSymbol.objectCompare (inOperand.mAttribute_mNonTerminalSymbol) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNonTerminalIndex.objectCompare (inOperand.mAttribute_mNonTerminalIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNonterminalSymbolParametersMap.objectCompare (inOperand.mAttribute_mNonterminalSymbolParametersMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::isValid (void) const {
  return mAttribute_mNonTerminalSymbol.isValid () && mAttribute_mNonTerminalIndex.isValid () && mAttribute_mNonterminalSymbolParametersMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::drop (void) {
  mAttribute_mNonTerminalSymbol.drop () ;
  mAttribute_mNonTerminalIndex.drop () ;
  mAttribute_mNonterminalSymbolParametersMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "<struct @nonTerminalSymbolSortedListForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mNonTerminalSymbol.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNonTerminalIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNonterminalSymbolParametersMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::reader_mNonTerminalSymbol (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonTerminalSymbol ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::reader_mNonTerminalIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonTerminalIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::reader_mNonterminalSymbolParametersMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonterminalSymbolParametersMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @nonTerminalSymbolSortedListForGrammarAnalysis-element type                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element ("nonTerminalSymbolSortedListForGrammarAnalysis-element",
                                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element result ;
  const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element * p = (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalSymbolSortedListForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (void) :
mAttribute_mProductionRulesList (),
mAttribute_mSyntaxComponentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::~ GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (const GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                                                  const GALGAS_lstring & inOperand1) :
mAttribute_mProductionRulesList (inOperand0),
mAttribute_mSyntaxComponentName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (GALGAS_productionRuleListForGrammarAnalysis::constructor_emptyList (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::constructor_new (const GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                                                                  const GALGAS_lstring & inOperand1 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxComponentListForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::objectCompare (const GALGAS_syntaxComponentListForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mProductionRulesList.objectCompare (inOperand.mAttribute_mProductionRulesList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSyntaxComponentName.objectCompare (inOperand.mAttribute_mSyntaxComponentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::isValid (void) const {
  return mAttribute_mProductionRulesList.isValid () && mAttribute_mSyntaxComponentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::drop (void) {
  mAttribute_mProductionRulesList.drop () ;
  mAttribute_mSyntaxComponentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @syntaxComponentListForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mProductionRulesList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_productionRuleListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::reader_mProductionRulesList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProductionRulesList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::reader_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxComponentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @syntaxComponentListForGrammarAnalysis-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis_2D_element ("syntaxComponentListForGrammarAnalysis-element",
                                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element GALGAS_syntaxComponentListForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_syntaxComponentListForGrammarAnalysis_2D_element result ;
  const GALGAS_syntaxComponentListForGrammarAnalysis_2D_element * p = (const GALGAS_syntaxComponentListForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxComponentListForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxComponentListForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (void) :
mAttribute_lkey (),
mAttribute_mTerminalIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::~ GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mTerminalIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_uint & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::objectCompare (const GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTerminalIndex.objectCompare (inOperand.mAttribute_mTerminalIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTerminalIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mTerminalIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @terminalSymbolsMapForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTerminalIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::reader_mTerminalIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @terminalSymbolsMapForGrammarAnalysis-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element ("terminalSymbolsMapForGrammarAnalysis-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element result ;
  const GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element * p = (const GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalSymbolsMapForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectSourceList_2D_element::GALGAS_projectSourceList_2D_element (void) :
mAttribute_mSourceKind (),
mAttribute_mFilePath () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectSourceList_2D_element::~ GALGAS_projectSourceList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectSourceList_2D_element::GALGAS_projectSourceList_2D_element (const GALGAS_sourceFileKind & inOperand0,
                                                                          const GALGAS_lstring & inOperand1) :
mAttribute_mSourceKind (inOperand0),
mAttribute_mFilePath (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectSourceList_2D_element GALGAS_projectSourceList_2D_element::constructor_new (const GALGAS_sourceFileKind & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_projectSourceList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_projectSourceList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_projectSourceList_2D_element::objectCompare (const GALGAS_projectSourceList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSourceKind.objectCompare (inOperand.mAttribute_mSourceKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFilePath.objectCompare (inOperand.mAttribute_mFilePath) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_projectSourceList_2D_element::isValid (void) const {
  return mAttribute_mSourceKind.isValid () && mAttribute_mFilePath.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_projectSourceList_2D_element::drop (void) {
  mAttribute_mSourceKind.drop () ;
  mAttribute_mFilePath.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_projectSourceList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @projectSourceList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSourceKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFilePath.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sourceFileKind GALGAS_projectSourceList_2D_element::reader_mSourceKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_projectSourceList_2D_element::reader_mFilePath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilePath ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @projectSourceList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_projectSourceList_2D_element ("projectSourceList-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_projectSourceList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectSourceList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_projectSourceList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_projectSourceList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectSourceList_2D_element GALGAS_projectSourceList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_projectSourceList_2D_element result ;
  const GALGAS_projectSourceList_2D_element * p = (const GALGAS_projectSourceList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_projectSourceList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("projectSourceList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_qualifiedFeatureList_2D_element::GALGAS_qualifiedFeatureList_2D_element (void) :
mAttribute_mFeatureName (),
mAttribute_mFeatureValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_qualifiedFeatureList_2D_element::~ GALGAS_qualifiedFeatureList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_qualifiedFeatureList_2D_element::GALGAS_qualifiedFeatureList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_lstring & inOperand1) :
mAttribute_mFeatureName (inOperand0),
mAttribute_mFeatureValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_qualifiedFeatureList_2D_element GALGAS_qualifiedFeatureList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_qualifiedFeatureList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_qualifiedFeatureList_2D_element GALGAS_qualifiedFeatureList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_qualifiedFeatureList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_qualifiedFeatureList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_qualifiedFeatureList_2D_element::objectCompare (const GALGAS_qualifiedFeatureList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFeatureName.objectCompare (inOperand.mAttribute_mFeatureName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFeatureValue.objectCompare (inOperand.mAttribute_mFeatureValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_qualifiedFeatureList_2D_element::isValid (void) const {
  return mAttribute_mFeatureName.isValid () && mAttribute_mFeatureValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_qualifiedFeatureList_2D_element::drop (void) {
  mAttribute_mFeatureName.drop () ;
  mAttribute_mFeatureValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_qualifiedFeatureList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @qualifiedFeatureList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFeatureName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFeatureValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_qualifiedFeatureList_2D_element::reader_mFeatureName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFeatureName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_qualifiedFeatureList_2D_element::reader_mFeatureValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFeatureValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @qualifiedFeatureList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_qualifiedFeatureList_2D_element ("qualifiedFeatureList-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_qualifiedFeatureList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_qualifiedFeatureList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_qualifiedFeatureList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_qualifiedFeatureList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_qualifiedFeatureList_2D_element GALGAS_qualifiedFeatureList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_qualifiedFeatureList_2D_element result ;
  const GALGAS_qualifiedFeatureList_2D_element * p = (const GALGAS_qualifiedFeatureList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_qualifiedFeatureList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("qualifiedFeatureList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element::GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFileReference () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element::~ GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element::GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_Xcode_5F_PBXFileReference_5F_abstract & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mFileReference (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_Xcode_5F_PBXFileReference_5F_abstract & inOperand1 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element::objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFileReference.objectCompare (inOperand.mAttribute_mFileReference) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFileReference.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFileReference.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @Xcode_PBXFileReference_map-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFileReference.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_abstract GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element::reader_mFileReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFileReference ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @Xcode_PBXFileReference_map-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element ("Xcode_PBXFileReference_map-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element result ;
  const GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element * p = (const GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXFileReference_5F_map_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXFileReference_map-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectQualifiedFeatureMap_2D_element::GALGAS_projectQualifiedFeatureMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFeatureValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectQualifiedFeatureMap_2D_element::~ GALGAS_projectQualifiedFeatureMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectQualifiedFeatureMap_2D_element::GALGAS_projectQualifiedFeatureMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mFeatureValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectQualifiedFeatureMap_2D_element GALGAS_projectQualifiedFeatureMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_projectQualifiedFeatureMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectQualifiedFeatureMap_2D_element GALGAS_projectQualifiedFeatureMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_projectQualifiedFeatureMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_projectQualifiedFeatureMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_projectQualifiedFeatureMap_2D_element::objectCompare (const GALGAS_projectQualifiedFeatureMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFeatureValue.objectCompare (inOperand.mAttribute_mFeatureValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_projectQualifiedFeatureMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFeatureValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_projectQualifiedFeatureMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFeatureValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_projectQualifiedFeatureMap_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @projectQualifiedFeatureMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFeatureValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_projectQualifiedFeatureMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_projectQualifiedFeatureMap_2D_element::reader_mFeatureValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFeatureValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @projectQualifiedFeatureMap-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2D_element ("projectQualifiedFeatureMap-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_projectQualifiedFeatureMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_projectQualifiedFeatureMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_projectQualifiedFeatureMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectQualifiedFeatureMap_2D_element GALGAS_projectQualifiedFeatureMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_projectQualifiedFeatureMap_2D_element result ;
  const GALGAS_projectQualifiedFeatureMap_2D_element * p = (const GALGAS_projectQualifiedFeatureMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_projectQualifiedFeatureMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("projectQualifiedFeatureMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForGlobalCheckings_2D_element::GALGAS_categoryMethodMapForGlobalCheckings_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForGlobalCheckings_2D_element::~ GALGAS_categoryMethodMapForGlobalCheckings_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForGlobalCheckings_2D_element::GALGAS_categoryMethodMapForGlobalCheckings_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForGlobalCheckings_2D_element GALGAS_categoryMethodMapForGlobalCheckings_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_categoryMethodMapForGlobalCheckings_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForGlobalCheckings_2D_element GALGAS_categoryMethodMapForGlobalCheckings_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_categoryMethodMapForGlobalCheckings_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_categoryMethodMapForGlobalCheckings_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_categoryMethodMapForGlobalCheckings_2D_element::objectCompare (const GALGAS_categoryMethodMapForGlobalCheckings_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_categoryMethodMapForGlobalCheckings_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryMethodMapForGlobalCheckings_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryMethodMapForGlobalCheckings_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @categoryMethodMapForGlobalCheckings-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_categoryMethodMapForGlobalCheckings_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @categoryMethodMapForGlobalCheckings-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_categoryMethodMapForGlobalCheckings_2D_element ("categoryMethodMapForGlobalCheckings-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_categoryMethodMapForGlobalCheckings_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_categoryMethodMapForGlobalCheckings_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_categoryMethodMapForGlobalCheckings_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_categoryMethodMapForGlobalCheckings_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForGlobalCheckings_2D_element GALGAS_categoryMethodMapForGlobalCheckings_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_categoryMethodMapForGlobalCheckings_2D_element result ;
  const GALGAS_categoryMethodMapForGlobalCheckings_2D_element * p = (const GALGAS_categoryMethodMapForGlobalCheckings_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_categoryMethodMapForGlobalCheckings_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("categoryMethodMapForGlobalCheckings-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForGlobalCheckings_2D_element::GALGAS_categoryModifierMapForGlobalCheckings_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForGlobalCheckings_2D_element::~ GALGAS_categoryModifierMapForGlobalCheckings_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForGlobalCheckings_2D_element::GALGAS_categoryModifierMapForGlobalCheckings_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForGlobalCheckings_2D_element GALGAS_categoryModifierMapForGlobalCheckings_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_categoryModifierMapForGlobalCheckings_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForGlobalCheckings_2D_element GALGAS_categoryModifierMapForGlobalCheckings_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_categoryModifierMapForGlobalCheckings_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_categoryModifierMapForGlobalCheckings_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_categoryModifierMapForGlobalCheckings_2D_element::objectCompare (const GALGAS_categoryModifierMapForGlobalCheckings_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_categoryModifierMapForGlobalCheckings_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryModifierMapForGlobalCheckings_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryModifierMapForGlobalCheckings_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @categoryModifierMapForGlobalCheckings-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_categoryModifierMapForGlobalCheckings_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @categoryModifierMapForGlobalCheckings-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_categoryModifierMapForGlobalCheckings_2D_element ("categoryModifierMapForGlobalCheckings-element",
                                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_categoryModifierMapForGlobalCheckings_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_categoryModifierMapForGlobalCheckings_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_categoryModifierMapForGlobalCheckings_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_categoryModifierMapForGlobalCheckings_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForGlobalCheckings_2D_element GALGAS_categoryModifierMapForGlobalCheckings_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_categoryModifierMapForGlobalCheckings_2D_element result ;
  const GALGAS_categoryModifierMapForGlobalCheckings_2D_element * p = (const GALGAS_categoryModifierMapForGlobalCheckings_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_categoryModifierMapForGlobalCheckings_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("categoryModifierMapForGlobalCheckings-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForGlobalCheckings_2D_element::GALGAS_categoryReaderMapForGlobalCheckings_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForGlobalCheckings_2D_element::~ GALGAS_categoryReaderMapForGlobalCheckings_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForGlobalCheckings_2D_element::GALGAS_categoryReaderMapForGlobalCheckings_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForGlobalCheckings_2D_element GALGAS_categoryReaderMapForGlobalCheckings_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_categoryReaderMapForGlobalCheckings_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForGlobalCheckings_2D_element GALGAS_categoryReaderMapForGlobalCheckings_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_categoryReaderMapForGlobalCheckings_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_categoryReaderMapForGlobalCheckings_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_categoryReaderMapForGlobalCheckings_2D_element::objectCompare (const GALGAS_categoryReaderMapForGlobalCheckings_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_categoryReaderMapForGlobalCheckings_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryReaderMapForGlobalCheckings_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryReaderMapForGlobalCheckings_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @categoryReaderMapForGlobalCheckings-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_categoryReaderMapForGlobalCheckings_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @categoryReaderMapForGlobalCheckings-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_categoryReaderMapForGlobalCheckings_2D_element ("categoryReaderMapForGlobalCheckings-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_categoryReaderMapForGlobalCheckings_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_categoryReaderMapForGlobalCheckings_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_categoryReaderMapForGlobalCheckings_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_categoryReaderMapForGlobalCheckings_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForGlobalCheckings_2D_element GALGAS_categoryReaderMapForGlobalCheckings_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_categoryReaderMapForGlobalCheckings_2D_element result ;
  const GALGAS_categoryReaderMapForGlobalCheckings_2D_element * p = (const GALGAS_categoryReaderMapForGlobalCheckings_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_categoryReaderMapForGlobalCheckings_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("categoryReaderMapForGlobalCheckings-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList_2D_element::GALGAS_galgas_33_QualifiedFeatureList_2D_element (void) :
mAttribute_mFeatureName (),
mAttribute_mFeatureValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList_2D_element::~ GALGAS_galgas_33_QualifiedFeatureList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList_2D_element::GALGAS_galgas_33_QualifiedFeatureList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1) :
mAttribute_mFeatureName (inOperand0),
mAttribute_mFeatureValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList_2D_element GALGAS_galgas_33_QualifiedFeatureList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgas_33_QualifiedFeatureList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList_2D_element GALGAS_galgas_33_QualifiedFeatureList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_lstring & inOperand1 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgas_33_QualifiedFeatureList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_galgas_33_QualifiedFeatureList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_galgas_33_QualifiedFeatureList_2D_element::objectCompare (const GALGAS_galgas_33_QualifiedFeatureList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFeatureName.objectCompare (inOperand.mAttribute_mFeatureName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFeatureValue.objectCompare (inOperand.mAttribute_mFeatureValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_galgas_33_QualifiedFeatureList_2D_element::isValid (void) const {
  return mAttribute_mFeatureName.isValid () && mAttribute_mFeatureValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_QualifiedFeatureList_2D_element::drop (void) {
  mAttribute_mFeatureName.drop () ;
  mAttribute_mFeatureValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_QualifiedFeatureList_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @galgas3QualifiedFeatureList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFeatureName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFeatureValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_QualifiedFeatureList_2D_element::reader_mFeatureName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFeatureName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_QualifiedFeatureList_2D_element::reader_mFeatureValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFeatureValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @galgas3QualifiedFeatureList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList_2D_element ("galgas3QualifiedFeatureList-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_galgas_33_QualifiedFeatureList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_galgas_33_QualifiedFeatureList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_QualifiedFeatureList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList_2D_element GALGAS_galgas_33_QualifiedFeatureList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_QualifiedFeatureList_2D_element result ;
  const GALGAS_galgas_33_QualifiedFeatureList_2D_element * p = (const GALGAS_galgas_33_QualifiedFeatureList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_QualifiedFeatureList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3QualifiedFeatureList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerCompositionMap_2D_element::GALGAS_headerCompositionMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mInclusion (),
mAttribute_mHeaderString () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerCompositionMap_2D_element::~ GALGAS_headerCompositionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerCompositionMap_2D_element::GALGAS_headerCompositionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_stringset & inOperand1,
                                                                                const GALGAS_string & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mInclusion (inOperand1),
mAttribute_mHeaderString (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerCompositionMap_2D_element GALGAS_headerCompositionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_headerCompositionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_stringset::constructor_emptySet (HERE),
                                                 GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerCompositionMap_2D_element GALGAS_headerCompositionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_stringset & inOperand1,
                                                                                                const GALGAS_string & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerCompositionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_headerCompositionMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_headerCompositionMap_2D_element::objectCompare (const GALGAS_headerCompositionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInclusion.objectCompare (inOperand.mAttribute_mInclusion) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHeaderString.objectCompare (inOperand.mAttribute_mHeaderString) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_headerCompositionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mInclusion.isValid () && mAttribute_mHeaderString.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_headerCompositionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mInclusion.drop () ;
  mAttribute_mHeaderString.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_headerCompositionMap_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @headerCompositionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInclusion.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHeaderString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_headerCompositionMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_headerCompositionMap_2D_element::reader_mInclusion (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInclusion ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_headerCompositionMap_2D_element::reader_mHeaderString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHeaderString ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @headerCompositionMap-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_headerCompositionMap_2D_element ("headerCompositionMap-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_headerCompositionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerCompositionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_headerCompositionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_headerCompositionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerCompositionMap_2D_element GALGAS_headerCompositionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_headerCompositionMap_2D_element result ;
  const GALGAS_headerCompositionMap_2D_element * p = (const GALGAS_headerCompositionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_headerCompositionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerCompositionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerRepartitionMap_2D_element::GALGAS_headerRepartitionMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mHeaderFileName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerRepartitionMap_2D_element::~ GALGAS_headerRepartitionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerRepartitionMap_2D_element::GALGAS_headerRepartitionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_string & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mHeaderFileName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerRepartitionMap_2D_element GALGAS_headerRepartitionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_headerRepartitionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerRepartitionMap_2D_element GALGAS_headerRepartitionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_string & inOperand1 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerRepartitionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_headerRepartitionMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_headerRepartitionMap_2D_element::objectCompare (const GALGAS_headerRepartitionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHeaderFileName.objectCompare (inOperand.mAttribute_mHeaderFileName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_headerRepartitionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mHeaderFileName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_headerRepartitionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mHeaderFileName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_headerRepartitionMap_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @headerRepartitionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHeaderFileName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_headerRepartitionMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_headerRepartitionMap_2D_element::reader_mHeaderFileName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHeaderFileName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @headerRepartitionMap-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_headerRepartitionMap_2D_element ("headerRepartitionMap-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_headerRepartitionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerRepartitionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_headerRepartitionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_headerRepartitionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerRepartitionMap_2D_element GALGAS_headerRepartitionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_headerRepartitionMap_2D_element result ;
  const GALGAS_headerRepartitionMap_2D_element * p = (const GALGAS_headerRepartitionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_headerRepartitionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerRepartitionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateAnalysisContext::GALGAS_templateAnalysisContext (void) :
mAttribute_mSemanticContext (),
mAttribute_mPredefinedTypes (),
mAttribute_mTemplateVariableMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateAnalysisContext::~ GALGAS_templateAnalysisContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateAnalysisContext::GALGAS_templateAnalysisContext (const GALGAS_semanticContext & inOperand0,
                                                                const GALGAS_predefinedTypes & inOperand1,
                                                                const GALGAS_templateVariableMap & inOperand2) :
mAttribute_mSemanticContext (inOperand0),
mAttribute_mPredefinedTypes (inOperand1),
mAttribute_mTemplateVariableMap (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateAnalysisContext GALGAS_templateAnalysisContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateAnalysisContext (GALGAS_semanticContext::constructor_default (HERE),
                                         GALGAS_predefinedTypes::constructor_default (HERE),
                                         GALGAS_templateVariableMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateAnalysisContext GALGAS_templateAnalysisContext::constructor_new (const GALGAS_semanticContext & inOperand0,
                                                                                const GALGAS_predefinedTypes & inOperand1,
                                                                                const GALGAS_templateVariableMap & inOperand2 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateAnalysisContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_templateAnalysisContext (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_templateAnalysisContext::objectCompare (const GALGAS_templateAnalysisContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSemanticContext.objectCompare (inOperand.mAttribute_mSemanticContext) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPredefinedTypes.objectCompare (inOperand.mAttribute_mPredefinedTypes) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTemplateVariableMap.objectCompare (inOperand.mAttribute_mTemplateVariableMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_templateAnalysisContext::isValid (void) const {
  return mAttribute_mSemanticContext.isValid () && mAttribute_mPredefinedTypes.isValid () && mAttribute_mTemplateVariableMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateAnalysisContext::drop (void) {
  mAttribute_mSemanticContext.drop () ;
  mAttribute_mPredefinedTypes.drop () ;
  mAttribute_mTemplateVariableMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateAnalysisContext::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @templateAnalysisContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSemanticContext.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPredefinedTypes.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTemplateVariableMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_templateAnalysisContext::reader_mSemanticContext (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypes GALGAS_templateAnalysisContext::reader_mPredefinedTypes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPredefinedTypes ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap GALGAS_templateAnalysisContext::reader_mTemplateVariableMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateVariableMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @templateAnalysisContext type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateAnalysisContext ("templateAnalysisContext",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateAnalysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateAnalysisContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateAnalysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateAnalysisContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateAnalysisContext GALGAS_templateAnalysisContext::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateAnalysisContext result ;
  const GALGAS_templateAnalysisContext * p = (const GALGAS_templateAnalysisContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateAnalysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateAnalysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category reader '@semanticExpressionForGeneration isTrueExpression'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_semanticExpressionForGeneration_isTrueExpression> gCategoryReaderTable_semanticExpressionForGeneration_isTrueExpression ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_isTrueExpression (const int32_t inClassIndex,
                                           categoryReaderSignature_semanticExpressionForGeneration_isTrueExpression inReader) {
  gCategoryReaderTable_semanticExpressionForGeneration_isTrueExpression.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryReader_isTrueExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_semanticExpressionForGeneration_isTrueExpression f = NULL ;
    if (classIndex < gCategoryReaderTable_semanticExpressionForGeneration_isTrueExpression.count ()) {
      f = gCategoryReaderTable_semanticExpressionForGeneration_isTrueExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_semanticExpressionForGeneration_isTrueExpression.count ()) {
           f = gCategoryReaderTable_semanticExpressionForGeneration_isTrueExpression (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_semanticExpressionForGeneration_isTrueExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_semanticExpressionForGeneration_isTrueExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticExpressionForGeneration_isTrueExpression (void) {
  enterCategoryReader_isTrueExpression (kTypeDescriptor_GALGAS_semanticExpressionForGeneration.mSlotID,
                                        categoryReader_semanticExpressionForGeneration_isTrueExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_semanticExpressionForGeneration_isTrueExpression (void) {
  gCategoryReaderTable_semanticExpressionForGeneration_isTrueExpression.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticExpressionForGeneration_isTrueExpression (defineCategoryReader_semanticExpressionForGeneration_isTrueExpression,
                                                                             freeCategoryReader_semanticExpressionForGeneration_isTrueExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category method '@semanticExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_semanticExpressionForGeneration_generateExpression> gCategoryMethodTable_semanticExpressionForGeneration_generateExpression ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateExpression (const int32_t inClassIndex,
                                             categoryMethodSignature_semanticExpressionForGeneration_generateExpression inMethod) {
  gCategoryMethodTable_semanticExpressionForGeneration_generateExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_semanticExpressionForGeneration_generateExpression (void) {
  gCategoryMethodTable_semanticExpressionForGeneration_generateExpression.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticExpressionForGeneration_generateExpression (NULL,
                                                                               freeCategoryMethod_semanticExpressionForGeneration_generateExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                            GALGAS_string & io_ioGeneratedCode,
                                            GALGAS_stringset & io_ioInclusionSet,
                                            GALGAS_uint & io_ioTemporaryVariableIndex,
                                            GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                            GALGAS_string & out_outCppExpression,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCppExpression.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_semanticExpressionForGeneration_generateExpression f = NULL ;
    if (classIndex < gCategoryMethodTable_semanticExpressionForGeneration_generateExpression.count ()) {
      f = gCategoryMethodTable_semanticExpressionForGeneration_generateExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_semanticExpressionForGeneration_generateExpression.count ()) {
           f = gCategoryMethodTable_semanticExpressionForGeneration_generateExpression (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_semanticExpressionForGeneration_generateExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGeneratedCode, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, out_outCppExpression, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration_2D_element::GALGAS_templateInstructionIfBranchListForGeneration_2D_element (void) :
mAttribute_mExpression (),
mAttribute_mInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration_2D_element::~ GALGAS_templateInstructionIfBranchListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration_2D_element::GALGAS_templateInstructionIfBranchListForGeneration_2D_element (const GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                                                                const GALGAS_templateInstructionListForGeneration & inOperand1) :
mAttribute_mExpression (inOperand0),
mAttribute_mInstructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration_2D_element GALGAS_templateInstructionIfBranchListForGeneration_2D_element::constructor_new (const GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                                                                                const GALGAS_templateInstructionListForGeneration & inOperand1 
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_templateInstructionIfBranchListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_templateInstructionIfBranchListForGeneration_2D_element::objectCompare (const GALGAS_templateInstructionIfBranchListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mExpression.objectCompare (inOperand.mAttribute_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_templateInstructionIfBranchListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mExpression.isValid () && mAttribute_mInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListForGeneration_2D_element::drop (void) {
  mAttribute_mExpression.drop () ;
  mAttribute_mInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListForGeneration_2D_element::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "<struct @templateInstructionIfBranchListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionIfBranchListForGeneration_2D_element::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionIfBranchListForGeneration_2D_element::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @templateInstructionIfBranchListForGeneration-element type                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration_2D_element ("templateInstructionIfBranchListForGeneration-element",
                                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionIfBranchListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionIfBranchListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionIfBranchListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListForGeneration_2D_element GALGAS_templateInstructionIfBranchListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                              C_Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListForGeneration_2D_element result ;
  const GALGAS_templateInstructionIfBranchListForGeneration_2D_element * p = (const GALGAS_templateInstructionIfBranchListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionIfBranchListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfBranchListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration_2D_element::GALGAS_semanticExpressionListForGeneration_2D_element (void) :
mAttribute_mExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration_2D_element::~ GALGAS_semanticExpressionListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration_2D_element::GALGAS_semanticExpressionListForGeneration_2D_element (const GALGAS_semanticExpressionForGeneration & inOperand0) :
mAttribute_mExpression (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration_2D_element GALGAS_semanticExpressionListForGeneration_2D_element::constructor_new (const GALGAS_semanticExpressionForGeneration & inOperand0 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionListForGeneration_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_semanticExpressionListForGeneration_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticExpressionListForGeneration_2D_element::objectCompare (const GALGAS_semanticExpressionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mExpression.objectCompare (inOperand.mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticExpressionListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListForGeneration_2D_element::drop (void) {
  mAttribute_mExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListForGeneration_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @semanticExpressionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_semanticExpressionListForGeneration_2D_element::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @semanticExpressionListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticExpressionListForGeneration_2D_element ("semanticExpressionListForGeneration-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticExpressionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticExpressionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticExpressionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration_2D_element GALGAS_semanticExpressionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionListForGeneration_2D_element result ;
  const GALGAS_semanticExpressionListForGeneration_2D_element * p = (const GALGAS_semanticExpressionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticExpressionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element::GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element (void) :
mAttribute_mEnumerationOrder (),
mAttribute_mEnumeratedExpression (),
mAttribute_mEnumeratorCppName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element::~ GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element::GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                              const GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                                                                              const GALGAS_string & inOperand2) :
mAttribute_mEnumerationOrder (inOperand0),
mAttribute_mEnumeratedExpression (inOperand1),
mAttribute_mEnumeratorCppName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                              const GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                                                                                              const GALGAS_string & inOperand2 
                                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element::objectCompare (const GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mEnumerationOrder.objectCompare (inOperand.mAttribute_mEnumerationOrder) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEnumeratedExpression.objectCompare (inOperand.mAttribute_mEnumeratedExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEnumeratorCppName.objectCompare (inOperand.mAttribute_mEnumeratorCppName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mEnumerationOrder.isValid () && mAttribute_mEnumeratedExpression.isValid () && mAttribute_mEnumeratorCppName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element::drop (void) {
  mAttribute_mEnumerationOrder.drop () ;
  mAttribute_mEnumeratedExpression.drop () ;
  mAttribute_mEnumeratorCppName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element::description (C_String & ioString,
                                                                                         const int32_t inIndentation) const {
  ioString << "<struct @foreachInstructionEnumeratedObjectListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mEnumerationOrder.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEnumeratedExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEnumeratorCppName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element::reader_mEnumerationOrder (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumerationOrder ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element::reader_mEnumeratedExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumeratedExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element::reader_mEnumeratorCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumeratorCppName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          @foreachInstructionEnumeratedObjectListForGeneration-element type                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element ("foreachInstructionEnumeratedObjectListForGeneration-element",
                                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element result ;
  const GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element * p = (const GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_foreachInstructionEnumeratedObjectListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("foreachInstructionEnumeratedObjectListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@templateReaderCallInExpressionAST templateExpressionAnalysis'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateReaderCallInExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateReaderCallInExpressionAST * object = (const cPtr_templateReaderCallInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateReaderCallInExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), constinArgument_inAnalysisContext, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 62)) ;
  GALGAS_unifiedTypeMapProxy var_receiverType = var_receiverExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 63)) ;
  GALGAS_readerMap var_readerMap = var_receiverType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 65)) ;
  GALGAS_functionSignature var_readerFormalArgumentTypeList ;
  GALGAS_methodKind var_kind ;
  GALGAS_bool var_hasCompilerArgument ;
  GALGAS_unifiedTypeMapProxy var_returnedType ;
  GALGAS_stringlist var_fieldList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 71)) ;
  const enumGalgasBool test_0 = var_readerMap.reader_hasKey (object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 72)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 72)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location joker_3903_0 ; // Joker input parameter
    GALGAS_methodQualifier joker_3959_2 ; // Joker input parameter
    GALGAS_string joker_3959_1 ; // Joker input parameter
    var_readerMap.method_searchKey (object->mAttribute_mReaderName, var_kind, var_readerFormalArgumentTypeList, joker_3903_0, var_hasCompilerArgument, var_returnedType, joker_3959_2, joker_3959_1, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 73)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_uint var_matchingReaderCount = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_receiverType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 83)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("templateAnalysis.galgas", 83)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_readerFormalArgumentTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 84)) ;
      var_hasCompilerArgument = GALGAS_bool (true) ;
      var_returnedType = GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("templateAnalysis.galgas", 86)) ;
      var_kind = GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas", 87)) ;
      cEnumerator_typedAttributeList enumerator_4299 (var_receiverType.reader_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 88)), kEnumeration_up) ;
      while (enumerator_4299.hasCurrentObject ()) {
        GALGAS_readerMap var_aMap = enumerator_4299.current_mAttributeTypeProxy (HERE).reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 89)) ;
        const cMapElement_readerMap * objectArray_4378 = (const cMapElement_readerMap *) var_aMap.readAccessForWithInstruction (object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 90))) ;
        if (NULL != objectArray_4378) {
            macroValidSharedObject (objectArray_4378, cMapElement_readerMap) ;
          var_matchingReaderCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 91)) ;
          var_readerFormalArgumentTypeList = objectArray_4378->mAttribute_mArgumentTypeList ;
          var_hasCompilerArgument = objectArray_4378->mAttribute_mHasCompilerArgument ;
          var_returnedType = objectArray_4378->mAttribute_mReturnedType ;
          var_kind = objectArray_4378->mAttribute_mKind ;
          var_fieldList.addAssign_operation (enumerator_4299.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 96))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 96)) ;
        }
        enumerator_4299.gotoNextObject () ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_matchingReaderCount.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_location location_3 (object->mAttribute_mReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_3, GALGAS_string ("the '@").add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 101)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 101)).add_operation (object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 101)).add_operation (GALGAS_string ("' reader, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 101))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 100)) ;
        var_readerFormalArgumentTypeList.drop () ; // Release error dropped variable
        var_hasCompilerArgument.drop () ; // Release error dropped variable
        var_returnedType.drop () ; // Release error dropped variable
        var_kind.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
          cEnumerator_stringlist enumerator_5085 (var_fieldList, kEnumeration_up) ;
          while (enumerator_5085.hasCurrentObject ()) {
            var_s.dotAssign_operation (enumerator_5085.current_mValue (HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 107)) ;
            if (enumerator_5085.hasNextObject ()) {
              var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 108)) ;
            }
            enumerator_5085.gotoNextObject () ;
          }
          GALGAS_location location_5 (object->mAttribute_mReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, GALGAS_string ("the '@").add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 111)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 111)).add_operation (object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 111)).add_operation (GALGAS_string ("' reader, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 111)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 112)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 112))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 110)) ;
          var_readerFormalArgumentTypeList.drop () ; // Release error dropped variable
          var_hasCompilerArgument.drop () ; // Release error dropped variable
          var_returnedType.drop () ; // Release error dropped variable
          var_kind.drop () ; // Release error dropped variable
        }
      }
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_readerMap.reader_count (SOURCE_FILE ("templateAnalysis.galgas", 115)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (object->mAttribute_mReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("the '@").add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 117)).add_operation (GALGAS_string ("' type does not define any reader"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 117))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 116)) ;
        var_readerFormalArgumentTypeList.drop () ; // Release error dropped variable
        var_hasCompilerArgument.drop () ; // Release error dropped variable
        var_returnedType.drop () ; // Release error dropped variable
        var_kind.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_6) {
        GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
        cEnumerator_readerMap enumerator_5746 (var_readerMap, kEnumeration_up) ;
        while (enumerator_5746.hasCurrentObject ()) {
          var_s.dotAssign_operation (GALGAS_string ("\n"
            "  - ").add_operation (enumerator_5746.current_lkey (HERE).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 122))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 122)) ;
          cEnumerator_functionSignature enumerator_5815 (enumerator_5746.current_mArgumentTypeList (HERE), kEnumeration_up) ;
          while (enumerator_5815.hasCurrentObject ()) {
            var_s.dotAssign_operation (GALGAS_string (" \?@").add_operation (enumerator_5815.current_mFormalArgumentType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 124))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 124)) ;
            enumerator_5815.gotoNextObject () ;
          }
          var_s.dotAssign_operation (GALGAS_string (" -> @").add_operation (enumerator_5746.current_mReturnedType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 126))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 126)) ;
          enumerator_5746.gotoNextObject () ;
        }
        GALGAS_string temp_8 ;
        const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, var_readerMap.reader_count (SOURCE_FILE ("templateAnalysis.galgas", 130)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_9) {
          temp_8 = GALGAS_string ("readers are") ;
        }else if (kBoolFalse == test_9) {
          temp_8 = GALGAS_string ("reader is") ;
        }
        GALGAS_location location_10 (object->mAttribute_mReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_10, GALGAS_string ("the '@").add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 129)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 129)).add_operation (object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 129)).add_operation (GALGAS_string ("' reader; available "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 129)).add_operation (temp_8, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 129)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 130)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 131))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 128)) ;
        var_readerFormalArgumentTypeList.drop () ; // Release error dropped variable
        var_hasCompilerArgument.drop () ; // Release error dropped variable
        var_returnedType.drop () ; // Release error dropped variable
        var_kind.drop () ; // Release error dropped variable
      }
    }
  }
  const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressionList.reader_length (SOURCE_FILE ("templateAnalysis.galgas", 136)).objectCompare (var_readerFormalArgumentTypeList.reader_length (SOURCE_FILE ("templateAnalysis.galgas", 136)))).boolEnum () ;
  if (kBoolTrue == test_11) {
    GALGAS_location location_12 (object->mAttribute_mReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_12, GALGAS_string ("calling the '").add_operation (object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 137)).add_operation (GALGAS_string ("' reader of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 137)).add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 137)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 137)).add_operation (var_readerFormalArgumentTypeList.reader_length (SOURCE_FILE ("templateAnalysis.galgas", 138)).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 137)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 138)).add_operation (object->mAttribute_mExpressionList.reader_length (SOURCE_FILE ("templateAnalysis.galgas", 139)).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 138)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 139))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 137)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_11) {
    GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 141)) ;
    cEnumerator_templateExpressionListAST enumerator_6752 (object->mAttribute_mExpressionList, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_6789 (var_readerFormalArgumentTypeList, kEnumeration_up) ;
    while (enumerator_6752.hasCurrentObject () && enumerator_6789.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp ;
      callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_6752.current_mExpression (HERE).ptr (), constinArgument_inAnalysisContext, var_exp, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 143)) ;
      const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_6789.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_6752.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_string temp_14 ;
        const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_6789.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          temp_14 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_15) {
          temp_14 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_16 (enumerator_6752.current_mActualSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_16, GALGAS_string ("the selector should be '!").add_operation (enumerator_6789.current_mFormalSelector (HERE).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 145)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 145)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 145))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 145)) ;
      }
      {
      routine_checkAssignmentTypes (enumerator_6789.current_mFormalArgumentType (HERE), var_exp.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 147)), enumerator_6752.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)) ;
      }
      var_constructorEffectiveParameterList.addAssign_operation (var_exp  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 148)) ;
      enumerator_6752.gotoNextObject () ;
      enumerator_6789.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_readerCallExpressionForGeneration::constructor_new (var_returnedType, object->mAttribute_mReaderName.reader_location (SOURCE_FILE ("templateAnalysis.galgas", 152)), var_kind, var_receiverExpression, var_fieldList, object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 156)), var_constructorEffectiveParameterList, var_hasCompilerArgument  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 150)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateReaderCallInExpressionAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateReaderCallInExpressionAST.mSlotID,
                                                  categoryMethod_templateReaderCallInExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateReaderCallInExpressionAST_templateExpressionAnalysis (defineCategoryMethod_templateReaderCallInExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@templateConstructorAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateConstructorAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                              const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateConstructorAST * object = (const cPtr_templateConstructorAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateConstructorAST) ;
  GALGAS_unifiedTypeMapProxy var_constructorType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 169)) ;
  GALGAS_constructorMap var_constructorMap = var_constructorType.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 171)) ;
  GALGAS_unifiedTypeMapProxy var_returnedType ;
  GALGAS_bool var_hasCompilerArgument ;
  GALGAS_functionSignature var_constructorFormalArgumentTypeList ;
  const cMapElement_constructorMap * objectArray_8334 = (const cMapElement_constructorMap *) var_constructorMap.readAccessForWithInstruction (object->mAttribute_mConstructorName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 176))) ;
  if (NULL != objectArray_8334) {
      macroValidSharedObject (objectArray_8334, cMapElement_constructorMap) ;
    var_constructorFormalArgumentTypeList = objectArray_8334->mAttribute_mArgumentTypeList ;
    var_hasCompilerArgument = objectArray_8334->mAttribute_mHasCompilerArgument ;
    var_returnedType = objectArray_8334->mAttribute_mReturnedType ;
  }else{
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_constructorMap.reader_count (SOURCE_FILE ("templateAnalysis.galgas", 181)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (object->mAttribute_mConstructorName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 183)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 183))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 182)) ;
      var_constructorFormalArgumentTypeList.drop () ; // Release error dropped variable
      var_hasCompilerArgument.drop () ; // Release error dropped variable
      var_returnedType.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_0) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_constructorMap enumerator_8807 (var_constructorMap, kEnumeration_up) ;
      while (enumerator_8807.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("\n"
          "  - ").add_operation (enumerator_8807.current_lkey (HERE).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 188))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 188)) ;
        cEnumerator_functionSignature enumerator_8876 (enumerator_8807.current_mArgumentTypeList (HERE), kEnumeration_up) ;
        while (enumerator_8876.hasCurrentObject ()) {
          GALGAS_string temp_2 ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_8876.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_3) {
            temp_2 = enumerator_8876.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 190)) ;
          }else if (kBoolFalse == test_3) {
            temp_2 = GALGAS_string::makeEmptyString () ;
          }
          var_s.dotAssign_operation (GALGAS_string (" \?").add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 190)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 190)).add_operation (enumerator_8876.current_mFormalArgumentType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 190))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 190)) ;
          enumerator_8876.gotoNextObject () ;
        }
        var_s.dotAssign_operation (GALGAS_string (" -> @").add_operation (enumerator_8807.current_mReturnedType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 192))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 192)) ;
        enumerator_8807.gotoNextObject () ;
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_constructorMap.reader_count (SOURCE_FILE ("templateAnalysis.galgas", 196)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("available constructors are") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string ("available constructor is") ;
      }
      GALGAS_location location_6 (object->mAttribute_mConstructorName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_6, GALGAS_string ("the '@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 195)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 195)).add_operation (object->mAttribute_mConstructorName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 195)).add_operation (GALGAS_string ("' constructor; "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 195)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 195)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 196)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 197))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 194)) ;
      var_constructorFormalArgumentTypeList.drop () ; // Release error dropped variable
      var_hasCompilerArgument.drop () ; // Release error dropped variable
      var_returnedType.drop () ; // Release error dropped variable
    }
  }
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressionList.reader_length (SOURCE_FILE ("templateAnalysis.galgas", 203)).objectCompare (var_constructorFormalArgumentTypeList.reader_length (SOURCE_FILE ("templateAnalysis.galgas", 203)))).boolEnum () ;
  if (kBoolTrue == test_7) {
    GALGAS_location location_8 (object->mAttribute_mConstructorName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_8, GALGAS_string ("calling the '").add_operation (object->mAttribute_mConstructorName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 205)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 205)).add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 205)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 205)).add_operation (var_constructorFormalArgumentTypeList.reader_length (SOURCE_FILE ("templateAnalysis.galgas", 206)).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 205)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 206)).add_operation (object->mAttribute_mExpressionList.reader_length (SOURCE_FILE ("templateAnalysis.galgas", 207)).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 206)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 207))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 204)) ;
    var_constructorEffectiveParameterList.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_7) {
    var_constructorEffectiveParameterList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 210)) ;
    cEnumerator_templateExpressionListAST enumerator_10043 (object->mAttribute_mExpressionList, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_10085 (var_constructorFormalArgumentTypeList, kEnumeration_up) ;
    while (enumerator_10043.hasCurrentObject () && enumerator_10085.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp ;
      callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_10043.current_mExpression (HERE).ptr (), constinArgument_inAnalysisContext, var_exp, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 213)) ;
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_10085.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_10043.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_string temp_10 ;
        const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, enumerator_10085.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_11) {
          temp_10 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_11) {
          temp_10 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_12 (enumerator_10043.current_mActualSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_12, GALGAS_string ("the selector should be '!").add_operation (enumerator_10085.current_mFormalSelector (HERE).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 215)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 215)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 215))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 215)) ;
      }
      {
      routine_checkAssignmentTypes (enumerator_10085.current_mFormalArgumentType (HERE), var_exp.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 217)), enumerator_10043.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 217)) ;
      }
      var_constructorEffectiveParameterList.addAssign_operation (var_exp  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 218)) ;
      enumerator_10043.gotoNextObject () ;
      enumerator_10085.gotoNextObject () ;
    }
  }
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType, object->mAttribute_mConstructorName.reader_location (SOURCE_FILE ("templateAnalysis.galgas", 224)), var_constructorType, object->mAttribute_mConstructorName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 226)), var_constructorEffectiveParameterList, var_hasCompilerArgument  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 222)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateConstructorAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateConstructorAST.mSlotID,
                                                  categoryMethod_templateConstructorAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateConstructorAST_templateExpressionAnalysis (defineCategoryMethod_templateConstructorAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@templateFileWrapperWithStaticPathAST templateExpressionAnalysis'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateFileWrapperWithStaticPathAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                            const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFileWrapperWithStaticPathAST * object = (const cPtr_templateFileWrapperWithStaticPathAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFileWrapperWithStaticPathAST) ;
  GALGAS_location location_0 (object->mAttribute_mFileWrapperName.reader_location (HERE)) ; // Implicit use of 'location' reader
  inCompiler->emitSemanticError (location_0, GALGAS_string ("unhandled @templateFileWrapperWithStaticPathAST templateExpressionAnalysis")  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 238)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateFileWrapperWithStaticPathAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFileWrapperWithStaticPathAST.mSlotID,
                                                  categoryMethod_templateFileWrapperWithStaticPathAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateFileWrapperWithStaticPathAST_templateExpressionAnalysis (defineCategoryMethod_templateFileWrapperWithStaticPathAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@templateFileWrapperTemplateCallAST templateExpressionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                          const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFileWrapperTemplateCallAST * object = (const cPtr_templateFileWrapperTemplateCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFileWrapperTemplateCallAST) ;
  GALGAS_location location_0 (object->mAttribute_mFileWrapperName.reader_location (HERE)) ; // Implicit use of 'location' reader
  inCompiler->emitSemanticError (location_0, GALGAS_string ("unhandled @templateFileWrapperTemplateCallAST templateExpressionAnalysis")  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 248)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST.mSlotID,
                                                  categoryMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (defineCategoryMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@templateAndOperationAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateAndOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateAndOperationAST * object = (const cPtr_templateAndOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateAndOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 260)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 263)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 265)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 268)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 269)).operator_and (function_binaryAndOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 269)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 269)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("&"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 266)) ;
  }
  outArgument_outExpression = GALGAS_andExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 275)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateAndOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateAndOperationAST.mSlotID,
                                                  categoryMethod_templateAndOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateAndOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateAndOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@templateOrOperationAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateOrOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                              const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateOrOperationAST * object = (const cPtr_templateOrOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateOrOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 289)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 292)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 294)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 297)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 298)).operator_and (function_binaryOrOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 298)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 298)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("|"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 295)) ;
  }
  outArgument_outExpression = GALGAS_orExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 304)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateOrOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateOrOperationAST.mSlotID,
                                                  categoryMethod_templateOrOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateOrOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateOrOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@templateXorOperationAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateXorOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateXorOperationAST * object = (const cPtr_templateXorOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateXorOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 318)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 321)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 323)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 326)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 327)).operator_and (function_binaryXorOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 327)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 327)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("^"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 324)) ;
  }
  outArgument_outExpression = GALGAS_xorExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 333)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateXorOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateXorOperationAST.mSlotID,
                                                  categoryMethod_templateXorOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateXorOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateXorOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@templateTrueBoolAST templateExpressionAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateTrueBoolAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                           const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateTrueBoolAST * object = (const cPtr_templateTrueBoolAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateTrueBoolAST) ;
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mLocation  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 345)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateTrueBoolAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateTrueBoolAST.mSlotID,
                                                  categoryMethod_templateTrueBoolAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateTrueBoolAST_templateExpressionAnalysis (defineCategoryMethod_templateTrueBoolAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@templateFalseBoolAST templateExpressionAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateFalseBoolAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                            const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFalseBoolAST * object = (const cPtr_templateFalseBoolAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFalseBoolAST) ;
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mLocation  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 353)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateFalseBoolAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFalseBoolAST.mSlotID,
                                                  categoryMethod_templateFalseBoolAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateFalseBoolAST_templateExpressionAnalysis (defineCategoryMethod_templateFalseBoolAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@templateLiteralStringExpressionAST templateExpressionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                          const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralStringExpressionAST * object = (const cPtr_templateLiteralStringExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralStringExpressionAST) ;
  GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
  cEnumerator_stringlist enumerator_16157 (object->mAttribute_mLiteralStringList, kEnumeration_up) ;
  while (enumerator_16157.hasCurrentObject ()) {
    var_s.dotAssign_operation (enumerator_16157.current_mValue (HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 363)) ;
    enumerator_16157.gotoNextObject () ;
  }
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mLocation, var_s  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 365)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST.mSlotID,
                                                  categoryMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (defineCategoryMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@templateLiteralUIntExpressionAST templateExpressionAnalysis'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                        const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralUIntExpressionAST * object = (const cPtr_templateLiteralUIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralUIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalUIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, object->mAttribute_mLiteralInt.reader_location (SOURCE_FILE ("templateAnalysis.galgas", 375)), object->mAttribute_mLiteralInt.reader_uint (SOURCE_FILE ("templateAnalysis.galgas", 376))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 373)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST.mSlotID,
                                                  categoryMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (defineCategoryMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@templateLiteralSIntExpressionAST templateExpressionAnalysis'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                        const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralSIntExpressionAST * object = (const cPtr_templateLiteralSIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralSIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mSIntType, object->mAttribute_mLiteralInt.reader_location (SOURCE_FILE ("templateAnalysis.galgas", 386)), object->mAttribute_mLiteralInt.reader_sint (SOURCE_FILE ("templateAnalysis.galgas", 387))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 384)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralSIntExpressionAST.mSlotID,
                                                  categoryMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (defineCategoryMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@templateLiteralUInt64ExpressionAST templateExpressionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralUInt_36__34_ExpressionAST * object = (const cPtr_templateLiteralUInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralUInt_36__34_ExpressionAST) ;
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUInt_36__34_Type, object->mAttribute_mLiteralInt.reader_location (SOURCE_FILE ("templateAnalysis.galgas", 397)), object->mAttribute_mLiteralInt.reader_uint_36__34_ (SOURCE_FILE ("templateAnalysis.galgas", 398))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 395)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralUInt_36__34_ExpressionAST.mSlotID,
                                                  categoryMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (defineCategoryMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@templateLiteralSInt64ExpressionAST templateExpressionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralSInt_36__34_ExpressionAST * object = (const cPtr_templateLiteralSInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralSInt_36__34_ExpressionAST) ;
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mSInt_36__34_Type, object->mAttribute_mLiteralInt.reader_location (SOURCE_FILE ("templateAnalysis.galgas", 408)), object->mAttribute_mLiteralInt.reader_sint_36__34_ (SOURCE_FILE ("templateAnalysis.galgas", 409))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 406)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralSInt_36__34_ExpressionAST.mSlotID,
                                                  categoryMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (defineCategoryMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@templateLiteralCharExpressionAST templateExpressionAnalysis'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                        const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralCharExpressionAST * object = (const cPtr_templateLiteralCharExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralCharExpressionAST) ;
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mCharType, object->mAttribute_mLiteralChar.reader_location (SOURCE_FILE ("templateAnalysis.galgas", 419)), object->mAttribute_mLiteralChar.reader_char (SOURCE_FILE ("templateAnalysis.galgas", 420))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 417)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST.mSlotID,
                                                  categoryMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (defineCategoryMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@templateLiteralDoubleExpressionAST templateExpressionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                          const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralDoubleExpressionAST * object = (const cPtr_templateLiteralDoubleExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralDoubleExpressionAST) ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mDoubleType, object->mAttribute_mLiteralDouble.reader_location (SOURCE_FILE ("templateAnalysis.galgas", 430)), object->mAttribute_mLiteralDouble.reader_double (SOURCE_FILE ("templateAnalysis.galgas", 431))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 428)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST.mSlotID,
                                                  categoryMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (defineCategoryMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@templateIfThenElseExpressionAST templateExpressionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateIfThenElseExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateIfThenElseExpressionAST * object = (const cPtr_templateIfThenElseExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateIfThenElseExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_if_5F_expression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mIfExpression.ptr (), constinArgument_inAnalysisContext, var_if_5F_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 441)) ;
  GALGAS_semanticExpressionForGeneration var_then_5F_expression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mThenExpression.ptr (), constinArgument_inAnalysisContext, var_then_5F_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 444)) ;
  GALGAS_semanticExpressionForGeneration var_else_5F_expression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mElseExpression.ptr (), constinArgument_inAnalysisContext, var_else_5F_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 447)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_if_5F_expression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 449)).reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 449)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("the test expression type is '@").add_operation (var_if_5F_expression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 451)).reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 451)).add_operation (GALGAS_string ("', it should be '@bool'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 451))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 450)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_then_5F_expression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 453)).objectCompare (var_else_5F_expression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 453)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand expression types are '@").add_operation (var_then_5F_expression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 455)).reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 455)).add_operation (GALGAS_string ("' and '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 455)).add_operation (var_else_5F_expression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 455)).reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 455)).add_operation (GALGAS_string ("': they should be the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 455))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 454)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_ifExpressionForGeneration::constructor_new (var_then_5F_expression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 460)), object->mAttribute_mOperatorLocation, var_if_5F_expression, var_then_5F_expression, var_else_5F_expression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 459)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateIfThenElseExpressionAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateIfThenElseExpressionAST.mSlotID,
                                                  categoryMethod_templateIfThenElseExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateIfThenElseExpressionAST_templateExpressionAnalysis (defineCategoryMethod_templateIfThenElseExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@templateNotOperatorAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateNotOperatorAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                              const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateNotOperatorAST * object = (const cPtr_templateNotOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateNotOperatorAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 475)) ;
  GALGAS_unifiedTypeMapProxy var_type = var_expression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 477)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 478)).operator_and (function_unaryNotOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 478)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 478)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 480)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 480))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 479)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 484)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateNotOperatorAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateNotOperatorAST.mSlotID,
                                                  categoryMethod_templateNotOperatorAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateNotOperatorAST_templateExpressionAnalysis (defineCategoryMethod_templateNotOperatorAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@templateLogicalNegateAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateLogicalNegateAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLogicalNegateAST * object = (const cPtr_templateLogicalNegateAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLogicalNegateAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 498)) ;
  GALGAS_unifiedTypeMapProxy var_type = var_expression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 500)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 501)).operator_and (function_unaryTildeOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 501)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 501)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 503)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 503))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 502)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 507)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateLogicalNegateAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLogicalNegateAST.mSlotID,
                                                  categoryMethod_templateLogicalNegateAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLogicalNegateAST_templateExpressionAnalysis (defineCategoryMethod_templateLogicalNegateAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@templateOptionAccessAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateOptionAccessAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateOptionAccessAST * object = (const cPtr_templateOptionAccessAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateOptionAccessAST) ;
  GALGAS_commandLineOptionMap var_boolOptionMap ;
  GALGAS_commandLineOptionMap var_uintOptionMap ;
  GALGAS_commandLineOptionMap var_stringOptionMap ;
  GALGAS_bool var_optionComponentIsPredefined ;
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mOptionComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mOptionComponentName, var_optionComponentIsPredefined, var_boolOptionMap, var_uintOptionMap, var_stringOptionMap, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 522)) ;
  GALGAS_bool var_found = var_boolOptionMap.reader_hasKey (object->mAttribute_mOptionName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 529)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 529)) ;
  GALGAS_unifiedTypeMapProxy var_returnedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType ;
  const enumGalgasBool test_0 = var_found.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 531)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_found = var_uintOptionMap.reader_hasKey (object->mAttribute_mOptionName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 532)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 532)) ;
    var_returnedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType ;
  }
  const enumGalgasBool test_1 = var_found.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 535)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_found = var_stringOptionMap.reader_hasKey (object->mAttribute_mOptionName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 536)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 536)) ;
    var_returnedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  }
  const enumGalgasBool test_2 = var_found.boolEnum () ;
  if (kBoolTrue == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 540)).objectCompare (GALGAS_string ("value"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType, object->mAttribute_mOptionComponentName.reader_location (SOURCE_FILE ("templateAnalysis.galgas", 543)), var_optionComponentIsPredefined, object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 545)), object->mAttribute_mOptionName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 546))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 541)) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 547)).objectCompare (GALGAS_string ("char"))).boolEnum () ;
      if (kBoolTrue == test_4) {
        outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mCharType, object->mAttribute_mOptionComponentName.reader_location (SOURCE_FILE ("templateAnalysis.galgas", 550)), var_optionComponentIsPredefined, object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 552)), object->mAttribute_mOptionName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 553))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 548)) ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 554)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mOptionComponentName.reader_location (SOURCE_FILE ("templateAnalysis.galgas", 557)), var_optionComponentIsPredefined, object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 559)), object->mAttribute_mOptionName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 560))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 555)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 561)).objectCompare (GALGAS_string ("comment"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mOptionComponentName.reader_location (SOURCE_FILE ("templateAnalysis.galgas", 564)), var_optionComponentIsPredefined, object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 566)), object->mAttribute_mOptionName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 567))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 562)) ;
          }else if (kBoolFalse == test_6) {
            GALGAS_location location_7 (object->mAttribute_mReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_7, GALGAS_string ("only the 'value', 'char', 'string' and 'comment' readers are defined for an option")  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 569)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
      }
    }
  }else if (kBoolFalse == test_2) {
    GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
    cEnumerator_commandLineOptionMap enumerator_24492 (var_boolOptionMap, kEnumeration_up) ;
    while (enumerator_24492.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string ("\n"
        "-  '").add_operation (enumerator_24492.current_lkey (HERE).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 574)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 574)).add_operation (GALGAS_string ("' @bool option;"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 574))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 574)) ;
      enumerator_24492.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_24579 (var_uintOptionMap, kEnumeration_up) ;
    while (enumerator_24579.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string ("\n"
        "-  '").add_operation (enumerator_24579.current_lkey (HERE).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 577)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 577)).add_operation (GALGAS_string ("' @uint option;"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 577))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 577)) ;
      enumerator_24579.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_24668 (var_stringOptionMap, kEnumeration_up) ;
    while (enumerator_24668.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string ("\n"
        "-  '").add_operation (enumerator_24668.current_lkey (HERE).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 580)).add_operation (GALGAS_string ("' @string option;"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 580))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 580)) ;
      enumerator_24668.gotoNextObject () ;
    }
    GALGAS_location location_8 (object->mAttribute_mOptionName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_8, GALGAS_string ("the '").add_operation (object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 583)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 583)).add_operation (object->mAttribute_mOptionName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 583)).add_operation (GALGAS_string ("' option; available options:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 583)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 583))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 582)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateOptionAccessAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateOptionAccessAST.mSlotID,
                                                  categoryMethod_templateOptionAccessAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateOptionAccessAST_templateExpressionAnalysis (defineCategoryMethod_templateOptionAccessAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@templateFunctionCallAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateFunctionCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFunctionCallAST * object = (const cPtr_templateFunctionCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFunctionCallAST) ;
  GALGAS_functionSignature var_functionSignature ;
  GALGAS_unifiedTypeMapProxy var_resultType ;
  GALGAS_bool var_isInternal ;
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFunctionMap.method_searchKey (object->mAttribute_mFunctionName, var_functionSignature, var_resultType, var_isInternal, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 596)) ;
  const enumGalgasBool test_0 = var_isInternal.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_procDeclarationLocation = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFunctionMap.reader_locationForKey (object->mAttribute_mFunctionName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 604)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFunctionName.mAttribute_location.reader_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 605)).objectCompare (var_procDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 605)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mFunctionName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 606)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 606)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 606))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 606)) ;
    }
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_functionSignature.reader_length (SOURCE_FILE ("templateAnalysis.galgas", 610)).objectCompare (object->mAttribute_mExpressionList.reader_length (SOURCE_FILE ("templateAnalysis.galgas", 610)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mFunctionName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("the '").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 612)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 612)).add_operation (var_functionSignature.reader_length (SOURCE_FILE ("templateAnalysis.galgas", 612)).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 612)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 612)).add_operation (object->mAttribute_mExpressionList.reader_length (SOURCE_FILE ("templateAnalysis.galgas", 613)).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 613)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 613))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 611)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 617)) ;
    cEnumerator_functionSignature enumerator_26406 (var_functionSignature, kEnumeration_up) ;
    cEnumerator_templateExpressionListAST enumerator_26430 (object->mAttribute_mExpressionList, kEnumeration_up) ;
    while (enumerator_26406.hasCurrentObject () && enumerator_26430.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression ;
      callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_26430.current_mExpression (HERE).ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 619)) ;
      {
      routine_checkAssignmentTypes (enumerator_26406.current_mFormalArgumentType (HERE), var_expression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 620)), enumerator_26430.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 620)) ;
      }
      var_semanticExpressionListForGeneration.addAssign_operation (var_expression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 621)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_26406.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_26430.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_26406.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = enumerator_26406.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 623)) ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_8 (enumerator_26430.current_mActualSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_8, GALGAS_string ("the selector should be '!").add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 623)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 623))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 623)) ;
      }
      enumerator_26406.gotoNextObject () ;
      enumerator_26430.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType, object->mAttribute_mFunctionName.reader_location (SOURCE_FILE ("templateAnalysis.galgas", 628)), object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 629)), var_semanticExpressionListForGeneration  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 626)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateFunctionCallAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFunctionCallAST.mSlotID,
                                                  categoryMethod_templateFunctionCallAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateFunctionCallAST_templateExpressionAnalysis (defineCategoryMethod_templateFunctionCallAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@templateCategoryTemplateCallAST templateExpressionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateCategoryTemplateCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                       const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateCategoryTemplateCallAST * object = (const cPtr_templateCategoryTemplateCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateCategoryTemplateCallAST) ;
  GALGAS_location location_0 (object->mAttribute_mTemplateName.reader_location (HERE)) ; // Implicit use of 'location' reader
  inCompiler->emitSemanticError (location_0, GALGAS_string ("INTERNAL ERROR: @templateCategoryTemplateCallAST templateExpressionAnalysis not implemented yet")  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 641)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateCategoryTemplateCallAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateCategoryTemplateCallAST.mSlotID,
                                                  categoryMethod_templateCategoryTemplateCallAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateCategoryTemplateCallAST_templateExpressionAnalysis (defineCategoryMethod_templateCategoryTemplateCallAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@templateVarInExpressionAST templateExpressionAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateVarInExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateVarInExpressionAST * object = (const cPtr_templateVarInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateVarInExpressionAST) ;
  GALGAS_unifiedTypeMapProxy var_type ;
  GALGAS_string var_sourceVariableCppName ;
  constinArgument_inAnalysisContext.mAttribute_mTemplateVariableMap.method_searchKey (object->mAttribute_mVarName, var_type, var_sourceVariableCppName, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 655)) ;
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::constructor_new (var_type, object->mAttribute_mVarName.reader_location (SOURCE_FILE ("templateAnalysis.galgas", 658)), var_sourceVariableCppName, var_sourceVariableCppName  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 656)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateVarInExpressionAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateVarInExpressionAST.mSlotID,
                                                  categoryMethod_templateVarInExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateVarInExpressionAST_templateExpressionAnalysis (defineCategoryMethod_templateVarInExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@templateAddOperationAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateAddOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateAddOperationAST * object = (const cPtr_templateAddOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateAddOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 672)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 675)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 677)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 680)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 681)).operator_and (function_binaryAddOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 681)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 681)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("+"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 678)) ;
  }
  outArgument_outExpression = GALGAS_addExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 687)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateAddOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateAddOperationAST.mSlotID,
                                                  categoryMethod_templateAddOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateAddOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateAddOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@templateSubOperationAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateSubOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateSubOperationAST * object = (const cPtr_templateSubOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateSubOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 703)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 706)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 708)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 711)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 712)).operator_and (function_binarySubOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 712)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 712)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("-"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 709)) ;
  }
  outArgument_outExpression = GALGAS_subExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 718)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateSubOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateSubOperationAST.mSlotID,
                                                  categoryMethod_templateSubOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateSubOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateSubOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@templateMultiplyOperationAST templateExpressionAnalysis'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateMultiplyOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                    const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateMultiplyOperationAST * object = (const cPtr_templateMultiplyOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateMultiplyOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 734)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 737)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 739)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 742)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 743)).operator_and (function_binaryMulOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 743)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 743)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("*"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 740)) ;
  }
  outArgument_outExpression = GALGAS_multiplicationExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 749)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateMultiplyOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateMultiplyOperationAST.mSlotID,
                                                  categoryMethod_templateMultiplyOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateMultiplyOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateMultiplyOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@templateDivideOperationAST templateExpressionAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateDivideOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateDivideOperationAST * object = (const cPtr_templateDivideOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateDivideOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 765)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 768)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 770)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 773)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 774)).operator_and (function_binaryDivOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 774)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 774)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("/"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 771)) ;
  }
  outArgument_outExpression = GALGAS_divisionExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 780)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateDivideOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateDivideOperationAST.mSlotID,
                                                  categoryMethod_templateDivideOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateDivideOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateDivideOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@templateModuloOperationAST templateExpressionAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateModuloOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateModuloOperationAST * object = (const cPtr_templateModuloOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateModuloOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 796)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 799)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 801)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 804)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 805)).operator_and (function_binaryModOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 805)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 805)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("mod"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 802)) ;
  }
  outArgument_outExpression = GALGAS_moduloExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 811)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateModuloOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateModuloOperationAST.mSlotID,
                                                  categoryMethod_templateModuloOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateModuloOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateModuloOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@templateUnaryMinusOperationAST templateExpressionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateUnaryMinusOperationAST * object = (const cPtr_templateUnaryMinusOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateUnaryMinusOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 827)) ;
  GALGAS_unifiedTypeMapProxy var_type = var_expression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 829)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 830)).operator_and (function_unaryMinusOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 830)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 830)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 832)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 832)).add_operation (GALGAS_string ("' and does not support the unary minus operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 832))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 831)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 836)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST.mSlotID,
                                                  categoryMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@structFieldAccessTemplateExpressionAST templateExpressionAnalysis'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                              const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structFieldAccessTemplateExpressionAST * object = (const cPtr_structFieldAccessTemplateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structFieldAccessTemplateExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 852)) ;
  GALGAS_unifiedTypeMapProxy var_type = var_expression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 854)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_type.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 855)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("templateAnalysis.galgas", 855)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mStructFieldName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '->' operator requires the receiver to be a struct")  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 856)) ;
  }
  GALGAS_attributeMap var_attributeMap = var_type.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 858)) ;
  var_attributeMap.method_searchKey (object->mAttribute_mStructFieldName, var_type, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 859)) ;
  outArgument_outExpression = GALGAS_structFieldAccessExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression, object->mAttribute_mStructFieldName.mAttribute_string  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 861)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST.mSlotID,
                                                  categoryMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (defineCategoryMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@templateEqualTestAST templateExpressionAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                            const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateEqualTestAST * object = (const cPtr_templateEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 877)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 880)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 882)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 883)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType.reader_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 884)).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 884)).objectCompare (var_rightType.reader_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 884)).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 884)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 886)).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 886)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 886)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 886)).add_operation (var_rightType.reader_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 886)).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 886)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 886)).add_operation (GALGAS_string ("': '==' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 886))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 885)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_equalExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 890)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateEqualTestAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateEqualTestAST.mSlotID,
                                                  categoryMethod_templateEqualTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateEqualTestAST_templateExpressionAnalysis (defineCategoryMethod_templateEqualTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@templateNonEqualTestAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateNonEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateNonEqualTestAST * object = (const cPtr_templateNonEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateNonEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 905)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 908)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 910)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 911)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType.reader_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 912)).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 912)).objectCompare (var_rightType.reader_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 912)).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 912)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 914)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 914)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 914)).add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 914)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 914)).add_operation (GALGAS_string ("': '!=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 914))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 913)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_notEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 918)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateNonEqualTestAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateNonEqualTestAST.mSlotID,
                                                  categoryMethod_templateNonEqualTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateNonEqualTestAST_templateExpressionAnalysis (defineCategoryMethod_templateNonEqualTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@templateStrictInfTestAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateStrictInfTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateStrictInfTestAST * object = (const cPtr_templateStrictInfTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateStrictInfTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 933)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 936)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 938)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 939)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 940)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 940)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 940)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 942)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 942)).add_operation (GALGAS_string ("' and does not support the '<' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 942))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 941)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 944)).objectCompare (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 944)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 946)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 946)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 946)).add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 946)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 946)).add_operation (GALGAS_string ("': '<' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 946))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 945)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_strictLowerExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 950)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateStrictInfTestAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateStrictInfTestAST.mSlotID,
                                                  categoryMethod_templateStrictInfTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateStrictInfTestAST_templateExpressionAnalysis (defineCategoryMethod_templateStrictInfTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@templateInfOrEqualTestAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInfOrEqualTestAST * object = (const cPtr_templateInfOrEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInfOrEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 965)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 968)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 970)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mType (SOURCE_FILE ("templateAnalysis.galgas", 971)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 972)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 972)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 972)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 974)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 974)).add_operation (GALGAS_string ("' and does not support the '<=' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 974))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 973)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 976)).objectCompare (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 976)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 978)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 978)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 978)).add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 978)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 978)).add_operation (GALGAS_string ("': '<=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 978))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 977)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_lowerOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 982)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateInfOrEqualTestAST.mSlotID,
                                                  categoryMethod_templateInfOrEqualTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (defineCategoryMethod_templateInfOrEqualTestAST_templateExpressionAnalysis, NULL) ;

