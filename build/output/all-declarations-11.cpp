#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-actualParameterForGeneration.h"
#include "enum-headerKind.h"
#include "getter-unifiedTypeMapProxy-baseType.h"
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
#include "mapproxy-unifiedTypeMapProxy.h"
#include "method-actualParameterForGeneration-generateActualParameter.h"
#include "method-unifiedTypeMapProxy-addHeaderFileName.h"
#include "method-unifiedTypeMapProxy-addHeaderFileName1.h"
#include "option-galgas_cli_options.h"
#include "struct-Xcode_PBXVariantGroup_list-element.h"
#include "struct-actualInputParameterListAST-element.h"
#include "struct-actualOutputExpressionList-element.h"
#include "struct-analysisContext.h"
#include "struct-attributeInCollectionListAST-element.h"
#include "struct-castInstructionBranchListAST-element.h"
#include "struct-commandLineOptionListAST-element.h"
#include "struct-commandLineOptionMap-element.h"
#include "struct-descendantClassListMap-element.h"
#include "struct-enumConstantList-element.h"
#include "struct-extensionMap-element.h"
#include "struct-externFunctionListAST-element.h"
#include "struct-externRoutineListAST-element.h"
#include "struct-externTypeConstructorList-element.h"
#include "struct-externTypeMethodList-element.h"
#include "struct-externTypeModifierList-element.h"
#include "struct-externTypeReaderList-element.h"
#include "struct-filewrapperTemplateListAST-element.h"
#include "struct-foreachInstructionEnumeratedObjectElementListAST-element.h"
#include "struct-foreachInstructionEnumeratedObjectListAST-element.h"
#include "struct-formalInputParameterListAST-element.h"
#include "struct-formalParameterListAST-element.h"
#include "struct-formalTemplateInputParameterListAST-element.h"
#include "struct-functionSignature-element.h"
#include "struct-galgas3GUIComponentListAST-element.h"
#include "struct-galgas3GrammarComponentListAST-element.h"
#include "struct-galgas3LexiqueComponentListAST-element.h"
#include "struct-galgas3ProjectComponentAST.h"
#include "struct-galgas3SyntaxComponentListAST-element.h"
#include "struct-genericCategoryMethodListMap-element.h"
#include "struct-graphInsertModifierList-element.h"
#include "struct-guiComponentAST.h"
#include "struct-guiCompoundAttributeListAST-element.h"
#include "struct-guiSimpleAttributeListAST-element.h"
#include "struct-indexingListAST-element.h"
#include "struct-insertMethodListAST-element.h"
#include "struct-lexicalAttributeListAST-element.h"
#include "struct-lexicalAttributeMap-element.h"
#include "struct-lexicalExplicitTokenListMap-element.h"
#include "struct-lexicalExplicitTokenListMapMap-element.h"
#include "struct-lexicalExternFunctionFormalArgumentListAST-element.h"
#include "struct-lexicalExternRoutineFormalArgumentListAST-element.h"
#include "struct-lexicalFunctionMap-element.h"
#include "struct-lexicalListDeclarationListAST-element.h"
#include "struct-lexicalListEntryListAST-element.h"
#include "struct-lexicalMessageDeclarationListAST-element.h"
#include "struct-lexicalMessageMap-element.h"
#include "struct-lexicalRoutineMap-element.h"
#include "struct-lexicalSendSearchListAST-element.h"
#include "struct-lexicalSentValueList-element.h"
#include "struct-lexicalStyleListAST-element.h"
#include "struct-lexicalTagMap-element.h"
#include "struct-lexicalTypeMap-element.h"
#include "struct-lexiqueAnalysisContext.h"
#include "struct-logListAST-element.h"
#include "struct-mapOverrideBlockDescriptorAST-element.h"
#include "struct-mapOverrideBlockListAST-element.h"
#include "struct-mapRemoveMethodListAST-element.h"
#include "struct-mapSearchMethodListAST-element.h"
#include "struct-mapStateList-element.h"
#include "struct-mapStateTransitionList-element.h"
#include "struct-matchEntryListAST-element.h"
#include "struct-metamodelTemplateDelimitorListAST-element.h"
#include "struct-nonTerminalLabelListAST-element.h"
#include "struct-nonterminalDeclarationListAST-element.h"
#include "struct-optionComponentMapForGeneration-element.h"
#include "struct-parsedGrammarComponentMap-element.h"
#include "struct-parsedGuiComponentMap-element.h"
#include "struct-parsedLexiqueComponentMap-element.h"
#include "struct-parsedOptionComponentMap-element.h"
#include "struct-parsedProgramComponentMap-element.h"
#include "struct-parsedSemanticsComponentMap-element.h"
#include "struct-parsedSyntaxComponentMap-element.h"
#include "struct-predefinedTypes.h"
#include "struct-programComponentAST.h"
#include "struct-programRuleList-element.h"
#include "struct-projectComponentAST.h"
#include "struct-semanticContext.h"
#include "struct-sentLexicalAttributeListAST-element.h"
#include "struct-sortedListSortDescriptorListAST-element.h"
#include "struct-styleMap-element.h"
#include "struct-syntaxRuleLabelListAST-element.h"
#include "struct-syntaxRuleListAST-element.h"
#include "struct-templateDelimitorList-element.h"
#include "struct-templateExpressionListAST-element.h"
#include "struct-templateReplacementListAST-element.h"
#include "struct-templateVariableMap-element.h"
#include "struct-terminalDeclarationListAST-element.h"
#include "struct-terminalLabelListAST-element.h"
#include "struct-terminalList-element.h"
#include "struct-terminalMap-element.h"
#include "struct-typeNameFormalParameterNameList-element.h"
#include "struct-unifiedTypeMapProxyAndLocalVariableList-element.h"
#include "struct-unifiedTypeMapProxyAndParameterList-element.h"
#include "struct-unifiedTypeMapProxyList-element.h"
#include "struct-withLexiqueListAST-element.h"


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element::GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element (void) :
mAttribute_mPBXVariantKey (),
mAttribute_mPBXFileReferenceKey (),
mAttribute_mName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element::~ GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element::GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element (const GALGAS_string & inOperand0,
                                                                                                        const GALGAS_string & inOperand1,
                                                                                                        const GALGAS_string & inOperand2) :
mAttribute_mPBXVariantKey (inOperand0),
mAttribute_mPBXFileReferenceKey (inOperand1),
mAttribute_mName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element (GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                        const GALGAS_string & inOperand1,
                                                                                                                        const GALGAS_string & inOperand2 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element::objectCompare (const GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mPBXVariantKey.objectCompare (inOperand.mAttribute_mPBXVariantKey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPBXFileReferenceKey.objectCompare (inOperand.mAttribute_mPBXFileReferenceKey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mName.objectCompare (inOperand.mAttribute_mName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element::isValid (void) const {
  return mAttribute_mPBXVariantKey.isValid () && mAttribute_mPBXFileReferenceKey.isValid () && mAttribute_mName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element::drop (void) {
  mAttribute_mPBXVariantKey.drop () ;
  mAttribute_mPBXFileReferenceKey.drop () ;
  mAttribute_mName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @Xcode_PBXVariantGroup_list-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mPBXVariantKey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPBXFileReferenceKey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element::reader_mPBXVariantKey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPBXVariantKey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element::reader_mPBXFileReferenceKey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPBXFileReferenceKey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element::reader_mName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @Xcode_PBXVariantGroup_list-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element ("Xcode_PBXVariantGroup_list-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element result ;
  const GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element * p = (const GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXVariantGroup_5F_list_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXVariantGroup_list-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_genericCategoryMethodListMap_2D_element::GALGAS_genericCategoryMethodListMap_2D_element (void) :
mAttribute_key (),
mAttribute_mList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_genericCategoryMethodListMap_2D_element::~ GALGAS_genericCategoryMethodListMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_genericCategoryMethodListMap_2D_element::GALGAS_genericCategoryMethodListMap_2D_element (const GALGAS_string & inOperand0,
                                                                                                const GALGAS_lstringlist & inOperand1) :
mAttribute_key (inOperand0),
mAttribute_mList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_genericCategoryMethodListMap_2D_element GALGAS_genericCategoryMethodListMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_genericCategoryMethodListMap_2D_element (GALGAS_string::constructor_default (HERE),
                                                         GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_genericCategoryMethodListMap_2D_element GALGAS_genericCategoryMethodListMap_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_lstringlist & inOperand1 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_genericCategoryMethodListMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_genericCategoryMethodListMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_genericCategoryMethodListMap_2D_element::objectCompare (const GALGAS_genericCategoryMethodListMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_key.objectCompare (inOperand.mAttribute_key) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mList.objectCompare (inOperand.mAttribute_mList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_genericCategoryMethodListMap_2D_element::isValid (void) const {
  return mAttribute_key.isValid () && mAttribute_mList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_genericCategoryMethodListMap_2D_element::drop (void) {
  mAttribute_key.drop () ;
  mAttribute_mList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_genericCategoryMethodListMap_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @genericCategoryMethodListMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_genericCategoryMethodListMap_2D_element::reader_key (UNUSED_LOCATION_ARGS) const {
  return mAttribute_key ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_genericCategoryMethodListMap_2D_element::reader_mList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @genericCategoryMethodListMap-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_genericCategoryMethodListMap_2D_element ("genericCategoryMethodListMap-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_genericCategoryMethodListMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericCategoryMethodListMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_genericCategoryMethodListMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_genericCategoryMethodListMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_genericCategoryMethodListMap_2D_element GALGAS_genericCategoryMethodListMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_genericCategoryMethodListMap_2D_element result ;
  const GALGAS_genericCategoryMethodListMap_2D_element * p = (const GALGAS_genericCategoryMethodListMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_genericCategoryMethodListMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericCategoryMethodListMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_descendantClassListMap_2D_element::GALGAS_descendantClassListMap_2D_element (void) :
mAttribute_key (),
mAttribute_mList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_descendantClassListMap_2D_element::~ GALGAS_descendantClassListMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_descendantClassListMap_2D_element::GALGAS_descendantClassListMap_2D_element (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_unifiedTypeMapProxyList & inOperand1) :
mAttribute_key (inOperand0),
mAttribute_mList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_descendantClassListMap_2D_element GALGAS_descendantClassListMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_descendantClassListMap_2D_element (GALGAS_string::constructor_default (HERE),
                                                   GALGAS_unifiedTypeMapProxyList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_descendantClassListMap_2D_element GALGAS_descendantClassListMap_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_unifiedTypeMapProxyList & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_descendantClassListMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_descendantClassListMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_descendantClassListMap_2D_element::objectCompare (const GALGAS_descendantClassListMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_key.objectCompare (inOperand.mAttribute_key) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mList.objectCompare (inOperand.mAttribute_mList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_descendantClassListMap_2D_element::isValid (void) const {
  return mAttribute_key.isValid () && mAttribute_mList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_descendantClassListMap_2D_element::drop (void) {
  mAttribute_key.drop () ;
  mAttribute_mList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_descendantClassListMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @descendantClassListMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_descendantClassListMap_2D_element::reader_key (UNUSED_LOCATION_ARGS) const {
  return mAttribute_key ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_descendantClassListMap_2D_element::reader_mList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @descendantClassListMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_descendantClassListMap_2D_element ("descendantClassListMap-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_descendantClassListMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_descendantClassListMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_descendantClassListMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_descendantClassListMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_descendantClassListMap_2D_element GALGAS_descendantClassListMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_descendantClassListMap_2D_element result ;
  const GALGAS_descendantClassListMap_2D_element * p = (const GALGAS_descendantClassListMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_descendantClassListMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("descendantClassListMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mAttribute_mTypeMap (),
mAttribute_mRoutineMap (),
mAttribute_mFunctionMap (),
mAttribute_mFilewrapperMap (),
mAttribute_mGrammarMap (),
mAttribute_mOptionComponentMapForSemanticAnalysis (),
mAttribute_mLexiqueComponentMapForSemanticAnalysis () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_unifiedTypeMap & inOperand0,
                                                const GALGAS_routineMap & inOperand1,
                                                const GALGAS_functionMap & inOperand2,
                                                const GALGAS_filewrapperMap & inOperand3,
                                                const GALGAS_grammarMap & inOperand4,
                                                const GALGAS_optionComponentMapForSemanticAnalysis & inOperand5,
                                                const GALGAS_lexiqueComponentMapForSemanticAnalysis & inOperand6) :
mAttribute_mTypeMap (inOperand0),
mAttribute_mRoutineMap (inOperand1),
mAttribute_mFunctionMap (inOperand2),
mAttribute_mFilewrapperMap (inOperand3),
mAttribute_mGrammarMap (inOperand4),
mAttribute_mOptionComponentMapForSemanticAnalysis (inOperand5),
mAttribute_mLexiqueComponentMapForSemanticAnalysis (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_unifiedTypeMap::constructor_emptyMap (HERE),
                                 GALGAS_routineMap::constructor_emptyMap (HERE),
                                 GALGAS_functionMap::constructor_emptyMap (HERE),
                                 GALGAS_filewrapperMap::constructor_emptyMap (HERE),
                                 GALGAS_grammarMap::constructor_emptyMap (HERE),
                                 GALGAS_optionComponentMapForSemanticAnalysis::constructor_emptyMap (HERE),
                                 GALGAS_lexiqueComponentMapForSemanticAnalysis::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_unifiedTypeMap & inOperand0,
                                                                const GALGAS_routineMap & inOperand1,
                                                                const GALGAS_functionMap & inOperand2,
                                                                const GALGAS_filewrapperMap & inOperand3,
                                                                const GALGAS_grammarMap & inOperand4,
                                                                const GALGAS_optionComponentMapForSemanticAnalysis & inOperand5,
                                                                const GALGAS_lexiqueComponentMapForSemanticAnalysis & inOperand6 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTypeMap.objectCompare (inOperand.mAttribute_mTypeMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineMap.objectCompare (inOperand.mAttribute_mRoutineMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionMap.objectCompare (inOperand.mAttribute_mFunctionMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFilewrapperMap.objectCompare (inOperand.mAttribute_mFilewrapperMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGrammarMap.objectCompare (inOperand.mAttribute_mGrammarMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionComponentMapForSemanticAnalysis.objectCompare (inOperand.mAttribute_mOptionComponentMapForSemanticAnalysis) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexiqueComponentMapForSemanticAnalysis.objectCompare (inOperand.mAttribute_mLexiqueComponentMapForSemanticAnalysis) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticContext::isValid (void) const {
  return mAttribute_mTypeMap.isValid () && mAttribute_mRoutineMap.isValid () && mAttribute_mFunctionMap.isValid () && mAttribute_mFilewrapperMap.isValid () && mAttribute_mGrammarMap.isValid () && mAttribute_mOptionComponentMapForSemanticAnalysis.isValid () && mAttribute_mLexiqueComponentMapForSemanticAnalysis.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticContext::drop (void) {
  mAttribute_mTypeMap.drop () ;
  mAttribute_mRoutineMap.drop () ;
  mAttribute_mFunctionMap.drop () ;
  mAttribute_mFilewrapperMap.drop () ;
  mAttribute_mGrammarMap.drop () ;
  mAttribute_mOptionComponentMapForSemanticAnalysis.drop () ;
  mAttribute_mLexiqueComponentMapForSemanticAnalysis.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTypeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFilewrapperMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGrammarMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexiqueComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap GALGAS_semanticContext::reader_mTypeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap GALGAS_semanticContext::reader_mRoutineMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap GALGAS_semanticContext::reader_mFunctionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap GALGAS_semanticContext::reader_mFilewrapperMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap GALGAS_semanticContext::reader_mGrammarMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis GALGAS_semanticContext::reader_mOptionComponentMapForSemanticAnalysis (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionComponentMapForSemanticAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis GALGAS_semanticContext::reader_mLexiqueComponentMapForSemanticAnalysis (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexiqueComponentMapForSemanticAnalysis ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @semanticContext type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  const GALGAS_semanticContext * p = (const GALGAS_semanticContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypes::GALGAS_predefinedTypes (void) :
mAttribute_mLocationType (),
mAttribute_mBoolType (),
mAttribute_mCharType (),
mAttribute_mStringType (),
mAttribute_mUIntType (),
mAttribute_mSIntType (),
mAttribute_mUInt_36__34_Type (),
mAttribute_mSInt_36__34_Type (),
mAttribute_mDoubleType (),
mAttribute_mLBoolType (),
mAttribute_mLCharType (),
mAttribute_mLStringType (),
mAttribute_mLUIntType (),
mAttribute_mLSIntType (),
mAttribute_mLUInt_36__34_Type (),
mAttribute_mLSInt_36__34_Type (),
mAttribute_mLDoubleType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypes::~ GALGAS_predefinedTypes (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypes::GALGAS_predefinedTypes (const GALGAS_unifiedTypeMapProxy & inOperand0,
                                                const GALGAS_unifiedTypeMapProxy & inOperand1,
                                                const GALGAS_unifiedTypeMapProxy & inOperand2,
                                                const GALGAS_unifiedTypeMapProxy & inOperand3,
                                                const GALGAS_unifiedTypeMapProxy & inOperand4,
                                                const GALGAS_unifiedTypeMapProxy & inOperand5,
                                                const GALGAS_unifiedTypeMapProxy & inOperand6,
                                                const GALGAS_unifiedTypeMapProxy & inOperand7,
                                                const GALGAS_unifiedTypeMapProxy & inOperand8,
                                                const GALGAS_unifiedTypeMapProxy & inOperand9,
                                                const GALGAS_unifiedTypeMapProxy & inOperand10,
                                                const GALGAS_unifiedTypeMapProxy & inOperand11,
                                                const GALGAS_unifiedTypeMapProxy & inOperand12,
                                                const GALGAS_unifiedTypeMapProxy & inOperand13,
                                                const GALGAS_unifiedTypeMapProxy & inOperand14,
                                                const GALGAS_unifiedTypeMapProxy & inOperand15,
                                                const GALGAS_unifiedTypeMapProxy & inOperand16) :
mAttribute_mLocationType (inOperand0),
mAttribute_mBoolType (inOperand1),
mAttribute_mCharType (inOperand2),
mAttribute_mStringType (inOperand3),
mAttribute_mUIntType (inOperand4),
mAttribute_mSIntType (inOperand5),
mAttribute_mUInt_36__34_Type (inOperand6),
mAttribute_mSInt_36__34_Type (inOperand7),
mAttribute_mDoubleType (inOperand8),
mAttribute_mLBoolType (inOperand9),
mAttribute_mLCharType (inOperand10),
mAttribute_mLStringType (inOperand11),
mAttribute_mLUIntType (inOperand12),
mAttribute_mLSIntType (inOperand13),
mAttribute_mLUInt_36__34_Type (inOperand14),
mAttribute_mLSInt_36__34_Type (inOperand15),
mAttribute_mLDoubleType (inOperand16) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypes GALGAS_predefinedTypes::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_predefinedTypes (GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMapProxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypes GALGAS_predefinedTypes::constructor_new (const GALGAS_unifiedTypeMapProxy & inOperand0,
                                                                const GALGAS_unifiedTypeMapProxy & inOperand1,
                                                                const GALGAS_unifiedTypeMapProxy & inOperand2,
                                                                const GALGAS_unifiedTypeMapProxy & inOperand3,
                                                                const GALGAS_unifiedTypeMapProxy & inOperand4,
                                                                const GALGAS_unifiedTypeMapProxy & inOperand5,
                                                                const GALGAS_unifiedTypeMapProxy & inOperand6,
                                                                const GALGAS_unifiedTypeMapProxy & inOperand7,
                                                                const GALGAS_unifiedTypeMapProxy & inOperand8,
                                                                const GALGAS_unifiedTypeMapProxy & inOperand9,
                                                                const GALGAS_unifiedTypeMapProxy & inOperand10,
                                                                const GALGAS_unifiedTypeMapProxy & inOperand11,
                                                                const GALGAS_unifiedTypeMapProxy & inOperand12,
                                                                const GALGAS_unifiedTypeMapProxy & inOperand13,
                                                                const GALGAS_unifiedTypeMapProxy & inOperand14,
                                                                const GALGAS_unifiedTypeMapProxy & inOperand15,
                                                                const GALGAS_unifiedTypeMapProxy & inOperand16 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypes result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid ()) {
    result = GALGAS_predefinedTypes (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_predefinedTypes::objectCompare (const GALGAS_predefinedTypes & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLocationType.objectCompare (inOperand.mAttribute_mLocationType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBoolType.objectCompare (inOperand.mAttribute_mBoolType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCharType.objectCompare (inOperand.mAttribute_mCharType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStringType.objectCompare (inOperand.mAttribute_mStringType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUIntType.objectCompare (inOperand.mAttribute_mUIntType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSIntType.objectCompare (inOperand.mAttribute_mSIntType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUInt_36__34_Type.objectCompare (inOperand.mAttribute_mUInt_36__34_Type) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSInt_36__34_Type.objectCompare (inOperand.mAttribute_mSInt_36__34_Type) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDoubleType.objectCompare (inOperand.mAttribute_mDoubleType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLBoolType.objectCompare (inOperand.mAttribute_mLBoolType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLCharType.objectCompare (inOperand.mAttribute_mLCharType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLStringType.objectCompare (inOperand.mAttribute_mLStringType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLUIntType.objectCompare (inOperand.mAttribute_mLUIntType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLSIntType.objectCompare (inOperand.mAttribute_mLSIntType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLUInt_36__34_Type.objectCompare (inOperand.mAttribute_mLUInt_36__34_Type) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLSInt_36__34_Type.objectCompare (inOperand.mAttribute_mLSInt_36__34_Type) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLDoubleType.objectCompare (inOperand.mAttribute_mLDoubleType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_predefinedTypes::isValid (void) const {
  return mAttribute_mLocationType.isValid () && mAttribute_mBoolType.isValid () && mAttribute_mCharType.isValid () && mAttribute_mStringType.isValid () && mAttribute_mUIntType.isValid () && mAttribute_mSIntType.isValid () && mAttribute_mUInt_36__34_Type.isValid () && mAttribute_mSInt_36__34_Type.isValid () && mAttribute_mDoubleType.isValid () && mAttribute_mLBoolType.isValid () && mAttribute_mLCharType.isValid () && mAttribute_mLStringType.isValid () && mAttribute_mLUIntType.isValid () && mAttribute_mLSIntType.isValid () && mAttribute_mLUInt_36__34_Type.isValid () && mAttribute_mLSInt_36__34_Type.isValid () && mAttribute_mLDoubleType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_predefinedTypes::drop (void) {
  mAttribute_mLocationType.drop () ;
  mAttribute_mBoolType.drop () ;
  mAttribute_mCharType.drop () ;
  mAttribute_mStringType.drop () ;
  mAttribute_mUIntType.drop () ;
  mAttribute_mSIntType.drop () ;
  mAttribute_mUInt_36__34_Type.drop () ;
  mAttribute_mSInt_36__34_Type.drop () ;
  mAttribute_mDoubleType.drop () ;
  mAttribute_mLBoolType.drop () ;
  mAttribute_mLCharType.drop () ;
  mAttribute_mLStringType.drop () ;
  mAttribute_mLUIntType.drop () ;
  mAttribute_mLSIntType.drop () ;
  mAttribute_mLUInt_36__34_Type.drop () ;
  mAttribute_mLSInt_36__34_Type.drop () ;
  mAttribute_mLDoubleType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_predefinedTypes::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @predefinedTypes:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLocationType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBoolType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCharType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStringType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUIntType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSIntType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDoubleType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLBoolType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLCharType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLStringType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLUIntType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLSIntType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLUInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLSInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLDoubleType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_predefinedTypes::reader_mLocationType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocationType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_predefinedTypes::reader_mBoolType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBoolType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_predefinedTypes::reader_mCharType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCharType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_predefinedTypes::reader_mStringType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStringType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_predefinedTypes::reader_mUIntType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUIntType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_predefinedTypes::reader_mSIntType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSIntType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_predefinedTypes::reader_mUInt_36__34_Type (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUInt_36__34_Type ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_predefinedTypes::reader_mSInt_36__34_Type (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSInt_36__34_Type ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_predefinedTypes::reader_mDoubleType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDoubleType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_predefinedTypes::reader_mLBoolType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLBoolType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_predefinedTypes::reader_mLCharType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLCharType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_predefinedTypes::reader_mLStringType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLStringType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_predefinedTypes::reader_mLUIntType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLUIntType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_predefinedTypes::reader_mLSIntType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLSIntType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_predefinedTypes::reader_mLUInt_36__34_Type (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLUInt_36__34_Type ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_predefinedTypes::reader_mLSInt_36__34_Type (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLSInt_36__34_Type ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_predefinedTypes::reader_mLDoubleType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLDoubleType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @predefinedTypes type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_predefinedTypes ("predefinedTypes",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_predefinedTypes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypes ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_predefinedTypes::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_predefinedTypes (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypes GALGAS_predefinedTypes::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_predefinedTypes result ;
  const GALGAS_predefinedTypes * p = (const GALGAS_predefinedTypes *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_predefinedTypes *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("predefinedTypes", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueAnalysisContext::GALGAS_lexiqueAnalysisContext (void) :
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

GALGAS_lexiqueAnalysisContext::GALGAS_lexiqueAnalysisContext (const GALGAS_lexicalRoutineMap & inOperand0,
                                                              const GALGAS_lexicalFunctionMap & inOperand1,
                                                              const GALGAS_lexicalMessageMap & inOperand2,
                                                              const GALGAS_terminalMap & inOperand3,
                                                              const GALGAS_terminalList & inOperand4,
                                                              const GALGAS_lexicalAttributeMap & inOperand5,
                                                              const GALGAS_lexicalExplicitTokenListMapMap & inOperand6,
                                                              const GALGAS_stringset & inOperand7,
                                                              const GALGAS_templateDelimitorList & inOperand8,
                                                              const GALGAS_styleMap & inOperand9,
                                                              const GALGAS_stringset & inOperand10) :
mAttribute_mLexicalRoutineMessageMap (inOperand0),
mAttribute_mLexicalFunctionMap (inOperand1),
mAttribute_mLexicalMessageMap (inOperand2),
mAttribute_mTerminalMap (inOperand3),
mAttribute_mTerminalList (inOperand4),
mAttribute_mLexicalAttributeMap (inOperand5),
mAttribute_mLexicalTokenListMap (inOperand6),
mAttribute_mUnicodeStringToGenerate (inOperand7),
mAttribute_mTemplateDelimitorList (inOperand8),
mAttribute_mStyleMap (inOperand9),
mAttribute_mExternUnicodeTestFunctions (inOperand10) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueAnalysisContext GALGAS_lexiqueAnalysisContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexiqueAnalysisContext (GALGAS_lexicalRoutineMap::constructor_emptyMap (HERE),
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

GALGAS_lexiqueAnalysisContext GALGAS_lexiqueAnalysisContext::constructor_new (const GALGAS_lexicalRoutineMap & inOperand0,
                                                                              const GALGAS_lexicalFunctionMap & inOperand1,
                                                                              const GALGAS_lexicalMessageMap & inOperand2,
                                                                              const GALGAS_terminalMap & inOperand3,
                                                                              const GALGAS_terminalList & inOperand4,
                                                                              const GALGAS_lexicalAttributeMap & inOperand5,
                                                                              const GALGAS_lexicalExplicitTokenListMapMap & inOperand6,
                                                                              const GALGAS_stringset & inOperand7,
                                                                              const GALGAS_templateDelimitorList & inOperand8,
                                                                              const GALGAS_styleMap & inOperand9,
                                                                              const GALGAS_stringset & inOperand10 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexiqueAnalysisContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_lexiqueAnalysisContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexiqueAnalysisContext::objectCompare (const GALGAS_lexiqueAnalysisContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
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
  return mAttribute_mLexicalRoutineMessageMap.isValid () && mAttribute_mLexicalFunctionMap.isValid () && mAttribute_mLexicalMessageMap.isValid () && mAttribute_mTerminalMap.isValid () && mAttribute_mTerminalList.isValid () && mAttribute_mLexicalAttributeMap.isValid () && mAttribute_mLexicalTokenListMap.isValid () && mAttribute_mUnicodeStringToGenerate.isValid () && mAttribute_mTemplateDelimitorList.isValid () && mAttribute_mStyleMap.isValid () && mAttribute_mExternUnicodeTestFunctions.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueAnalysisContext::drop (void) {
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

GALGAS_lexicalRoutineMap GALGAS_lexiqueAnalysisContext::reader_mLexicalRoutineMessageMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalRoutineMessageMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionMap GALGAS_lexiqueAnalysisContext::reader_mLexicalFunctionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalFunctionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageMap GALGAS_lexiqueAnalysisContext::reader_mLexicalMessageMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalMessageMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap GALGAS_lexiqueAnalysisContext::reader_mTerminalMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList GALGAS_lexiqueAnalysisContext::reader_mTerminalList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap GALGAS_lexiqueAnalysisContext::reader_mLexicalAttributeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalAttributeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexiqueAnalysisContext::reader_mLexicalTokenListMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalTokenListMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_lexiqueAnalysisContext::reader_mUnicodeStringToGenerate (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnicodeStringToGenerate ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateDelimitorList GALGAS_lexiqueAnalysisContext::reader_mTemplateDelimitorList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateDelimitorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_styleMap GALGAS_lexiqueAnalysisContext::reader_mStyleMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStyleMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_lexiqueAnalysisContext::reader_mExternUnicodeTestFunctions (UNUSED_LOCATION_ARGS) const {
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

GALGAS_guiComponentAST::GALGAS_guiComponentAST (void) :
mAttribute_mGUIName (),
mAttribute_mGUIClass (),
mAttribute_mImportedOptionList (),
mAttribute_mGlobalSimpleAttributeList (),
mAttribute_mWithLexiqueList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiComponentAST::~ GALGAS_guiComponentAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiComponentAST::GALGAS_guiComponentAST (const GALGAS_lstring & inOperand0,
                                                const GALGAS_lstring & inOperand1,
                                                const GALGAS_lstringlist & inOperand2,
                                                const GALGAS_guiSimpleAttributeListAST & inOperand3,
                                                const GALGAS_withLexiqueListAST & inOperand4) :
mAttribute_mGUIName (inOperand0),
mAttribute_mGUIClass (inOperand1),
mAttribute_mImportedOptionList (inOperand2),
mAttribute_mGlobalSimpleAttributeList (inOperand3),
mAttribute_mWithLexiqueList (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiComponentAST GALGAS_guiComponentAST::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiComponentAST (GALGAS_lstring::constructor_default (HERE),
                                 GALGAS_lstring::constructor_default (HERE),
                                 GALGAS_lstringlist::constructor_emptyList (HERE),
                                 GALGAS_guiSimpleAttributeListAST::constructor_emptyList (HERE),
                                 GALGAS_withLexiqueListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiComponentAST GALGAS_guiComponentAST::constructor_new (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lstring & inOperand1,
                                                                const GALGAS_lstringlist & inOperand2,
                                                                const GALGAS_guiSimpleAttributeListAST & inOperand3,
                                                                const GALGAS_withLexiqueListAST & inOperand4 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guiComponentAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_guiComponentAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guiComponentAST::objectCompare (const GALGAS_guiComponentAST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mGUIName.objectCompare (inOperand.mAttribute_mGUIName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGUIClass.objectCompare (inOperand.mAttribute_mGUIClass) ;
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

bool GALGAS_guiComponentAST::isValid (void) const {
  return mAttribute_mGUIName.isValid () && mAttribute_mGUIClass.isValid () && mAttribute_mImportedOptionList.isValid () && mAttribute_mGlobalSimpleAttributeList.isValid () && mAttribute_mWithLexiqueList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiComponentAST::drop (void) {
  mAttribute_mGUIName.drop () ;
  mAttribute_mGUIClass.drop () ;
  mAttribute_mImportedOptionList.drop () ;
  mAttribute_mGlobalSimpleAttributeList.drop () ;
  mAttribute_mWithLexiqueList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiComponentAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @guiComponentAST:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mGUIName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGUIClass.description (ioString, inIndentation+1) ;
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

GALGAS_lstring GALGAS_guiComponentAST::reader_mGUIName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGUIName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guiComponentAST::reader_mGUIClass (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGUIClass ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_guiComponentAST::reader_mImportedOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImportedOptionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_guiComponentAST::reader_mGlobalSimpleAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalSimpleAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST GALGAS_guiComponentAST::reader_mWithLexiqueList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWithLexiqueList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @guiComponentAST type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiComponentAST ("guiComponentAST",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guiComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiComponentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guiComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiComponentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiComponentAST GALGAS_guiComponentAST::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_guiComponentAST result ;
  const GALGAS_guiComponentAST * p = (const GALGAS_guiComponentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_LexiqueComponentListAST_2D_element::GALGAS_galgas_33_LexiqueComponentListAST_2D_element (void) :
mAttribute_mLexiqueComponentName (),
mAttribute_mIsTemplate (),
mAttribute_mTemplateDelimitorList (),
mAttribute_mTemplateReplacementList (),
mAttribute_mLexicalAttributeList (),
mAttribute_mLexicalStyleList (),
mAttribute_mTerminalDeclarationList (),
mAttribute_mLexicalMessageDeclarationList (),
mAttribute_mLexicalListDeclarationList (),
mAttribute_mLexicalRuleList (),
mAttribute_mExternRoutineList (),
mAttribute_mExternFunctionList (),
mAttribute_mIndexingListAST (),
mAttribute_mIndexingDirectory () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_LexiqueComponentListAST_2D_element::~ GALGAS_galgas_33_LexiqueComponentListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_LexiqueComponentListAST_2D_element::GALGAS_galgas_33_LexiqueComponentListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_bool & inOperand1,
                                                                                                          const GALGAS_metamodelTemplateDelimitorListAST & inOperand2,
                                                                                                          const GALGAS_templateReplacementListAST & inOperand3,
                                                                                                          const GALGAS_lexicalAttributeListAST & inOperand4,
                                                                                                          const GALGAS_lexicalStyleListAST & inOperand5,
                                                                                                          const GALGAS_terminalDeclarationListAST & inOperand6,
                                                                                                          const GALGAS_lexicalMessageDeclarationListAST & inOperand7,
                                                                                                          const GALGAS_lexicalListDeclarationListAST & inOperand8,
                                                                                                          const GALGAS_lexicalRuleListAST & inOperand9,
                                                                                                          const GALGAS_externRoutineListAST & inOperand10,
                                                                                                          const GALGAS_externFunctionListAST & inOperand11,
                                                                                                          const GALGAS_indexingListAST & inOperand12,
                                                                                                          const GALGAS_lstring & inOperand13) :
mAttribute_mLexiqueComponentName (inOperand0),
mAttribute_mIsTemplate (inOperand1),
mAttribute_mTemplateDelimitorList (inOperand2),
mAttribute_mTemplateReplacementList (inOperand3),
mAttribute_mLexicalAttributeList (inOperand4),
mAttribute_mLexicalStyleList (inOperand5),
mAttribute_mTerminalDeclarationList (inOperand6),
mAttribute_mLexicalMessageDeclarationList (inOperand7),
mAttribute_mLexicalListDeclarationList (inOperand8),
mAttribute_mLexicalRuleList (inOperand9),
mAttribute_mExternRoutineList (inOperand10),
mAttribute_mExternFunctionList (inOperand11),
mAttribute_mIndexingListAST (inOperand12),
mAttribute_mIndexingDirectory (inOperand13) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_LexiqueComponentListAST_2D_element GALGAS_galgas_33_LexiqueComponentListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgas_33_LexiqueComponentListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (HERE),
                                                              GALGAS_templateReplacementListAST::constructor_emptyList (HERE),
                                                              GALGAS_lexicalAttributeListAST::constructor_emptyList (HERE),
                                                              GALGAS_lexicalStyleListAST::constructor_emptyList (HERE),
                                                              GALGAS_terminalDeclarationListAST::constructor_emptyList (HERE),
                                                              GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (HERE),
                                                              GALGAS_lexicalListDeclarationListAST::constructor_emptyList (HERE),
                                                              GALGAS_lexicalRuleListAST::constructor_emptyList (HERE),
                                                              GALGAS_externRoutineListAST::constructor_emptyList (HERE),
                                                              GALGAS_externFunctionListAST::constructor_emptyList (HERE),
                                                              GALGAS_indexingListAST::constructor_emptyList (HERE),
                                                              GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_LexiqueComponentListAST_2D_element GALGAS_galgas_33_LexiqueComponentListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                          const GALGAS_bool & inOperand1,
                                                                                                                          const GALGAS_metamodelTemplateDelimitorListAST & inOperand2,
                                                                                                                          const GALGAS_templateReplacementListAST & inOperand3,
                                                                                                                          const GALGAS_lexicalAttributeListAST & inOperand4,
                                                                                                                          const GALGAS_lexicalStyleListAST & inOperand5,
                                                                                                                          const GALGAS_terminalDeclarationListAST & inOperand6,
                                                                                                                          const GALGAS_lexicalMessageDeclarationListAST & inOperand7,
                                                                                                                          const GALGAS_lexicalListDeclarationListAST & inOperand8,
                                                                                                                          const GALGAS_lexicalRuleListAST & inOperand9,
                                                                                                                          const GALGAS_externRoutineListAST & inOperand10,
                                                                                                                          const GALGAS_externFunctionListAST & inOperand11,
                                                                                                                          const GALGAS_indexingListAST & inOperand12,
                                                                                                                          const GALGAS_lstring & inOperand13 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgas_33_LexiqueComponentListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid ()) {
    result = GALGAS_galgas_33_LexiqueComponentListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_galgas_33_LexiqueComponentListAST_2D_element::objectCompare (const GALGAS_galgas_33_LexiqueComponentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLexiqueComponentName.objectCompare (inOperand.mAttribute_mLexiqueComponentName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsTemplate.objectCompare (inOperand.mAttribute_mIsTemplate) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTemplateDelimitorList.objectCompare (inOperand.mAttribute_mTemplateDelimitorList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTemplateReplacementList.objectCompare (inOperand.mAttribute_mTemplateReplacementList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalAttributeList.objectCompare (inOperand.mAttribute_mLexicalAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalStyleList.objectCompare (inOperand.mAttribute_mLexicalStyleList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTerminalDeclarationList.objectCompare (inOperand.mAttribute_mTerminalDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalMessageDeclarationList.objectCompare (inOperand.mAttribute_mLexicalMessageDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalListDeclarationList.objectCompare (inOperand.mAttribute_mLexicalListDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalRuleList.objectCompare (inOperand.mAttribute_mLexicalRuleList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExternRoutineList.objectCompare (inOperand.mAttribute_mExternRoutineList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExternFunctionList.objectCompare (inOperand.mAttribute_mExternFunctionList) ;
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

bool GALGAS_galgas_33_LexiqueComponentListAST_2D_element::isValid (void) const {
  return mAttribute_mLexiqueComponentName.isValid () && mAttribute_mIsTemplate.isValid () && mAttribute_mTemplateDelimitorList.isValid () && mAttribute_mTemplateReplacementList.isValid () && mAttribute_mLexicalAttributeList.isValid () && mAttribute_mLexicalStyleList.isValid () && mAttribute_mTerminalDeclarationList.isValid () && mAttribute_mLexicalMessageDeclarationList.isValid () && mAttribute_mLexicalListDeclarationList.isValid () && mAttribute_mLexicalRuleList.isValid () && mAttribute_mExternRoutineList.isValid () && mAttribute_mExternFunctionList.isValid () && mAttribute_mIndexingListAST.isValid () && mAttribute_mIndexingDirectory.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_LexiqueComponentListAST_2D_element::drop (void) {
  mAttribute_mLexiqueComponentName.drop () ;
  mAttribute_mIsTemplate.drop () ;
  mAttribute_mTemplateDelimitorList.drop () ;
  mAttribute_mTemplateReplacementList.drop () ;
  mAttribute_mLexicalAttributeList.drop () ;
  mAttribute_mLexicalStyleList.drop () ;
  mAttribute_mTerminalDeclarationList.drop () ;
  mAttribute_mLexicalMessageDeclarationList.drop () ;
  mAttribute_mLexicalListDeclarationList.drop () ;
  mAttribute_mLexicalRuleList.drop () ;
  mAttribute_mExternRoutineList.drop () ;
  mAttribute_mExternFunctionList.drop () ;
  mAttribute_mIndexingListAST.drop () ;
  mAttribute_mIndexingDirectory.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_LexiqueComponentListAST_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @galgas3LexiqueComponentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLexiqueComponentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsTemplate.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTemplateDelimitorList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTemplateReplacementList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalStyleList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTerminalDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalMessageDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalListDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalRuleList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExternRoutineList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExternFunctionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndexingListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndexingDirectory.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_LexiqueComponentListAST_2D_element::reader_mLexiqueComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexiqueComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_galgas_33_LexiqueComponentListAST_2D_element::reader_mIsTemplate (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsTemplate ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_galgas_33_LexiqueComponentListAST_2D_element::reader_mTemplateDelimitorList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateDelimitorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_galgas_33_LexiqueComponentListAST_2D_element::reader_mTemplateReplacementList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateReplacementList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_galgas_33_LexiqueComponentListAST_2D_element::reader_mLexicalAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_galgas_33_LexiqueComponentListAST_2D_element::reader_mLexicalStyleList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalStyleList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_galgas_33_LexiqueComponentListAST_2D_element::reader_mTerminalDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_galgas_33_LexiqueComponentListAST_2D_element::reader_mLexicalMessageDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalMessageDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_galgas_33_LexiqueComponentListAST_2D_element::reader_mLexicalListDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalListDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_galgas_33_LexiqueComponentListAST_2D_element::reader_mLexicalRuleList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalRuleList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST GALGAS_galgas_33_LexiqueComponentListAST_2D_element::reader_mExternRoutineList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternRoutineList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST GALGAS_galgas_33_LexiqueComponentListAST_2D_element::reader_mExternFunctionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternFunctionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST GALGAS_galgas_33_LexiqueComponentListAST_2D_element::reader_mIndexingListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexingListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_LexiqueComponentListAST_2D_element::reader_mIndexingDirectory (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexingDirectory ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @galgas3LexiqueComponentListAST-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_LexiqueComponentListAST_2D_element ("galgas3LexiqueComponentListAST-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_galgas_33_LexiqueComponentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_LexiqueComponentListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_galgas_33_LexiqueComponentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_LexiqueComponentListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_LexiqueComponentListAST_2D_element GALGAS_galgas_33_LexiqueComponentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_LexiqueComponentListAST_2D_element result ;
  const GALGAS_galgas_33_LexiqueComponentListAST_2D_element * p = (const GALGAS_galgas_33_LexiqueComponentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_LexiqueComponentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3LexiqueComponentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST_2D_element::GALGAS_galgas_33_GrammarComponentListAST_2D_element (void) :
mAttribute_mHasIndexing (),
mAttribute_mGrammarComponentName (),
mAttribute_mGrammarClass (),
mAttribute_mSyntaxComponents (),
mAttribute_mStartSymbolName (),
mAttribute_mStartSymbolLabelList (),
mAttribute_mUnusedNonterminalList (),
mAttribute_mHasTranslateFeature () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST_2D_element::~ GALGAS_galgas_33_GrammarComponentListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST_2D_element::GALGAS_galgas_33_GrammarComponentListAST_2D_element (const GALGAS_lbool & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                          const GALGAS_lstring & inOperand2,
                                                                                                          const GALGAS_lstringlist & inOperand3,
                                                                                                          const GALGAS_lstring & inOperand4,
                                                                                                          const GALGAS_nonTerminalLabelListAST & inOperand5,
                                                                                                          const GALGAS_lstringlist & inOperand6,
                                                                                                          const GALGAS_bool & inOperand7) :
mAttribute_mHasIndexing (inOperand0),
mAttribute_mGrammarComponentName (inOperand1),
mAttribute_mGrammarClass (inOperand2),
mAttribute_mSyntaxComponents (inOperand3),
mAttribute_mStartSymbolName (inOperand4),
mAttribute_mStartSymbolLabelList (inOperand5),
mAttribute_mUnusedNonterminalList (inOperand6),
mAttribute_mHasTranslateFeature (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST_2D_element GALGAS_galgas_33_GrammarComponentListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgas_33_GrammarComponentListAST_2D_element (GALGAS_lbool::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstringlist::constructor_emptyList (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_nonTerminalLabelListAST::constructor_emptyList (HERE),
                                                              GALGAS_lstringlist::constructor_emptyList (HERE),
                                                              GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST_2D_element GALGAS_galgas_33_GrammarComponentListAST_2D_element::constructor_new (const GALGAS_lbool & inOperand0,
                                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                                          const GALGAS_lstring & inOperand2,
                                                                                                                          const GALGAS_lstringlist & inOperand3,
                                                                                                                          const GALGAS_lstring & inOperand4,
                                                                                                                          const GALGAS_nonTerminalLabelListAST & inOperand5,
                                                                                                                          const GALGAS_lstringlist & inOperand6,
                                                                                                                          const GALGAS_bool & inOperand7 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgas_33_GrammarComponentListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_galgas_33_GrammarComponentListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_galgas_33_GrammarComponentListAST_2D_element::objectCompare (const GALGAS_galgas_33_GrammarComponentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mHasIndexing.objectCompare (inOperand.mAttribute_mHasIndexing) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGrammarComponentName.objectCompare (inOperand.mAttribute_mGrammarComponentName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGrammarClass.objectCompare (inOperand.mAttribute_mGrammarClass) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSyntaxComponents.objectCompare (inOperand.mAttribute_mSyntaxComponents) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStartSymbolName.objectCompare (inOperand.mAttribute_mStartSymbolName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStartSymbolLabelList.objectCompare (inOperand.mAttribute_mStartSymbolLabelList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUnusedNonterminalList.objectCompare (inOperand.mAttribute_mUnusedNonterminalList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasTranslateFeature.objectCompare (inOperand.mAttribute_mHasTranslateFeature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_galgas_33_GrammarComponentListAST_2D_element::isValid (void) const {
  return mAttribute_mHasIndexing.isValid () && mAttribute_mGrammarComponentName.isValid () && mAttribute_mGrammarClass.isValid () && mAttribute_mSyntaxComponents.isValid () && mAttribute_mStartSymbolName.isValid () && mAttribute_mStartSymbolLabelList.isValid () && mAttribute_mUnusedNonterminalList.isValid () && mAttribute_mHasTranslateFeature.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GrammarComponentListAST_2D_element::drop (void) {
  mAttribute_mHasIndexing.drop () ;
  mAttribute_mGrammarComponentName.drop () ;
  mAttribute_mGrammarClass.drop () ;
  mAttribute_mSyntaxComponents.drop () ;
  mAttribute_mStartSymbolName.drop () ;
  mAttribute_mStartSymbolLabelList.drop () ;
  mAttribute_mUnusedNonterminalList.drop () ;
  mAttribute_mHasTranslateFeature.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_galgas_33_GrammarComponentListAST_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @galgas3GrammarComponentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mHasIndexing.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGrammarComponentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGrammarClass.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSyntaxComponents.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStartSymbolName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStartSymbolLabelList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUnusedNonterminalList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool GALGAS_galgas_33_GrammarComponentListAST_2D_element::reader_mHasIndexing (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasIndexing ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_GrammarComponentListAST_2D_element::reader_mGrammarComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_GrammarComponentListAST_2D_element::reader_mGrammarClass (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarClass ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_galgas_33_GrammarComponentListAST_2D_element::reader_mSyntaxComponents (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxComponents ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_GrammarComponentListAST_2D_element::reader_mStartSymbolName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartSymbolName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST GALGAS_galgas_33_GrammarComponentListAST_2D_element::reader_mStartSymbolLabelList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartSymbolLabelList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_galgas_33_GrammarComponentListAST_2D_element::reader_mUnusedNonterminalList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnusedNonterminalList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_galgas_33_GrammarComponentListAST_2D_element::reader_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasTranslateFeature ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @galgas3GrammarComponentListAST-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_GrammarComponentListAST_2D_element ("galgas3GrammarComponentListAST-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_galgas_33_GrammarComponentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_galgas_33_GrammarComponentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_GrammarComponentListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST_2D_element GALGAS_galgas_33_GrammarComponentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_GrammarComponentListAST_2D_element result ;
  const GALGAS_galgas_33_GrammarComponentListAST_2D_element * p = (const GALGAS_galgas_33_GrammarComponentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_GrammarComponentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3GrammarComponentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentListAST_2D_element::reader_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentListAST_2D_element::reader_mImportedLexiqueFilePath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImportedLexiqueFilePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_galgas_33_SyntaxComponentListAST_2D_element::reader_mImportedComponentFileNameList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImportedComponentFileNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST GALGAS_galgas_33_SyntaxComponentListAST_2D_element::reader_mNonterminalDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonterminalDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST GALGAS_galgas_33_SyntaxComponentListAST_2D_element::reader_mRuleList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRuleList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST GALGAS_galgas_33_SyntaxComponentListAST_2D_element::reader_mSemanticDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_galgas_33_SyntaxComponentListAST_2D_element::reader_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
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

GALGAS_programComponentAST::GALGAS_programComponentAST (void) :
mAttribute_mProgramComponentName (),
mAttribute_mImportedComponentFileNameList (),
mAttribute_mPrologueList (),
mAttribute_mEpilogueList (),
mAttribute_mProgramRules (),
mAttribute_mSemanticDeclarationList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programComponentAST::~ GALGAS_programComponentAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programComponentAST::GALGAS_programComponentAST (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lstringlist & inOperand1,
                                                        const GALGAS_prologueEpilogueList & inOperand2,
                                                        const GALGAS_prologueEpilogueList & inOperand3,
                                                        const GALGAS_programRuleList & inOperand4,
                                                        const GALGAS_semanticDeclarationListAST & inOperand5) :
mAttribute_mProgramComponentName (inOperand0),
mAttribute_mImportedComponentFileNameList (inOperand1),
mAttribute_mPrologueList (inOperand2),
mAttribute_mEpilogueList (inOperand3),
mAttribute_mProgramRules (inOperand4),
mAttribute_mSemanticDeclarationList (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programComponentAST GALGAS_programComponentAST::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_programComponentAST (GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_lstringlist::constructor_emptyList (HERE),
                                     GALGAS_prologueEpilogueList::constructor_emptyList (HERE),
                                     GALGAS_prologueEpilogueList::constructor_emptyList (HERE),
                                     GALGAS_programRuleList::constructor_emptyList (HERE),
                                     GALGAS_semanticDeclarationListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programComponentAST GALGAS_programComponentAST::constructor_new (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_lstringlist & inOperand1,
                                                                        const GALGAS_prologueEpilogueList & inOperand2,
                                                                        const GALGAS_prologueEpilogueList & inOperand3,
                                                                        const GALGAS_programRuleList & inOperand4,
                                                                        const GALGAS_semanticDeclarationListAST & inOperand5 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_programComponentAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_programComponentAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_programComponentAST::objectCompare (const GALGAS_programComponentAST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mProgramComponentName.objectCompare (inOperand.mAttribute_mProgramComponentName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mImportedComponentFileNameList.objectCompare (inOperand.mAttribute_mImportedComponentFileNameList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPrologueList.objectCompare (inOperand.mAttribute_mPrologueList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEpilogueList.objectCompare (inOperand.mAttribute_mEpilogueList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProgramRules.objectCompare (inOperand.mAttribute_mProgramRules) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSemanticDeclarationList.objectCompare (inOperand.mAttribute_mSemanticDeclarationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_programComponentAST::isValid (void) const {
  return mAttribute_mProgramComponentName.isValid () && mAttribute_mImportedComponentFileNameList.isValid () && mAttribute_mPrologueList.isValid () && mAttribute_mEpilogueList.isValid () && mAttribute_mProgramRules.isValid () && mAttribute_mSemanticDeclarationList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programComponentAST::drop (void) {
  mAttribute_mProgramComponentName.drop () ;
  mAttribute_mImportedComponentFileNameList.drop () ;
  mAttribute_mPrologueList.drop () ;
  mAttribute_mEpilogueList.drop () ;
  mAttribute_mProgramRules.drop () ;
  mAttribute_mSemanticDeclarationList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programComponentAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @programComponentAST:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mProgramComponentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mImportedComponentFileNameList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPrologueList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEpilogueList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProgramRules.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSemanticDeclarationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_programComponentAST::reader_mProgramComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProgramComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_programComponentAST::reader_mImportedComponentFileNameList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImportedComponentFileNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList GALGAS_programComponentAST::reader_mPrologueList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPrologueList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList GALGAS_programComponentAST::reader_mEpilogueList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEpilogueList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programRuleList GALGAS_programComponentAST::reader_mProgramRules (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProgramRules ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST GALGAS_programComponentAST::reader_mSemanticDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticDeclarationList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @programComponentAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_programComponentAST ("programComponentAST",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_programComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programComponentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_programComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programComponentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programComponentAST GALGAS_programComponentAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_programComponentAST result ;
  const GALGAS_programComponentAST * p = (const GALGAS_programComponentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_programComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Category Reader '@unifiedTypeMapProxy baseType'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy categoryReader_baseType (const GALGAS_unifiedTypeMapProxy & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxy result_outBaseType ; // Returned variable
  const GALGAS_unifiedTypeMapProxy temp_0 = inObject ;
  result_outBaseType = temp_0 ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticsTypes.galgas", 354)).isValid ()) {
    uint32_t variant_15488 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticsTypes.galgas", 354)).uintValue () ;
    bool loop_15488 = true ;
    while (loop_15488) {
      loop_15488 = result_outBaseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 354)).reader_isNull (SOURCE_FILE ("semanticsTypes.galgas", 354)).operator_not (SOURCE_FILE ("semanticsTypes.galgas", 354)).isValid () ;
      if (loop_15488) {
        loop_15488 = result_outBaseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 354)).reader_isNull (SOURCE_FILE ("semanticsTypes.galgas", 354)).operator_not (SOURCE_FILE ("semanticsTypes.galgas", 354)).boolValue () ;
      }
      if (loop_15488 && (0 == variant_15488)) {
        loop_15488 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticsTypes.galgas", 354)) ;
      }
      if (loop_15488) {
        variant_15488 -- ;
        result_outBaseType = result_outBaseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 355)) ;
      }
    }
  }
//---
  return result_outBaseType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@unifiedTypeMapProxy addHeaderFileName'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_addHeaderFileName (const GALGAS_unifiedTypeMapProxy inObject,
                                       GALGAS_stringset & ioArgument_ioInclusions,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMapProxy temp_0 = inObject ;
  const GALGAS_unifiedTypeMapProxy temp_1 = inObject ;
  const enumGalgasBool test_2 = temp_0.reader_mIsPredefined (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 363)).operator_not (SOURCE_FILE ("semanticsTypes.galgas", 363)).operator_and (GALGAS_bool (kIsNotEqual, temp_1.reader_mHeaderKind (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 363)).objectCompare (GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticsTypes.galgas", 363)))) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 363)).boolEnum () ;
  if (kBoolTrue == test_2) {
    const GALGAS_unifiedTypeMapProxy temp_3 = inObject ;
    ioArgument_ioInclusions.addAssign_operation (temp_3.reader_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 364))  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 364)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@unifiedTypeMapProxy addHeaderFileName1'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_addHeaderFileName_31_ (const GALGAS_unifiedTypeMapProxy inObject,
                                           GALGAS_stringset & ioArgument_ioInclusions,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMapProxy temp_0 = inObject ;
  const enumGalgasBool test_1 = temp_0.reader_mIsPredefined (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 372)).operator_not (SOURCE_FILE ("semanticsTypes.galgas", 372)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_unifiedTypeMapProxy temp_2 = inObject ;
    if (temp_2.reader_mHeaderKind (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 373)).isValid ()) {
      switch (temp_2.reader_mHeaderKind (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 373)).enumValue ()) {
      case GALGAS_headerKind::kNotBuilt:
        break ;
      case GALGAS_headerKind::kEnum_noHeader: {
        } break ;
      case GALGAS_headerKind::kEnum_oneHeader: {
        const GALGAS_unifiedTypeMapProxy temp_3 = inObject ;
        ioArgument_ioInclusions.addAssign_operation (temp_3.reader_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 376))  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 376)) ;
        } break ;
      case GALGAS_headerKind::kEnum_twoHeaders: {
        const GALGAS_unifiedTypeMapProxy temp_4 = inObject ;
        ioArgument_ioInclusions.addAssign_operation (temp_4.reader_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 378)).add_operation (GALGAS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas", 378))  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 378)) ;
        } break ;
      }
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
                                                const GALGAS_unifiedTypeMapProxy & inOperand2,
                                                const GALGAS_string & inOperand3,
                                                const GALGAS_unifiedTypeMapProxy & inOperand4) :
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
                                 GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                 GALGAS_string::constructor_default (HERE),
                                 GALGAS_unifiedTypeMapProxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_analysisContext GALGAS_analysisContext::constructor_new (const GALGAS_semanticContext & inOperand0,
                                                                const GALGAS_predefinedTypes & inOperand1,
                                                                const GALGAS_unifiedTypeMapProxy & inOperand2,
                                                                const GALGAS_string & inOperand3,
                                                                const GALGAS_unifiedTypeMapProxy & inOperand4 
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

GALGAS_semanticContext GALGAS_analysisContext::reader_mSemanticContext (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypes GALGAS_analysisContext::reader_mPredefinedTypes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPredefinedTypes ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_analysisContext::reader_mSelfCopyTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelfCopyTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_analysisContext::reader_mSelfObjectCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelfObjectCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_analysisContext::reader_mSelfTypeProxy (UNUSED_LOCATION_ARGS) const {
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
//                  Abstract category method '@actualParameterForGeneration generateActualParameter'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_actualParameterForGeneration_generateActualParameter> gCategoryMethodTable_actualParameterForGeneration_generateActualParameter ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateActualParameter (const int32_t inClassIndex,
                                                  categoryMethodSignature_actualParameterForGeneration_generateActualParameter inMethod) {
  gCategoryMethodTable_actualParameterForGeneration_generateActualParameter.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_actualParameterForGeneration_generateActualParameter (void) {
  gCategoryMethodTable_actualParameterForGeneration_generateActualParameter.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_actualParameterForGeneration_generateActualParameter (NULL,
                                                                                 freeCategoryMethod_actualParameterForGeneration_generateActualParameter) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
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
    categoryMethodSignature_actualParameterForGeneration_generateActualParameter f = NULL ;
    if (classIndex < gCategoryMethodTable_actualParameterForGeneration_generateActualParameter.count ()) {
      f = gCategoryMethodTable_actualParameterForGeneration_generateActualParameter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_actualParameterForGeneration_generateActualParameter.count ()) {
           f = gCategoryMethodTable_actualParameterForGeneration_generateActualParameter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_actualParameterForGeneration_generateActualParameter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioImplementation, io_ioJokerParametersToReleaseList, io_ioOutputVariableList, io_ioUnusedVariableCppNameSet, out_outCppName, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectComponentAST::GALGAS_projectComponentAST (void) :
mAttribute_mProjectSourceList (),
mAttribute_mMajorVersion (),
mAttribute_mMinorVersion (),
mAttribute_mRevisionVersion (),
mAttribute_mGenerationFeatureList (),
mAttribute_mQualifiedFeatureList (),
mAttribute_mProjectName (),
mAttribute_mTargetName (),
mAttribute_mEndOfSourceFile () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectComponentAST::~ GALGAS_projectComponentAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectComponentAST::GALGAS_projectComponentAST (const GALGAS_projectSourceList & inOperand0,
                                                        const GALGAS_luint & inOperand1,
                                                        const GALGAS_luint & inOperand2,
                                                        const GALGAS_luint & inOperand3,
                                                        const GALGAS_lstringlist & inOperand4,
                                                        const GALGAS_qualifiedFeatureList & inOperand5,
                                                        const GALGAS_lstring & inOperand6,
                                                        const GALGAS_lstring & inOperand7,
                                                        const GALGAS_location & inOperand8) :
mAttribute_mProjectSourceList (inOperand0),
mAttribute_mMajorVersion (inOperand1),
mAttribute_mMinorVersion (inOperand2),
mAttribute_mRevisionVersion (inOperand3),
mAttribute_mGenerationFeatureList (inOperand4),
mAttribute_mQualifiedFeatureList (inOperand5),
mAttribute_mProjectName (inOperand6),
mAttribute_mTargetName (inOperand7),
mAttribute_mEndOfSourceFile (inOperand8) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectComponentAST GALGAS_projectComponentAST::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_projectComponentAST (GALGAS_projectSourceList::constructor_emptyList (HERE),
                                     GALGAS_luint::constructor_default (HERE),
                                     GALGAS_luint::constructor_default (HERE),
                                     GALGAS_luint::constructor_default (HERE),
                                     GALGAS_lstringlist::constructor_emptyList (HERE),
                                     GALGAS_qualifiedFeatureList::constructor_emptyList (HERE),
                                     GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectComponentAST GALGAS_projectComponentAST::constructor_new (const GALGAS_projectSourceList & inOperand0,
                                                                        const GALGAS_luint & inOperand1,
                                                                        const GALGAS_luint & inOperand2,
                                                                        const GALGAS_luint & inOperand3,
                                                                        const GALGAS_lstringlist & inOperand4,
                                                                        const GALGAS_qualifiedFeatureList & inOperand5,
                                                                        const GALGAS_lstring & inOperand6,
                                                                        const GALGAS_lstring & inOperand7,
                                                                        const GALGAS_location & inOperand8 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_projectComponentAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid ()) {
    result = GALGAS_projectComponentAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_projectComponentAST::objectCompare (const GALGAS_projectComponentAST & inOperand) const {
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
    result = mAttribute_mProjectName.objectCompare (inOperand.mAttribute_mProjectName) ;
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

bool GALGAS_projectComponentAST::isValid (void) const {
  return mAttribute_mProjectSourceList.isValid () && mAttribute_mMajorVersion.isValid () && mAttribute_mMinorVersion.isValid () && mAttribute_mRevisionVersion.isValid () && mAttribute_mGenerationFeatureList.isValid () && mAttribute_mQualifiedFeatureList.isValid () && mAttribute_mProjectName.isValid () && mAttribute_mTargetName.isValid () && mAttribute_mEndOfSourceFile.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_projectComponentAST::drop (void) {
  mAttribute_mProjectSourceList.drop () ;
  mAttribute_mMajorVersion.drop () ;
  mAttribute_mMinorVersion.drop () ;
  mAttribute_mRevisionVersion.drop () ;
  mAttribute_mGenerationFeatureList.drop () ;
  mAttribute_mQualifiedFeatureList.drop () ;
  mAttribute_mProjectName.drop () ;
  mAttribute_mTargetName.drop () ;
  mAttribute_mEndOfSourceFile.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_projectComponentAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @projectComponentAST:" ;
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
    mAttribute_mProjectName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfSourceFile.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectSourceList GALGAS_projectComponentAST::reader_mProjectSourceList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProjectSourceList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_projectComponentAST::reader_mMajorVersion (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMajorVersion ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_projectComponentAST::reader_mMinorVersion (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMinorVersion ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_projectComponentAST::reader_mRevisionVersion (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRevisionVersion ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_projectComponentAST::reader_mGenerationFeatureList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGenerationFeatureList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_qualifiedFeatureList GALGAS_projectComponentAST::reader_mQualifiedFeatureList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mQualifiedFeatureList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_projectComponentAST::reader_mProjectName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProjectName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_projectComponentAST::reader_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_projectComponentAST::reader_mEndOfSourceFile (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfSourceFile ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @projectComponentAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_projectComponentAST ("projectComponentAST",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_projectComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectComponentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_projectComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_projectComponentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_projectComponentAST GALGAS_projectComponentAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_projectComponentAST result ;
  const GALGAS_projectComponentAST * p = (const GALGAS_projectComponentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_projectComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("projectComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

GALGAS_lstringlist GALGAS_galgas_33_ProjectComponentAST::reader_mProjectSourceList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProjectSourceList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_galgas_33_ProjectComponentAST::reader_mMajorVersion (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMajorVersion ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_galgas_33_ProjectComponentAST::reader_mMinorVersion (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMinorVersion ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_galgas_33_ProjectComponentAST::reader_mRevisionVersion (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRevisionVersion ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_galgas_33_ProjectComponentAST::reader_mGenerationFeatureList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGenerationFeatureList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_ProjectComponentAST::reader_mQualifiedFeatureList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mQualifiedFeatureList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_ProjectComponentAST::reader_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_galgas_33_ProjectComponentAST::reader_mEndOfSourceFile (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_templateExpressionListAST_2D_element::reader_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateExpressionListAST_2D_element::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateExpressionListAST_2D_element::reader_mEndOfExpressionLocation (UNUSED_LOCATION_ARGS) const {
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
                                                                              const GALGAS_unifiedTypeMapProxy & inOperand1,
                                                                              const GALGAS_string & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mTypeProxy (inOperand1),
mAttribute_mCppName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap_2D_element GALGAS_templateVariableMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateVariableMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                                GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVariableMap_2D_element GALGAS_templateVariableMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_unifiedTypeMapProxy & inOperand1,
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

GALGAS_lstring GALGAS_templateVariableMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_templateVariableMap_2D_element::reader_mTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_templateVariableMap_2D_element::reader_mCppName (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_metamodelTemplateDelimitorListAST_2D_element::reader_mStartString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_metamodelTemplateDelimitorListAST_2D_element::reader_mOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_metamodelTemplateDelimitorListAST_2D_element::reader_mEndString (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_templateReplacementListAST_2D_element::reader_mMatchString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMatchString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateReplacementListAST_2D_element::reader_mReplacementString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReplacementString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateReplacementListAST_2D_element::reader_mReplacementFunction (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_lexicalMessageDeclarationListAST_2D_element::reader_mMessageName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMessageName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalMessageDeclarationListAST_2D_element::reader_mMessageValue (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_lexicalAttributeListAST_2D_element::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalAttributeListAST_2D_element::reader_mName (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_lexicalStyleListAST_2D_element::reader_mName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalStyleListAST_2D_element::reader_mComment (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_terminalDeclarationListAST_2D_element::reader_mName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_terminalDeclarationListAST_2D_element::reader_mSentAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSentAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_terminalDeclarationListAST_2D_element::reader_mSyntaxErrorMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_terminalDeclarationListAST_2D_element::reader_mStyle (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStyle ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_terminalDeclarationListAST_2D_element::reader_mOptionList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_lexicalListEntryListAST_2D_element::reader_mEntrySpelling (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEntrySpelling ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalListEntryListAST_2D_element::reader_mTerminalSpelling (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalSpelling ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_lexicalListEntryListAST_2D_element::reader_mFeatureList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_sentLexicalAttributeListAST_2D_element::reader_mFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sentLexicalAttributeListAST_2D_element::reader_mAttributeName (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_lexicalListDeclarationListAST_2D_element::reader_mName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalListDeclarationListAST_2D_element::reader_mStyle (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStyle ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalListDeclarationListAST_2D_element::reader_mSyntaxErrorMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_lexicalListDeclarationListAST_2D_element::reader_mSentAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSentAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListDeclarationListAST_2D_element::reader_mEntryList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_lexicalSendSearchListAST_2D_element::reader_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalSendSearchListAST_2D_element::reader_mSearchListName (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lexicalArgumentModeAST GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::reader_mPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::reader_mLexicalTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element::reader_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_externRoutineListAST_2D_element::reader_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_externRoutineListAST_2D_element::reader_mLexicalRoutineFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalRoutineFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_externRoutineListAST_2D_element::reader_mErrorMessageList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::reader_mLexicalTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element::reader_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_externFunctionListAST_2D_element::reader_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_externFunctionListAST_2D_element::reader_mLexicalFunctionFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalFunctionFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externFunctionListAST_2D_element::reader_mReturnedTypeName (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_indexingListAST_2D_element::reader_mIndexName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_indexingListAST_2D_element::reader_mIndexComment (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_lexicalSentValueList_2D_element::reader_mLexicalFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexicalSentValueList_2D_element::reader_mLexicalAttributeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalSentValueList_2D_element::reader_mLexicalType (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_terminalMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_terminalMap_2D_element::reader_mSentAttributeList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_lexicalTypeMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeMap_2D_element::reader_mLexicalType (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_lexicalAttributeMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalAttributeMap_2D_element::reader_mLexicalType (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_terminalList_2D_element::reader_mTerminalName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_terminalList_2D_element::reader_mSentAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSentAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_terminalList_2D_element::reader_mSyntaxErrorMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_terminalList_2D_element::reader_mIsEndOfTemplateMark (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsEndOfTemplateMark ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_terminalList_2D_element::reader_mAtomicSelection (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAtomicSelection ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_terminalList_2D_element::reader_mStyleIndex (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_lexicalExplicitTokenListMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalExplicitTokenListMap_2D_element::reader_mTerminal (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminal ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_lexicalExplicitTokenListMap_2D_element::reader_mFeatureList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_lexicalExplicitTokenListMapMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMapMap_2D_element::reader_mExplicitTokenListMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExplicitTokenListMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist GALGAS_lexicalExplicitTokenListMapMap_2D_element::reader_mTokenSortedList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTokenSortedList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalExplicitTokenListMapMap_2D_element::reader_mShouldBeGenerated (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_lexicalMessageMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalMessageMap_2D_element::reader_mLexicalMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalMessageMap_2D_element::reader_mMessageIsUsed (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_lexicalRoutineMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineMap_2D_element::reader_mLexicalRoutineFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalRoutineFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_lexicalRoutineMap_2D_element::reader_mErrorMessageList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorMessageList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalRoutineMap_2D_element::reader_mIsExtern (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_lexicalFunctionMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionMap_2D_element::reader_mLexicalTypeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalTypeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalFunctionMap_2D_element::reader_mReturnedLexicalType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnedLexicalType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexicalFunctionMap_2D_element::reader_mReplacementFunctionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReplacementFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalFunctionMap_2D_element::reader_mIsExtern (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_templateDelimitorList_2D_element::reader_mStartString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateDelimitorList_2D_element::reader_mEndString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_templateDelimitorList_2D_element::reader_mPreservesStartDelimiter (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_styleMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_styleMap_2D_element::reader_mComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_styleMap_2D_element::reader_mStyleIndex (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_lexicalTagMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_commandLineOptionListAST_2D_element::reader_mOptionTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST_2D_element::reader_mOptionInternalName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionInternalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar GALGAS_commandLineOptionListAST_2D_element::reader_mOptionInvocationLetter (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionInvocationLetter ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST_2D_element::reader_mOptionInvocationString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionInvocationString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST_2D_element::reader_mOptionComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_commandLineOptionListAST_2D_element::reader_mOptionDefaultValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionDefaultValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionDefaultValueEnumAST GALGAS_commandLineOptionListAST_2D_element::reader_mOptionDefaultValueKind (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_commandLineOptionMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char GALGAS_commandLineOptionMap_2D_element::reader_mOptionChar (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionChar ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_commandLineOptionMap_2D_element::reader_mOptionString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_commandLineOptionMap_2D_element::reader_mComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_commandLineOptionMap_2D_element::reader_mDefaultValue (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_guiSimpleAttributeListAST_2D_element::reader_mKey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guiSimpleAttributeListAST_2D_element::reader_mValue (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_guiCompoundAttributeListAST_2D_element::reader_mKey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guiCompoundAttributeListAST_2D_element::reader_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guiCompoundAttributeListAST_2D_element::reader_mValue (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_terminalLabelListAST_2D_element::reader_mTerminal (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminal ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_terminalLabelListAST_2D_element::reader_mDisplayFlags (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_withLexiqueListAST_2D_element::reader_mLexiqueFileName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexiqueFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_withLexiqueListAST_2D_element::reader_mLabels (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabels ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_withLexiqueListAST_2D_element::reader_mSimpleAttributes (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSimpleAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCompoundAttributeListAST GALGAS_withLexiqueListAST_2D_element::reader_mCompoundAttributes (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_extensionMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_extensionMap_2D_element::reader_mLexiqueName (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_optionComponentMapForGeneration_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiAnalysisContext GALGAS_optionComponentMapForGeneration_2D_element::reader_mGuiComponentContext (UNUSED_LOCATION_ARGS) const {
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

GALGAS_parsedLexiqueComponentMap_2D_element::GALGAS_parsedLexiqueComponentMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mLexiqueComponentAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedLexiqueComponentMap_2D_element::~ GALGAS_parsedLexiqueComponentMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedLexiqueComponentMap_2D_element::GALGAS_parsedLexiqueComponentMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_galgas_33_LexiqueComponentListAST_2D_element & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mLexiqueComponentAST (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedLexiqueComponentMap_2D_element GALGAS_parsedLexiqueComponentMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_parsedLexiqueComponentMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_galgas_33_LexiqueComponentListAST_2D_element::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedLexiqueComponentMap_2D_element GALGAS_parsedLexiqueComponentMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_galgas_33_LexiqueComponentListAST_2D_element & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_parsedLexiqueComponentMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_parsedLexiqueComponentMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_parsedLexiqueComponentMap_2D_element::objectCompare (const GALGAS_parsedLexiqueComponentMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexiqueComponentAST.objectCompare (inOperand.mAttribute_mLexiqueComponentAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_parsedLexiqueComponentMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexiqueComponentAST.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedLexiqueComponentMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mLexiqueComponentAST.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedLexiqueComponentMap_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @parsedLexiqueComponentMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexiqueComponentAST.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_parsedLexiqueComponentMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_LexiqueComponentListAST_2D_element GALGAS_parsedLexiqueComponentMap_2D_element::reader_mLexiqueComponentAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexiqueComponentAST ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @parsedLexiqueComponentMap-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedLexiqueComponentMap_2D_element ("parsedLexiqueComponentMap-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_parsedLexiqueComponentMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedLexiqueComponentMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_parsedLexiqueComponentMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedLexiqueComponentMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedLexiqueComponentMap_2D_element GALGAS_parsedLexiqueComponentMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_parsedLexiqueComponentMap_2D_element result ;
  const GALGAS_parsedLexiqueComponentMap_2D_element * p = (const GALGAS_parsedLexiqueComponentMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parsedLexiqueComponentMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parsedLexiqueComponentMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedOptionComponentMap_2D_element::GALGAS_parsedOptionComponentMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mBoolOptionMap (),
mAttribute_mUIntOptionMap (),
mAttribute_mStringOptionMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedOptionComponentMap_2D_element::~ GALGAS_parsedOptionComponentMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedOptionComponentMap_2D_element::GALGAS_parsedOptionComponentMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_commandLineOptionMap & inOperand1,
                                                                                        const GALGAS_commandLineOptionMap & inOperand2,
                                                                                        const GALGAS_commandLineOptionMap & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mBoolOptionMap (inOperand1),
mAttribute_mUIntOptionMap (inOperand2),
mAttribute_mStringOptionMap (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedOptionComponentMap_2D_element GALGAS_parsedOptionComponentMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_parsedOptionComponentMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_commandLineOptionMap::constructor_emptyMap (HERE),
                                                     GALGAS_commandLineOptionMap::constructor_emptyMap (HERE),
                                                     GALGAS_commandLineOptionMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedOptionComponentMap_2D_element GALGAS_parsedOptionComponentMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_commandLineOptionMap & inOperand1,
                                                                                                        const GALGAS_commandLineOptionMap & inOperand2,
                                                                                                        const GALGAS_commandLineOptionMap & inOperand3 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_parsedOptionComponentMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_parsedOptionComponentMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_parsedOptionComponentMap_2D_element::objectCompare (const GALGAS_parsedOptionComponentMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
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

bool GALGAS_parsedOptionComponentMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mBoolOptionMap.isValid () && mAttribute_mUIntOptionMap.isValid () && mAttribute_mStringOptionMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedOptionComponentMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mBoolOptionMap.drop () ;
  mAttribute_mUIntOptionMap.drop () ;
  mAttribute_mStringOptionMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedOptionComponentMap_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @parsedOptionComponentMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
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

GALGAS_lstring GALGAS_parsedOptionComponentMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_parsedOptionComponentMap_2D_element::reader_mBoolOptionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBoolOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_parsedOptionComponentMap_2D_element::reader_mUIntOptionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUIntOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_parsedOptionComponentMap_2D_element::reader_mStringOptionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStringOptionMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @parsedOptionComponentMap-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedOptionComponentMap_2D_element ("parsedOptionComponentMap-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_parsedOptionComponentMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedOptionComponentMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_parsedOptionComponentMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedOptionComponentMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedOptionComponentMap_2D_element GALGAS_parsedOptionComponentMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_parsedOptionComponentMap_2D_element result ;
  const GALGAS_parsedOptionComponentMap_2D_element * p = (const GALGAS_parsedOptionComponentMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parsedOptionComponentMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parsedOptionComponentMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSemanticsComponentMap_2D_element::GALGAS_parsedSemanticsComponentMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mSourceFullFilePath (),
mAttribute_mSemanticComponentRoot () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSemanticsComponentMap_2D_element::~ GALGAS_parsedSemanticsComponentMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSemanticsComponentMap_2D_element::GALGAS_parsedSemanticsComponentMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1,
                                                                                              const GALGAS_semanticsComponentAST & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mSourceFullFilePath (inOperand1),
mAttribute_mSemanticComponentRoot (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSemanticsComponentMap_2D_element GALGAS_parsedSemanticsComponentMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_parsedSemanticsComponentMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_semanticsComponentAST::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSemanticsComponentMap_2D_element GALGAS_parsedSemanticsComponentMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_semanticsComponentAST & inOperand2 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_parsedSemanticsComponentMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_parsedSemanticsComponentMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_parsedSemanticsComponentMap_2D_element::objectCompare (const GALGAS_parsedSemanticsComponentMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSourceFullFilePath.objectCompare (inOperand.mAttribute_mSourceFullFilePath) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSemanticComponentRoot.objectCompare (inOperand.mAttribute_mSemanticComponentRoot) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_parsedSemanticsComponentMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSourceFullFilePath.isValid () && mAttribute_mSemanticComponentRoot.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedSemanticsComponentMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mSourceFullFilePath.drop () ;
  mAttribute_mSemanticComponentRoot.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedSemanticsComponentMap_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @parsedSemanticsComponentMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSourceFullFilePath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSemanticComponentRoot.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_parsedSemanticsComponentMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_parsedSemanticsComponentMap_2D_element::reader_mSourceFullFilePath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceFullFilePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticsComponentAST GALGAS_parsedSemanticsComponentMap_2D_element::reader_mSemanticComponentRoot (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticComponentRoot ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @parsedSemanticsComponentMap-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedSemanticsComponentMap_2D_element ("parsedSemanticsComponentMap-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_parsedSemanticsComponentMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedSemanticsComponentMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_parsedSemanticsComponentMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedSemanticsComponentMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSemanticsComponentMap_2D_element GALGAS_parsedSemanticsComponentMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_parsedSemanticsComponentMap_2D_element result ;
  const GALGAS_parsedSemanticsComponentMap_2D_element * p = (const GALGAS_parsedSemanticsComponentMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parsedSemanticsComponentMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parsedSemanticsComponentMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGrammarComponentMap_2D_element::GALGAS_parsedGrammarComponentMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mSourceFullFilePath (),
mAttribute_mGrammarComponentRoot () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGrammarComponentMap_2D_element::~ GALGAS_parsedGrammarComponentMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGrammarComponentMap_2D_element::GALGAS_parsedGrammarComponentMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_galgas_33_GrammarComponentListAST_2D_element & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mSourceFullFilePath (inOperand1),
mAttribute_mGrammarComponentRoot (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGrammarComponentMap_2D_element GALGAS_parsedGrammarComponentMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_parsedGrammarComponentMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_galgas_33_GrammarComponentListAST_2D_element::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGrammarComponentMap_2D_element GALGAS_parsedGrammarComponentMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                          const GALGAS_galgas_33_GrammarComponentListAST_2D_element & inOperand2 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_parsedGrammarComponentMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_parsedGrammarComponentMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_parsedGrammarComponentMap_2D_element::objectCompare (const GALGAS_parsedGrammarComponentMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSourceFullFilePath.objectCompare (inOperand.mAttribute_mSourceFullFilePath) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGrammarComponentRoot.objectCompare (inOperand.mAttribute_mGrammarComponentRoot) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_parsedGrammarComponentMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSourceFullFilePath.isValid () && mAttribute_mGrammarComponentRoot.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedGrammarComponentMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mSourceFullFilePath.drop () ;
  mAttribute_mGrammarComponentRoot.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedGrammarComponentMap_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @parsedGrammarComponentMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSourceFullFilePath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGrammarComponentRoot.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_parsedGrammarComponentMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_parsedGrammarComponentMap_2D_element::reader_mSourceFullFilePath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceFullFilePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentListAST_2D_element GALGAS_parsedGrammarComponentMap_2D_element::reader_mGrammarComponentRoot (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarComponentRoot ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @parsedGrammarComponentMap-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedGrammarComponentMap_2D_element ("parsedGrammarComponentMap-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_parsedGrammarComponentMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedGrammarComponentMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_parsedGrammarComponentMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedGrammarComponentMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGrammarComponentMap_2D_element GALGAS_parsedGrammarComponentMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_parsedGrammarComponentMap_2D_element result ;
  const GALGAS_parsedGrammarComponentMap_2D_element * p = (const GALGAS_parsedGrammarComponentMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parsedGrammarComponentMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parsedGrammarComponentMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSyntaxComponentMap_2D_element::GALGAS_parsedSyntaxComponentMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mSourceFullFilePath (),
mAttribute_mSyntaxComponentRoot () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSyntaxComponentMap_2D_element::~ GALGAS_parsedSyntaxComponentMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSyntaxComponentMap_2D_element::GALGAS_parsedSyntaxComponentMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_galgas_33_SyntaxComponentListAST_2D_element & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mSourceFullFilePath (inOperand1),
mAttribute_mSyntaxComponentRoot (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSyntaxComponentMap_2D_element GALGAS_parsedSyntaxComponentMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_parsedSyntaxComponentMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_galgas_33_SyntaxComponentListAST_2D_element::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSyntaxComponentMap_2D_element GALGAS_parsedSyntaxComponentMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                        const GALGAS_galgas_33_SyntaxComponentListAST_2D_element & inOperand2 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_parsedSyntaxComponentMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_parsedSyntaxComponentMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_parsedSyntaxComponentMap_2D_element::objectCompare (const GALGAS_parsedSyntaxComponentMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSourceFullFilePath.objectCompare (inOperand.mAttribute_mSourceFullFilePath) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSyntaxComponentRoot.objectCompare (inOperand.mAttribute_mSyntaxComponentRoot) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_parsedSyntaxComponentMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSourceFullFilePath.isValid () && mAttribute_mSyntaxComponentRoot.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedSyntaxComponentMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mSourceFullFilePath.drop () ;
  mAttribute_mSyntaxComponentRoot.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedSyntaxComponentMap_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @parsedSyntaxComponentMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSourceFullFilePath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSyntaxComponentRoot.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_parsedSyntaxComponentMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_parsedSyntaxComponentMap_2D_element::reader_mSourceFullFilePath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceFullFilePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentListAST_2D_element GALGAS_parsedSyntaxComponentMap_2D_element::reader_mSyntaxComponentRoot (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxComponentRoot ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @parsedSyntaxComponentMap-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedSyntaxComponentMap_2D_element ("parsedSyntaxComponentMap-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_parsedSyntaxComponentMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedSyntaxComponentMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_parsedSyntaxComponentMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedSyntaxComponentMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedSyntaxComponentMap_2D_element GALGAS_parsedSyntaxComponentMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_parsedSyntaxComponentMap_2D_element result ;
  const GALGAS_parsedSyntaxComponentMap_2D_element * p = (const GALGAS_parsedSyntaxComponentMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parsedSyntaxComponentMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parsedSyntaxComponentMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedProgramComponentMap_2D_element::GALGAS_parsedProgramComponentMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mSourceFullFilePath (),
mAttribute_mProgramComponentAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedProgramComponentMap_2D_element::~ GALGAS_parsedProgramComponentMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedProgramComponentMap_2D_element::GALGAS_parsedProgramComponentMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_programComponentAST & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mSourceFullFilePath (inOperand1),
mAttribute_mProgramComponentAST (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedProgramComponentMap_2D_element GALGAS_parsedProgramComponentMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_parsedProgramComponentMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_programComponentAST::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedProgramComponentMap_2D_element GALGAS_parsedProgramComponentMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                          const GALGAS_programComponentAST & inOperand2 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_parsedProgramComponentMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_parsedProgramComponentMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_parsedProgramComponentMap_2D_element::objectCompare (const GALGAS_parsedProgramComponentMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSourceFullFilePath.objectCompare (inOperand.mAttribute_mSourceFullFilePath) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProgramComponentAST.objectCompare (inOperand.mAttribute_mProgramComponentAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_parsedProgramComponentMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSourceFullFilePath.isValid () && mAttribute_mProgramComponentAST.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedProgramComponentMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mSourceFullFilePath.drop () ;
  mAttribute_mProgramComponentAST.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedProgramComponentMap_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @parsedProgramComponentMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSourceFullFilePath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProgramComponentAST.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_parsedProgramComponentMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_parsedProgramComponentMap_2D_element::reader_mSourceFullFilePath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceFullFilePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programComponentAST GALGAS_parsedProgramComponentMap_2D_element::reader_mProgramComponentAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProgramComponentAST ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @parsedProgramComponentMap-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedProgramComponentMap_2D_element ("parsedProgramComponentMap-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_parsedProgramComponentMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedProgramComponentMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_parsedProgramComponentMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedProgramComponentMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedProgramComponentMap_2D_element GALGAS_parsedProgramComponentMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_parsedProgramComponentMap_2D_element result ;
  const GALGAS_parsedProgramComponentMap_2D_element * p = (const GALGAS_parsedProgramComponentMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parsedProgramComponentMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parsedProgramComponentMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGuiComponentMap_2D_element::GALGAS_parsedGuiComponentMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mSourceFullFilePath (),
mAttribute_mGuiComponentAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGuiComponentMap_2D_element::~ GALGAS_parsedGuiComponentMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGuiComponentMap_2D_element::GALGAS_parsedGuiComponentMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_guiComponentAST & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mSourceFullFilePath (inOperand1),
mAttribute_mGuiComponentAST (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGuiComponentMap_2D_element GALGAS_parsedGuiComponentMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_parsedGuiComponentMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_guiComponentAST::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGuiComponentMap_2D_element GALGAS_parsedGuiComponentMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_guiComponentAST & inOperand2 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_parsedGuiComponentMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_parsedGuiComponentMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_parsedGuiComponentMap_2D_element::objectCompare (const GALGAS_parsedGuiComponentMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSourceFullFilePath.objectCompare (inOperand.mAttribute_mSourceFullFilePath) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGuiComponentAST.objectCompare (inOperand.mAttribute_mGuiComponentAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_parsedGuiComponentMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSourceFullFilePath.isValid () && mAttribute_mGuiComponentAST.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedGuiComponentMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mSourceFullFilePath.drop () ;
  mAttribute_mGuiComponentAST.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_parsedGuiComponentMap_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @parsedGuiComponentMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSourceFullFilePath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGuiComponentAST.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_parsedGuiComponentMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_parsedGuiComponentMap_2D_element::reader_mSourceFullFilePath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceFullFilePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiComponentAST GALGAS_parsedGuiComponentMap_2D_element::reader_mGuiComponentAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGuiComponentAST ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @parsedGuiComponentMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parsedGuiComponentMap_2D_element ("parsedGuiComponentMap-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_parsedGuiComponentMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parsedGuiComponentMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_parsedGuiComponentMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parsedGuiComponentMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_parsedGuiComponentMap_2D_element GALGAS_parsedGuiComponentMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_parsedGuiComponentMap_2D_element result ;
  const GALGAS_parsedGuiComponentMap_2D_element * p = (const GALGAS_parsedGuiComponentMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parsedGuiComponentMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parsedGuiComponentMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_lstring GALGAS_actualOutputExpressionList_2D_element::reader_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_actualOutputExpressionList_2D_element::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_actualOutputExpressionList_2D_element::reader_mEndOfExpressionLocation (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_formalParameterListAST_2D_element::reader_mFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST GALGAS_formalParameterListAST_2D_element::reader_mFormalArgumentPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalParameterListAST_2D_element::reader_mFormalArgumentTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalParameterListAST_2D_element::reader_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_formalParameterListAST_2D_element::reader_mIsUnused (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_formalInputParameterListAST_2D_element::reader_mFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalInputParameterListAST_2D_element::reader_mFormalArgumentTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalInputParameterListAST_2D_element::reader_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_formalInputParameterListAST_2D_element::reader_mIsUnused (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsUnused ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_formalInputParameterListAST_2D_element::reader_mIsConstant (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_actualInputParameterListAST_2D_element::reader_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractInputParameter GALGAS_actualInputParameterListAST_2D_element::reader_mInputParameter (UNUSED_LOCATION_ARGS) const {
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

GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element::GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element (void) :
mAttribute_mTypeName (),
mAttribute_mConstantName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element::~ GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element::GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                                        const GALGAS_lstring & inOperand1) :
mAttribute_mTypeName (inOperand0),
mAttribute_mConstantName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                             GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                                        const GALGAS_lstring & inOperand1 
                                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element::objectCompare (const GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTypeName.objectCompare (inOperand.mAttribute_mTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConstantName.objectCompare (inOperand.mAttribute_mConstantName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element::isValid (void) const {
  return mAttribute_mTypeName.isValid () && mAttribute_mConstantName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element::drop (void) {
  mAttribute_mTypeName.drop () ;
  mAttribute_mConstantName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "<struct @foreachInstructionEnumeratedObjectElementListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConstantName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element::reader_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           @foreachInstructionEnumeratedObjectElementListAST-element type                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element ("foreachInstructionEnumeratedObjectElementListAST-element",
                                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element result ;
  const GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element * p = (const GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_foreachInstructionEnumeratedObjectElementListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("foreachInstructionEnumeratedObjectElementListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element::GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element (void) :
mAttribute_mEnumerationOrder (),
mAttribute_mEnumeratedExpression (),
mAttribute_mEndOfEnumerationExpression (),
mAttribute_mElementList (),
mAttribute_mEndOfElementList (),
mAttribute_mEndsWithEllipsis (),
mAttribute_mPrefix () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element::~ GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element::GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                          const GALGAS_semanticExpressionAST & inOperand1,
                                                                                                                          const GALGAS_location & inOperand2,
                                                                                                                          const GALGAS_foreachInstructionEnumeratedObjectElementListAST & inOperand3,
                                                                                                                          const GALGAS_location & inOperand4,
                                                                                                                          const GALGAS_bool & inOperand5,
                                                                                                                          const GALGAS_lstring & inOperand6) :
mAttribute_mEnumerationOrder (inOperand0),
mAttribute_mEnumeratedExpression (inOperand1),
mAttribute_mEndOfEnumerationExpression (inOperand2),
mAttribute_mElementList (inOperand3),
mAttribute_mEndOfElementList (inOperand4),
mAttribute_mEndsWithEllipsis (inOperand5),
mAttribute_mPrefix (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                          const GALGAS_semanticExpressionAST & inOperand1,
                                                                                                                                          const GALGAS_location & inOperand2,
                                                                                                                                          const GALGAS_foreachInstructionEnumeratedObjectElementListAST & inOperand3,
                                                                                                                                          const GALGAS_location & inOperand4,
                                                                                                                                          const GALGAS_bool & inOperand5,
                                                                                                                                          const GALGAS_lstring & inOperand6 
                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element::objectCompare (const GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mEnumerationOrder.objectCompare (inOperand.mAttribute_mEnumerationOrder) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEnumeratedExpression.objectCompare (inOperand.mAttribute_mEnumeratedExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfEnumerationExpression.objectCompare (inOperand.mAttribute_mEndOfEnumerationExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mElementList.objectCompare (inOperand.mAttribute_mElementList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfElementList.objectCompare (inOperand.mAttribute_mEndOfElementList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndsWithEllipsis.objectCompare (inOperand.mAttribute_mEndsWithEllipsis) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPrefix.objectCompare (inOperand.mAttribute_mPrefix) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element::isValid (void) const {
  return mAttribute_mEnumerationOrder.isValid () && mAttribute_mEnumeratedExpression.isValid () && mAttribute_mEndOfEnumerationExpression.isValid () && mAttribute_mElementList.isValid () && mAttribute_mEndOfElementList.isValid () && mAttribute_mEndsWithEllipsis.isValid () && mAttribute_mPrefix.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element::drop (void) {
  mAttribute_mEnumerationOrder.drop () ;
  mAttribute_mEnumeratedExpression.drop () ;
  mAttribute_mEndOfEnumerationExpression.drop () ;
  mAttribute_mElementList.drop () ;
  mAttribute_mEndOfElementList.drop () ;
  mAttribute_mEndsWithEllipsis.drop () ;
  mAttribute_mPrefix.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "<struct @foreachInstructionEnumeratedObjectListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mEnumerationOrder.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEnumeratedExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfEnumerationExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mElementList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfElementList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndsWithEllipsis.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPrefix.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element::reader_mEnumerationOrder (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumerationOrder ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element::reader_mEnumeratedExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumeratedExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element::reader_mEndOfEnumerationExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfEnumerationExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionEnumeratedObjectElementListAST GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element::reader_mElementList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElementList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element::reader_mEndOfElementList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfElementList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element::reader_mEndsWithEllipsis (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndsWithEllipsis ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element::reader_mPrefix (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPrefix ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @foreachInstructionEnumeratedObjectListAST-element type                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element ("foreachInstructionEnumeratedObjectListAST-element",
                                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element result ;
  const GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element * p = (const GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_foreachInstructionEnumeratedObjectListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("foreachInstructionEnumeratedObjectListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListAST_2D_element::GALGAS_castInstructionBranchListAST_2D_element (void) :
mAttribute_mTypeName (),
mAttribute_mConstantVarName (),
mAttribute_mInstructionList (),
mAttribute_mTypeComparisonKind (),
mAttribute_mEndOfInstructions () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListAST_2D_element::~ GALGAS_castInstructionBranchListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListAST_2D_element::GALGAS_castInstructionBranchListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_semanticInstructionListAST & inOperand2,
                                                                                                const GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                                                                const GALGAS_location & inOperand4) :
mAttribute_mTypeName (inOperand0),
mAttribute_mConstantVarName (inOperand1),
mAttribute_mInstructionList (inOperand2),
mAttribute_mTypeComparisonKind (inOperand3),
mAttribute_mEndOfInstructions (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListAST_2D_element GALGAS_castInstructionBranchListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                                const GALGAS_semanticInstructionListAST & inOperand2,
                                                                                                                const GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                                                                                const GALGAS_location & inOperand4 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_castInstructionBranchListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_castInstructionBranchListAST_2D_element::objectCompare (const GALGAS_castInstructionBranchListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTypeName.objectCompare (inOperand.mAttribute_mTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConstantVarName.objectCompare (inOperand.mAttribute_mConstantVarName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTypeComparisonKind.objectCompare (inOperand.mAttribute_mTypeComparisonKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfInstructions.objectCompare (inOperand.mAttribute_mEndOfInstructions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_castInstructionBranchListAST_2D_element::isValid (void) const {
  return mAttribute_mTypeName.isValid () && mAttribute_mConstantVarName.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mTypeComparisonKind.isValid () && mAttribute_mEndOfInstructions.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListAST_2D_element::drop (void) {
  mAttribute_mTypeName.drop () ;
  mAttribute_mConstantVarName.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mTypeComparisonKind.drop () ;
  mAttribute_mEndOfInstructions.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_castInstructionBranchListAST_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @castInstructionBranchListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConstantVarName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTypeComparisonKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfInstructions.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_castInstructionBranchListAST_2D_element::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_castInstructionBranchListAST_2D_element::reader_mConstantVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_castInstructionBranchListAST_2D_element::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dynamicTypeComparisonKind GALGAS_castInstructionBranchListAST_2D_element::reader_mTypeComparisonKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeComparisonKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_castInstructionBranchListAST_2D_element::reader_mEndOfInstructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInstructions ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @castInstructionBranchListAST-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInstructionBranchListAST_2D_element ("castInstructionBranchListAST-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_castInstructionBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_castInstructionBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInstructionBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_castInstructionBranchListAST_2D_element GALGAS_castInstructionBranchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListAST_2D_element result ;
  const GALGAS_castInstructionBranchListAST_2D_element * p = (const GALGAS_castInstructionBranchListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_castInstructionBranchListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInstructionBranchListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logListAST_2D_element::GALGAS_logListAST_2D_element (void) :
mAttribute_mLogMessage (),
mAttribute_mLogExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logListAST_2D_element::~ GALGAS_logListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logListAST_2D_element::GALGAS_logListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_semanticExpressionAST & inOperand1) :
mAttribute_mLogMessage (inOperand0),
mAttribute_mLogExpression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logListAST_2D_element GALGAS_logListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_semanticExpressionAST & inOperand1 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_logListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_logListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_logListAST_2D_element::objectCompare (const GALGAS_logListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLogMessage.objectCompare (inOperand.mAttribute_mLogMessage) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLogExpression.objectCompare (inOperand.mAttribute_mLogExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_logListAST_2D_element::isValid (void) const {
  return mAttribute_mLogMessage.isValid () && mAttribute_mLogExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_logListAST_2D_element::drop (void) {
  mAttribute_mLogMessage.drop () ;
  mAttribute_mLogExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_logListAST_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @logListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLogMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLogExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_logListAST_2D_element::reader_mLogMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLogMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_logListAST_2D_element::reader_mLogExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLogExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @logListAST-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_logListAST_2D_element ("logListAST-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_logListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_logListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_logListAST_2D_element GALGAS_logListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_logListAST_2D_element result ;
  const GALGAS_logListAST_2D_element * p = (const GALGAS_logListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_logListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeInCollectionListAST_2D_element::GALGAS_attributeInCollectionListAST_2D_element (void) :
mAttribute_mAttributeTypeName (),
mAttribute_mAttributeName (),
mAttribute_mFeatureList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeInCollectionListAST_2D_element::~ GALGAS_attributeInCollectionListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeInCollectionListAST_2D_element::GALGAS_attributeInCollectionListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_lstringlist & inOperand2) :
mAttribute_mAttributeTypeName (inOperand0),
mAttribute_mAttributeName (inOperand1),
mAttribute_mFeatureList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeInCollectionListAST_2D_element GALGAS_attributeInCollectionListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_attributeInCollectionListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeInCollectionListAST_2D_element GALGAS_attributeInCollectionListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                                const GALGAS_lstringlist & inOperand2 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_attributeInCollectionListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_attributeInCollectionListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_attributeInCollectionListAST_2D_element::objectCompare (const GALGAS_attributeInCollectionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeTypeName.objectCompare (inOperand.mAttribute_mAttributeTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeName.objectCompare (inOperand.mAttribute_mAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFeatureList.objectCompare (inOperand.mAttribute_mFeatureList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_attributeInCollectionListAST_2D_element::isValid (void) const {
  return mAttribute_mAttributeTypeName.isValid () && mAttribute_mAttributeName.isValid () && mAttribute_mFeatureList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeInCollectionListAST_2D_element::drop (void) {
  mAttribute_mAttributeTypeName.drop () ;
  mAttribute_mAttributeName.drop () ;
  mAttribute_mFeatureList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeInCollectionListAST_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @attributeInCollectionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mAttributeTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFeatureList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_attributeInCollectionListAST_2D_element::reader_mAttributeTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_attributeInCollectionListAST_2D_element::reader_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_attributeInCollectionListAST_2D_element::reader_mFeatureList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFeatureList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @attributeInCollectionListAST-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_attributeInCollectionListAST_2D_element ("attributeInCollectionListAST-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_attributeInCollectionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeInCollectionListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_attributeInCollectionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_attributeInCollectionListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeInCollectionListAST_2D_element GALGAS_attributeInCollectionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_attributeInCollectionListAST_2D_element result ;
  const GALGAS_attributeInCollectionListAST_2D_element * p = (const GALGAS_attributeInCollectionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_attributeInCollectionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("attributeInCollectionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_lstring GALGAS_mapStateTransitionList_2D_element::reader_mActionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapStateTransitionList_2D_element::reader_mTargetStateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetStateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind GALGAS_mapStateTransitionList_2D_element::reader_mTransitionMessageKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransitionMessageKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapStateTransitionList_2D_element::reader_mTransitionMessage (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_mapStateList_2D_element::reader_mStateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind GALGAS_mapStateList_2D_element::reader_mStateMessageKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateMessageKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapStateList_2D_element::reader_mStateMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionList GALGAS_mapStateList_2D_element::reader_mTransitionList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_insertMethodListAST_2D_element::reader_mInsertMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInsertMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_insertMethodListAST_2D_element::reader_mErrorMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_insertMethodListAST_2D_element::reader_mShadowErrorMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mShadowErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_insertMethodListAST_2D_element::reader_mInitialStateName (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_mapSearchMethodListAST_2D_element::reader_mSearchMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSearchMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapSearchMethodListAST_2D_element::reader_mErrorMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapSearchMethodListAST_2D_element::reader_mActionName (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_mapRemoveMethodListAST_2D_element::reader_mMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapRemoveMethodListAST_2D_element::reader_mErrorMessage (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_mapOverrideBlockDescriptorAST_2D_element::reader_mLeftState (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftState ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapOverrideBlockDescriptorAST_2D_element::reader_mRightState (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightState ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapOverrideBlockDescriptorAST_2D_element::reader_mResultingState (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultingState ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind GALGAS_mapOverrideBlockDescriptorAST_2D_element::reader_mMessageKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMessageKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapOverrideBlockDescriptorAST_2D_element::reader_mTransitionMessage (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_mapOverrideBlockListAST_2D_element::reader_mOverrideBlockName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverrideBlockName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockDescriptorAST GALGAS_mapOverrideBlockListAST_2D_element::reader_mMapOverrideBlockDescriptor_31_AST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMapOverrideBlockDescriptor_31_AST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockDescriptorAST GALGAS_mapOverrideBlockListAST_2D_element::reader_mMapOverrideBlockDescriptor_32_AST (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_sortedListSortDescriptorListAST_2D_element::reader_mSortedAttributeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSortedAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_sortedListSortDescriptorListAST_2D_element::reader_mAscending (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_enumConstantList_2D_element::reader_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS_enumConstantList_2D_element::reader_mAssociatedValueDefinitionList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_formalTemplateInputParameterListAST_2D_element::reader_mFormalTemplateSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalTemplateSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalTemplateInputParameterListAST_2D_element::reader_mFormalArgumentTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalTemplateInputParameterListAST_2D_element::reader_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_formalTemplateInputParameterListAST_2D_element::reader_mIsUnused (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_filewrapperTemplateListAST_2D_element::reader_mFilewrapperTemplateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperTemplateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperTemplateListAST_2D_element::reader_mFilewrapperTemplatePath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperTemplatePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalTemplateInputParameterListAST GALGAS_filewrapperTemplateListAST_2D_element::reader_mFilewrapperTemplateFormalInputParameters (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_graphInsertModifierList_2D_element::reader_mInsertModifierName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInsertModifierName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_graphInsertModifierList_2D_element::reader_mInsertErrorMessage (UNUSED_LOCATION_ARGS) const {
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

GALGAS_matchEntryListAST_2D_element::GALGAS_matchEntryListAST_2D_element (void) :
mAttribute_mIsType (),
mAttribute_mTypeNameOrEnumerationConstantName (),
mAttribute_mLocalConstantName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST_2D_element::~ GALGAS_matchEntryListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST_2D_element::GALGAS_matchEntryListAST_2D_element (const GALGAS_bool & inOperand0,
                                                                          const GALGAS_lstring & inOperand1,
                                                                          const GALGAS_lstring & inOperand2) :
mAttribute_mIsType (inOperand0),
mAttribute_mTypeNameOrEnumerationConstantName (inOperand1),
mAttribute_mLocalConstantName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST_2D_element GALGAS_matchEntryListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_matchEntryListAST_2D_element (GALGAS_bool::constructor_default (HERE),
                                              GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST_2D_element GALGAS_matchEntryListAST_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_lstring & inOperand2 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_matchEntryListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_matchEntryListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_matchEntryListAST_2D_element::objectCompare (const GALGAS_matchEntryListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mIsType.objectCompare (inOperand.mAttribute_mIsType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTypeNameOrEnumerationConstantName.objectCompare (inOperand.mAttribute_mTypeNameOrEnumerationConstantName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLocalConstantName.objectCompare (inOperand.mAttribute_mLocalConstantName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_matchEntryListAST_2D_element::isValid (void) const {
  return mAttribute_mIsType.isValid () && mAttribute_mTypeNameOrEnumerationConstantName.isValid () && mAttribute_mLocalConstantName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST_2D_element::drop (void) {
  mAttribute_mIsType.drop () ;
  mAttribute_mTypeNameOrEnumerationConstantName.drop () ;
  mAttribute_mLocalConstantName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchEntryListAST_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @matchEntryListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mIsType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTypeNameOrEnumerationConstantName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLocalConstantName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_matchEntryListAST_2D_element::reader_mIsType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_matchEntryListAST_2D_element::reader_mTypeNameOrEnumerationConstantName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeNameOrEnumerationConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_matchEntryListAST_2D_element::reader_mLocalConstantName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocalConstantName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @matchEntryListAST-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_matchEntryListAST_2D_element ("matchEntryListAST-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_matchEntryListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchEntryListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_matchEntryListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_matchEntryListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST_2D_element GALGAS_matchEntryListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_matchEntryListAST_2D_element result ;
  const GALGAS_matchEntryListAST_2D_element * p = (const GALGAS_matchEntryListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_matchEntryListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("matchEntryListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_lstring GALGAS_typeNameFormalParameterNameList_2D_element::reader_mFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeNameFormalParameterNameList_2D_element::reader_mFormalParameterTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalParameterTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeNameFormalParameterNameList_2D_element::reader_mFormalParameterName (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_externTypeConstructorList_2D_element::reader_mConstructorName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstructorName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeConstructorList_2D_element::reader_mResultTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList GALGAS_externTypeConstructorList_2D_element::reader_mParameterList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_externTypeReaderList_2D_element::GALGAS_externTypeReaderList_2D_element (void) :
mAttribute_mReaderName (),
mAttribute_mResultTypeName (),
mAttribute_mParameterList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeReaderList_2D_element::~ GALGAS_externTypeReaderList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeReaderList_2D_element::GALGAS_externTypeReaderList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_lstring & inOperand1,
                                                                                const GALGAS_typeNameFormalParameterNameList & inOperand2) :
mAttribute_mReaderName (inOperand0),
mAttribute_mResultTypeName (inOperand1),
mAttribute_mParameterList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeReaderList_2D_element GALGAS_externTypeReaderList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externTypeReaderList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_typeNameFormalParameterNameList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeReaderList_2D_element GALGAS_externTypeReaderList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_typeNameFormalParameterNameList & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externTypeReaderList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externTypeReaderList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_externTypeReaderList_2D_element::objectCompare (const GALGAS_externTypeReaderList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mReaderName.objectCompare (inOperand.mAttribute_mReaderName) ;
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

bool GALGAS_externTypeReaderList_2D_element::isValid (void) const {
  return mAttribute_mReaderName.isValid () && mAttribute_mResultTypeName.isValid () && mAttribute_mParameterList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeReaderList_2D_element::drop (void) {
  mAttribute_mReaderName.drop () ;
  mAttribute_mResultTypeName.drop () ;
  mAttribute_mParameterList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeReaderList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @externTypeReaderList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mReaderName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeReaderList_2D_element::reader_mReaderName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReaderName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeReaderList_2D_element::reader_mResultTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeNameFormalParameterNameList GALGAS_externTypeReaderList_2D_element::reader_mParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParameterList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @externTypeReaderList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeReaderList_2D_element ("externTypeReaderList-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externTypeReaderList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeReaderList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externTypeReaderList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeReaderList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeReaderList_2D_element GALGAS_externTypeReaderList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externTypeReaderList_2D_element result ;
  const GALGAS_externTypeReaderList_2D_element * p = (const GALGAS_externTypeReaderList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeReaderList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeReaderList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList_2D_element::GALGAS_externTypeModifierList_2D_element (void) :
mAttribute_mModifierName (),
mAttribute_mFormalParameterList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList_2D_element::~ GALGAS_externTypeModifierList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList_2D_element::GALGAS_externTypeModifierList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_formalParameterListAST & inOperand1) :
mAttribute_mModifierName (inOperand0),
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
    result = mAttribute_mModifierName.objectCompare (inOperand.mAttribute_mModifierName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalParameterList.objectCompare (inOperand.mAttribute_mFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_externTypeModifierList_2D_element::isValid (void) const {
  return mAttribute_mModifierName.isValid () && mAttribute_mFormalParameterList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeModifierList_2D_element::drop (void) {
  mAttribute_mModifierName.drop () ;
  mAttribute_mFormalParameterList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externTypeModifierList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @externTypeModifierList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mModifierName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeModifierList_2D_element::reader_mModifierName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModifierName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_externTypeModifierList_2D_element::reader_mFormalParameterList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_externTypeMethodList_2D_element::reader_mMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_externTypeMethodList_2D_element::reader_mFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_externTypeMethodList_2D_element::reader_mDeclarationLocation (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_nonTerminalLabelListAST_2D_element::reader_mLabelName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_nonTerminalLabelListAST_2D_element::reader_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_nonTerminalLabelListAST_2D_element::reader_mEndOfArgumentLocation (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_nonterminalDeclarationListAST_2D_element::reader_mNonterminalName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonterminalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST GALGAS_nonterminalDeclarationListAST_2D_element::reader_mLabels (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_syntaxRuleLabelListAST_2D_element::reader_mLabelName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_syntaxRuleLabelListAST_2D_element::reader_mFormalArguments (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_syntaxRuleLabelListAST_2D_element::reader_mEndOfArgumentLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfArgumentLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList GALGAS_syntaxRuleLabelListAST_2D_element::reader_mSyntaxInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_syntaxRuleLabelListAST_2D_element::reader_mEndOfInstructionList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_syntaxRuleListAST_2D_element::reader_mNonterminalName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonterminalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleLabelListAST GALGAS_syntaxRuleListAST_2D_element::reader_mLabelList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_programRuleList_2D_element::GALGAS_programRuleList_2D_element (void) :
mAttribute_mSourceFileExtension (),
mAttribute_mSourceFileHelp (),
mAttribute_mSourceFileVariableName (),
mAttribute_mSourceFileVariableNameIsUnused (),
mAttribute_mIndexingGrammar (),
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
mAttribute_mIndexingGrammar (inOperand4),
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
    result = mAttribute_mIndexingGrammar.objectCompare (inOperand.mAttribute_mIndexingGrammar) ;
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
  return mAttribute_mSourceFileExtension.isValid () && mAttribute_mSourceFileHelp.isValid () && mAttribute_mSourceFileVariableName.isValid () && mAttribute_mSourceFileVariableNameIsUnused.isValid () && mAttribute_mIndexingGrammar.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programRuleList_2D_element::drop (void) {
  mAttribute_mSourceFileExtension.drop () ;
  mAttribute_mSourceFileHelp.drop () ;
  mAttribute_mSourceFileVariableName.drop () ;
  mAttribute_mSourceFileVariableNameIsUnused.drop () ;
  mAttribute_mIndexingGrammar.drop () ;
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
    mAttribute_mIndexingGrammar.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_programRuleList_2D_element::reader_mSourceFileExtension (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceFileExtension ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_programRuleList_2D_element::reader_mSourceFileHelp (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceFileHelp ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_programRuleList_2D_element::reader_mSourceFileVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceFileVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_programRuleList_2D_element::reader_mSourceFileVariableNameIsUnused (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceFileVariableNameIsUnused ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_programRuleList_2D_element::reader_mIndexingGrammar (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexingGrammar ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_programRuleList_2D_element::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_programRuleList_2D_element::reader_mEndOfInstructionList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_galgas_33_GUIComponentListAST_2D_element::reader_mGUIComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGUIComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_galgas_33_GUIComponentListAST_2D_element::reader_mImportedOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImportedOptionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiSimpleAttributeListAST GALGAS_galgas_33_GUIComponentListAST_2D_element::reader_mGlobalSimpleAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalSimpleAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_withLexiqueListAST GALGAS_galgas_33_GUIComponentListAST_2D_element::reader_mWithLexiqueList (UNUSED_LOCATION_ARGS) const {
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
                                                                          const GALGAS_unifiedTypeMapProxy & inOperand1,
                                                                          const GALGAS_string & inOperand2) :
mAttribute_mFormalSelector (inOperand0),
mAttribute_mFormalArgumentType (inOperand1),
mAttribute_mFormalArgumentName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature_2D_element GALGAS_functionSignature_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionSignature_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                              GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature_2D_element GALGAS_functionSignature_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_unifiedTypeMapProxy & inOperand1,
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

GALGAS_lstring GALGAS_functionSignature_2D_element::reader_mFormalSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_functionSignature_2D_element::reader_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_functionSignature_2D_element::reader_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
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

GALGAS_unifiedTypeMapProxyList_2D_element::GALGAS_unifiedTypeMapProxyList_2D_element (const GALGAS_unifiedTypeMapProxy & inOperand0) :
mAttribute_mType (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList_2D_element GALGAS_unifiedTypeMapProxyList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_unifiedTypeMapProxyList_2D_element (GALGAS_unifiedTypeMapProxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList_2D_element GALGAS_unifiedTypeMapProxyList_2D_element::constructor_new (const GALGAS_unifiedTypeMapProxy & inOperand0 
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

GALGAS_unifiedTypeMapProxy GALGAS_unifiedTypeMapProxyList_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
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

GALGAS_unifiedTypeMapProxyAndParameterList_2D_element::GALGAS_unifiedTypeMapProxyAndParameterList_2D_element (void) :
mAttribute_mType (),
mAttribute_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList_2D_element::~ GALGAS_unifiedTypeMapProxyAndParameterList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList_2D_element::GALGAS_unifiedTypeMapProxyAndParameterList_2D_element (const GALGAS_unifiedTypeMapProxy & inOperand0,
                                                                                                              const GALGAS_string & inOperand1) :
mAttribute_mType (inOperand0),
mAttribute_mFormalArgumentName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList_2D_element GALGAS_unifiedTypeMapProxyAndParameterList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_unifiedTypeMapProxyAndParameterList_2D_element (GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                                                GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList_2D_element GALGAS_unifiedTypeMapProxyAndParameterList_2D_element::constructor_new (const GALGAS_unifiedTypeMapProxy & inOperand0,
                                                                                                                              const GALGAS_string & inOperand1 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyAndParameterList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_unifiedTypeMapProxyAndParameterList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_unifiedTypeMapProxyAndParameterList_2D_element::objectCompare (const GALGAS_unifiedTypeMapProxyAndParameterList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_unifiedTypeMapProxyAndParameterList_2D_element::isValid (void) const {
  return mAttribute_mType.isValid () && mAttribute_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndParameterList_2D_element::drop (void) {
  mAttribute_mType.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndParameterList_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @unifiedTypeMapProxyAndParameterList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_unifiedTypeMapProxyAndParameterList_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_unifiedTypeMapProxyAndParameterList_2D_element::reader_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @unifiedTypeMapProxyAndParameterList-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMapProxyAndParameterList_2D_element ("unifiedTypeMapProxyAndParameterList-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapProxyAndParameterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapProxyAndParameterList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedTypeMapProxyAndParameterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapProxyAndParameterList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndParameterList_2D_element GALGAS_unifiedTypeMapProxyAndParameterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyAndParameterList_2D_element result ;
  const GALGAS_unifiedTypeMapProxyAndParameterList_2D_element * p = (const GALGAS_unifiedTypeMapProxyAndParameterList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMapProxyAndParameterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapProxyAndParameterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element::GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element (void) :
mAttribute_mType (),
mAttribute_mLocalVariableName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element::~ GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element::GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element (const GALGAS_unifiedTypeMapProxy & inOperand0,
                                                                                                                      const GALGAS_string & inOperand1) :
mAttribute_mType (inOperand0),
mAttribute_mLocalVariableName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element (GALGAS_unifiedTypeMapProxy::constructor_null (HERE),
                                                                    GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element::constructor_new (const GALGAS_unifiedTypeMapProxy & inOperand0,
                                                                                                                                      const GALGAS_string & inOperand1 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element::objectCompare (const GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLocalVariableName.objectCompare (inOperand.mAttribute_mLocalVariableName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element::isValid (void) const {
  return mAttribute_mType.isValid () && mAttribute_mLocalVariableName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element::drop (void) {
  mAttribute_mType.drop () ;
  mAttribute_mLocalVariableName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @unifiedTypeMapProxyAndLocalVariableList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLocalVariableName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxy GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element::reader_mLocalVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocalVariableName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @unifiedTypeMapProxyAndLocalVariableList-element type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element ("unifiedTypeMapProxyAndLocalVariableList-element",
                                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element result ;
  const GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element * p = (const GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMapProxyAndLocalVariableList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapProxyAndLocalVariableList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

