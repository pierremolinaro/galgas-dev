#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-15.h"

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element::GGS_nonTerminalToAddList_2E_element (void) :
mProperty_mSyntaxComponentName (),
mProperty_mNonTerminalToAddCount () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element::~ GGS_nonTerminalToAddList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element GGS_nonTerminalToAddList_2E_element::init_21__21_ (const GGS_string & in_mSyntaxComponentName,
                                                                                       const GGS_uint & in_mNonTerminalToAddCount,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonTerminalToAddList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  result.mProperty_mNonTerminalToAddCount = in_mNonTerminalToAddCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element::GGS_nonTerminalToAddList_2E_element (const GGS_string & inOperand0,
                                                                          const GGS_uint & inOperand1) :
mProperty_mSyntaxComponentName (inOperand0),
mProperty_mNonTerminalToAddCount (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element GGS_nonTerminalToAddList_2E_element::class_func_new (const GGS_string & in_mSyntaxComponentName,
                                                                                         const GGS_uint & in_mNonTerminalToAddCount,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonTerminalToAddList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  result.mProperty_mNonTerminalToAddCount = in_mNonTerminalToAddCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonTerminalToAddList_2E_element::isValid (void) const {
  return mProperty_mSyntaxComponentName.isValid () && mProperty_mNonTerminalToAddCount.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList_2E_element::drop (void) {
  mProperty_mSyntaxComponentName.drop () ;
  mProperty_mNonTerminalToAddCount.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @nonTerminalToAddList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNonTerminalToAddCount.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @nonTerminalToAddList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalToAddList_2E_element ("nonTerminalToAddList.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonTerminalToAddList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalToAddList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonTerminalToAddList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonTerminalToAddList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element GGS_nonTerminalToAddList_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_nonTerminalToAddList_2E_element result ;
  const GGS_nonTerminalToAddList_2E_element * p = (const GGS_nonTerminalToAddList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonTerminalToAddList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalToAddList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList_2E_element::GGS_terminalCheckAssignementList_2E_element (void) :
mProperty_mTypeName (),
mProperty_mTargetVarCppName (),
mProperty_mSourceLexicalAttributeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList_2E_element::~ GGS_terminalCheckAssignementList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_terminalCheckAssignementList_2E_element GGS_terminalCheckAssignementList_2E_element::init_21__21__21_ (const GGS_string & in_mTypeName,
                                                                                                           const GGS_string & in_mTargetVarCppName,
                                                                                                           const GGS_string & in_mSourceLexicalAttributeName,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_terminalCheckAssignementList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeName = in_mTypeName ;
  result.mProperty_mTargetVarCppName = in_mTargetVarCppName ;
  result.mProperty_mSourceLexicalAttributeName = in_mSourceLexicalAttributeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList_2E_element::GGS_terminalCheckAssignementList_2E_element (const GGS_string & inOperand0,
                                                                                          const GGS_string & inOperand1,
                                                                                          const GGS_string & inOperand2) :
mProperty_mTypeName (inOperand0),
mProperty_mTargetVarCppName (inOperand1),
mProperty_mSourceLexicalAttributeName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList_2E_element GGS_terminalCheckAssignementList_2E_element::class_func_new (const GGS_string & in_mTypeName,
                                                                                                         const GGS_string & in_mTargetVarCppName,
                                                                                                         const GGS_string & in_mSourceLexicalAttributeName,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_terminalCheckAssignementList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeName = in_mTypeName ;
  result.mProperty_mTargetVarCppName = in_mTargetVarCppName ;
  result.mProperty_mSourceLexicalAttributeName = in_mSourceLexicalAttributeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_terminalCheckAssignementList_2E_element::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mTargetVarCppName.isValid () && mProperty_mSourceLexicalAttributeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList_2E_element::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mTargetVarCppName.drop () ;
  mProperty_mSourceLexicalAttributeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @terminalCheckAssignementList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetVarCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSourceLexicalAttributeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @terminalCheckAssignementList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckAssignementList_2E_element ("terminalCheckAssignementList.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_terminalCheckAssignementList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckAssignementList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalCheckAssignementList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalCheckAssignementList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList_2E_element GGS_terminalCheckAssignementList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_terminalCheckAssignementList_2E_element result ;
  const GGS_terminalCheckAssignementList_2E_element * p = (const GGS_terminalCheckAssignementList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalCheckAssignementList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckAssignementList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element::GGS_filewrapperTemplateListForGeneration_2E_element (void) :
mProperty_mFilewrapperTemplateName (),
mProperty_mFilewrapperTemplateFormalInputParameters (),
mProperty_mTemplateInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element::~ GGS_filewrapperTemplateListForGeneration_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element GGS_filewrapperTemplateListForGeneration_2E_element::init_21__21__21_ (const GGS_string & in_mFilewrapperTemplateName,
                                                                                                                           const GGS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                                                                           const GGS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapperTemplateListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFilewrapperTemplateName = in_mFilewrapperTemplateName ;
  result.mProperty_mFilewrapperTemplateFormalInputParameters = in_mFilewrapperTemplateFormalInputParameters ;
  result.mProperty_mTemplateInstructionListForGeneration = in_mTemplateInstructionListForGeneration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element::GGS_filewrapperTemplateListForGeneration_2E_element (const GGS_string & inOperand0,
                                                                                                          const GGS_formalInputParameterListForGeneration & inOperand1,
                                                                                                          const GGS_templateInstructionListForGeneration & inOperand2) :
mProperty_mFilewrapperTemplateName (inOperand0),
mProperty_mFilewrapperTemplateFormalInputParameters (inOperand1),
mProperty_mTemplateInstructionListForGeneration (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element GGS_filewrapperTemplateListForGeneration_2E_element::class_func_new (const GGS_string & in_mFilewrapperTemplateName,
                                                                                                                         const GGS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                                                                         const GGS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapperTemplateListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFilewrapperTemplateName = in_mFilewrapperTemplateName ;
  result.mProperty_mFilewrapperTemplateFormalInputParameters = in_mFilewrapperTemplateFormalInputParameters ;
  result.mProperty_mTemplateInstructionListForGeneration = in_mTemplateInstructionListForGeneration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_filewrapperTemplateListForGeneration_2E_element::isValid (void) const {
  return mProperty_mFilewrapperTemplateName.isValid () && mProperty_mFilewrapperTemplateFormalInputParameters.isValid () && mProperty_mTemplateInstructionListForGeneration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration_2E_element::drop (void) {
  mProperty_mFilewrapperTemplateName.drop () ;
  mProperty_mFilewrapperTemplateFormalInputParameters.drop () ;
  mProperty_mTemplateInstructionListForGeneration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @filewrapperTemplateListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFilewrapperTemplateName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTemplateInstructionListForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @filewrapperTemplateListForGeneration.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration_2E_element ("filewrapperTemplateListForGeneration.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_filewrapperTemplateListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperTemplateListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperTemplateListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element GGS_filewrapperTemplateListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateListForGeneration_2E_element result ;
  const GGS_filewrapperTemplateListForGeneration_2E_element * p = (const GGS_filewrapperTemplateListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperTemplateListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element::GGS_ruleDeclarationList_2E_element (void) :
mProperty_mNonterminalName (),
mProperty_mRuleIndex (),
mProperty_mLabelImplementationList () {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element::~ GGS_ruleDeclarationList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element GGS_ruleDeclarationList_2E_element::init_21__21__21_ (const GGS_string & in_mNonterminalName,
                                                                                         const GGS_uint & in_mRuleIndex,
                                                                                         const GGS_ruleLabelImplementationList & in_mLabelImplementationList,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ruleDeclarationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mNonterminalName = in_mNonterminalName ;
  result.mProperty_mRuleIndex = in_mRuleIndex ;
  result.mProperty_mLabelImplementationList = in_mLabelImplementationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element::GGS_ruleDeclarationList_2E_element (const GGS_string & inOperand0,
                                                                        const GGS_uint & inOperand1,
                                                                        const GGS_ruleLabelImplementationList & inOperand2) :
mProperty_mNonterminalName (inOperand0),
mProperty_mRuleIndex (inOperand1),
mProperty_mLabelImplementationList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element GGS_ruleDeclarationList_2E_element::class_func_new (const GGS_string & in_mNonterminalName,
                                                                                       const GGS_uint & in_mRuleIndex,
                                                                                       const GGS_ruleLabelImplementationList & in_mLabelImplementationList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ruleDeclarationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mNonterminalName = in_mNonterminalName ;
  result.mProperty_mRuleIndex = in_mRuleIndex ;
  result.mProperty_mLabelImplementationList = in_mLabelImplementationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ruleDeclarationList_2E_element::isValid (void) const {
  return mProperty_mNonterminalName.isValid () && mProperty_mRuleIndex.isValid () && mProperty_mLabelImplementationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList_2E_element::drop (void) {
  mProperty_mNonterminalName.drop () ;
  mProperty_mRuleIndex.drop () ;
  mProperty_mLabelImplementationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ruleDeclarationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mNonterminalName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRuleIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLabelImplementationList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ruleDeclarationList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleDeclarationList_2E_element ("ruleDeclarationList.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ruleDeclarationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleDeclarationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ruleDeclarationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ruleDeclarationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element GGS_ruleDeclarationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_ruleDeclarationList_2E_element result ;
  const GGS_ruleDeclarationList_2E_element * p = (const GGS_ruleDeclarationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ruleDeclarationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleDeclarationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList_2E_element::GGS_collectionValueElementList_2E_element (void) :
mProperty_mExpression (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList_2E_element::~ GGS_collectionValueElementList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_collectionValueElementList_2E_element GGS_collectionValueElementList_2E_element::init_21__21_ (const GGS_semanticExpressionAST & in_mExpression,
                                                                                                   const GGS_location & in_location,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_collectionValueElementList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList_2E_element::GGS_collectionValueElementList_2E_element (const GGS_semanticExpressionAST & inOperand0,
                                                                                      const GGS_location & inOperand1) :
mProperty_mExpression (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList_2E_element GGS_collectionValueElementList_2E_element::class_func_new (const GGS_semanticExpressionAST & in_mExpression,
                                                                                                     const GGS_location & in_location,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_collectionValueElementList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_collectionValueElementList_2E_element::isValid (void) const {
  return mProperty_mExpression.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList_2E_element::drop (void) {
  mProperty_mExpression.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @collectionValueElementList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @collectionValueElementList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueElementList_2E_element ("collectionValueElementList.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_collectionValueElementList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_collectionValueElementList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_collectionValueElementList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList_2E_element GGS_collectionValueElementList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_collectionValueElementList_2E_element result ;
  const GGS_collectionValueElementList_2E_element * p = (const GGS_collectionValueElementList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_collectionValueElementList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueElementList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available::GGS_selfAvailability_2E_available (void) :
mProperty_type (),
mProperty_selfMutability () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available::~ GGS_selfAvailability_2E_available (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_selfAvailability_2E_available GGS_selfAvailability_2E_available::init_21__21_ (const GGS_unifiedTypeMapEntry & in_type,
                                                                                   const GGS_selfMutability & in_selfMutability,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_selfAvailability_2E_available result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_selfMutability = in_selfMutability ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability_2E_available::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available::GGS_selfAvailability_2E_available (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                      const GGS_selfMutability & inOperand1) :
mProperty_type (inOperand0),
mProperty_selfMutability (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available GGS_selfAvailability_2E_available::class_func_new (const GGS_unifiedTypeMapEntry & in_type,
                                                                                     const GGS_selfMutability & in_selfMutability,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_selfAvailability_2E_available result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_selfMutability = in_selfMutability ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfAvailability_2E_available::objectCompare (const GGS_selfAvailability_2E_available & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_selfMutability.objectCompare (inOperand.mProperty_selfMutability) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_selfAvailability_2E_available::isValid (void) const {
  return mProperty_type.isValid () && mProperty_selfMutability.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability_2E_available::drop (void) {
  mProperty_type.drop () ;
  mProperty_selfMutability.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability_2E_available::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @selfAvailability.available:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_selfMutability.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfAvailability.available generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfAvailability_2E_available ("selfAvailability.available",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfAvailability_2E_available::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAvailability_2E_available ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfAvailability_2E_available::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfAvailability_2E_available (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available GGS_selfAvailability_2E_available::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_selfAvailability_2E_available result ;
  const GGS_selfAvailability_2E_available * p = (const GGS_selfAvailability_2E_available *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfAvailability_2E_available *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfAvailability.available", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @selfAvailability_2E_available_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available_3F_::GGS_selfAvailability_2E_available_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available_3F_::GGS_selfAvailability_2E_available_3F_ (const GGS_selfAvailability_2E_available & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available_3F_ GGS_selfAvailability_2E_available_3F_::init_nil (void) {
  GGS_selfAvailability_2E_available_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_selfAvailability_2E_available_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_selfAvailability_2E_available_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability_2E_available_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_selfAvailability_2E_available () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfAvailability_2E_available_3F_::objectCompare (const GGS_selfAvailability_2E_available_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability_2E_available_3F_::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfAvailability.available? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfAvailability_2E_available_3F_ ("selfAvailability.available?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfAvailability_2E_available_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAvailability_2E_available_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfAvailability_2E_available_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfAvailability_2E_available_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available_3F_ GGS_selfAvailability_2E_available_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_selfAvailability_2E_available_3F_ result ;
  const GGS_selfAvailability_2E_available_3F_ * p = (const GGS_selfAvailability_2E_available_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfAvailability_2E_available_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfAvailability.available?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration_2E_element::GGS_castInstructionBranchListForGeneration_2E_element (void) :
mProperty_mTypeComparisonKind (),
mProperty_mType (),
mProperty_mCastedVarCppName (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration_2E_element::~ GGS_castInstructionBranchListForGeneration_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration_2E_element GGS_castInstructionBranchListForGeneration_2E_element::init_21__21__21__21_ (const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                                                   const GGS_unifiedTypeMapEntry & in_mType,
                                                                                                                                   const GGS_string & in_mCastedVarCppName,
                                                                                                                                   const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_castInstructionBranchListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mCastedVarCppName = in_mCastedVarCppName ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration_2E_element::GGS_castInstructionBranchListForGeneration_2E_element (const GGS_dynamicTypeComparisonKind & inOperand0,
                                                                                                              const GGS_unifiedTypeMapEntry & inOperand1,
                                                                                                              const GGS_string & inOperand2,
                                                                                                              const GGS_semanticInstructionListForGeneration & inOperand3) :
mProperty_mTypeComparisonKind (inOperand0),
mProperty_mType (inOperand1),
mProperty_mCastedVarCppName (inOperand2),
mProperty_mInstructionList (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration_2E_element GGS_castInstructionBranchListForGeneration_2E_element::class_func_new (const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                                             const GGS_unifiedTypeMapEntry & in_mType,
                                                                                                                             const GGS_string & in_mCastedVarCppName,
                                                                                                                             const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_castInstructionBranchListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mCastedVarCppName = in_mCastedVarCppName ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_castInstructionBranchListForGeneration_2E_element::isValid (void) const {
  return mProperty_mTypeComparisonKind.isValid () && mProperty_mType.isValid () && mProperty_mCastedVarCppName.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListForGeneration_2E_element::drop (void) {
  mProperty_mTypeComparisonKind.drop () ;
  mProperty_mType.drop () ;
  mProperty_mCastedVarCppName.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListForGeneration_2E_element::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @castInstructionBranchListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTypeComparisonKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCastedVarCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @castInstructionBranchListForGeneration.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration_2E_element ("castInstructionBranchListForGeneration.element",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_castInstructionBranchListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_castInstructionBranchListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_castInstructionBranchListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration_2E_element GGS_castInstructionBranchListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_castInstructionBranchListForGeneration_2E_element result ;
  const GGS_castInstructionBranchListForGeneration_2E_element * p = (const GGS_castInstructionBranchListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_castInstructionBranchListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInstructionBranchListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace::GGS_fixitElementAST_2E_fixItReplace (void) :
mProperty_exp (),
mProperty_errorLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace::~ GGS_fixitElementAST_2E_fixItReplace (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace GGS_fixitElementAST_2E_fixItReplace::init_21__21_ (const GGS_semanticExpressionAST & in_exp,
                                                                                       const GGS_location & in_errorLocation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItReplace result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_errorLocation = in_errorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItReplace::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace::GGS_fixitElementAST_2E_fixItReplace (const GGS_semanticExpressionAST & inOperand0,
                                                                          const GGS_location & inOperand1) :
mProperty_exp (inOperand0),
mProperty_errorLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace GGS_fixitElementAST_2E_fixItReplace::class_func_new (const GGS_semanticExpressionAST & in_exp,
                                                                                         const GGS_location & in_errorLocation,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItReplace result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_errorLocation = in_errorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementAST_2E_fixItReplace::isValid (void) const {
  return mProperty_exp.isValid () && mProperty_errorLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItReplace::drop (void) {
  mProperty_exp.drop () ;
  mProperty_errorLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItReplace::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementAST.fixItReplace:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_errorLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fixitElementAST.fixItReplace generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItReplace ("fixitElementAST.fixItReplace",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixitElementAST_2E_fixItReplace::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItReplace ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementAST_2E_fixItReplace::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementAST_2E_fixItReplace (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace GGS_fixitElementAST_2E_fixItReplace::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItReplace result ;
  const GGS_fixitElementAST_2E_fixItReplace * p = (const GGS_fixitElementAST_2E_fixItReplace *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementAST_2E_fixItReplace *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST.fixItReplace", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @fixitElementAST_2E_fixItReplace_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace_3F_::GGS_fixitElementAST_2E_fixItReplace_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace_3F_::GGS_fixitElementAST_2E_fixItReplace_3F_ (const GGS_fixitElementAST_2E_fixItReplace & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace_3F_ GGS_fixitElementAST_2E_fixItReplace_3F_::init_nil (void) {
  GGS_fixitElementAST_2E_fixItReplace_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementAST_2E_fixItReplace_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementAST_2E_fixItReplace_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItReplace_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fixitElementAST_2E_fixItReplace () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItReplace_3F_::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fixitElementAST.fixItReplace? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItReplace_3F_ ("fixitElementAST.fixItReplace?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixitElementAST_2E_fixItReplace_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItReplace_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementAST_2E_fixItReplace_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementAST_2E_fixItReplace_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace_3F_ GGS_fixitElementAST_2E_fixItReplace_3F_::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItReplace_3F_ result ;
  const GGS_fixitElementAST_2E_fixItReplace_3F_ * p = (const GGS_fixitElementAST_2E_fixItReplace_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementAST_2E_fixItReplace_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST.fixItReplace?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter::GGS_fixitElementAST_2E_fixItInsertAfter (void) :
mProperty_exp (),
mProperty_errorLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter::~ GGS_fixitElementAST_2E_fixItInsertAfter (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter GGS_fixitElementAST_2E_fixItInsertAfter::init_21__21_ (const GGS_semanticExpressionAST & in_exp,
                                                                                               const GGS_location & in_errorLocation,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertAfter result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_errorLocation = in_errorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertAfter::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter::GGS_fixitElementAST_2E_fixItInsertAfter (const GGS_semanticExpressionAST & inOperand0,
                                                                                  const GGS_location & inOperand1) :
mProperty_exp (inOperand0),
mProperty_errorLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter GGS_fixitElementAST_2E_fixItInsertAfter::class_func_new (const GGS_semanticExpressionAST & in_exp,
                                                                                                 const GGS_location & in_errorLocation,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertAfter result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_errorLocation = in_errorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementAST_2E_fixItInsertAfter::isValid (void) const {
  return mProperty_exp.isValid () && mProperty_errorLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertAfter::drop (void) {
  mProperty_exp.drop () ;
  mProperty_errorLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertAfter::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementAST.fixItInsertAfter:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_errorLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fixitElementAST.fixItInsertAfter generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertAfter ("fixitElementAST.fixItInsertAfter",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixitElementAST_2E_fixItInsertAfter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertAfter ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementAST_2E_fixItInsertAfter::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementAST_2E_fixItInsertAfter (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter GGS_fixitElementAST_2E_fixItInsertAfter::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertAfter result ;
  const GGS_fixitElementAST_2E_fixItInsertAfter * p = (const GGS_fixitElementAST_2E_fixItInsertAfter *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementAST_2E_fixItInsertAfter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST.fixItInsertAfter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @fixitElementAST_2E_fixItInsertAfter_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter_3F_::GGS_fixitElementAST_2E_fixItInsertAfter_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter_3F_::GGS_fixitElementAST_2E_fixItInsertAfter_3F_ (const GGS_fixitElementAST_2E_fixItInsertAfter & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter_3F_ GGS_fixitElementAST_2E_fixItInsertAfter_3F_::init_nil (void) {
  GGS_fixitElementAST_2E_fixItInsertAfter_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementAST_2E_fixItInsertAfter_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementAST_2E_fixItInsertAfter_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertAfter_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fixitElementAST_2E_fixItInsertAfter () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertAfter_3F_::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fixitElementAST.fixItInsertAfter? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertAfter_3F_ ("fixitElementAST.fixItInsertAfter?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixitElementAST_2E_fixItInsertAfter_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertAfter_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementAST_2E_fixItInsertAfter_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementAST_2E_fixItInsertAfter_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter_3F_ GGS_fixitElementAST_2E_fixItInsertAfter_3F_::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertAfter_3F_ result ;
  const GGS_fixitElementAST_2E_fixItInsertAfter_3F_ * p = (const GGS_fixitElementAST_2E_fixItInsertAfter_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementAST_2E_fixItInsertAfter_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST.fixItInsertAfter?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore::GGS_fixitElementAST_2E_fixItInsertBefore (void) :
mProperty_exp (),
mProperty_errorLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore::~ GGS_fixitElementAST_2E_fixItInsertBefore (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore GGS_fixitElementAST_2E_fixItInsertBefore::init_21__21_ (const GGS_semanticExpressionAST & in_exp,
                                                                                                 const GGS_location & in_errorLocation,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertBefore result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_errorLocation = in_errorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertBefore::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore::GGS_fixitElementAST_2E_fixItInsertBefore (const GGS_semanticExpressionAST & inOperand0,
                                                                                    const GGS_location & inOperand1) :
mProperty_exp (inOperand0),
mProperty_errorLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore GGS_fixitElementAST_2E_fixItInsertBefore::class_func_new (const GGS_semanticExpressionAST & in_exp,
                                                                                                   const GGS_location & in_errorLocation,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertBefore result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_errorLocation = in_errorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementAST_2E_fixItInsertBefore::isValid (void) const {
  return mProperty_exp.isValid () && mProperty_errorLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertBefore::drop (void) {
  mProperty_exp.drop () ;
  mProperty_errorLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertBefore::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementAST.fixItInsertBefore:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_errorLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fixitElementAST.fixItInsertBefore generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertBefore ("fixitElementAST.fixItInsertBefore",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixitElementAST_2E_fixItInsertBefore::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertBefore ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementAST_2E_fixItInsertBefore::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementAST_2E_fixItInsertBefore (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore GGS_fixitElementAST_2E_fixItInsertBefore::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertBefore result ;
  const GGS_fixitElementAST_2E_fixItInsertBefore * p = (const GGS_fixitElementAST_2E_fixItInsertBefore *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementAST_2E_fixItInsertBefore *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST.fixItInsertBefore", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @fixitElementAST_2E_fixItInsertBefore_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore_3F_::GGS_fixitElementAST_2E_fixItInsertBefore_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore_3F_::GGS_fixitElementAST_2E_fixItInsertBefore_3F_ (const GGS_fixitElementAST_2E_fixItInsertBefore & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore_3F_ GGS_fixitElementAST_2E_fixItInsertBefore_3F_::init_nil (void) {
  GGS_fixitElementAST_2E_fixItInsertBefore_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementAST_2E_fixItInsertBefore_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementAST_2E_fixItInsertBefore_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertBefore_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fixitElementAST_2E_fixItInsertBefore () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST_2E_fixItInsertBefore_3F_::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fixitElementAST.fixItInsertBefore? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertBefore_3F_ ("fixitElementAST.fixItInsertBefore?",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixitElementAST_2E_fixItInsertBefore_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertBefore_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementAST_2E_fixItInsertBefore_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementAST_2E_fixItInsertBefore_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore_3F_ GGS_fixitElementAST_2E_fixItInsertBefore_3F_::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_fixitElementAST_2E_fixItInsertBefore_3F_ result ;
  const GGS_fixitElementAST_2E_fixItInsertBefore_3F_ * p = (const GGS_fixitElementAST_2E_fixItInsertBefore_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementAST_2E_fixItInsertBefore_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST.fixItInsertBefore?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST_2E_element::GGS_fixitListAST_2E_element (void) :
mProperty_mElement () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST_2E_element::~ GGS_fixitListAST_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitListAST_2E_element GGS_fixitListAST_2E_element::init_21_ (const GGS_fixitElementAST & in_mElement,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST_2E_element::GGS_fixitListAST_2E_element (const GGS_fixitElementAST & inOperand0) :
mProperty_mElement (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST_2E_element GGS_fixitListAST_2E_element::class_func_new (const GGS_fixitElementAST & in_mElement,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitListAST_2E_element::isValid (void) const {
  return mProperty_mElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListAST_2E_element::drop (void) {
  mProperty_mElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListAST_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fixitListAST.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListAST_2E_element ("fixitListAST.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixitListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST_2E_element GGS_fixitListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_fixitListAST_2E_element result ;
  const GGS_fixitListAST_2E_element * p = (const GGS_fixitListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration_2E_element::GGS_fixitListForGeneration_2E_element (void) :
mProperty_mElement () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration_2E_element::~ GGS_fixitListForGeneration_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitListForGeneration_2E_element GGS_fixitListForGeneration_2E_element::init_21_ (const GGS_fixitElementForGeneration & in_mElement,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration_2E_element::GGS_fixitListForGeneration_2E_element (const GGS_fixitElementForGeneration & inOperand0) :
mProperty_mElement (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration_2E_element GGS_fixitListForGeneration_2E_element::class_func_new (const GGS_fixitElementForGeneration & in_mElement,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitListForGeneration_2E_element::isValid (void) const {
  return mProperty_mElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListForGeneration_2E_element::drop (void) {
  mProperty_mElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListForGeneration_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fixitListForGeneration.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListForGeneration_2E_element ("fixitListForGeneration.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixitListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration_2E_element GGS_fixitListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_fixitListForGeneration_2E_element result ;
  const GGS_fixitListForGeneration_2E_element * p = (const GGS_fixitListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element::GGS_forInstructionEnumeratedObjectListAST_2E_element (void) :
mProperty_mAscending (),
mProperty_mEnumeratedCollection () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element::~ GGS_forInstructionEnumeratedObjectListAST_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element GGS_forInstructionEnumeratedObjectListAST_2E_element::init_21__21_ (const GGS_bool & in_mAscending,
                                                                                                                         const GGS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAscending = in_mAscending ;
  result.mProperty_mEnumeratedCollection = in_mEnumeratedCollection ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element::GGS_forInstructionEnumeratedObjectListAST_2E_element (const GGS_bool & inOperand0,
                                                                                                            const GGS_abstractEnumeratedCollectionAST & inOperand1) :
mProperty_mAscending (inOperand0),
mProperty_mEnumeratedCollection (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element GGS_forInstructionEnumeratedObjectListAST_2E_element::class_func_new (const GGS_bool & in_mAscending,
                                                                                                                           const GGS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAscending = in_mAscending ;
  result.mProperty_mEnumeratedCollection = in_mEnumeratedCollection ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_forInstructionEnumeratedObjectListAST_2E_element::isValid (void) const {
  return mProperty_mAscending.isValid () && mProperty_mEnumeratedCollection.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST_2E_element::drop (void) {
  mProperty_mAscending.drop () ;
  mProperty_mEnumeratedCollection.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST_2E_element::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @forInstructionEnumeratedObjectListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAscending.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEnumeratedCollection.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forInstructionEnumeratedObjectListAST.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST_2E_element ("forInstructionEnumeratedObjectListAST.element",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_forInstructionEnumeratedObjectListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionEnumeratedObjectListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionEnumeratedObjectListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element GGS_forInstructionEnumeratedObjectListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListAST_2E_element result ;
  const GGS_forInstructionEnumeratedObjectListAST_2E_element * p = (const GGS_forInstructionEnumeratedObjectListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionEnumeratedObjectListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp::GGS_ifExpressionKind_2E_regularExp (void) :
mProperty_exp (),
mProperty_endOfExp () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp::~ GGS_ifExpressionKind_2E_regularExp (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp GGS_ifExpressionKind_2E_regularExp::init_21__21_ (const GGS_semanticExpressionAST & in_exp,
                                                                                     const GGS_location & in_endOfExp,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_regularExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_endOfExp = in_endOfExp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_regularExp::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp::GGS_ifExpressionKind_2E_regularExp (const GGS_semanticExpressionAST & inOperand0,
                                                                        const GGS_location & inOperand1) :
mProperty_exp (inOperand0),
mProperty_endOfExp (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp GGS_ifExpressionKind_2E_regularExp::class_func_new (const GGS_semanticExpressionAST & in_exp,
                                                                                       const GGS_location & in_endOfExp,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_regularExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  result.mProperty_endOfExp = in_endOfExp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifExpressionKind_2E_regularExp::isValid (void) const {
  return mProperty_exp.isValid () && mProperty_endOfExp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_regularExp::drop (void) {
  mProperty_exp.drop () ;
  mProperty_endOfExp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_regularExp::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifExpressionKind.regularExp:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfExp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifExpressionKind.regularExp generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp ("ifExpressionKind.regularExp",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifExpressionKind_2E_regularExp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionKind_2E_regularExp::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionKind_2E_regularExp (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp GGS_ifExpressionKind_2E_regularExp::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_regularExp result ;
  const GGS_ifExpressionKind_2E_regularExp * p = (const GGS_ifExpressionKind_2E_regularExp *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionKind_2E_regularExp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind.regularExp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @ifExpressionKind_2E_regularExp_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp_3F_::GGS_ifExpressionKind_2E_regularExp_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp_3F_::GGS_ifExpressionKind_2E_regularExp_3F_ (const GGS_ifExpressionKind_2E_regularExp & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp_3F_ GGS_ifExpressionKind_2E_regularExp_3F_::init_nil (void) {
  GGS_ifExpressionKind_2E_regularExp_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifExpressionKind_2E_regularExp_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifExpressionKind_2E_regularExp_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_regularExp_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ifExpressionKind_2E_regularExp () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_regularExp_3F_::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifExpressionKind.regularExp? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp_3F_ ("ifExpressionKind.regularExp?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifExpressionKind_2E_regularExp_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionKind_2E_regularExp_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionKind_2E_regularExp_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp_3F_ GGS_ifExpressionKind_2E_regularExp_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_regularExp_3F_ result ;
  const GGS_ifExpressionKind_2E_regularExp_3F_ * p = (const GGS_ifExpressionKind_2E_regularExp_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionKind_2E_regularExp_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind.regularExp?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionList_2E_element::GGS_ifExpressionList_2E_element (void) :
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionList_2E_element::~ GGS_ifExpressionList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifExpressionList_2E_element GGS_ifExpressionList_2E_element::init_21_ (const GGS_ifExpressionKind & in_mExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifExpressionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionList_2E_element::GGS_ifExpressionList_2E_element (const GGS_ifExpressionKind & inOperand0) :
mProperty_mExpression (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionList_2E_element GGS_ifExpressionList_2E_element::class_func_new (const GGS_ifExpressionKind & in_mExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifExpressionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifExpressionList_2E_element::isValid (void) const {
  return mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionList_2E_element::drop (void) {
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionList_2E_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifExpressionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifExpressionList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionList_2E_element ("ifExpressionList.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifExpressionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionList_2E_element GGS_ifExpressionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_ifExpressionList_2E_element result ;
  const GGS_ifExpressionList_2E_element * p = (const GGS_ifExpressionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element::GGS_ifTestListForGeneration_2E_element (void) :
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element::~ GGS_ifTestListForGeneration_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element GGS_ifTestListForGeneration_2E_element::init_21_ (const GGS_ifTestForGeneration & in_mExpression,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element::GGS_ifTestListForGeneration_2E_element (const GGS_ifTestForGeneration & inOperand0) :
mProperty_mExpression (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element GGS_ifTestListForGeneration_2E_element::class_func_new (const GGS_ifTestForGeneration & in_mExpression,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestListForGeneration_2E_element::isValid (void) const {
  return mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration_2E_element::drop (void) {
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifTestListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifTestListForGeneration.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestListForGeneration_2E_element ("ifTestListForGeneration.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifTestListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element GGS_ifTestListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifTestListForGeneration_2E_element result ;
  const GGS_ifTestListForGeneration_2E_element * p = (const GGS_ifTestListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST_2E_element::GGS_switchBranchesAST_2E_element (void) :
mProperty_mSwitchConstantList (),
mProperty_mAssociatedValuesExtraction (),
mProperty_mInstructions (),
mProperty_mEndOfBranch () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST_2E_element::~ GGS_switchBranchesAST_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_switchBranchesAST_2E_element GGS_switchBranchesAST_2E_element::init_21__21__21__21_ (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                                         const GGS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                                                         const GGS_semanticInstructionListAST & in_mInstructions,
                                                                                         const GGS_location & in_mEndOfBranch,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchBranchesAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSwitchConstantList = in_mSwitchConstantList ;
  result.mProperty_mAssociatedValuesExtraction = in_mAssociatedValuesExtraction ;
  result.mProperty_mInstructions = in_mInstructions ;
  result.mProperty_mEndOfBranch = in_mEndOfBranch ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST_2E_element::GGS_switchBranchesAST_2E_element (const GGS__5B_lstring_5D_ & inOperand0,
                                                                    const GGS_switchExtractedValuesListAST & inOperand1,
                                                                    const GGS_semanticInstructionListAST & inOperand2,
                                                                    const GGS_location & inOperand3) :
mProperty_mSwitchConstantList (inOperand0),
mProperty_mAssociatedValuesExtraction (inOperand1),
mProperty_mInstructions (inOperand2),
mProperty_mEndOfBranch (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST_2E_element GGS_switchBranchesAST_2E_element::class_func_new (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                                   const GGS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                                                   const GGS_semanticInstructionListAST & in_mInstructions,
                                                                                   const GGS_location & in_mEndOfBranch,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchBranchesAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSwitchConstantList = in_mSwitchConstantList ;
  result.mProperty_mAssociatedValuesExtraction = in_mAssociatedValuesExtraction ;
  result.mProperty_mInstructions = in_mInstructions ;
  result.mProperty_mEndOfBranch = in_mEndOfBranch ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_switchBranchesAST_2E_element::isValid (void) const {
  return mProperty_mSwitchConstantList.isValid () && mProperty_mAssociatedValuesExtraction.isValid () && mProperty_mInstructions.isValid () && mProperty_mEndOfBranch.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST_2E_element::drop (void) {
  mProperty_mSwitchConstantList.drop () ;
  mProperty_mAssociatedValuesExtraction.drop () ;
  mProperty_mInstructions.drop () ;
  mProperty_mEndOfBranch.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @switchBranchesAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSwitchConstantList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAssociatedValuesExtraction.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructions.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfBranch.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @switchBranchesAST.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchBranchesAST_2E_element ("switchBranchesAST.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_switchBranchesAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchBranchesAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchBranchesAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST_2E_element GGS_switchBranchesAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_switchBranchesAST_2E_element result ;
  const GGS_switchBranchesAST_2E_element * p = (const GGS_switchBranchesAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchBranchesAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchBranchesAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element::GGS_extractedAssociatedValuesForGeneration_2E_element (void) :
mProperty_mType (),
mProperty_mCppName (),
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element::~ GGS_extractedAssociatedValuesForGeneration_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element GGS_extractedAssociatedValuesForGeneration_2E_element::init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mType,
                                                                                                                               const GGS_string & in_mCppName,
                                                                                                                               const GGS_string & in_name,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extractedAssociatedValuesForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mCppName = in_mCppName ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element::GGS_extractedAssociatedValuesForGeneration_2E_element (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                                              const GGS_string & inOperand1,
                                                                                                              const GGS_string & inOperand2) :
mProperty_mType (inOperand0),
mProperty_mCppName (inOperand1),
mProperty_name (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element GGS_extractedAssociatedValuesForGeneration_2E_element::class_func_new (const GGS_unifiedTypeMapEntry & in_mType,
                                                                                                                             const GGS_string & in_mCppName,
                                                                                                                             const GGS_string & in_name,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extractedAssociatedValuesForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mCppName = in_mCppName ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extractedAssociatedValuesForGeneration_2E_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mCppName.isValid () && mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration_2E_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mCppName.drop () ;
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration_2E_element::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extractedAssociatedValuesForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extractedAssociatedValuesForGeneration.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration_2E_element ("extractedAssociatedValuesForGeneration.element",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extractedAssociatedValuesForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extractedAssociatedValuesForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extractedAssociatedValuesForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element GGS_extractedAssociatedValuesForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_extractedAssociatedValuesForGeneration_2E_element result ;
  const GGS_extractedAssociatedValuesForGeneration_2E_element * p = (const GGS_extractedAssociatedValuesForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extractedAssociatedValuesForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extractedAssociatedValuesForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element::GGS_switchBranchesForGeneration_2E_element (void) :
mProperty_mSwitchConstantList (),
mProperty_mExtractedAssociatedValuesForGeneration (),
mProperty_mEndOfBranchLocationIndex (),
mProperty_mInstructions () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element::~ GGS_switchBranchesForGeneration_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element GGS_switchBranchesForGeneration_2E_element::init_21__21__21__21_ (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                                                             const GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                             const GGS_uint & in_mEndOfBranchLocationIndex,
                                                                                                             const GGS_semanticInstructionListForGeneration & in_mInstructions,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchBranchesForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSwitchConstantList = in_mSwitchConstantList ;
  result.mProperty_mExtractedAssociatedValuesForGeneration = in_mExtractedAssociatedValuesForGeneration ;
  result.mProperty_mEndOfBranchLocationIndex = in_mEndOfBranchLocationIndex ;
  result.mProperty_mInstructions = in_mInstructions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element::GGS_switchBranchesForGeneration_2E_element (const GGS__5B_lstring_5D_ & inOperand0,
                                                                                        const GGS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                        const GGS_uint & inOperand2,
                                                                                        const GGS_semanticInstructionListForGeneration & inOperand3) :
mProperty_mSwitchConstantList (inOperand0),
mProperty_mExtractedAssociatedValuesForGeneration (inOperand1),
mProperty_mEndOfBranchLocationIndex (inOperand2),
mProperty_mInstructions (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element GGS_switchBranchesForGeneration_2E_element::class_func_new (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                                                       const GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                       const GGS_uint & in_mEndOfBranchLocationIndex,
                                                                                                       const GGS_semanticInstructionListForGeneration & in_mInstructions,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchBranchesForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSwitchConstantList = in_mSwitchConstantList ;
  result.mProperty_mExtractedAssociatedValuesForGeneration = in_mExtractedAssociatedValuesForGeneration ;
  result.mProperty_mEndOfBranchLocationIndex = in_mEndOfBranchLocationIndex ;
  result.mProperty_mInstructions = in_mInstructions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_switchBranchesForGeneration_2E_element::isValid (void) const {
  return mProperty_mSwitchConstantList.isValid () && mProperty_mExtractedAssociatedValuesForGeneration.isValid () && mProperty_mEndOfBranchLocationIndex.isValid () && mProperty_mInstructions.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration_2E_element::drop (void) {
  mProperty_mSwitchConstantList.drop () ;
  mProperty_mExtractedAssociatedValuesForGeneration.drop () ;
  mProperty_mEndOfBranchLocationIndex.drop () ;
  mProperty_mInstructions.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @switchBranchesForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSwitchConstantList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtractedAssociatedValuesForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfBranchLocationIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructions.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @switchBranchesForGeneration.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchBranchesForGeneration_2E_element ("switchBranchesForGeneration.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_switchBranchesForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchBranchesForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchBranchesForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element GGS_switchBranchesForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_switchBranchesForGeneration_2E_element result ;
  const GGS_switchBranchesForGeneration_2E_element * p = (const GGS_switchBranchesForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchBranchesForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchBranchesForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element::GGS_syntaxInstructionListForGrammarAnalysis_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element::~ GGS_syntaxInstructionListForGrammarAnalysis_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element GGS_syntaxInstructionListForGrammarAnalysis_2E_element::init_21_ (const GGS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxInstructionListForGrammarAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element::GGS_syntaxInstructionListForGrammarAnalysis_2E_element (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element GGS_syntaxInstructionListForGrammarAnalysis_2E_element::class_func_new (const GGS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxInstructionListForGrammarAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxInstructionListForGrammarAnalysis_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis_2E_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxInstructionListForGrammarAnalysis.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syntaxInstructionListForGrammarAnalysis.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis_2E_element ("syntaxInstructionListForGrammarAnalysis.element",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxInstructionListForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxInstructionListForGrammarAnalysis_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxInstructionListForGrammarAnalysis_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element GGS_syntaxInstructionListForGrammarAnalysis_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_syntaxInstructionListForGrammarAnalysis_2E_element result ;
  const GGS_syntaxInstructionListForGrammarAnalysis_2E_element * p = (const GGS_syntaxInstructionListForGrammarAnalysis_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxInstructionListForGrammarAnalysis_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionListForGrammarAnalysis.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element::GGS_branchListForGrammarAnalysis_2E_element (void) :
mProperty_mSyntaxInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element::~ GGS_branchListForGrammarAnalysis_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element GGS_branchListForGrammarAnalysis_2E_element::init_21_ (const GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_branchListForGrammarAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxInstructionList = in_mSyntaxInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element::GGS_branchListForGrammarAnalysis_2E_element (const GGS_syntaxInstructionListForGrammarAnalysis & inOperand0) :
mProperty_mSyntaxInstructionList (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element GGS_branchListForGrammarAnalysis_2E_element::class_func_new (const GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_branchListForGrammarAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxInstructionList = in_mSyntaxInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_branchListForGrammarAnalysis_2E_element::isValid (void) const {
  return mProperty_mSyntaxInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis_2E_element::drop (void) {
  mProperty_mSyntaxInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @branchListForGrammarAnalysis.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSyntaxInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @branchListForGrammarAnalysis.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchListForGrammarAnalysis_2E_element ("branchListForGrammarAnalysis.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_branchListForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchListForGrammarAnalysis_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_branchListForGrammarAnalysis_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_branchListForGrammarAnalysis_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element GGS_branchListForGrammarAnalysis_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_branchListForGrammarAnalysis_2E_element result ;
  const GGS_branchListForGrammarAnalysis_2E_element * p = (const GGS_branchListForGrammarAnalysis_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_branchListForGrammarAnalysis_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchListForGrammarAnalysis.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rowList_2E_element::GGS_rowList_2E_element (void) :
mProperty_columns () {
}

//--------------------------------------------------------------------------------------------------

GGS_rowList_2E_element::~ GGS_rowList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_rowList_2E_element GGS_rowList_2E_element::init_21_ (const GGS__32_stringlist & in_columns,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_rowList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_columns = in_columns ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_rowList_2E_element::GGS_rowList_2E_element (const GGS__32_stringlist & inOperand0) :
mProperty_columns (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_rowList_2E_element GGS_rowList_2E_element::class_func_new (const GGS__32_stringlist & in_columns,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_rowList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_columns = in_columns ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_rowList_2E_element::isValid (void) const {
  return mProperty_columns.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList_2E_element::drop (void) {
  mProperty_columns.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList_2E_element::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @rowList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_columns.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @rowList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rowList_2E_element ("rowList.element",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_rowList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rowList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_rowList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_rowList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rowList_2E_element GGS_rowList_2E_element::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_rowList_2E_element result ;
  const GGS_rowList_2E_element * p = (const GGS_rowList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_rowList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("rowList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element::GGS_programListForGeneration_2E_element (void) :
mProperty_mDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element::~ GGS_programListForGeneration_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_programListForGeneration_2E_element GGS_programListForGeneration_2E_element::init_21_ (const GGS_semanticDeclarationForGeneration & in_mDeclaration,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_programListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element::GGS_programListForGeneration_2E_element (const GGS_semanticDeclarationForGeneration & inOperand0) :
mProperty_mDeclaration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element GGS_programListForGeneration_2E_element::class_func_new (const GGS_semanticDeclarationForGeneration & in_mDeclaration,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_programListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_programListForGeneration_2E_element::isValid (void) const {
  return mProperty_mDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration_2E_element::drop (void) {
  mProperty_mDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @programListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @programListForGeneration.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programListForGeneration_2E_element ("programListForGeneration.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_programListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_programListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_programListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element GGS_programListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_programListForGeneration_2E_element result ;
  const GGS_programListForGeneration_2E_element * p = (const GGS_programListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_programListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element::GGS_genericExtensionMethodListMapDictionary_2E_element (void) :
mProperty_key (),
mProperty_mList () {
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element::~ GGS_genericExtensionMethodListMapDictionary_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element GGS_genericExtensionMethodListMapDictionary_2E_element::init_21__21_ (const GGS_string & in_key,
                                                                                                                             const GGS_lstringlist & in_mList,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericExtensionMethodListMapDictionary_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_mList = in_mList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element::GGS_genericExtensionMethodListMapDictionary_2E_element (const GGS_string & inOperand0,
                                                                                                                const GGS_lstringlist & inOperand1) :
mProperty_key (inOperand0),
mProperty_mList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element GGS_genericExtensionMethodListMapDictionary_2E_element::class_func_new (const GGS_string & in_key,
                                                                                                                               const GGS_lstringlist & in_mList,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericExtensionMethodListMapDictionary_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_mList = in_mList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_genericExtensionMethodListMapDictionary_2E_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_mList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary_2E_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_mList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary_2E_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @genericExtensionMethodListMapDictionary.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @genericExtensionMethodListMapDictionary.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary_2E_element ("genericExtensionMethodListMapDictionary.element",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_genericExtensionMethodListMapDictionary_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_genericExtensionMethodListMapDictionary_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_genericExtensionMethodListMapDictionary_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element GGS_genericExtensionMethodListMapDictionary_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_genericExtensionMethodListMapDictionary_2E_element result ;
  const GGS_genericExtensionMethodListMapDictionary_2E_element * p = (const GGS_genericExtensionMethodListMapDictionary_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_genericExtensionMethodListMapDictionary_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericExtensionMethodListMapDictionary.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @genericExtensionMethodListMapDictionary_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ (const GGS_genericExtensionMethodListMapDictionary_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::init_nil (void) {
  GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_genericExtensionMethodListMapDictionary_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @genericExtensionMethodListMapDictionary.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary_2E_element_3F_ ("genericExtensionMethodListMapDictionary.element?",
                                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ result ;
  const GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ * p = (const GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericExtensionMethodListMapDictionary.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList_2E_element::GGS_unifiedTypeMapEntryList_2E_element (void) :
mProperty_mEntry () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList_2E_element::~ GGS_unifiedTypeMapEntryList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_unifiedTypeMapEntryList_2E_element GGS_unifiedTypeMapEntryList_2E_element::init_21_ (const GGS_unifiedTypeMapEntry & in_mEntry,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntryList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEntry = in_mEntry ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList_2E_element::GGS_unifiedTypeMapEntryList_2E_element (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_mEntry (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList_2E_element GGS_unifiedTypeMapEntryList_2E_element::class_func_new (const GGS_unifiedTypeMapEntry & in_mEntry,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntryList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEntry = in_mEntry ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapEntryList_2E_element::objectCompare (const GGS_unifiedTypeMapEntryList_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEntry.objectCompare (inOperand.mProperty_mEntry) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMapEntryList_2E_element::isValid (void) const {
  return mProperty_mEntry.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList_2E_element::drop (void) {
  mProperty_mEntry.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @unifiedTypeMapEntryList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mEntry.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMapEntryList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntryList_2E_element ("unifiedTypeMapEntryList.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unifiedTypeMapEntryList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntryList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapEntryList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapEntryList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList_2E_element GGS_unifiedTypeMapEntryList_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntryList_2E_element result ;
  const GGS_unifiedTypeMapEntryList_2E_element * p = (const GGS_unifiedTypeMapEntryList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapEntryList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntryList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element::GGS_descendantClassListMapDictionary_2E_element (void) :
mProperty_key (),
mProperty_typeList () {
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element::~ GGS_descendantClassListMapDictionary_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element GGS_descendantClassListMapDictionary_2E_element::init_21__21_ (const GGS_string & in_key,
                                                                                                               const GGS_unifiedTypeMapEntryList & in_typeList,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_descendantClassListMapDictionary_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_typeList = in_typeList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element::GGS_descendantClassListMapDictionary_2E_element (const GGS_string & inOperand0,
                                                                                                  const GGS_unifiedTypeMapEntryList & inOperand1) :
mProperty_key (inOperand0),
mProperty_typeList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element GGS_descendantClassListMapDictionary_2E_element::class_func_new (const GGS_string & in_key,
                                                                                                                 const GGS_unifiedTypeMapEntryList & in_typeList,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_descendantClassListMapDictionary_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_typeList = in_typeList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_descendantClassListMapDictionary_2E_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_typeList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary_2E_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_typeList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @descendantClassListMapDictionary.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_typeList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @descendantClassListMapDictionary.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_descendantClassListMapDictionary_2E_element ("descendantClassListMapDictionary.element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_descendantClassListMapDictionary_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_descendantClassListMapDictionary_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_descendantClassListMapDictionary_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_descendantClassListMapDictionary_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element GGS_descendantClassListMapDictionary_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_descendantClassListMapDictionary_2E_element result ;
  const GGS_descendantClassListMapDictionary_2E_element * p = (const GGS_descendantClassListMapDictionary_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_descendantClassListMapDictionary_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("descendantClassListMapDictionary.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @descendantClassListMapDictionary_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element_3F_::GGS_descendantClassListMapDictionary_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element_3F_::GGS_descendantClassListMapDictionary_2E_element_3F_ (const GGS_descendantClassListMapDictionary_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element_3F_ GGS_descendantClassListMapDictionary_2E_element_3F_::init_nil (void) {
  GGS_descendantClassListMapDictionary_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_descendantClassListMapDictionary_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_descendantClassListMapDictionary_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_descendantClassListMapDictionary_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary_2E_element_3F_::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @descendantClassListMapDictionary.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_descendantClassListMapDictionary_2E_element_3F_ ("descendantClassListMapDictionary.element?",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_descendantClassListMapDictionary_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_descendantClassListMapDictionary_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_descendantClassListMapDictionary_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_descendantClassListMapDictionary_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element_3F_ GGS_descendantClassListMapDictionary_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_descendantClassListMapDictionary_2E_element_3F_ result ;
  const GGS_descendantClassListMapDictionary_2E_element_3F_ * p = (const GGS_descendantClassListMapDictionary_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_descendantClassListMapDictionary_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("descendantClassListMapDictionary.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess::GGS_AccessControlAST_2E_fileprivateAccess (void) :
mProperty_declarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess::~ GGS_AccessControlAST_2E_fileprivateAccess (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess GGS_AccessControlAST_2E_fileprivateAccess::init_21_ (const GGS_location & in_declarationLocation,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess::GGS_AccessControlAST_2E_fileprivateAccess (const GGS_location & inOperand0) :
mProperty_declarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess GGS_AccessControlAST_2E_fileprivateAccess::class_func_new (const GGS_location & in_declarationLocation,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControlAST_2E_fileprivateAccess::isValid (void) const {
  return mProperty_declarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateAccess::drop (void) {
  mProperty_declarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateAccess::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControlAST.fileprivateAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControlAST.fileprivateAccess generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess ("AccessControlAST.fileprivateAccess",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AccessControlAST_2E_fileprivateAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControlAST_2E_fileprivateAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControlAST_2E_fileprivateAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess GGS_AccessControlAST_2E_fileprivateAccess::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateAccess result ;
  const GGS_AccessControlAST_2E_fileprivateAccess * p = (const GGS_AccessControlAST_2E_fileprivateAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControlAST_2E_fileprivateAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControlAST.fileprivateAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @AccessControlAST_2E_fileprivateAccess_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess_3F_::GGS_AccessControlAST_2E_fileprivateAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess_3F_::GGS_AccessControlAST_2E_fileprivateAccess_3F_ (const GGS_AccessControlAST_2E_fileprivateAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess_3F_ GGS_AccessControlAST_2E_fileprivateAccess_3F_::init_nil (void) {
  GGS_AccessControlAST_2E_fileprivateAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControlAST_2E_fileprivateAccess_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControlAST_2E_fileprivateAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControlAST_2E_fileprivateAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateAccess_3F_::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControlAST.fileprivateAccess? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess_3F_ ("AccessControlAST.fileprivateAccess?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AccessControlAST_2E_fileprivateAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControlAST_2E_fileprivateAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControlAST_2E_fileprivateAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess_3F_ GGS_AccessControlAST_2E_fileprivateAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateAccess_3F_ result ;
  const GGS_AccessControlAST_2E_fileprivateAccess_3F_ * p = (const GGS_AccessControlAST_2E_fileprivateAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControlAST_2E_fileprivateAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControlAST.fileprivateAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess::GGS_AccessControlAST_2E_fileprivateSetAccess (void) :
mProperty_declarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess::~ GGS_AccessControlAST_2E_fileprivateSetAccess (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess GGS_AccessControlAST_2E_fileprivateSetAccess::init_21_ (const GGS_location & in_declarationLocation,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateSetAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess::GGS_AccessControlAST_2E_fileprivateSetAccess (const GGS_location & inOperand0) :
mProperty_declarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess GGS_AccessControlAST_2E_fileprivateSetAccess::class_func_new (const GGS_location & in_declarationLocation,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControlAST_2E_fileprivateSetAccess::isValid (void) const {
  return mProperty_declarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateSetAccess::drop (void) {
  mProperty_declarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateSetAccess::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControlAST.fileprivateSetAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControlAST.fileprivateSetAccess generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess ("AccessControlAST.fileprivateSetAccess",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AccessControlAST_2E_fileprivateSetAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControlAST_2E_fileprivateSetAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControlAST_2E_fileprivateSetAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess GGS_AccessControlAST_2E_fileprivateSetAccess::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateSetAccess result ;
  const GGS_AccessControlAST_2E_fileprivateSetAccess * p = (const GGS_AccessControlAST_2E_fileprivateSetAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControlAST_2E_fileprivateSetAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControlAST.fileprivateSetAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @AccessControlAST_2E_fileprivateSetAccess_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ (const GGS_AccessControlAST_2E_fileprivateSetAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::init_nil (void) {
  GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControlAST_2E_fileprivateSetAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControlAST.fileprivateSetAccess? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess_3F_ ("AccessControlAST.fileprivateSetAccess?",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ result ;
  const GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ * p = (const GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControlAST.fileprivateSetAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess::GGS_AccessControl_2E_protectedAccess (void) :
mProperty_declaringType () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess::~ GGS_AccessControl_2E_protectedAccess (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess GGS_AccessControl_2E_protectedAccess::init_21_ (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess::GGS_AccessControl_2E_protectedAccess (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_declaringType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess GGS_AccessControl_2E_protectedAccess::class_func_new (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_protectedAccess::isValid (void) const {
  return mProperty_declaringType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedAccess::drop (void) {
  mProperty_declaringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedAccess::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.protectedAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declaringType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControl.protectedAccess generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedAccess ("AccessControl.protectedAccess",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AccessControl_2E_protectedAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_protectedAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_protectedAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_protectedAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess GGS_AccessControl_2E_protectedAccess::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedAccess result ;
  const GGS_AccessControl_2E_protectedAccess * p = (const GGS_AccessControl_2E_protectedAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_protectedAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.protectedAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @AccessControl_2E_protectedAccess_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess_3F_::GGS_AccessControl_2E_protectedAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess_3F_::GGS_AccessControl_2E_protectedAccess_3F_ (const GGS_AccessControl_2E_protectedAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess_3F_ GGS_AccessControl_2E_protectedAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_protectedAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_protectedAccess_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_protectedAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_protectedAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedAccess_3F_::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControl.protectedAccess? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedAccess_3F_ ("AccessControl.protectedAccess?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AccessControl_2E_protectedAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_protectedAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_protectedAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_protectedAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess_3F_ GGS_AccessControl_2E_protectedAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedAccess_3F_ result ;
  const GGS_AccessControl_2E_protectedAccess_3F_ * p = (const GGS_AccessControl_2E_protectedAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_protectedAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.protectedAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess::GGS_AccessControl_2E_protectedSetAccess (void) :
mProperty_declaringType () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess::~ GGS_AccessControl_2E_protectedSetAccess (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess GGS_AccessControl_2E_protectedSetAccess::init_21_ (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedSetAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess::GGS_AccessControl_2E_protectedSetAccess (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_declaringType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess GGS_AccessControl_2E_protectedSetAccess::class_func_new (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_protectedSetAccess::isValid (void) const {
  return mProperty_declaringType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedSetAccess::drop (void) {
  mProperty_declaringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedSetAccess::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.protectedSetAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declaringType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControl.protectedSetAccess generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedSetAccess ("AccessControl.protectedSetAccess",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AccessControl_2E_protectedSetAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_protectedSetAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_protectedSetAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_protectedSetAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess GGS_AccessControl_2E_protectedSetAccess::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedSetAccess result ;
  const GGS_AccessControl_2E_protectedSetAccess * p = (const GGS_AccessControl_2E_protectedSetAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_protectedSetAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.protectedSetAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @AccessControl_2E_protectedSetAccess_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess_3F_::GGS_AccessControl_2E_protectedSetAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess_3F_::GGS_AccessControl_2E_protectedSetAccess_3F_ (const GGS_AccessControl_2E_protectedSetAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess_3F_ GGS_AccessControl_2E_protectedSetAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_protectedSetAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_protectedSetAccess_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_protectedSetAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedSetAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_protectedSetAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedSetAccess_3F_::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControl.protectedSetAccess? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedSetAccess_3F_ ("AccessControl.protectedSetAccess?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AccessControl_2E_protectedSetAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_protectedSetAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_protectedSetAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_protectedSetAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess_3F_ GGS_AccessControl_2E_protectedSetAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedSetAccess_3F_ result ;
  const GGS_AccessControl_2E_protectedSetAccess_3F_ * p = (const GGS_AccessControl_2E_protectedSetAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_protectedSetAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.protectedSetAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess::GGS_AccessControl_2E_privateAccess (void) :
mProperty_declaringType () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess::~ GGS_AccessControl_2E_privateAccess (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess GGS_AccessControl_2E_privateAccess::init_21_ (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess::GGS_AccessControl_2E_privateAccess (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_declaringType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess GGS_AccessControl_2E_privateAccess::class_func_new (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_privateAccess::isValid (void) const {
  return mProperty_declaringType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateAccess::drop (void) {
  mProperty_declaringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateAccess::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.privateAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declaringType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControl.privateAccess generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateAccess ("AccessControl.privateAccess",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AccessControl_2E_privateAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_privateAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_privateAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_privateAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess GGS_AccessControl_2E_privateAccess::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateAccess result ;
  const GGS_AccessControl_2E_privateAccess * p = (const GGS_AccessControl_2E_privateAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_privateAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.privateAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @AccessControl_2E_privateAccess_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess_3F_::GGS_AccessControl_2E_privateAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess_3F_::GGS_AccessControl_2E_privateAccess_3F_ (const GGS_AccessControl_2E_privateAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess_3F_ GGS_AccessControl_2E_privateAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_privateAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_privateAccess_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_privateAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_privateAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateAccess_3F_::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControl.privateAccess? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateAccess_3F_ ("AccessControl.privateAccess?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AccessControl_2E_privateAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_privateAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_privateAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_privateAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess_3F_ GGS_AccessControl_2E_privateAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateAccess_3F_ result ;
  const GGS_AccessControl_2E_privateAccess_3F_ * p = (const GGS_AccessControl_2E_privateAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_privateAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.privateAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess::GGS_AccessControl_2E_privateSetAccess (void) :
mProperty_declaringType () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess::~ GGS_AccessControl_2E_privateSetAccess (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess GGS_AccessControl_2E_privateSetAccess::init_21_ (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateSetAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess::GGS_AccessControl_2E_privateSetAccess (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_declaringType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess GGS_AccessControl_2E_privateSetAccess::class_func_new (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_privateSetAccess::isValid (void) const {
  return mProperty_declaringType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateSetAccess::drop (void) {
  mProperty_declaringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateSetAccess::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.privateSetAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declaringType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControl.privateSetAccess generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateSetAccess ("AccessControl.privateSetAccess",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AccessControl_2E_privateSetAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_privateSetAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_privateSetAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_privateSetAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess GGS_AccessControl_2E_privateSetAccess::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateSetAccess result ;
  const GGS_AccessControl_2E_privateSetAccess * p = (const GGS_AccessControl_2E_privateSetAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_privateSetAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.privateSetAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @AccessControl_2E_privateSetAccess_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess_3F_::GGS_AccessControl_2E_privateSetAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess_3F_::GGS_AccessControl_2E_privateSetAccess_3F_ (const GGS_AccessControl_2E_privateSetAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess_3F_ GGS_AccessControl_2E_privateSetAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_privateSetAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_privateSetAccess_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_privateSetAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateSetAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_privateSetAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateSetAccess_3F_::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControl.privateSetAccess? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateSetAccess_3F_ ("AccessControl.privateSetAccess?",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AccessControl_2E_privateSetAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_privateSetAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_privateSetAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_privateSetAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess_3F_ GGS_AccessControl_2E_privateSetAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateSetAccess_3F_ result ;
  const GGS_AccessControl_2E_privateSetAccess_3F_ * p = (const GGS_AccessControl_2E_privateSetAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_privateSetAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.privateSetAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess::GGS_AccessControl_2E_fileprivateAccess (void) :
mProperty_declarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess::~ GGS_AccessControl_2E_fileprivateAccess (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess GGS_AccessControl_2E_fileprivateAccess::init_21_ (const GGS_location & in_declarationLocation,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_fileprivateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess::GGS_AccessControl_2E_fileprivateAccess (const GGS_location & inOperand0) :
mProperty_declarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess GGS_AccessControl_2E_fileprivateAccess::class_func_new (const GGS_location & in_declarationLocation,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_fileprivateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_fileprivateAccess::isValid (void) const {
  return mProperty_declarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateAccess::drop (void) {
  mProperty_declarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateAccess::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.fileprivateAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControl.fileprivateAccess generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateAccess ("AccessControl.fileprivateAccess",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AccessControl_2E_fileprivateAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_fileprivateAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_fileprivateAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess GGS_AccessControl_2E_fileprivateAccess::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_fileprivateAccess result ;
  const GGS_AccessControl_2E_fileprivateAccess * p = (const GGS_AccessControl_2E_fileprivateAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_fileprivateAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.fileprivateAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @AccessControl_2E_fileprivateAccess_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess_3F_::GGS_AccessControl_2E_fileprivateAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess_3F_::GGS_AccessControl_2E_fileprivateAccess_3F_ (const GGS_AccessControl_2E_fileprivateAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess_3F_ GGS_AccessControl_2E_fileprivateAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_fileprivateAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_fileprivateAccess_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_fileprivateAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_fileprivateAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateAccess_3F_::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControl.fileprivateAccess? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateAccess_3F_ ("AccessControl.fileprivateAccess?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AccessControl_2E_fileprivateAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_fileprivateAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_fileprivateAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess_3F_ GGS_AccessControl_2E_fileprivateAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_fileprivateAccess_3F_ result ;
  const GGS_AccessControl_2E_fileprivateAccess_3F_ * p = (const GGS_AccessControl_2E_fileprivateAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_fileprivateAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.fileprivateAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess::GGS_AccessControl_2E_fileprivateSetAccess (void) :
mProperty_declarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess::~ GGS_AccessControl_2E_fileprivateSetAccess (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess GGS_AccessControl_2E_fileprivateSetAccess::init_21_ (const GGS_location & in_declarationLocation,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_fileprivateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateSetAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess::GGS_AccessControl_2E_fileprivateSetAccess (const GGS_location & inOperand0) :
mProperty_declarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess GGS_AccessControl_2E_fileprivateSetAccess::class_func_new (const GGS_location & in_declarationLocation,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_fileprivateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_fileprivateSetAccess::isValid (void) const {
  return mProperty_declarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateSetAccess::drop (void) {
  mProperty_declarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateSetAccess::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.fileprivateSetAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControl.fileprivateSetAccess generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateSetAccess ("AccessControl.fileprivateSetAccess",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AccessControl_2E_fileprivateSetAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateSetAccess ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_fileprivateSetAccess::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_fileprivateSetAccess (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess GGS_AccessControl_2E_fileprivateSetAccess::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_fileprivateSetAccess result ;
  const GGS_AccessControl_2E_fileprivateSetAccess * p = (const GGS_AccessControl_2E_fileprivateSetAccess *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_fileprivateSetAccess *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.fileprivateSetAccess", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @AccessControl_2E_fileprivateSetAccess_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess_3F_::GGS_AccessControl_2E_fileprivateSetAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess_3F_::GGS_AccessControl_2E_fileprivateSetAccess_3F_ (const GGS_AccessControl_2E_fileprivateSetAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess_3F_ GGS_AccessControl_2E_fileprivateSetAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_fileprivateSetAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_fileprivateSetAccess_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_fileprivateSetAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateSetAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_fileprivateSetAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateSetAccess_3F_::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControl.fileprivateSetAccess? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateSetAccess_3F_ ("AccessControl.fileprivateSetAccess?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_AccessControl_2E_fileprivateSetAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateSetAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_AccessControl_2E_fileprivateSetAccess_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_AccessControl_2E_fileprivateSetAccess_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess_3F_ GGS_AccessControl_2E_fileprivateSetAccess_3F_::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_AccessControl_2E_fileprivateSetAccess_3F_ result ;
  const GGS_AccessControl_2E_fileprivateSetAccess_3F_ * p = (const GGS_AccessControl_2E_fileprivateSetAccess_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_AccessControl_2E_fileprivateSetAccess_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControl.fileprivateSetAccess?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element::GGS_XCodeGroupList_2E_element (void) :
mProperty_mGroupReference (),
mProperty_mGroupName (),
mProperty_mGroupPath (),
mProperty_mChildrenRefs () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element::~ GGS_XCodeGroupList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_XCodeGroupList_2E_element GGS_XCodeGroupList_2E_element::init_21__21__21__21_ (const GGS_string & in_mGroupReference,
                                                                                   const GGS_string & in_mGroupName,
                                                                                   const GGS_string & in_mGroupPath,
                                                                                   const GGS_stringlist & in_mChildrenRefs,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeGroupList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mGroupReference = in_mGroupReference ;
  result.mProperty_mGroupName = in_mGroupName ;
  result.mProperty_mGroupPath = in_mGroupPath ;
  result.mProperty_mChildrenRefs = in_mChildrenRefs ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element::GGS_XCodeGroupList_2E_element (const GGS_string & inOperand0,
                                                              const GGS_string & inOperand1,
                                                              const GGS_string & inOperand2,
                                                              const GGS_stringlist & inOperand3) :
mProperty_mGroupReference (inOperand0),
mProperty_mGroupName (inOperand1),
mProperty_mGroupPath (inOperand2),
mProperty_mChildrenRefs (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element GGS_XCodeGroupList_2E_element::class_func_new (const GGS_string & in_mGroupReference,
                                                                             const GGS_string & in_mGroupName,
                                                                             const GGS_string & in_mGroupPath,
                                                                             const GGS_stringlist & in_mChildrenRefs,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeGroupList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mGroupReference = in_mGroupReference ;
  result.mProperty_mGroupName = in_mGroupName ;
  result.mProperty_mGroupPath = in_mGroupPath ;
  result.mProperty_mChildrenRefs = in_mChildrenRefs ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_XCodeGroupList_2E_element::isValid (void) const {
  return mProperty_mGroupReference.isValid () && mProperty_mGroupName.isValid () && mProperty_mGroupPath.isValid () && mProperty_mChildrenRefs.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList_2E_element::drop (void) {
  mProperty_mGroupReference.drop () ;
  mProperty_mGroupName.drop () ;
  mProperty_mGroupPath.drop () ;
  mProperty_mChildrenRefs.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @XCodeGroupList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mGroupReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGroupName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGroupPath.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mChildrenRefs.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @XCodeGroupList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeGroupList_2E_element ("XCodeGroupList.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_XCodeGroupList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_XCodeGroupList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XCodeGroupList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element GGS_XCodeGroupList_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_XCodeGroupList_2E_element result ;
  const GGS_XCodeGroupList_2E_element * p = (const GGS_XCodeGroupList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XCodeGroupList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeGroupList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element::GGS_XCodeToolTargetList_2E_element (void) :
mProperty_mTargetRef (),
mProperty_mTargetName (),
mProperty_mProductFileReference (),
mProperty_mProductFileName (),
mProperty_mBuildPhaseRefList (),
mProperty_mBuildPhaseRef (),
mProperty_mBuildConfigurationListRef (),
mProperty_mBuildConfigurationSettingList (),
mProperty_mBuildConfigurationRef (),
mProperty_mFrameworksFileRefList (),
mProperty_mFrameworkBuildPhaseRef () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element::~ GGS_XCodeToolTargetList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element GGS_XCodeToolTargetList_2E_element::init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mTargetRef,
                                                                                                                         const GGS_string & in_mTargetName,
                                                                                                                         const GGS_string & in_mProductFileReference,
                                                                                                                         const GGS_string & in_mProductFileName,
                                                                                                                         const GGS_stringlist & in_mBuildPhaseRefList,
                                                                                                                         const GGS_string & in_mBuildPhaseRef,
                                                                                                                         const GGS_string & in_mBuildConfigurationListRef,
                                                                                                                         const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                                                                                         const GGS_string & in_mBuildConfigurationRef,
                                                                                                                         const GGS_stringlist & in_mFrameworksFileRefList,
                                                                                                                         const GGS_string & in_mFrameworkBuildPhaseRef,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeToolTargetList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetRef = in_mTargetRef ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mProductFileReference = in_mProductFileReference ;
  result.mProperty_mProductFileName = in_mProductFileName ;
  result.mProperty_mBuildPhaseRefList = in_mBuildPhaseRefList ;
  result.mProperty_mBuildPhaseRef = in_mBuildPhaseRef ;
  result.mProperty_mBuildConfigurationListRef = in_mBuildConfigurationListRef ;
  result.mProperty_mBuildConfigurationSettingList = in_mBuildConfigurationSettingList ;
  result.mProperty_mBuildConfigurationRef = in_mBuildConfigurationRef ;
  result.mProperty_mFrameworksFileRefList = in_mFrameworksFileRefList ;
  result.mProperty_mFrameworkBuildPhaseRef = in_mFrameworkBuildPhaseRef ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element::GGS_XCodeToolTargetList_2E_element (const GGS_string & inOperand0,
                                                                        const GGS_string & inOperand1,
                                                                        const GGS_string & inOperand2,
                                                                        const GGS_string & inOperand3,
                                                                        const GGS_stringlist & inOperand4,
                                                                        const GGS_string & inOperand5,
                                                                        const GGS_string & inOperand6,
                                                                        const GGS_stringlist & inOperand7,
                                                                        const GGS_string & inOperand8,
                                                                        const GGS_stringlist & inOperand9,
                                                                        const GGS_string & inOperand10) :
mProperty_mTargetRef (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mProductFileReference (inOperand2),
mProperty_mProductFileName (inOperand3),
mProperty_mBuildPhaseRefList (inOperand4),
mProperty_mBuildPhaseRef (inOperand5),
mProperty_mBuildConfigurationListRef (inOperand6),
mProperty_mBuildConfigurationSettingList (inOperand7),
mProperty_mBuildConfigurationRef (inOperand8),
mProperty_mFrameworksFileRefList (inOperand9),
mProperty_mFrameworkBuildPhaseRef (inOperand10) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element GGS_XCodeToolTargetList_2E_element::class_func_new (const GGS_string & in_mTargetRef,
                                                                                       const GGS_string & in_mTargetName,
                                                                                       const GGS_string & in_mProductFileReference,
                                                                                       const GGS_string & in_mProductFileName,
                                                                                       const GGS_stringlist & in_mBuildPhaseRefList,
                                                                                       const GGS_string & in_mBuildPhaseRef,
                                                                                       const GGS_string & in_mBuildConfigurationListRef,
                                                                                       const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                                                       const GGS_string & in_mBuildConfigurationRef,
                                                                                       const GGS_stringlist & in_mFrameworksFileRefList,
                                                                                       const GGS_string & in_mFrameworkBuildPhaseRef,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeToolTargetList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetRef = in_mTargetRef ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mProductFileReference = in_mProductFileReference ;
  result.mProperty_mProductFileName = in_mProductFileName ;
  result.mProperty_mBuildPhaseRefList = in_mBuildPhaseRefList ;
  result.mProperty_mBuildPhaseRef = in_mBuildPhaseRef ;
  result.mProperty_mBuildConfigurationListRef = in_mBuildConfigurationListRef ;
  result.mProperty_mBuildConfigurationSettingList = in_mBuildConfigurationSettingList ;
  result.mProperty_mBuildConfigurationRef = in_mBuildConfigurationRef ;
  result.mProperty_mFrameworksFileRefList = in_mFrameworksFileRefList ;
  result.mProperty_mFrameworkBuildPhaseRef = in_mFrameworkBuildPhaseRef ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_XCodeToolTargetList_2E_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList_2E_element::drop (void) {
  mProperty_mTargetRef.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mProductFileReference.drop () ;
  mProperty_mProductFileName.drop () ;
  mProperty_mBuildPhaseRefList.drop () ;
  mProperty_mBuildPhaseRef.drop () ;
  mProperty_mBuildConfigurationListRef.drop () ;
  mProperty_mBuildConfigurationSettingList.drop () ;
  mProperty_mBuildConfigurationRef.drop () ;
  mProperty_mFrameworksFileRefList.drop () ;
  mProperty_mFrameworkBuildPhaseRef.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @XCodeToolTargetList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTargetRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProductFileName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @XCodeToolTargetList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeToolTargetList_2E_element ("XCodeToolTargetList.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_XCodeToolTargetList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_XCodeToolTargetList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XCodeToolTargetList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element GGS_XCodeToolTargetList_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_XCodeToolTargetList_2E_element result ;
  const GGS_XCodeToolTargetList_2E_element * p = (const GGS_XCodeToolTargetList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XCodeToolTargetList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeToolTargetList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element::GGS_XCodeAppTargetList_2E_element (void) :
mProperty_mTargetRef (),
mProperty_mTargetName (),
mProperty_mProductFileReference (),
mProperty_mProductFileName (),
mProperty_mBuildPhaseRefList (),
mProperty_mBuildPhaseRef (),
mProperty_mBuildConfigurationListRef (),
mProperty_mBuildConfigurationSettingList (),
mProperty_mBuildConfigurationRef (),
mProperty_mFrameworksFileRefList (),
mProperty_mFrameworkBuildPhaseRef (),
mProperty_mDependentTargets (),
mProperty_mResourceBuildRef (),
mProperty_mResourceFileBuildRefs () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element::~ GGS_XCodeAppTargetList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element GGS_XCodeAppTargetList_2E_element::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mTargetRef,
                                                                                                                                   const GGS_string & in_mTargetName,
                                                                                                                                   const GGS_string & in_mProductFileReference,
                                                                                                                                   const GGS_string & in_mProductFileName,
                                                                                                                                   const GGS_stringlist & in_mBuildPhaseRefList,
                                                                                                                                   const GGS_string & in_mBuildPhaseRef,
                                                                                                                                   const GGS_string & in_mBuildConfigurationListRef,
                                                                                                                                   const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                                                                                                   const GGS_string & in_mBuildConfigurationRef,
                                                                                                                                   const GGS_stringlist & in_mFrameworksFileRefList,
                                                                                                                                   const GGS_string & in_mFrameworkBuildPhaseRef,
                                                                                                                                   const GGS__32_stringlist & in_mDependentTargets,
                                                                                                                                   const GGS_string & in_mResourceBuildRef,
                                                                                                                                   const GGS_stringlist & in_mResourceFileBuildRefs,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeAppTargetList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetRef = in_mTargetRef ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mProductFileReference = in_mProductFileReference ;
  result.mProperty_mProductFileName = in_mProductFileName ;
  result.mProperty_mBuildPhaseRefList = in_mBuildPhaseRefList ;
  result.mProperty_mBuildPhaseRef = in_mBuildPhaseRef ;
  result.mProperty_mBuildConfigurationListRef = in_mBuildConfigurationListRef ;
  result.mProperty_mBuildConfigurationSettingList = in_mBuildConfigurationSettingList ;
  result.mProperty_mBuildConfigurationRef = in_mBuildConfigurationRef ;
  result.mProperty_mFrameworksFileRefList = in_mFrameworksFileRefList ;
  result.mProperty_mFrameworkBuildPhaseRef = in_mFrameworkBuildPhaseRef ;
  result.mProperty_mDependentTargets = in_mDependentTargets ;
  result.mProperty_mResourceBuildRef = in_mResourceBuildRef ;
  result.mProperty_mResourceFileBuildRefs = in_mResourceFileBuildRefs ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element::GGS_XCodeAppTargetList_2E_element (const GGS_string & inOperand0,
                                                                      const GGS_string & inOperand1,
                                                                      const GGS_string & inOperand2,
                                                                      const GGS_string & inOperand3,
                                                                      const GGS_stringlist & inOperand4,
                                                                      const GGS_string & inOperand5,
                                                                      const GGS_string & inOperand6,
                                                                      const GGS_stringlist & inOperand7,
                                                                      const GGS_string & inOperand8,
                                                                      const GGS_stringlist & inOperand9,
                                                                      const GGS_string & inOperand10,
                                                                      const GGS__32_stringlist & inOperand11,
                                                                      const GGS_string & inOperand12,
                                                                      const GGS_stringlist & inOperand13) :
mProperty_mTargetRef (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mProductFileReference (inOperand2),
mProperty_mProductFileName (inOperand3),
mProperty_mBuildPhaseRefList (inOperand4),
mProperty_mBuildPhaseRef (inOperand5),
mProperty_mBuildConfigurationListRef (inOperand6),
mProperty_mBuildConfigurationSettingList (inOperand7),
mProperty_mBuildConfigurationRef (inOperand8),
mProperty_mFrameworksFileRefList (inOperand9),
mProperty_mFrameworkBuildPhaseRef (inOperand10),
mProperty_mDependentTargets (inOperand11),
mProperty_mResourceBuildRef (inOperand12),
mProperty_mResourceFileBuildRefs (inOperand13) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element GGS_XCodeAppTargetList_2E_element::class_func_new (const GGS_string & in_mTargetRef,
                                                                                     const GGS_string & in_mTargetName,
                                                                                     const GGS_string & in_mProductFileReference,
                                                                                     const GGS_string & in_mProductFileName,
                                                                                     const GGS_stringlist & in_mBuildPhaseRefList,
                                                                                     const GGS_string & in_mBuildPhaseRef,
                                                                                     const GGS_string & in_mBuildConfigurationListRef,
                                                                                     const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                                                     const GGS_string & in_mBuildConfigurationRef,
                                                                                     const GGS_stringlist & in_mFrameworksFileRefList,
                                                                                     const GGS_string & in_mFrameworkBuildPhaseRef,
                                                                                     const GGS__32_stringlist & in_mDependentTargets,
                                                                                     const GGS_string & in_mResourceBuildRef,
                                                                                     const GGS_stringlist & in_mResourceFileBuildRefs,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeAppTargetList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetRef = in_mTargetRef ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mProductFileReference = in_mProductFileReference ;
  result.mProperty_mProductFileName = in_mProductFileName ;
  result.mProperty_mBuildPhaseRefList = in_mBuildPhaseRefList ;
  result.mProperty_mBuildPhaseRef = in_mBuildPhaseRef ;
  result.mProperty_mBuildConfigurationListRef = in_mBuildConfigurationListRef ;
  result.mProperty_mBuildConfigurationSettingList = in_mBuildConfigurationSettingList ;
  result.mProperty_mBuildConfigurationRef = in_mBuildConfigurationRef ;
  result.mProperty_mFrameworksFileRefList = in_mFrameworksFileRefList ;
  result.mProperty_mFrameworkBuildPhaseRef = in_mFrameworkBuildPhaseRef ;
  result.mProperty_mDependentTargets = in_mDependentTargets ;
  result.mProperty_mResourceBuildRef = in_mResourceBuildRef ;
  result.mProperty_mResourceFileBuildRefs = in_mResourceFileBuildRefs ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_XCodeAppTargetList_2E_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () && mProperty_mDependentTargets.isValid () && mProperty_mResourceBuildRef.isValid () && mProperty_mResourceFileBuildRefs.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList_2E_element::drop (void) {
  mProperty_mTargetRef.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mProductFileReference.drop () ;
  mProperty_mProductFileName.drop () ;
  mProperty_mBuildPhaseRefList.drop () ;
  mProperty_mBuildPhaseRef.drop () ;
  mProperty_mBuildConfigurationListRef.drop () ;
  mProperty_mBuildConfigurationSettingList.drop () ;
  mProperty_mBuildConfigurationRef.drop () ;
  mProperty_mFrameworksFileRefList.drop () ;
  mProperty_mFrameworkBuildPhaseRef.drop () ;
  mProperty_mDependentTargets.drop () ;
  mProperty_mResourceBuildRef.drop () ;
  mProperty_mResourceFileBuildRefs.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @XCodeAppTargetList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTargetRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProductFileName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDependentTargets.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mResourceBuildRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mResourceFileBuildRefs.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @XCodeAppTargetList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeAppTargetList_2E_element ("XCodeAppTargetList.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_XCodeAppTargetList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_XCodeAppTargetList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XCodeAppTargetList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element GGS_XCodeAppTargetList_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_XCodeAppTargetList_2E_element result ;
  const GGS_XCodeAppTargetList_2E_element * p = (const GGS_XCodeAppTargetList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XCodeAppTargetList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element::GGS_BuildFileList_2E_element (void) :
mProperty_mFileReference (),
mProperty_mFileName (),
mProperty_mBuildReference () {
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element::~ GGS_BuildFileList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_BuildFileList_2E_element GGS_BuildFileList_2E_element::init_21__21__21_ (const GGS_string & in_mFileReference,
                                                                             const GGS_string & in_mFileName,
                                                                             const GGS_string & in_mBuildReference,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_BuildFileList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFileReference = in_mFileReference ;
  result.mProperty_mFileName = in_mFileName ;
  result.mProperty_mBuildReference = in_mBuildReference ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element::GGS_BuildFileList_2E_element (const GGS_string & inOperand0,
                                                            const GGS_string & inOperand1,
                                                            const GGS_string & inOperand2) :
mProperty_mFileReference (inOperand0),
mProperty_mFileName (inOperand1),
mProperty_mBuildReference (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element GGS_BuildFileList_2E_element::class_func_new (const GGS_string & in_mFileReference,
                                                                           const GGS_string & in_mFileName,
                                                                           const GGS_string & in_mBuildReference,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_BuildFileList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFileReference = in_mFileReference ;
  result.mProperty_mFileName = in_mFileName ;
  result.mProperty_mBuildReference = in_mBuildReference ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_BuildFileList_2E_element::isValid (void) const {
  return mProperty_mFileReference.isValid () && mProperty_mFileName.isValid () && mProperty_mBuildReference.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList_2E_element::drop (void) {
  mProperty_mFileReference.drop () ;
  mProperty_mFileName.drop () ;
  mProperty_mBuildReference.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList_2E_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @BuildFileList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFileReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFileName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildReference.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @BuildFileList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_BuildFileList_2E_element ("BuildFileList.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_BuildFileList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_BuildFileList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_BuildFileList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element GGS_BuildFileList_2E_element::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_BuildFileList_2E_element result ;
  const GGS_BuildFileList_2E_element * p = (const GGS_BuildFileList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_BuildFileList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("BuildFileList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E
//
//--------------------------------------------------------------------------------------------------

#include "unicode_character_cpp.h"
#include "scanner_actions.h"
#include "cLexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

Lexique_galgasTemplateScanner::Lexique_galgasTemplateScanner (Compiler * inCallerCompiler,
                                                              const String & inSourceFileName
                                                              COMMA_LOCATION_ARGS) :
Lexique_galgasScanner_33_ (inCallerCompiler, inSourceFileName COMMA_THERE),
mMatchedTemplateDelimiterIndex (-1) {
}

//--------------------------------------------------------------------------------------------------

Lexique_galgasTemplateScanner::Lexique_galgasTemplateScanner (Compiler * inCallerCompiler,
                                                              const String & inSourceString,
                                                              const String & inStringForError
                                                              COMMA_LOCATION_ARGS) :
Lexique_galgasScanner_33_ (inCallerCompiler, inSourceString, inStringForError COMMA_THERE),
mMatchedTemplateDelimiterIndex (-1) {
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$\n$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__A_ = {
  TO_UNICODE (10),
} ;

//--- Unicode string for '$%$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__25_ = {
  TO_UNICODE ('%'),
} ;

//--- Unicode string for '$\\$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__5C_ = {
  TO_UNICODE ('\\'),
} ;

//--- Unicode string for '$\\%$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__5C__25_ = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('%'),
} ;

//--- Unicode string for '$\\\\$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__5C__5C_ = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('\\'),
} ;

//--- Unicode string for '$\\n$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__5C_n = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('n'),
} ;

//--------------------------------------------------------------------------------------------------
//                           Template Delimiters
//--------------------------------------------------------------------------------------------------

static const TemplateDelimiter galgasTemplateScanner_kTemplateDefinitionArray [1] = {
  TemplateDelimiter (kUnicodeString_galgasTemplateScanner__25_, 1, kUnicodeString_galgasTemplateScanner__25_, 1, nullptr, true)
} ;

//--------------------------------------------------------------------------------------------------
//                           Template Replacements
//--------------------------------------------------------------------------------------------------

static const TemplateDelimiter galgasTemplateScanner_kTemplateReplacementArray [3] = {
  TemplateDelimiter (kUnicodeString_galgasTemplateScanner__5C__25_, 2, kUnicodeString_galgasTemplateScanner__25_, 1, nullptr, true),
  TemplateDelimiter (kUnicodeString_galgasTemplateScanner__5C_n, 2, kUnicodeString_galgasTemplateScanner__A_, 1, nullptr, true),
  TemplateDelimiter (kUnicodeString_galgasTemplateScanner__5C__5C_, 2, kUnicodeString_galgasTemplateScanner__5C_, 1, nullptr, true)
} ;

//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark
//--------------------------------------------------------------------------------------------------

static const bool galgasTemplateScanner_kEndOfScriptInTemplateArray [194] = {
  false /* identifier */,
  false /* double.xxx */,
  false /* literalInt */,
  false /* . */,
  false /* ... */,
  false /* ..< */,
  false /* @type */,
  false /* 'char' */,
  false /* $terminal$ */,
  false /* comment */,
  false /* commentMark */,
  false /* ?selector: */,
  false /* ? */,
  false /* ?!selector: */,
  false /* ?! */,
  false /* !selector: */,
  false /* ! */,
  false /* !?selector: */,
  false /* !? */,
  false /* < */,
  false /* <= */,
  false /* << */,
  false /* <non_terminal> */,
  false /* "string" */,
  false /* abstract */,
  false /* after */,
  false /* as */,
  false /* bang */,
  false /* before */,
  false /* between */,
  false /* block */,
  false /* boolset */,
  false /* cast */,
  false /* case */,
  false /* class */,
  false /* default */,
  false /* dict */,
  false /* do */,
  false /* drop */,
  false /* else */,
  false /* elsif */,
  false /* end */,
  false /* enum */,
  false /* error */,
  false /* extension */,
  false /* extern */,
  false /* false */,
  false /* fileprivate */,
  false /* filewrapper */,
  false /* for */,
  false /* final */,
  false /* fixit */,
  false /* func */,
  false /* getter */,
  false /* grammar */,
  false /* graph */,
  false /* gui */,
  false /* if */,
  false /* in */,
  false /* indexing */,
  false /* init */,
  false /* insert */,
  false /* is */,
  false /* label */,
  false /* let */,
  false /* lexique */,
  false /* list */,
  false /* log */,
  false /* loop */,
  false /* map */,
  false /* message */,
  false /* method */,
  false /* mod */,
  false /* mutating */,
  false /* nil */,
  false /* not */,
  false /* on */,
  false /* operator */,
  false /* option */,
  false /* or */,
  false /* override */,
  false /* parse */,
  false /* public */,
  false /* protected */,
  false /* private */,
  false /* proc */,
  false /* project */,
  false /* refclass */,
  false /* remove */,
  false /* repeat */,
  false /* replace */,
  false /* rewind */,
  false /* rule */,
  false /* search */,
  false /* select */,
  false /* self */,
  false /* send */,
  false /* setter */,
  false /* sortedlist */,
  false /* spoil */,
  false /* struct */,
  false /* style */,
  false /* super */,
  false /* switch */,
  false /* syntax */,
  false /* tag */,
  false /* template */,
  false /* then */,
  false /* true */,
  false /* typealias */,
  false /* unused */,
  false /* valueclass */,
  false /* var */,
  false /* warning */,
  false /* weak */,
  false /* while */,
  false /* with */,
  false /* %app-link */,
  false /* %app-source */,
  false /* %applicationBundleBase */,
  false /* %clonable */,
  false /* %codeblocks-linux32 */,
  false /* %codeblocks-linux64 */,
  false /* %codeblocks-windows */,
  false /* %comparable */,
  false /* %equatable */,
  false /* %from */,
  false /* %generatedInSeparateFile */,
  false /* %initArgLabel */,
  false /* %libpmAtPath */,
  false /* %MacOS */,
  false /* %MacOSDeployment */,
  false /* %macCodeSign */,
  false /* %makefile-macosx */,
  false /* %makefile-unix */,
  false /* %makefile-x86linux32-on-macosx */,
  false /* %makefile-x86linux64-on-macosx */,
  false /* %makefile-win32-on-macosx */,
  false /* %nonAtomicSelection */,
  false /* %once */,
  false /* %preserved */,
  false /* %quietOutputByDefault */,
  false /* %templateEndMark */,
  false /* %tool-source */,
  false /* %translate */,
  false /* %usefull */,
  false /* * */,
  false /* , */,
  false /* + */,
  false /* &+ */,
  false /* &- */,
  false /* &* */,
  false /* &/ */,
  false /* > */,
  false /* ; */,
  false /* : */,
  false /* :> */,
  false /* - */,
  false /* ( */,
  false /* ) */,
  false /* -> */,
  false /* == */,
  false /* = */,
  false /* && */,
  false /* [ */,
  false /* ] */,
  false /* += */,
  false /* -= */,
  false /* *= */,
  false /* /= */,
  false /* &= */,
  false /* |= */,
  false /* ^= */,
  false /* / */,
  false /* != */,
  false /* >= */,
  false /* & */,
  false /* { */,
  false /* } */,
  false /* ` */,
  false /* || */,
  false /* | */,
  false /* ^ */,
  false /* >> */,
  false /* ~ */,
  false /* -- */,
  false /* ++ */,
  false /* &-- */,
  false /* &++ */,
  false /* === */,
  false /* !== */,
  false /* ?^ */,
  false /* !^ */,
  false /* §[ */
} ;

//--------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N
//--------------------------------------------------------------------------------------------------

bool Lexique_galgasTemplateScanner::parseLexicalToken (void) {
  cTokenFor_galgasTemplateScanner token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    if ((mMatchedTemplateDelimiterIndex >= 0)
        && (galgasTemplateScanner_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)
        && (UNICODE_VALUE (mCurrentChar) != '\0')) {
      const bool foundEndDelimitor = testForInputUTF32String (galgasTemplateScanner_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,
                                                               true) ;
      if (foundEndDelimitor) {
        mMatchedTemplateDelimiterIndex = -1 ;
      }
    }
    while ((mMatchedTemplateDelimiterIndex < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
      int32_t replacementIndex = 0 ;
      while (replacementIndex >= 0) {
        replacementIndex = findTemplateDelimiterIndex (galgasTemplateScanner_kTemplateReplacementArray, 3) ;
        if (replacementIndex >= 0) {
          if (galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mReplacementFunction == nullptr) {
            token.mTemplateStringBeforeToken.appendString (galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mEndString) ;
          }else{
            String s ;
            while (notTestForInputUTF32String (galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mEndString,
                                               kEndOfSourceLexicalErrorMessage
                                               COMMA_HERE)) {
              s.appendChar (previousChar ()) ;
            }
            galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;
          }
        }
      }
      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (galgasTemplateScanner_kTemplateDefinitionArray, 1) ;
      if (mMatchedTemplateDelimiterIndex < 0) {
        token.mTemplateStringBeforeToken.appendChar (mCurrentChar) ;
        advance () ;
      }
    }
    if ((mMatchedTemplateDelimiterIndex >= 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
      internalParseLexicalToken (token) ;
    }
    if ((token.mTokenCode > 0) && galgasTemplateScanner_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {
      mMatchedTemplateDelimiterIndex = -1 ;
    }
  }
  if (UNICODE_VALUE (mCurrentChar) == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N
//--------------------------------------------------------------------------------------------------

GGS_stringlist Lexique_galgasTemplateScanner::symbols (LOCATION_ARGS) {
  GGS_stringlist result = GGS_stringlist::class_func_emptyList (THERE) ;
  result.addAssign_operation (GGS_string ("identifier") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("double.xxx") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("literalInt") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (".") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("...") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("..<") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("@type") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("'char'") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("$terminal$") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("comment") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("commentMark") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("\?selector:") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("\?") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("\?!selector:") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("\?!") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("!selector:") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("!") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("!\?selector:") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("!\?") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("<") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("<=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("<<") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("<non_terminal>") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("\"string\"") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("abstract") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("after") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("as") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("bang") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("before") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("between") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("block") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("boolset") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("cast") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("case") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("class") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("default") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("dict") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("do") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("drop") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("else") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("elsif") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("end") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("enum") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("error") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("extension") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("extern") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("false") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("fileprivate") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("filewrapper") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("for") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("final") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("fixit") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("func") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("getter") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("grammar") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("graph") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("gui") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("if") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("in") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("indexing") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("init") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("insert") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("is") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("label") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("let") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("lexique") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("list") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("log") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("loop") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("map") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("message") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("method") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("mod") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("mutating") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("nil") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("not") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("on") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("operator") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("option") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("or") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("override") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("parse") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("public") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("protected") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("private") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("proc") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("project") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("refclass") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("remove") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("repeat") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("replace") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("rewind") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("rule") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("search") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("select") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("self") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("send") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("setter") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("sortedlist") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("spoil") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("struct") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("style") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("super") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("switch") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("syntax") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("tag") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("template") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("then") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("true") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("typealias") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("unused") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("valueclass") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("var") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("warning") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("weak") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("while") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("with") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%app-link") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%app-source") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%applicationBundleBase") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%clonable") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%codeblocks-linux32") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%codeblocks-linux64") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%codeblocks-windows") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%comparable") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%equatable") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%from") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%generatedInSeparateFile") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%initArgLabel") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%libpmAtPath") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%MacOS") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%MacOSDeployment") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%macCodeSign") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%makefile-macosx") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%makefile-unix") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%makefile-x86linux32-on-macosx") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%makefile-x86linux64-on-macosx") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%makefile-win32-on-macosx") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%nonAtomicSelection") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%once") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%preserved") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%quietOutputByDefault") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%templateEndMark") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%tool-source") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%translate") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("%usefull") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("*") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (",") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("+") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("&+") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("&-") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("&*") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("&/") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (">") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (";") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (":") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (":>") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("-") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("(") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (")") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("->") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("==") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("&&") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("[") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("]") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("+=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("-=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("*=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("/=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("&=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("|=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("^=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("/") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("!=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (">=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("&") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("{") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("}") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("`") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("||") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("|") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("^") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (">>") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("~") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("--") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("++") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("&--") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("&++") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("===") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("!==") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("\?^") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("!^") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("§[") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_galgasTemplateScanner (TC_UniqueArray <String> & /* ioList */) {
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_galgasTemplateScanner (const String & /* inIdentifier */,
                                                            bool & /* ioFound */,
                                                            TC_UniqueArray <String> & /* ioList */) {
}

//--------------------------------------------------------------------------------------------------

static cLexiqueIntrospection lexiqueIntrospection_galgasTemplateScanner
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_galgasTemplateScanner, getKeywordsForIdentifier_galgasTemplateScanner) ;

//--------------------------------------------------------------------------------------------------
// @templateClassFunctionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateClassFunctionAST::objectCompare (const GGS_templateClassFunctionAST & inOperand) const {
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

GGS_templateClassFunctionAST::GGS_templateClassFunctionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateClassFunctionAST GGS_templateClassFunctionAST::
init_21__21__21_ (const GGS_lstring & in_mTypeName,
                  const GGS_lstring & in_mClassFunctionName,
                  const GGS_templateExpressionListAST & in_mExpressionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateClassFunctionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateClassFunctionAST (inCompiler COMMA_THERE)) ;
  object->templateClassFunctionAST_init_21__21__21_ (in_mTypeName, in_mClassFunctionName, in_mExpressionList, inCompiler) ;
  const GGS_templateClassFunctionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateClassFunctionAST::
templateClassFunctionAST_init_21__21__21_ (const GGS_lstring & in_mTypeName,
                                           const GGS_lstring & in_mClassFunctionName,
                                           const GGS_templateExpressionListAST & in_mExpressionList,
                                           Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mClassFunctionName = in_mClassFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateClassFunctionAST::GGS_templateClassFunctionAST (const cPtr_templateClassFunctionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateClassFunctionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateClassFunctionAST GGS_templateClassFunctionAST::class_func_new (const GGS_lstring & in_mTypeName,
                                                                           const GGS_lstring & in_mClassFunctionName,
                                                                           const GGS_templateExpressionListAST & in_mExpressionList,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_templateClassFunctionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateClassFunctionAST (in_mTypeName, in_mClassFunctionName, in_mExpressionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateClassFunctionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateClassFunctionAST * p = (cPtr_templateClassFunctionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateClassFunctionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateClassFunctionAST::readProperty_mClassFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateClassFunctionAST * p = (cPtr_templateClassFunctionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateClassFunctionAST) ;
    return p->mProperty_mClassFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateClassFunctionAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionListAST () ;
  }else{
    cPtr_templateClassFunctionAST * p = (cPtr_templateClassFunctionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateClassFunctionAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateClassFunctionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateClassFunctionAST::cPtr_templateClassFunctionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mClassFunctionName (),
mProperty_mExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateClassFunctionAST::cPtr_templateClassFunctionAST (const GGS_lstring & in_mTypeName,
                                                              const GGS_lstring & in_mClassFunctionName,
                                                              const GGS_templateExpressionListAST & in_mExpressionList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mClassFunctionName (),
mProperty_mExpressionList () {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mClassFunctionName = in_mClassFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateClassFunctionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateClassFunctionAST ;
}

void cPtr_templateClassFunctionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@templateClassFunctionAST:") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mClassFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateClassFunctionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateClassFunctionAST (mProperty_mTypeName, mProperty_mClassFunctionName, mProperty_mExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateClassFunctionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mClassFunctionName.printNonNullClassInstanceProperties ("mClassFunctionName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @templateClassFunctionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateClassFunctionAST ("templateClassFunctionAST",
                                                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateClassFunctionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateClassFunctionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateClassFunctionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateClassFunctionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateClassFunctionAST GGS_templateClassFunctionAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateClassFunctionAST result ;
  const GGS_templateClassFunctionAST * p = (const GGS_templateClassFunctionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateClassFunctionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateClassFunctionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateFileWrapperTemplateCallAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateFileWrapperTemplateCallAST::objectCompare (const GGS_templateFileWrapperTemplateCallAST & inOperand) const {
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

GGS_templateFileWrapperTemplateCallAST::GGS_templateFileWrapperTemplateCallAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateFileWrapperTemplateCallAST GGS_templateFileWrapperTemplateCallAST::
init_21__21__21_ (const GGS_lstring & in_mFileWrapperName,
                  const GGS_lstring & in_mTemplateName,
                  const GGS_templateExpressionListAST & in_mOutExpressionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateFileWrapperTemplateCallAST * object = nullptr ;
  macroMyNew (object, cPtr_templateFileWrapperTemplateCallAST (inCompiler COMMA_THERE)) ;
  object->templateFileWrapperTemplateCallAST_init_21__21__21_ (in_mFileWrapperName, in_mTemplateName, in_mOutExpressionList, inCompiler) ;
  const GGS_templateFileWrapperTemplateCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateFileWrapperTemplateCallAST::
templateFileWrapperTemplateCallAST_init_21__21__21_ (const GGS_lstring & in_mFileWrapperName,
                                                     const GGS_lstring & in_mTemplateName,
                                                     const GGS_templateExpressionListAST & in_mOutExpressionList,
                                                     Compiler * /* inCompiler */) {
  mProperty_mFileWrapperName = in_mFileWrapperName ;
  mProperty_mTemplateName = in_mTemplateName ;
  mProperty_mOutExpressionList = in_mOutExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFileWrapperTemplateCallAST::GGS_templateFileWrapperTemplateCallAST (const cPtr_templateFileWrapperTemplateCallAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFileWrapperTemplateCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateFileWrapperTemplateCallAST GGS_templateFileWrapperTemplateCallAST::class_func_new (const GGS_lstring & in_mFileWrapperName,
                                                                                               const GGS_lstring & in_mTemplateName,
                                                                                               const GGS_templateExpressionListAST & in_mOutExpressionList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_templateFileWrapperTemplateCallAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateFileWrapperTemplateCallAST (in_mFileWrapperName, in_mTemplateName, in_mOutExpressionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateFileWrapperTemplateCallAST::readProperty_mFileWrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateFileWrapperTemplateCallAST * p = (cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    return p->mProperty_mFileWrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateFileWrapperTemplateCallAST::readProperty_mTemplateName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateFileWrapperTemplateCallAST * p = (cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    return p->mProperty_mTemplateName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateFileWrapperTemplateCallAST::readProperty_mOutExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionListAST () ;
  }else{
    cPtr_templateFileWrapperTemplateCallAST * p = (cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    return p->mProperty_mOutExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateFileWrapperTemplateCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateFileWrapperTemplateCallAST::cPtr_templateFileWrapperTemplateCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mFileWrapperName (),
mProperty_mTemplateName (),
mProperty_mOutExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateFileWrapperTemplateCallAST::cPtr_templateFileWrapperTemplateCallAST (const GGS_lstring & in_mFileWrapperName,
                                                                                  const GGS_lstring & in_mTemplateName,
                                                                                  const GGS_templateExpressionListAST & in_mOutExpressionList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mFileWrapperName (),
mProperty_mTemplateName (),
mProperty_mOutExpressionList () {
  mProperty_mFileWrapperName = in_mFileWrapperName ;
  mProperty_mTemplateName = in_mTemplateName ;
  mProperty_mOutExpressionList = in_mOutExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateFileWrapperTemplateCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ;
}

void cPtr_templateFileWrapperTemplateCallAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@templateFileWrapperTemplateCallAST:") ;
  mProperty_mFileWrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateFileWrapperTemplateCallAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateFileWrapperTemplateCallAST (mProperty_mFileWrapperName, mProperty_mTemplateName, mProperty_mOutExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateFileWrapperTemplateCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFileWrapperName.printNonNullClassInstanceProperties ("mFileWrapperName") ;
    mProperty_mTemplateName.printNonNullClassInstanceProperties ("mTemplateName") ;
    mProperty_mOutExpressionList.printNonNullClassInstanceProperties ("mOutExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @templateFileWrapperTemplateCallAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ("templateFileWrapperTemplateCallAST",
                                                                                          & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateFileWrapperTemplateCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateFileWrapperTemplateCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateFileWrapperTemplateCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFileWrapperTemplateCallAST GGS_templateFileWrapperTemplateCallAST::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateFileWrapperTemplateCallAST result ;
  const GGS_templateFileWrapperTemplateCallAST * p = (const GGS_templateFileWrapperTemplateCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateFileWrapperTemplateCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFileWrapperTemplateCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateExtensionTemplateCallAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateExtensionTemplateCallAST::objectCompare (const GGS_templateExtensionTemplateCallAST & inOperand) const {
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

GGS_templateExtensionTemplateCallAST::GGS_templateExtensionTemplateCallAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateExtensionTemplateCallAST GGS_templateExtensionTemplateCallAST::
init_21__21__21_ (const GGS_templateExpressionAST & in_mExpressionValue,
                  const GGS_lstring & in_mTemplateName,
                  const GGS_templateExpressionListAST & in_mOutExpressionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateExtensionTemplateCallAST * object = nullptr ;
  macroMyNew (object, cPtr_templateExtensionTemplateCallAST (inCompiler COMMA_THERE)) ;
  object->templateExtensionTemplateCallAST_init_21__21__21_ (in_mExpressionValue, in_mTemplateName, in_mOutExpressionList, inCompiler) ;
  const GGS_templateExtensionTemplateCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateExtensionTemplateCallAST::
templateExtensionTemplateCallAST_init_21__21__21_ (const GGS_templateExpressionAST & in_mExpressionValue,
                                                   const GGS_lstring & in_mTemplateName,
                                                   const GGS_templateExpressionListAST & in_mOutExpressionList,
                                                   Compiler * /* inCompiler */) {
  mProperty_mExpressionValue = in_mExpressionValue ;
  mProperty_mTemplateName = in_mTemplateName ;
  mProperty_mOutExpressionList = in_mOutExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExtensionTemplateCallAST::GGS_templateExtensionTemplateCallAST (const cPtr_templateExtensionTemplateCallAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateExtensionTemplateCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateExtensionTemplateCallAST GGS_templateExtensionTemplateCallAST::class_func_new (const GGS_templateExpressionAST & in_mExpressionValue,
                                                                                           const GGS_lstring & in_mTemplateName,
                                                                                           const GGS_templateExpressionListAST & in_mOutExpressionList,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_templateExtensionTemplateCallAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateExtensionTemplateCallAST (in_mExpressionValue, in_mTemplateName, in_mOutExpressionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateExtensionTemplateCallAST::readProperty_mExpressionValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateExtensionTemplateCallAST * p = (cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    return p->mProperty_mExpressionValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateExtensionTemplateCallAST::readProperty_mTemplateName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateExtensionTemplateCallAST * p = (cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    return p->mProperty_mTemplateName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateExtensionTemplateCallAST::readProperty_mOutExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionListAST () ;
  }else{
    cPtr_templateExtensionTemplateCallAST * p = (cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    return p->mProperty_mOutExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateExtensionTemplateCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateExtensionTemplateCallAST::cPtr_templateExtensionTemplateCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mExpressionValue (),
mProperty_mTemplateName (),
mProperty_mOutExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateExtensionTemplateCallAST::cPtr_templateExtensionTemplateCallAST (const GGS_templateExpressionAST & in_mExpressionValue,
                                                                              const GGS_lstring & in_mTemplateName,
                                                                              const GGS_templateExpressionListAST & in_mOutExpressionList,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mExpressionValue (),
mProperty_mTemplateName (),
mProperty_mOutExpressionList () {
  mProperty_mExpressionValue = in_mExpressionValue ;
  mProperty_mTemplateName = in_mTemplateName ;
  mProperty_mOutExpressionList = in_mOutExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateExtensionTemplateCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ;
}

void cPtr_templateExtensionTemplateCallAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@templateExtensionTemplateCallAST:") ;
  mProperty_mExpressionValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateExtensionTemplateCallAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateExtensionTemplateCallAST (mProperty_mExpressionValue, mProperty_mTemplateName, mProperty_mOutExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateExtensionTemplateCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpressionValue.printNonNullClassInstanceProperties ("mExpressionValue") ;
    mProperty_mTemplateName.printNonNullClassInstanceProperties ("mTemplateName") ;
    mProperty_mOutExpressionList.printNonNullClassInstanceProperties ("mOutExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @templateExtensionTemplateCallAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ("templateExtensionTemplateCallAST",
                                                                                        & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateExtensionTemplateCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateExtensionTemplateCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateExtensionTemplateCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExtensionTemplateCallAST GGS_templateExtensionTemplateCallAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateExtensionTemplateCallAST result ;
  const GGS_templateExtensionTemplateCallAST * p = (const GGS_templateExtensionTemplateCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateExtensionTemplateCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateExtensionTemplateCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateLiteralStringExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLiteralStringExpressionAST::objectCompare (const GGS_templateLiteralStringExpressionAST & inOperand) const {
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

GGS_templateLiteralStringExpressionAST::GGS_templateLiteralStringExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateLiteralStringExpressionAST GGS_templateLiteralStringExpressionAST::
init_21__21_ (const GGS_stringlist & in_mLiteralStringList,
              const GGS_location & in_mLocation,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_templateLiteralStringExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLiteralStringExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateLiteralStringExpressionAST_init_21__21_ (in_mLiteralStringList, in_mLocation, inCompiler) ;
  const GGS_templateLiteralStringExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralStringExpressionAST::
templateLiteralStringExpressionAST_init_21__21_ (const GGS_stringlist & in_mLiteralStringList,
                                                 const GGS_location & in_mLocation,
                                                 Compiler * /* inCompiler */) {
  mProperty_mLiteralStringList = in_mLiteralStringList ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralStringExpressionAST::GGS_templateLiteralStringExpressionAST (const cPtr_templateLiteralStringExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralStringExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateLiteralStringExpressionAST GGS_templateLiteralStringExpressionAST::class_func_new (const GGS_stringlist & in_mLiteralStringList,
                                                                                               const GGS_location & in_mLocation,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_templateLiteralStringExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateLiteralStringExpressionAST (in_mLiteralStringList, in_mLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_templateLiteralStringExpressionAST::readProperty_mLiteralStringList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringlist () ;
  }else{
    cPtr_templateLiteralStringExpressionAST * p = (cPtr_templateLiteralStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralStringExpressionAST) ;
    return p->mProperty_mLiteralStringList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateLiteralStringExpressionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateLiteralStringExpressionAST * p = (cPtr_templateLiteralStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralStringExpressionAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralStringExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralStringExpressionAST::cPtr_templateLiteralStringExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralStringList (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralStringExpressionAST::cPtr_templateLiteralStringExpressionAST (const GGS_stringlist & in_mLiteralStringList,
                                                                                  const GGS_location & in_mLocation,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralStringList (),
mProperty_mLocation () {
  mProperty_mLiteralStringList = in_mLiteralStringList ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateLiteralStringExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ;
}

void cPtr_templateLiteralStringExpressionAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@templateLiteralStringExpressionAST:") ;
  mProperty_mLiteralStringList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateLiteralStringExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLiteralStringExpressionAST (mProperty_mLiteralStringList, mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLiteralStringExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralStringList.printNonNullClassInstanceProperties ("mLiteralStringList") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @templateLiteralStringExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ("templateLiteralStringExpressionAST",
                                                                                          & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateLiteralStringExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateLiteralStringExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateLiteralStringExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralStringExpressionAST GGS_templateLiteralStringExpressionAST::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateLiteralStringExpressionAST result ;
  const GGS_templateLiteralStringExpressionAST * p = (const GGS_templateLiteralStringExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateLiteralStringExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralStringExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @structFieldAccessTemplateExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structFieldAccessTemplateExpressionAST::objectCompare (const GGS_structFieldAccessTemplateExpressionAST & inOperand) const {
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

GGS_structFieldAccessTemplateExpressionAST::GGS_structFieldAccessTemplateExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_structFieldAccessTemplateExpressionAST GGS_structFieldAccessTemplateExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_templateExpressionAST & in_mExpression,
                  const GGS_lstring & in_mStructFieldName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_structFieldAccessTemplateExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_structFieldAccessTemplateExpressionAST (inCompiler COMMA_THERE)) ;
  object->structFieldAccessTemplateExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mExpression, in_mStructFieldName, inCompiler) ;
  const GGS_structFieldAccessTemplateExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structFieldAccessTemplateExpressionAST::
structFieldAccessTemplateExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                                         const GGS_templateExpressionAST & in_mExpression,
                                                         const GGS_lstring & in_mStructFieldName,
                                                         Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mStructFieldName = in_mStructFieldName ;
}

//--------------------------------------------------------------------------------------------------

GGS_structFieldAccessTemplateExpressionAST::GGS_structFieldAccessTemplateExpressionAST (const cPtr_structFieldAccessTemplateExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structFieldAccessTemplateExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_structFieldAccessTemplateExpressionAST GGS_structFieldAccessTemplateExpressionAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                                                                       const GGS_templateExpressionAST & in_mExpression,
                                                                                                       const GGS_lstring & in_mStructFieldName,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_structFieldAccessTemplateExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_structFieldAccessTemplateExpressionAST (in_mOperatorLocation, in_mExpression, in_mStructFieldName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_structFieldAccessTemplateExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_structFieldAccessTemplateExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_structFieldAccessTemplateExpressionAST::readProperty_mStructFieldName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    return p->mProperty_mStructFieldName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structFieldAccessTemplateExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_structFieldAccessTemplateExpressionAST::cPtr_structFieldAccessTemplateExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression (),
mProperty_mStructFieldName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_structFieldAccessTemplateExpressionAST::cPtr_structFieldAccessTemplateExpressionAST (const GGS_location & in_mOperatorLocation,
                                                                                          const GGS_templateExpressionAST & in_mExpression,
                                                                                          const GGS_lstring & in_mStructFieldName,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression (),
mProperty_mStructFieldName () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mStructFieldName = in_mStructFieldName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structFieldAccessTemplateExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;
}

void cPtr_structFieldAccessTemplateExpressionAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@structFieldAccessTemplateExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructFieldName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structFieldAccessTemplateExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structFieldAccessTemplateExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, mProperty_mStructFieldName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structFieldAccessTemplateExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mStructFieldName.printNonNullClassInstanceProperties ("mStructFieldName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @structFieldAccessTemplateExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ("structFieldAccessTemplateExpressionAST",
                                                                                              & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_structFieldAccessTemplateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structFieldAccessTemplateExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structFieldAccessTemplateExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structFieldAccessTemplateExpressionAST GGS_structFieldAccessTemplateExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_structFieldAccessTemplateExpressionAST result ;
  const GGS_structFieldAccessTemplateExpressionAST * p = (const GGS_structFieldAccessTemplateExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structFieldAccessTemplateExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structFieldAccessTemplateExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateOptionAccessAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateOptionAccessAST::objectCompare (const GGS_templateOptionAccessAST & inOperand) const {
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

GGS_templateOptionAccessAST::GGS_templateOptionAccessAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateOptionAccessAST GGS_templateOptionAccessAST::
init_21__21__21_ (const GGS_lstring & in_mOptionComponentName,
                  const GGS_lstring & in_mOptionName,
                  const GGS_lstring & in_mGetterName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateOptionAccessAST * object = nullptr ;
  macroMyNew (object, cPtr_templateOptionAccessAST (inCompiler COMMA_THERE)) ;
  object->templateOptionAccessAST_init_21__21__21_ (in_mOptionComponentName, in_mOptionName, in_mGetterName, inCompiler) ;
  const GGS_templateOptionAccessAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateOptionAccessAST::
templateOptionAccessAST_init_21__21__21_ (const GGS_lstring & in_mOptionComponentName,
                                          const GGS_lstring & in_mOptionName,
                                          const GGS_lstring & in_mGetterName,
                                          Compiler * /* inCompiler */) {
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionName = in_mOptionName ;
  mProperty_mGetterName = in_mGetterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateOptionAccessAST::GGS_templateOptionAccessAST (const cPtr_templateOptionAccessAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateOptionAccessAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateOptionAccessAST GGS_templateOptionAccessAST::class_func_new (const GGS_lstring & in_mOptionComponentName,
                                                                         const GGS_lstring & in_mOptionName,
                                                                         const GGS_lstring & in_mGetterName,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_templateOptionAccessAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateOptionAccessAST (in_mOptionComponentName, in_mOptionName, in_mGetterName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateOptionAccessAST::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateOptionAccessAST::readProperty_mOptionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    return p->mProperty_mOptionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateOptionAccessAST::readProperty_mGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    return p->mProperty_mGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateOptionAccessAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateOptionAccessAST::cPtr_templateOptionAccessAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptionName (),
mProperty_mGetterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateOptionAccessAST::cPtr_templateOptionAccessAST (const GGS_lstring & in_mOptionComponentName,
                                                            const GGS_lstring & in_mOptionName,
                                                            const GGS_lstring & in_mGetterName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptionName (),
mProperty_mGetterName () {
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionName = in_mOptionName ;
  mProperty_mGetterName = in_mGetterName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateOptionAccessAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST ;
}

void cPtr_templateOptionAccessAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@templateOptionAccessAST:") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateOptionAccessAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateOptionAccessAST (mProperty_mOptionComponentName, mProperty_mOptionName, mProperty_mGetterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateOptionAccessAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptionName.printNonNullClassInstanceProperties ("mOptionName") ;
    mProperty_mGetterName.printNonNullClassInstanceProperties ("mGetterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @templateOptionAccessAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateOptionAccessAST ("templateOptionAccessAST",
                                                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateOptionAccessAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateOptionAccessAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateOptionAccessAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateOptionAccessAST GGS_templateOptionAccessAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_templateOptionAccessAST result ;
  const GGS_templateOptionAccessAST * p = (const GGS_templateOptionAccessAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateOptionAccessAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateOptionAccessAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateTestDynamicClassAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateTestDynamicClassAST::objectCompare (const GGS_templateTestDynamicClassAST & inOperand) const {
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

GGS_templateTestDynamicClassAST::GGS_templateTestDynamicClassAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateTestDynamicClassAST GGS_templateTestDynamicClassAST::
init_21__21__21__21_ (const GGS_templateExpressionAST & in_mReceiverExpression,
                      const GGS_location & in_mEndOfReceiverExpression,
                      const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                      const GGS_lstring & in_mTypeName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_templateTestDynamicClassAST * object = nullptr ;
  macroMyNew (object, cPtr_templateTestDynamicClassAST (inCompiler COMMA_THERE)) ;
  object->templateTestDynamicClassAST_init_21__21__21__21_ (in_mReceiverExpression, in_mEndOfReceiverExpression, in_mTypeComparisonKind, in_mTypeName, inCompiler) ;
  const GGS_templateTestDynamicClassAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateTestDynamicClassAST::
templateTestDynamicClassAST_init_21__21__21__21_ (const GGS_templateExpressionAST & in_mReceiverExpression,
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

GGS_templateTestDynamicClassAST::GGS_templateTestDynamicClassAST (const cPtr_templateTestDynamicClassAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateTestDynamicClassAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateTestDynamicClassAST GGS_templateTestDynamicClassAST::class_func_new (const GGS_templateExpressionAST & in_mReceiverExpression,
                                                                                 const GGS_location & in_mEndOfReceiverExpression,
                                                                                 const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                 const GGS_lstring & in_mTypeName,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_templateTestDynamicClassAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateTestDynamicClassAST (in_mReceiverExpression, in_mEndOfReceiverExpression, in_mTypeComparisonKind, in_mTypeName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateTestDynamicClassAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateTestDynamicClassAST::readProperty_mEndOfReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicTypeComparisonKind GGS_templateTestDynamicClassAST::readProperty_mTypeComparisonKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_dynamicTypeComparisonKind () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mTypeComparisonKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateTestDynamicClassAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateTestDynamicClassAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateTestDynamicClassAST::cPtr_templateTestDynamicClassAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeComparisonKind (),
mProperty_mTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateTestDynamicClassAST::cPtr_templateTestDynamicClassAST (const GGS_templateExpressionAST & in_mReceiverExpression,
                                                                    const GGS_location & in_mEndOfReceiverExpression,
                                                                    const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                    const GGS_lstring & in_mTypeName,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_templateTestDynamicClassAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTestDynamicClassAST ;
}

void cPtr_templateTestDynamicClassAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@templateTestDynamicClassAST:") ;
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

acPtr_class * cPtr_templateTestDynamicClassAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateTestDynamicClassAST (mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mTypeComparisonKind, mProperty_mTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateTestDynamicClassAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mEndOfReceiverExpression.printNonNullClassInstanceProperties ("mEndOfReceiverExpression") ;
    mProperty_mTypeComparisonKind.printNonNullClassInstanceProperties ("mTypeComparisonKind") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @templateTestDynamicClassAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateTestDynamicClassAST ("templateTestDynamicClassAST",
                                                                                   & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateTestDynamicClassAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTestDynamicClassAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateTestDynamicClassAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateTestDynamicClassAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateTestDynamicClassAST GGS_templateTestDynamicClassAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_templateTestDynamicClassAST result ;
  const GGS_templateTestDynamicClassAST * p = (const GGS_templateTestDynamicClassAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateTestDynamicClassAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateTestDynamicClassAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateFunctionCallAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateFunctionCallAST::objectCompare (const GGS_templateFunctionCallAST & inOperand) const {
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

GGS_templateFunctionCallAST::GGS_templateFunctionCallAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateFunctionCallAST GGS_templateFunctionCallAST::
init_21__21_ (const GGS_lstring & in_mFunctionName,
              const GGS_templateExpressionListAST & in_mExpressionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_templateFunctionCallAST * object = nullptr ;
  macroMyNew (object, cPtr_templateFunctionCallAST (inCompiler COMMA_THERE)) ;
  object->templateFunctionCallAST_init_21__21_ (in_mFunctionName, in_mExpressionList, inCompiler) ;
  const GGS_templateFunctionCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateFunctionCallAST::
templateFunctionCallAST_init_21__21_ (const GGS_lstring & in_mFunctionName,
                                      const GGS_templateExpressionListAST & in_mExpressionList,
                                      Compiler * /* inCompiler */) {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFunctionCallAST::GGS_templateFunctionCallAST (const cPtr_templateFunctionCallAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFunctionCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateFunctionCallAST GGS_templateFunctionCallAST::class_func_new (const GGS_lstring & in_mFunctionName,
                                                                         const GGS_templateExpressionListAST & in_mExpressionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_templateFunctionCallAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateFunctionCallAST (in_mFunctionName, in_mExpressionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateFunctionCallAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateFunctionCallAST * p = (cPtr_templateFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFunctionCallAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateFunctionCallAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionListAST () ;
  }else{
    cPtr_templateFunctionCallAST * p = (cPtr_templateFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFunctionCallAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateFunctionCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateFunctionCallAST::cPtr_templateFunctionCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateFunctionCallAST::cPtr_templateFunctionCallAST (const GGS_lstring & in_mFunctionName,
                                                            const GGS_templateExpressionListAST & in_mExpressionList,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressionList () {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateFunctionCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFunctionCallAST ;
}

void cPtr_templateFunctionCallAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@templateFunctionCallAST:") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateFunctionCallAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateFunctionCallAST (mProperty_mFunctionName, mProperty_mExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateFunctionCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @templateFunctionCallAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateFunctionCallAST ("templateFunctionCallAST",
                                                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateFunctionCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFunctionCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateFunctionCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateFunctionCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFunctionCallAST GGS_templateFunctionCallAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_templateFunctionCallAST result ;
  const GGS_templateFunctionCallAST * p = (const GGS_templateFunctionCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateFunctionCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFunctionCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateVarInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateVarInExpressionAST::objectCompare (const GGS_templateVarInExpressionAST & inOperand) const {
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

GGS_templateVarInExpressionAST::GGS_templateVarInExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateVarInExpressionAST GGS_templateVarInExpressionAST::
init_21_ (const GGS_lstring & in_mVarName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateVarInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateVarInExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateVarInExpressionAST_init_21_ (in_mVarName, inCompiler) ;
  const GGS_templateVarInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateVarInExpressionAST::
templateVarInExpressionAST_init_21_ (const GGS_lstring & in_mVarName,
                                     Compiler * /* inCompiler */) {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVarInExpressionAST::GGS_templateVarInExpressionAST (const cPtr_templateVarInExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateVarInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateVarInExpressionAST GGS_templateVarInExpressionAST::class_func_new (const GGS_lstring & in_mVarName,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_templateVarInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateVarInExpressionAST (in_mVarName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateVarInExpressionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateVarInExpressionAST * p = (cPtr_templateVarInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateVarInExpressionAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateVarInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateVarInExpressionAST::cPtr_templateVarInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mVarName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateVarInExpressionAST::cPtr_templateVarInExpressionAST (const GGS_lstring & in_mVarName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mVarName () {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateVarInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVarInExpressionAST ;
}

void cPtr_templateVarInExpressionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@templateVarInExpressionAST:") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateVarInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateVarInExpressionAST (mProperty_mVarName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateVarInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @templateVarInExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateVarInExpressionAST ("templateVarInExpressionAST",
                                                                                  & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateVarInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVarInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateVarInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateVarInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVarInExpressionAST GGS_templateVarInExpressionAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateVarInExpressionAST result ;
  const GGS_templateVarInExpressionAST * p = (const GGS_templateVarInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateVarInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateVarInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionStringAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionStringAST::objectCompare (const GGS_templateInstructionStringAST & inOperand) const {
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

GGS_templateInstructionStringAST::GGS_templateInstructionStringAST (void) :
GGS_templateInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionStringAST GGS_templateInstructionStringAST::
init_21_ (const GGS_string & in_mTemplateString,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionStringAST * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionStringAST (inCompiler COMMA_THERE)) ;
  object->templateInstructionStringAST_init_21_ (in_mTemplateString, inCompiler) ;
  const GGS_templateInstructionStringAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringAST::
templateInstructionStringAST_init_21_ (const GGS_string & in_mTemplateString,
                                       Compiler * /* inCompiler */) {
  mProperty_mTemplateString = in_mTemplateString ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionStringAST::GGS_templateInstructionStringAST (const cPtr_templateInstructionStringAST * inSourcePtr) :
GGS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionStringAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionStringAST GGS_templateInstructionStringAST::class_func_new (const GGS_string & in_mTemplateString,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_templateInstructionStringAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionStringAST (in_mTemplateString,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_templateInstructionStringAST::readProperty_mTemplateString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_templateInstructionStringAST * p = (cPtr_templateInstructionStringAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionStringAST) ;
    return p->mProperty_mTemplateString ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionStringAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionStringAST::cPtr_templateInstructionStringAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mTemplateString () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionStringAST::cPtr_templateInstructionStringAST (const GGS_string & in_mTemplateString,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mTemplateString () {
  mProperty_mTemplateString = in_mTemplateString ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionStringAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringAST ;
}

void cPtr_templateInstructionStringAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionStringAST:") ;
  mProperty_mTemplateString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionStringAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionStringAST (mProperty_mTemplateString, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionStringAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTemplateString.printNonNullClassInstanceProperties ("mTemplateString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @templateInstructionStringAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringAST ("templateInstructionStringAST",
                                                                                    & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionStringAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionStringAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionStringAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionStringAST GGS_templateInstructionStringAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_templateInstructionStringAST result ;
  const GGS_templateInstructionStringAST * p = (const GGS_templateInstructionStringAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionStringAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionStringAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_expression_5F_tpl_i0_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                        Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_term_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_0 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_1754 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 39)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__7C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 40)) ;
      GGS_templateExpressionAST var_leftOperand_1827 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightOperand_1886 ;
      nt_relation_5F_term_5F_tpl_ (var_rightOperand_1886, inCompiler) ;
      outArgument_outExpression = GGS_templateOrOperationAST::init_21__21__21_ (var_operatorLocation_1754, var_leftOperand_1827, var_rightOperand_1886, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_2054 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 46)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 47)) ;
      GGS_templateExpressionAST var_leftOperand_2127 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightOperand_2186 ;
      nt_relation_5F_term_5F_tpl_ (var_rightOperand_2186, inCompiler) ;
      outArgument_outExpression = GGS_templateXorOperationAST::init_21__21__21_ (var_operatorLocation_2054, var_leftOperand_2127, var_rightOperand_2186, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_expression_5F_tpl_i0_parse (Lexique_galgasTemplateScanner * inCompiler) {
  nt_relation_5F_term_5F_tpl_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__7C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 40)) ;
      nt_relation_5F_term_5F_tpl_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 47)) ;
      nt_relation_5F_term_5F_tpl_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_expression_5F_tpl_i0_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_relation_5F_term_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__7C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 40)) ;
      nt_relation_5F_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 47)) ;
      nt_relation_5F_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_relation_5F_term_5F_tpl_i1_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                              Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_1 (inCompiler) == 2) {
      GGS_location var_operatorLocation_2713 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 66)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__26_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 67)) ;
      GGS_templateExpressionAST var_leftOperand_2786 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightOperand_2844 ;
      nt_relation_5F_factor_5F_tpl_ (var_rightOperand_2844, inCompiler) ;
      outArgument_outExpression = GGS_templateAndOperationAST::init_21__21__21_ (var_operatorLocation_2713, var_leftOperand_2786, var_rightOperand_2844, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_relation_5F_term_5F_tpl_i1_parse (Lexique_galgasTemplateScanner * inCompiler) {
  nt_relation_5F_factor_5F_tpl_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__26_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 67)) ;
      nt_relation_5F_factor_5F_tpl_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_relation_5F_term_5F_tpl_i1_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_relation_5F_factor_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__26_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 67)) ;
      nt_relation_5F_factor_5F_tpl_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_relation_5F_factor_5F_tpl_i2_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                                Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  switch (select_templateSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_location var_operatorLocation_3378 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 86)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 87)) ;
    GGS_templateExpressionAST var_leftExpression_3452 = outArgument_outExpression ;
    GGS_templateExpressionAST var_rightExpression_3514 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_3514, inCompiler) ;
    outArgument_outExpression = GGS_templateEqualTestAST::init_21__21__21_ (var_operatorLocation_3378, var_leftExpression_3452, var_rightExpression_3514, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_location var_operatorLocation_3693 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 93)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 94)) ;
    GGS_templateExpressionAST var_leftExpression_3767 = outArgument_outExpression ;
    GGS_templateExpressionAST var_rightExpression_3829 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_3829, inCompiler) ;
    outArgument_outExpression = GGS_templateNonEqualTestAST::init_21__21__21_ (var_operatorLocation_3693, var_leftExpression_3767, var_rightExpression_3829, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_location var_operatorLocation_4011 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 100)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 101)) ;
    GGS_templateExpressionAST var_leftExpression_4085 = outArgument_outExpression ;
    GGS_templateExpressionAST var_rightExpression_4147 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_4147, inCompiler) ;
    outArgument_outExpression = GGS_templateInfOrEqualTestAST::init_21__21__21_ (var_operatorLocation_4011, var_leftExpression_4085, var_rightExpression_4147, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    GGS_location var_operatorLocation_4331 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 107)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 108)) ;
    GGS_templateExpressionAST var_leftExpression_4405 = outArgument_outExpression ;
    GGS_templateExpressionAST var_rightExpression_4467 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_4467, inCompiler) ;
    outArgument_outExpression = GGS_templateSupOrEqualTestAST::init_21__21__21_ (var_operatorLocation_4331, var_leftExpression_4405, var_rightExpression_4467, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    GGS_location var_operatorLocation_4651 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 114)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 115)) ;
    GGS_templateExpressionAST var_leftExpression_4724 = outArgument_outExpression ;
    GGS_templateExpressionAST var_rightExpression_4786 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_4786, inCompiler) ;
    outArgument_outExpression = GGS_templateStrictSupTestAST::init_21__21__21_ (var_operatorLocation_4651, var_leftExpression_4724, var_rightExpression_4786, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    GGS_location var_operatorLocation_4969 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 121)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 122)) ;
    GGS_templateExpressionAST var_leftExpression_5042 = outArgument_outExpression ;
    GGS_templateExpressionAST var_rightExpression_5104 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_5104, inCompiler) ;
    outArgument_outExpression = GGS_templateStrictInfTestAST::init_21__21__21_ (var_operatorLocation_4969, var_leftExpression_5042, var_rightExpression_5104, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_relation_5F_factor_5F_tpl_i2_parse (Lexique_galgasTemplateScanner * inCompiler) {
  nt_simple_5F_expression_5F_tpl_parse (inCompiler) ;
  switch (select_templateSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 87)) ;
    nt_simple_5F_expression_5F_tpl_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 94)) ;
    nt_simple_5F_expression_5F_tpl_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 101)) ;
    nt_simple_5F_expression_5F_tpl_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 108)) ;
    nt_simple_5F_expression_5F_tpl_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 115)) ;
    nt_simple_5F_expression_5F_tpl_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 122)) ;
    nt_simple_5F_expression_5F_tpl_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_relation_5F_factor_5F_tpl_i2_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  switch (select_templateSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 87)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 94)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 101)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 108)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 115)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 122)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_simple_5F_expression_5F_tpl_i3_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                                  Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_3 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_5647 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 140)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 141)) ;
      GGS_templateExpressionAST var_leftExpression_5721 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightExpression_5783 ;
      nt_term_5F_tpl_ (var_rightExpression_5783, inCompiler) ;
      outArgument_outExpression = GGS_templateLeftShiftOperationAST::init_21__21__21_ (var_operatorLocation_5647, var_leftExpression_5721, var_rightExpression_5783, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_5961 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 147)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 148)) ;
      GGS_templateExpressionAST var_leftExpression_6035 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightExpression_6097 ;
      nt_term_5F_tpl_ (var_rightExpression_6097, inCompiler) ;
      outArgument_outExpression = GGS_templateRightShiftOperationAST::init_21__21__21_ (var_operatorLocation_5961, var_leftExpression_6035, var_rightExpression_6097, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_6276 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2B_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 155)) ;
      GGS_templateExpressionAST var_leftExpression_6349 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightExpression_6411 ;
      nt_term_5F_tpl_ (var_rightExpression_6411, inCompiler) ;
      outArgument_outExpression = GGS_templateAddOperationAST::init_21__21__21_ (var_operatorLocation_6276, var_leftExpression_6349, var_rightExpression_6411, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_6583 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 161)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 162)) ;
      GGS_templateExpressionAST var_leftExpression_6656 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightExpression_6718 ;
      nt_term_5F_tpl_ (var_rightExpression_6718, inCompiler) ;
      outArgument_outExpression = GGS_templateSubOperationAST::init_21__21__21_ (var_operatorLocation_6583, var_leftExpression_6656, var_rightExpression_6718, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_simple_5F_expression_5F_tpl_i3_parse (Lexique_galgasTemplateScanner * inCompiler) {
  nt_term_5F_tpl_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 141)) ;
      nt_term_5F_tpl_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 148)) ;
      nt_term_5F_tpl_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2B_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 155)) ;
      nt_term_5F_tpl_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 162)) ;
      nt_term_5F_tpl_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_simple_5F_expression_5F_tpl_i3_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_term_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 141)) ;
      nt_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 148)) ;
      nt_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2B_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 155)) ;
      nt_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 162)) ;
      nt_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_term_5F_tpl_i4_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                  Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_4 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_7211 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 181)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 182)) ;
      GGS_templateExpressionAST var_leftExpression_7284 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightExpression_7346 ;
      nt_factor_5F_tpl_ (var_rightExpression_7346, inCompiler) ;
      outArgument_outExpression = GGS_templateMultiplyOperationAST::init_21__21__21_ (var_operatorLocation_7211, var_leftExpression_7284, var_rightExpression_7346, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_7525 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 188)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2F_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 189)) ;
      GGS_templateExpressionAST var_leftExpression_7598 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightExpression_7660 ;
      nt_factor_5F_tpl_ (var_rightExpression_7660, inCompiler) ;
      outArgument_outExpression = GGS_templateDivideOperationAST::init_21__21__21_ (var_operatorLocation_7525, var_leftExpression_7598, var_rightExpression_7660, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_7837 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 195)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_mod COMMA_SOURCE_FILE ("templateSyntax.galgas", 196)) ;
      GGS_templateExpressionAST var_leftExpression_7912 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightExpression_7974 ;
      nt_factor_5F_tpl_ (var_rightExpression_7974, inCompiler) ;
      outArgument_outExpression = GGS_templateModuloOperationAST::init_21__21__21_ (var_operatorLocation_7837, var_leftExpression_7912, var_rightExpression_7974, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_term_5F_tpl_i4_parse (Lexique_galgasTemplateScanner * inCompiler) {
  nt_factor_5F_tpl_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 182)) ;
      nt_factor_5F_tpl_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2F_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 189)) ;
      nt_factor_5F_tpl_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_mod COMMA_SOURCE_FILE ("templateSyntax.galgas", 196)) ;
      nt_factor_5F_tpl_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_term_5F_tpl_i4_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_factor_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 182)) ;
      nt_factor_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2F_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 189)) ;
      nt_factor_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_mod COMMA_SOURCE_FILE ("templateSyntax.galgas", 196)) ;
      nt_factor_5F_tpl_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i5_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                    Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 214)) ;
      GGS_lstring var_structFieldName_8526 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 215)) ;
      outArgument_outExpression = GGS_structFieldAccessTemplateExpressionAST::init_21__21__21_ (var_structFieldName_8526.readProperty_location (), outArgument_outExpression, var_structFieldName_8526, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i5_parse (Lexique_galgasTemplateScanner * inCompiler) {
  nt_primary_5F_tpl_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 214)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 215)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i5_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_primary_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 214)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 215)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i6_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                    Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_9005 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 231)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 232)) ;
  GGS_templateExpressionAST var_expression_9074 ;
  nt_factor_5F_tpl_ (var_expression_9074, inCompiler) ;
  outArgument_outExpression = GGS_templateUnaryMinusOperationAST::init_21__21_ (var_operatorLocation_9005, var_expression_9074, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i6_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 232)) ;
  nt_factor_5F_tpl_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i6_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 232)) ;
  nt_factor_5F_tpl_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i7_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                    Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_9509 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 245)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_not COMMA_SOURCE_FILE ("templateSyntax.galgas", 246)) ;
  GGS_templateExpressionAST var_ifCondition_9580 ;
  nt_factor_5F_tpl_ (var_ifCondition_9580, inCompiler) ;
  outArgument_outExpression = GGS_templateNotOperatorAST::init_21__21_ (var_operatorLocation_9509, var_ifCondition_9580, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i7_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_not COMMA_SOURCE_FILE ("templateSyntax.galgas", 246)) ;
  nt_factor_5F_tpl_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i7_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_not COMMA_SOURCE_FILE ("templateSyntax.galgas", 246)) ;
  nt_factor_5F_tpl_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i8_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                    Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_10010 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 260)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__7E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 261)) ;
  GGS_templateExpressionAST var_ifCondition_10079 ;
  nt_factor_5F_tpl_ (var_ifCondition_10079, inCompiler) ;
  outArgument_outExpression = GGS_templateLogicalNegateAST::init_21__21_ (var_operatorLocation_10010, var_ifCondition_10079, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i8_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__7E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 261)) ;
  nt_factor_5F_tpl_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i8_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__7E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 261)) ;
  nt_factor_5F_tpl_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i9_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                     Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_identifier_10520 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 274)) ;
  outArgument_outExpression = GGS_templateVarInExpressionAST::init_21_ (var_identifier_10520, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i9_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 274)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i9_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 274)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i10_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 285)) ;
  nt_expression_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 287)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i10_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 285)) ;
  nt_expression_5F_tpl_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 287)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i10_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 285)) ;
  nt_expression_5F_tpl_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 287)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i11_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_true COMMA_SOURCE_FILE ("templateSyntax.galgas", 297)) ;
  outArgument_outExpression = GGS_templateTrueBoolAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 298)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i11_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_true COMMA_SOURCE_FILE ("templateSyntax.galgas", 297)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i11_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_true COMMA_SOURCE_FILE ("templateSyntax.galgas", 297)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i12_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_false COMMA_SOURCE_FILE ("templateSyntax.galgas", 308)) ;
  outArgument_outExpression = GGS_templateFalseBoolAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 309)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i12_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_false COMMA_SOURCE_FILE ("templateSyntax.galgas", 308)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i12_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_false COMMA_SOURCE_FILE ("templateSyntax.galgas", 308)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i13_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lbigint var_literalInt_11997 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("templateSyntax.galgas", 319)) ;
  outArgument_outExpression = GGS_templateLiteralUIntExpressionAST::init_21_ (var_literalInt_11997, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i13_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("templateSyntax.galgas", 319)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i13_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("templateSyntax.galgas", 319)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i14_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_ldouble var_literalDouble_12393 ;
  var_literalDouble_12393 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("templateSyntax.galgas", 331)) ;
  outArgument_outExpression = GGS_templateLiteralDoubleExpressionAST::init_21_ (var_literalDouble_12393, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i14_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("templateSyntax.galgas", 331)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i14_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("templateSyntax.galgas", 331)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i15_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lchar var_literalChar_12850 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 342)) ;
  outArgument_outExpression = GGS_templateLiteralCharExpressionAST::init_21_ (var_literalChar_12850, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i15_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 342)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i15_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 342)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i16_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_stringlist var_literalStringList_13262 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_literalString_13323 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 355)) ;
    var_literalStringList_13262.addAssign_operation (var_literalString_13323.readProperty_string ()  COMMA_SOURCE_FILE ("templateSyntax.galgas", 356)) ;
    if (select_templateSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outExpression = GGS_templateLiteralStringExpressionAST::init_21__21_ (var_literalStringList_13262, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 359)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i16_parse (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 355)) ;
    if (select_templateSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i16_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 355)) ;
    if (select_templateSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i17_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5B_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 375)) ;
  switch (select_templateSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_template COMMA_SOURCE_FILE ("templateSyntax.galgas", 378)) ;
    GGS_templateExpressionAST var_receiverExpression_14271 ;
    nt_expression_5F_tpl_ (var_receiverExpression_14271, inCompiler) ;
    GGS_lstring var_templateName_14362 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 381)) ;
    GGS_templateExpressionListAST var_expressionList_14410 ;
    nt_output_5F_expression_5F_list_5F_tpl_ (var_expressionList_14410, inCompiler) ;
    outArgument_outExpression = GGS_templateExtensionTemplateCallAST::init_21__21__21_ (var_receiverExpression_14271, var_templateName_14362, var_expressionList_14410, inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 389)) ;
  } break ;
  case 2: {
    GGS_lstring var_typeName_14674 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas", 391)) ;
    GGS_lstring var_constructorName_14714 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 392)) ;
    GGS_templateExpressionListAST var_expressionList_14795 ;
    nt_output_5F_expression_5F_list_5F_tpl_ (var_expressionList_14795, inCompiler) ;
    outArgument_outExpression = GGS_templateClassFunctionAST::init_21__21__21_ (var_typeName_14674, var_constructorName_14714, var_expressionList_14795, inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 399)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_filewrapper COMMA_SOURCE_FILE ("templateSyntax.galgas", 401)) ;
    GGS_lstring var_filewrapperName_15034 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 402)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 403)) ;
    GGS_lstring var_templateName_15089 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 404)) ;
    GGS_templateExpressionListAST var_expressionList_15137 ;
    nt_output_5F_expression_5F_list_5F_tpl_ (var_expressionList_15137, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 407)) ;
    outArgument_outExpression = GGS_templateFileWrapperTemplateCallAST::init_21__21__21_ (var_filewrapperName_15034, var_templateName_15089, var_expressionList_15137, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_location var_startLocation_15374 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 410)) ;
    GGS_templateExpressionAST var_receiverExpression_15436 ;
    nt_expression_5F_tpl_ (var_receiverExpression_15436, inCompiler) ;
    GGS_lstring var_getterName_15527 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 413)) ;
    GGS_templateExpressionListAST var_expressionList_15573 ;
    nt_output_5F_expression_5F_list_5F_tpl_ (var_expressionList_15573, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 416)) ;
    GGS_location var_endLocation_15653 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 417)) ;
    outArgument_outExpression = GGS_templateGetterCallInExpressionAST::init_21__21__21__21_ (var_receiverExpression_15436, var_getterName_15527, var_expressionList_15573, var_startLocation_15374.getter_union (var_endLocation_15653, inCompiler COMMA_SOURCE_FILE ("templateSyntax.galgas", 422)), inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_option COMMA_SOURCE_FILE ("templateSyntax.galgas", 425)) ;
    switch (select_templateSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 427)) ;
      GGS_lstring var_optionName_15925 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 428)) ;
      GGS_lstring var_getterName_15969 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 429)) ;
      outArgument_outExpression = GGS_templateOptionAccessAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("galgas_builtin_options"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 430)), inCompiler COMMA_HERE), var_optionName_15925, var_getterName_15969, inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      GGS_lstring var_optionComponentName_16147 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 432)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 433)) ;
      GGS_lstring var_optionName_16210 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 434)) ;
      GGS_lstring var_getterName_16254 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 435)) ;
      outArgument_outExpression = GGS_templateOptionAccessAST::init_21__21__21_ (var_optionComponentName_16147, var_optionName_16210, var_getterName_16254, inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 438)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i17_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5B_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 375)) ;
  switch (select_templateSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_template COMMA_SOURCE_FILE ("templateSyntax.galgas", 378)) ;
    nt_expression_5F_tpl_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 381)) ;
    nt_output_5F_expression_5F_list_5F_tpl_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 389)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas", 391)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 392)) ;
    nt_output_5F_expression_5F_list_5F_tpl_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 399)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_filewrapper COMMA_SOURCE_FILE ("templateSyntax.galgas", 401)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 402)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 403)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 404)) ;
    nt_output_5F_expression_5F_list_5F_tpl_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 407)) ;
  } break ;
  case 4: {
    nt_expression_5F_tpl_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 413)) ;
    nt_output_5F_expression_5F_list_5F_tpl_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 416)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_option COMMA_SOURCE_FILE ("templateSyntax.galgas", 425)) ;
    switch (select_templateSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 427)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 428)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 429)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 432)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 433)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 434)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 435)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 438)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i17_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5B_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 375)) ;
  switch (select_templateSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_template COMMA_SOURCE_FILE ("templateSyntax.galgas", 378)) ;
    nt_expression_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 381)) ;
    nt_output_5F_expression_5F_list_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 389)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas", 391)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 392)) ;
    nt_output_5F_expression_5F_list_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 399)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_filewrapper COMMA_SOURCE_FILE ("templateSyntax.galgas", 401)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 402)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 403)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 404)) ;
    nt_output_5F_expression_5F_list_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 407)) ;
  } break ;
  case 4: {
    nt_expression_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 413)) ;
    nt_output_5F_expression_5F_list_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 416)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_option COMMA_SOURCE_FILE ("templateSyntax.galgas", 425)) ;
    switch (select_templateSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 427)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 428)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 429)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 432)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 433)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 434)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 435)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 438)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i18_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_functionName_16764 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 450)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 451)) ;
  GGS_templateExpressionListAST var_expressionList_16846 ;
  nt_output_5F_expression_5F_list_5F_tpl_ (var_expressionList_16846, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 453)) ;
  outArgument_outExpression = GGS_templateFunctionCallAST::init_21__21_ (var_functionName_16764, var_expressionList_16846, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i18_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 450)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 451)) ;
  nt_output_5F_expression_5F_list_5F_tpl_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 453)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i18_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas", 450)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 451)) ;
  nt_output_5F_expression_5F_list_5F_tpl_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 453)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i19_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  GGS_location var_endOfReceiverExpression_17151 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 461)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_is COMMA_SOURCE_FILE ("templateSyntax.galgas", 462)) ;
  GGS_dynamicTypeComparisonKind var_kind_17232 ;
  switch (select_templateSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 465)) ;
    var_kind_17232 = GGS_dynamicTypeComparisonKind::class_func_equal (SOURCE_FILE ("templateSyntax.galgas", 466)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 468)) ;
    var_kind_17232 = GGS_dynamicTypeComparisonKind::class_func_inherited (SOURCE_FILE ("templateSyntax.galgas", 469)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 471)) ;
    var_kind_17232 = GGS_dynamicTypeComparisonKind::class_func_strictlyInherited (SOURCE_FILE ("templateSyntax.galgas", 472)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_typeName_17382 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas", 474)) ;
  outArgument_outExpression = GGS_templateTestDynamicClassAST::init_21__21__21__21_ (outArgument_outExpression, var_endOfReceiverExpression_17151, var_kind_17232, var_typeName_17382, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i19_parse (Lexique_galgasTemplateScanner * inCompiler) {
  nt_primary_5F_tpl_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_is COMMA_SOURCE_FILE ("templateSyntax.galgas", 462)) ;
  switch (select_templateSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 465)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 468)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 471)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas", 474)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i19_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_primary_5F_tpl_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_is COMMA_SOURCE_FILE ("templateSyntax.galgas", 462)) ;
  switch (select_templateSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 465)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 468)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 471)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas", 474)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_ (GGS_templateExpressionListAST & outArgument_outExpressionList,
                                                                                           Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS_templateExpressionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_10 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_17918 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 493)) ;
      GGS_templateExpressionAST var_expression_17976 ;
      nt_expression_5F_tpl_ (var_expression_17976, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (var_selector_17918, var_expression_17976, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 495))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 495)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 497)) ;
      GGS_lstring var_selector_18074 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("templateSyntax.galgas", 498)) ;
      GGS_templateExpressionAST var_expression_18144 ;
      nt_expression_5F_tpl_ (var_expression_18144, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (var_selector_18074, var_expression_18144, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 500))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 500)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_parse (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 493)) ;
      nt_expression_5F_tpl_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 497)) ;
      nt_expression_5F_tpl_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 493)) ;
      nt_expression_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 497)) ;
      nt_expression_5F_tpl_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i21_ (GGS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 511)) ;
  GGS_templateExpressionAST var_expression_18599 ;
  nt_expression_5F_tpl_ (var_expression_18599, inCompiler) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GGS_templateInstructionExpressionAST::init_21__21_ (var_expression_18599, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 513)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas", 513)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i21_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 511)) ;
  nt_expression_5F_tpl_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i21_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 511)) ;
  nt_expression_5F_tpl_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i22_ (GGS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3F__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 519)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GGS_templateInstructionGetColumnLocationAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas", 520)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i22_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3F__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 519)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i22_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3F__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 519)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i23_ (GGS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 526)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GGS_templateInstructionGotoColumnLocationAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas", 527)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i23_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 526)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i23_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 526)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i24_ (GGS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_block COMMA_SOURCE_FILE ("templateSyntax.galgas", 533)) ;
  GGS_templateExpressionAST var_expression_19503 ;
  nt_expression_5F_tpl_ (var_expression_19503, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 535)) ;
  GGS_templateInstructionListAST var_blockInstructionList_19548 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    {
    routine_enterTemplateString_26_ (var_blockInstructionList_19548, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 539)) ;
    }
    if (select_templateSyntax_11 (inCompiler) == 2) {
      nt_template_5F_instruction_ (var_blockInstructionList_19548, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 544)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GGS_templateBlockInstructionAST::init_21__21__21_ (var_expression_19503, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 547)), var_blockInstructionList_19548, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas", 545)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i24_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_block COMMA_SOURCE_FILE ("templateSyntax.galgas", 533)) ;
  nt_expression_5F_tpl_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 535)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_11 (inCompiler) == 2) {
      nt_template_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 544)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i24_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_block COMMA_SOURCE_FILE ("templateSyntax.galgas", 533)) ;
  nt_expression_5F_tpl_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas", 535)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_11 (inCompiler) == 2) {
      nt_template_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 544)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i25_ (GGS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_if COMMA_SOURCE_FILE ("templateSyntax.galgas", 554)) ;
  GGS_templateInstructionIfBranchListAST var_templateInstructionIfBranchList_20064 = GGS_templateInstructionIfBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_templateExpressionAST var_expression_20172 ;
    nt_expression_5F_tpl_ (var_expression_20172, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_then COMMA_SOURCE_FILE ("templateSyntax.galgas", 558)) ;
    GGS_templateInstructionListAST var_instructionList_20230 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      {
      routine_enterTemplateString_26_ (var_instructionList_20230, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 561)) ;
      }
      if (select_templateSyntax_13 (inCompiler) == 2) {
        nt_template_5F_instruction_ (var_instructionList_20230, inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    var_templateInstructionIfBranchList_20064.addAssign_operation (var_expression_20172, var_instructionList_20230  COMMA_SOURCE_FILE ("templateSyntax.galgas", 565)) ;
    if (select_templateSyntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_elsif COMMA_SOURCE_FILE ("templateSyntax.galgas", 567)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_templateInstructionListAST var_elseInstructionList_20511 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  switch (select_templateSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_else COMMA_SOURCE_FILE ("templateSyntax.galgas", 573)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      {
      routine_enterTemplateString_26_ (var_elseInstructionList_20511, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 575)) ;
      }
      if (select_templateSyntax_15 (inCompiler) == 2) {
        nt_template_5F_instruction_ (var_elseInstructionList_20511, inCompiler) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 581)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GGS_templateInstructionIfAST::init_21__21_ (var_templateInstructionIfBranchList_20064, var_elseInstructionList_20511, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas", 582)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i25_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_if COMMA_SOURCE_FILE ("templateSyntax.galgas", 554)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_expression_5F_tpl_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_then COMMA_SOURCE_FILE ("templateSyntax.galgas", 558)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_templateSyntax_13 (inCompiler) == 2) {
        nt_template_5F_instruction_parse (inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_templateSyntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_elsif COMMA_SOURCE_FILE ("templateSyntax.galgas", 567)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_templateSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_else COMMA_SOURCE_FILE ("templateSyntax.galgas", 573)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      if (select_templateSyntax_15 (inCompiler) == 2) {
        nt_template_5F_instruction_parse (inCompiler) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 581)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i25_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_if COMMA_SOURCE_FILE ("templateSyntax.galgas", 554)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_expression_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_then COMMA_SOURCE_FILE ("templateSyntax.galgas", 558)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_templateSyntax_13 (inCompiler) == 2) {
        nt_template_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_templateSyntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_elsif COMMA_SOURCE_FILE ("templateSyntax.galgas", 567)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_templateSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_else COMMA_SOURCE_FILE ("templateSyntax.galgas", 573)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      if (select_templateSyntax_15 (inCompiler) == 2) {
        nt_template_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas", 581)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_ (GGS_templateInstructionListAST & outArgument_outResultingInstructionList,
                                                                                             Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outResultingInstructionList.drop () ; // Release 'out' argument
  outArgument_outResultingInstructionList = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    {
    routine_enterTemplateString_26_ (outArgument_outResultingInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 592)) ;
    }
    if (select_templateSyntax_16 (inCompiler) == 2) {
      nt_template_5F_instruction_ (outArgument_outResultingInstructionList, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_parse (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_16 (inCompiler) == 2) {
      nt_template_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_16 (inCompiler) == 2) {
      nt_template_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i27_ (GGS_lstringlist & ioArgument_ioElementList,
                                                                                     Lexique_galgasTemplateScanner * inCompiler) {
  GGS_lbigint var_count_2535 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("template-for-instruction.galgas", 50)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 51)) ;
  GGS_uint var_n_2557 = var_count_2535.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 52)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_n_2557.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_count_2535.readProperty_location (), GGS_string ("this value should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 54)) ;
    }
  }
  if (var_n_2557.isValid ()) {
    uint32_t variant_2658 = var_n_2557.uintValue () ;
    bool loop_2658 = true ;
    while (loop_2658) {
      loop_2658 = GGS_bool (ComparisonKind::greaterThan, var_n_2557.objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_2658) {
        loop_2658 = GGS_bool (ComparisonKind::greaterThan, var_n_2557.objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_2658 && (0 == variant_2658)) {
        loop_2658 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("template-for-instruction.galgas", 56)) ;
      }
      if (loop_2658) {
        variant_2658 -- ;
        ioArgument_ioElementList.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("template-for-instruction.galgas", 57))  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 57)) ;
        var_n_2557.minusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 58)) ;
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i27_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("template-for-instruction.galgas", 50)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 51)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i27_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("template-for-instruction.galgas", 50)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i28_ (GGS_lstringlist & ioArgument_ioElementList,
                                                                                     Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 65)) ;
  ioArgument_ioElementList.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("template-for-instruction.galgas", 66))  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i28_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 65)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i28_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i29_ (GGS_lstringlist & ioArgument_ioElementList,
                                                                                     Lexique_galgasTemplateScanner * inCompiler) {
  GGS_lstring var_constantName_3143 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 72)) ;
  ioArgument_ioElementList.addAssign_operation (var_constantName_3143  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 73)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i29_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 72)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i29_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 72)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_ (GGS_templateInstructionForEnumerationAST & outArgument_outEnumeratedObject,
                                                                                                  GGS_templateExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 80)) ;
  GGS_location var_start_3497 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 82)) ;
  GGS_location var_endLocation_3536 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 83)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_in COMMA_SOURCE_FILE ("template-for-instruction.galgas", 84)) ;
  nt_expression_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  GGS_string var_foreachPrefix_3626 ;
  switch (select_templateSyntax_17 (inCompiler)) {
  case 1: {
    var_foreachPrefix_3626 = GGS_string::makeEmptyString () ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 90)) ;
    GGS_lstring var_prefixString_3726 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 91)) ;
    var_foreachPrefix_3626 = var_prefixString_3726.readProperty_string () ;
  } break ;
  default:
    break ;
  }
  outArgument_outEnumeratedObject = GGS_templateInstructionForEnumerationAST::class_func_implicit (var_foreachPrefix_3626, var_start_3497.getter_union (var_endLocation_3536, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 94))  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 94)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_in COMMA_SOURCE_FILE ("template-for-instruction.galgas", 84)) ;
  nt_expression_5F_tpl_parse (inCompiler) ;
  switch (select_templateSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 90)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 91)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_in COMMA_SOURCE_FILE ("template-for-instruction.galgas", 84)) ;
  nt_expression_5F_tpl_indexing (inCompiler) ;
  switch (select_templateSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 90)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 91)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_ (GGS_templateInstructionForEnumerationAST & outArgument_outEnumeratedObject,
                                                                                                  GGS_templateExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstringlist var_enumeration_4195 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 102)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_ (var_enumeration_4195, inCompiler) ;
    if (select_templateSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_location var_endOfProperties_4316 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 107)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 108)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_in COMMA_SOURCE_FILE ("template-for-instruction.galgas", 109)) ;
  nt_expression_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  switch (select_templateSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 113)) ;
    GGS_location var_startLocation_4440 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 114)) ;
    GGS_lstring var_prefixString_4504 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 115)) ;
    TC_Array <FixItDescription> fixItArray1 ;
    appendFixItActions (fixItArray1, kFixItReplace, GGS_string::makeEmptyString ()) ;
    inCompiler->emitSemanticError (var_prefixString_4504.readProperty_location ().getter_union (var_startLocation_4440, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 116)), GGS_string ("useless prefix"), fixItArray1  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 116)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outEnumeratedObject = GGS_templateInstructionForEnumerationAST::class_func_explicit (var_enumeration_4195, var_endOfProperties_4316  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 119)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 102)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_parse (inCompiler) ;
    if (select_templateSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 108)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_in COMMA_SOURCE_FILE ("template-for-instruction.galgas", 109)) ;
  nt_expression_5F_tpl_parse (inCompiler) ;
  switch (select_templateSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 113)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 115)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 102)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
    if (select_templateSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 108)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_in COMMA_SOURCE_FILE ("template-for-instruction.galgas", 109)) ;
  nt_expression_5F_tpl_indexing (inCompiler) ;
  switch (select_templateSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 113)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 115)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i32_ (GGS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_for COMMA_SOURCE_FILE ("template-for-instruction.galgas", 125)) ;
  GGS_bool var_ascending_4944 ;
  switch (select_templateSyntax_20 (inCompiler)) {
  case 1: {
    var_ascending_4944 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 130)) ;
    var_ascending_4944 = GGS_bool (true) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 133)) ;
    var_ascending_4944 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GGS_templateInstructionForEnumerationAST var_enumeratedProperties_5122 ;
  GGS_templateExpressionAST var_expression_5148 ;
  nt_for_5F_instruction_5F_enumerated_5F_object_ (var_enumeratedProperties_5122, var_expression_5148, inCompiler) ;
  GGS_templateInstructionListAST var_beforeInstructionList_5215 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  switch (select_templateSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_before COMMA_SOURCE_FILE ("template-for-instruction.galgas", 141)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      {
      routine_enterTemplateString_26_ (var_beforeInstructionList_5215, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 143)) ;
      }
      if (select_templateSyntax_22 (inCompiler) == 2) {
        nt_template_5F_instruction_ (var_beforeInstructionList_5215, inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_do COMMA_SOURCE_FILE ("template-for-instruction.galgas", 149)) ;
  GGS_lstring var_indexIdentifier_5469 ;
  switch (select_templateSyntax_23 (inCompiler)) {
  case 1: {
    var_indexIdentifier_5469 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 152)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 154)) ;
    var_indexIdentifier_5469 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 155)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 156)) ;
  } break ;
  default:
    break ;
  }
  GGS_templateInstructionListAST var_doInstructionList_5659 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    {
    routine_enterTemplateString_26_ (var_doInstructionList_5659, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 160)) ;
    }
    if (select_templateSyntax_24 (inCompiler) == 2) {
      nt_template_5F_instruction_ (var_doInstructionList_5659, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_templateInstructionListAST var_betweenInstructionList_5865 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  switch (select_templateSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_between COMMA_SOURCE_FILE ("template-for-instruction.galgas", 168)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      {
      routine_enterTemplateString_26_ (var_betweenInstructionList_5865, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 170)) ;
      }
      if (select_templateSyntax_26 (inCompiler) == 2) {
        nt_template_5F_instruction_ (var_betweenInstructionList_5865, inCompiler) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  GGS_templateInstructionListAST var_afterInstructionList_6136 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  switch (select_templateSyntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_after COMMA_SOURCE_FILE ("template-for-instruction.galgas", 179)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      {
      routine_enterTemplateString_26_ (var_afterInstructionList_6136, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 181)) ;
      }
      if (select_templateSyntax_28 (inCompiler) == 2) {
        nt_template_5F_instruction_ (var_beforeInstructionList_5215, inCompiler) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-for-instruction.galgas", 187)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GGS_templateInstructionForeachAST::init_21__21__21__21__21__21__21__21_ (var_ascending_4944, var_expression_5148, var_enumeratedProperties_5122, var_beforeInstructionList_5215, var_doInstructionList_5659, var_indexIdentifier_5469, var_betweenInstructionList_5865, var_afterInstructionList_6136, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 188)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i32_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_for COMMA_SOURCE_FILE ("template-for-instruction.galgas", 125)) ;
  switch (select_templateSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 130)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 133)) ;
  } break ;
  default:
    break ;
  }
  nt_for_5F_instruction_5F_enumerated_5F_object_parse (inCompiler) ;
  switch (select_templateSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_before COMMA_SOURCE_FILE ("template-for-instruction.galgas", 141)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_templateSyntax_22 (inCompiler) == 2) {
        nt_template_5F_instruction_parse (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_do COMMA_SOURCE_FILE ("template-for-instruction.galgas", 149)) ;
  switch (select_templateSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 154)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 155)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 156)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_templateSyntax_24 (inCompiler) == 2) {
      nt_template_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  switch (select_templateSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_between COMMA_SOURCE_FILE ("template-for-instruction.galgas", 168)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      if (select_templateSyntax_26 (inCompiler) == 2) {
        nt_template_5F_instruction_parse (inCompiler) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  switch (select_templateSyntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_after COMMA_SOURCE_FILE ("template-for-instruction.galgas", 179)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      if (select_templateSyntax_28 (inCompiler) == 2) {
        nt_template_5F_instruction_parse (inCompiler) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-for-instruction.galgas", 187)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i32_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_for COMMA_SOURCE_FILE ("template-for-instruction.galgas", 125)) ;
  switch (select_templateSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 130)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 133)) ;
  } break ;
  default:
    break ;
  }
  nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
  switch (select_templateSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_before COMMA_SOURCE_FILE ("template-for-instruction.galgas", 141)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_templateSyntax_22 (inCompiler) == 2) {
        nt_template_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_do COMMA_SOURCE_FILE ("template-for-instruction.galgas", 149)) ;
  switch (select_templateSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 154)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas", 155)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas", 156)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_templateSyntax_24 (inCompiler) == 2) {
      nt_template_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  switch (select_templateSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_between COMMA_SOURCE_FILE ("template-for-instruction.galgas", 168)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      if (select_templateSyntax_26 (inCompiler) == 2) {
        nt_template_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  switch (select_templateSyntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_after COMMA_SOURCE_FILE ("template-for-instruction.galgas", 179)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      if (select_templateSyntax_28 (inCompiler) == 2) {
        nt_template_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-for-instruction.galgas", 187)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i33_ (GGS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_switch COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 46)) ;
  GGS_templateExpressionAST var_switchExpression_2409 ;
  nt_expression_5F_tpl_ (var_switchExpression_2409, inCompiler) ;
  GGS_location var_endOfSwitchExpression_2444 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 49)) ;
  GGS_templateInstructionSwitchBranchListAST var_templateInstructionSwitchBranchList_2552 = GGS_templateInstructionSwitchBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_case COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 54)) ;
      GGS__5B_lstring_5D_ var_constantNameList_2671 ;
      GGS_switchExtractedValuesListAST var_associatedValuesExtraction_2731 ;
      nt_switch_5F_case_ (var_constantNameList_2671, var_associatedValuesExtraction_2731, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 58)) ;
      GGS_templateInstructionListAST var_instructionList_2806 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        {
        routine_enterTemplateString_26_ (var_instructionList_2806, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 61)) ;
        }
        if (select_templateSyntax_30 (inCompiler) == 2) {
          nt_template_5F_instruction_ (var_instructionList_2806, inCompiler) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      var_templateInstructionSwitchBranchList_2552.addAssign_operation (var_constantNameList_2671, var_associatedValuesExtraction_2731, var_instructionList_2806, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 65))  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 65)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 67)) ;
  ioArgument_ioResultingInstructionList.addAssign_operation (GGS_templateInstructionSwitchAST::init_21__21__21_ (var_switchExpression_2409, var_endOfSwitchExpression_2444, var_templateInstructionSwitchBranchList_2552, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i33_parse (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_switch COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 46)) ;
  nt_expression_5F_tpl_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_case COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 54)) ;
      nt_switch_5F_case_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 58)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_templateSyntax_30 (inCompiler) == 2) {
          nt_template_5F_instruction_parse (inCompiler) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 67)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i33_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_switch COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 46)) ;
  nt_expression_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_case COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 54)) ;
      nt_switch_5F_case_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 58)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_templateSyntax_30 (inCompiler) == 2) {
          nt_template_5F_instruction_indexing (inCompiler) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_switch_5F_case_i34_ (GGS__5B_lstring_5D_ & outArgument_outConstantNameList,
                                                                      GGS_switchExtractedValuesListAST & outArgument_outAssociatedValuesExtraction,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_constantName_3583 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 82)) ;
    {
    outArgument_outConstantNameList.setter_append (var_constantName_3583, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 83)) ;
    }
    if (select_templateSyntax_31 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2C_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 85)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GGS_switchExtractedValuesListAST::init (inCompiler COMMA_HERE) ;
  switch (select_templateSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 90)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_templateSyntax_34 (inCompiler)) {
      case 1: {
        GGS_lbigint var_n_3798 = inCompiler->synthetizedAttribute_bigintValue () ;
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 93)) ;
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 94)) ;
        cEnumerator_range enumerator_3841 (GGS_range (GGS_uint (uint32_t (0U)), var_n_3798.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 95)).substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 95))), EnumerationOrder::up) ;
        while (enumerator_3841.hasCurrentObject ()) {
          outArgument_outAssociatedValuesExtraction.addAssign_operation (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 96)), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 96)), GGS_bool (false)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 96)) ;
          enumerator_3841.gotoNextObject () ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 99)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 100)), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 100)), GGS_bool (false)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 100)) ;
      } break ;
      case 3: {
        GGS_lstring var_typeName_4072 ;
        switch (select_templateSyntax_35 (inCompiler)) {
        case 1: {
          var_typeName_4072 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 104)) ;
        } break ;
        case 2: {
          var_typeName_4072 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 106)) ;
        } break ;
        default:
          break ;
        }
        GGS_bool var_constantMarkedAsUnused_4208 ;
        switch (select_templateSyntax_36 (inCompiler)) {
        case 1: {
          var_constantMarkedAsUnused_4208 = GGS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_unused COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 112)) ;
          var_constantMarkedAsUnused_4208 = GGS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_constantName_4418 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 115)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (var_typeName_4072, var_constantName_4418, var_constantMarkedAsUnused_4208  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 116)) ;
      } break ;
      default:
        break ;
      }
      if (select_templateSyntax_33 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 120)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_switch_5F_case_i34_parse (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 82)) ;
    if (select_templateSyntax_31 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2C_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 85)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_templateSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 90)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_templateSyntax_34 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 93)) ;
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 94)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 99)) ;
      } break ;
      case 3: {
        switch (select_templateSyntax_35 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 104)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_templateSyntax_36 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_unused COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 112)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 115)) ;
      } break ;
      default:
        break ;
      }
      if (select_templateSyntax_33 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 120)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_switch_5F_case_i34_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 82)) ;
    if (select_templateSyntax_31 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2C_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 85)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_templateSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 90)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_templateSyntax_34 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 93)) ;
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 94)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 99)) ;
      } break ;
      case 3: {
        switch (select_templateSyntax_35 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 104)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_templateSyntax_36 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_unused COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 112)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 115)) ;
      } break ;
      default:
        break ;
      }
      if (select_templateSyntax_33 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 120)) ;
  } break ;
  default:
    break ;
  }
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

GGS_templateInstructionStringForGeneration GGS_templateInstructionStringForGeneration::class_func_new (const GGS_string & in_mTemplateString,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_templateInstructionStringForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionStringForGeneration (in_mTemplateString,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_templateInstructionStringForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ;
}

void cPtr_templateInstructionStringForGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionStringForGeneration:") ;
  mProperty_mTemplateString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionStringForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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
//
//     @templateInstructionStringForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ("templateInstructionStringForGeneration",
                                                                                              & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionStringForGeneration::staticTypeDescriptor (void) const {
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

GGS_templateInstructionStringForGeneration_2E_weak::GGS_templateInstructionStringForGeneration_2E_weak (void) :
GGS_templateInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionStringForGeneration_2E_weak & GGS_templateInstructionStringForGeneration_2E_weak::operator = (const GGS_templateInstructionStringForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionStringForGeneration GGS_templateInstructionStringForGeneration_2E_weak::bang_templateInstructionStringForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionStringForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//
//     @templateInstructionStringForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringForGeneration_2E_weak ("templateInstructionStringForGeneration.weak",
                                                                                                      & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionStringForGeneration_2E_weak::staticTypeDescriptor (void) const {
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
// @semanticExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticExpressionForGeneration::objectCompare (const GGS_semanticExpressionForGeneration & inOperand) const {
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

GGS_semanticExpressionForGeneration::GGS_semanticExpressionForGeneration (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration::GGS_semanticExpressionForGeneration (const cPtr_semanticExpressionForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_semanticExpressionForGeneration::readProperty_mResultType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_semanticExpressionForGeneration * p = (cPtr_semanticExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticExpressionForGeneration) ;
    return p->mProperty_mResultType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_semanticExpressionForGeneration::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_semanticExpressionForGeneration * p = (cPtr_semanticExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticExpressionForGeneration) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_semanticExpressionForGeneration::cPtr_semanticExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mResultType (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_semanticExpressionForGeneration::cPtr_semanticExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                            const GGS_location & in_mLocation,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mResultType (),
mProperty_mLocation () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mResultType.printNonNullClassInstanceProperties ("mResultType") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @semanticExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionForGeneration ("semanticExpressionForGeneration",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_semanticExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration result ;
  const GGS_semanticExpressionForGeneration * p = (const GGS_semanticExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateBlockInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateBlockInstructionForGeneration::objectCompare (const GGS_templateBlockInstructionForGeneration & inOperand) const {
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

GGS_templateBlockInstructionForGeneration::GGS_templateBlockInstructionForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration GGS_templateBlockInstructionForGeneration::
init_21__21__21_ (const GGS_semanticExpressionForGeneration & in_mExpression,
                  const GGS_location & in_mLocation,
                  const GGS_templateInstructionListForGeneration & in_mBlockInstructionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateBlockInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateBlockInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->templateBlockInstructionForGeneration_init_21__21__21_ (in_mExpression, in_mLocation, in_mBlockInstructionList, inCompiler) ;
  const GGS_templateBlockInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionForGeneration::
templateBlockInstructionForGeneration_init_21__21__21_ (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                        const GGS_location & in_mLocation,
                                                        const GGS_templateInstructionListForGeneration & in_mBlockInstructionList,
                                                        Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mBlockInstructionList = in_mBlockInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration::GGS_templateBlockInstructionForGeneration (const cPtr_templateBlockInstructionForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateBlockInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration GGS_templateBlockInstructionForGeneration::class_func_new (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                                     const GGS_location & in_mLocation,
                                                                                                     const GGS_templateInstructionListForGeneration & in_mBlockInstructionList,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_templateBlockInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_templateBlockInstructionForGeneration (in_mExpression, in_mLocation, in_mBlockInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_templateBlockInstructionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateBlockInstructionForGeneration * p = (cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateBlockInstructionForGeneration::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateBlockInstructionForGeneration * p = (cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateBlockInstructionForGeneration::readProperty_mBlockInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateBlockInstructionForGeneration * p = (cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    return p->mProperty_mBlockInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateBlockInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateBlockInstructionForGeneration::cPtr_templateBlockInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mLocation (),
mProperty_mBlockInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateBlockInstructionForGeneration::cPtr_templateBlockInstructionForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                        const GGS_location & in_mLocation,
                                                                                        const GGS_templateInstructionListForGeneration & in_mBlockInstructionList,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mLocation (),
mProperty_mBlockInstructionList () {
  mProperty_mExpression = in_mExpression ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mBlockInstructionList = in_mBlockInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateBlockInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ;
}

void cPtr_templateBlockInstructionForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@templateBlockInstructionForGeneration:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBlockInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateBlockInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateBlockInstructionForGeneration (mProperty_mExpression, mProperty_mLocation, mProperty_mBlockInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateBlockInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
    mProperty_mBlockInstructionList.printNonNullClassInstanceProperties ("mBlockInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @templateBlockInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ("templateBlockInstructionForGeneration",
                                                                                             & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateBlockInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateBlockInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateBlockInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration GGS_templateBlockInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_templateBlockInstructionForGeneration result ;
  const GGS_templateBlockInstructionForGeneration * p = (const GGS_templateBlockInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateBlockInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateBlockInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateGetterCallInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateGetterCallInExpressionAST::objectCompare (const GGS_templateGetterCallInExpressionAST & inOperand) const {
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

GGS_templateGetterCallInExpressionAST::GGS_templateGetterCallInExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST GGS_templateGetterCallInExpressionAST::
init_21__21__21__21_ (const GGS_templateExpressionAST & in_mReceiverExpression,
                      const GGS_lstring & in_mGetterName,
                      const GGS_templateExpressionListAST & in_mExpressionList,
                      const GGS_location & in_mExpressionLocation,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_templateGetterCallInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateGetterCallInExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateGetterCallInExpressionAST_init_21__21__21__21_ (in_mReceiverExpression, in_mGetterName, in_mExpressionList, in_mExpressionLocation, inCompiler) ;
  const GGS_templateGetterCallInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateGetterCallInExpressionAST::
templateGetterCallInExpressionAST_init_21__21__21__21_ (const GGS_templateExpressionAST & in_mReceiverExpression,
                                                        const GGS_lstring & in_mGetterName,
                                                        const GGS_templateExpressionListAST & in_mExpressionList,
                                                        const GGS_location & in_mExpressionLocation,
                                                        Compiler * /* inCompiler */) {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mExpressionList = in_mExpressionList ;
  mProperty_mExpressionLocation = in_mExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST::GGS_templateGetterCallInExpressionAST (const cPtr_templateGetterCallInExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateGetterCallInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST GGS_templateGetterCallInExpressionAST::class_func_new (const GGS_templateExpressionAST & in_mReceiverExpression,
                                                                                             const GGS_lstring & in_mGetterName,
                                                                                             const GGS_templateExpressionListAST & in_mExpressionList,
                                                                                             const GGS_location & in_mExpressionLocation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_templateGetterCallInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateGetterCallInExpressionAST (in_mReceiverExpression, in_mGetterName, in_mExpressionList, in_mExpressionLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateGetterCallInExpressionAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateGetterCallInExpressionAST::readProperty_mGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateGetterCallInExpressionAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionListAST () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateGetterCallInExpressionAST::readProperty_mExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateGetterCallInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateGetterCallInExpressionAST::cPtr_templateGetterCallInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mGetterName (),
mProperty_mExpressionList (),
mProperty_mExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateGetterCallInExpressionAST::cPtr_templateGetterCallInExpressionAST (const GGS_templateExpressionAST & in_mReceiverExpression,
                                                                                const GGS_lstring & in_mGetterName,
                                                                                const GGS_templateExpressionListAST & in_mExpressionList,
                                                                                const GGS_location & in_mExpressionLocation,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mGetterName (),
mProperty_mExpressionList (),
mProperty_mExpressionLocation () {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mExpressionList = in_mExpressionList ;
  mProperty_mExpressionLocation = in_mExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateGetterCallInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ;
}

void cPtr_templateGetterCallInExpressionAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@templateGetterCallInExpressionAST:") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateGetterCallInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateGetterCallInExpressionAST (mProperty_mReceiverExpression, mProperty_mGetterName, mProperty_mExpressionList, mProperty_mExpressionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateGetterCallInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mGetterName.printNonNullClassInstanceProperties ("mGetterName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
    mProperty_mExpressionLocation.printNonNullClassInstanceProperties ("mExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @templateGetterCallInExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ("templateGetterCallInExpressionAST",
                                                                                         & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateGetterCallInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateGetterCallInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateGetterCallInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST GGS_templateGetterCallInExpressionAST::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_templateGetterCallInExpressionAST result ;
  const GGS_templateGetterCallInExpressionAST * p = (const GGS_templateGetterCallInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateGetterCallInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateGetterCallInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionForeachAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForeachAST::objectCompare (const GGS_templateInstructionForeachAST & inOperand) const {
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

GGS_templateInstructionForeachAST::GGS_templateInstructionForeachAST (void) :
GGS_templateInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionForeachAST GGS_templateInstructionForeachAST::
init_21__21__21__21__21__21__21__21_ (const GGS_bool & in_mIsAscending,
                                      const GGS_templateExpressionAST & in_mExpression,
                                      const GGS_templateInstructionForEnumerationAST & in_mEnumeratedObjectProperties,
                                      const GGS_templateInstructionListAST & in_mBeforeInstructionList,
                                      const GGS_templateInstructionListAST & in_mDoInstructionList,
                                      const GGS_lstring & in_mIndexIdentifier,
                                      const GGS_templateInstructionListAST & in_mBetweenInstructionList,
                                      const GGS_templateInstructionListAST & in_mAfterInstructionList,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionForeachAST * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionForeachAST (inCompiler COMMA_THERE)) ;
  object->templateInstructionForeachAST_init_21__21__21__21__21__21__21__21_ (in_mIsAscending, in_mExpression, in_mEnumeratedObjectProperties, in_mBeforeInstructionList, in_mDoInstructionList, in_mIndexIdentifier, in_mBetweenInstructionList, in_mAfterInstructionList, inCompiler) ;
  const GGS_templateInstructionForeachAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachAST::
templateInstructionForeachAST_init_21__21__21__21__21__21__21__21_ (const GGS_bool & in_mIsAscending,
                                                                    const GGS_templateExpressionAST & in_mExpression,
                                                                    const GGS_templateInstructionForEnumerationAST & in_mEnumeratedObjectProperties,
                                                                    const GGS_templateInstructionListAST & in_mBeforeInstructionList,
                                                                    const GGS_templateInstructionListAST & in_mDoInstructionList,
                                                                    const GGS_lstring & in_mIndexIdentifier,
                                                                    const GGS_templateInstructionListAST & in_mBetweenInstructionList,
                                                                    const GGS_templateInstructionListAST & in_mAfterInstructionList,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mIsAscending = in_mIsAscending ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mEnumeratedObjectProperties = in_mEnumeratedObjectProperties ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mIndexIdentifier = in_mIndexIdentifier ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST::GGS_templateInstructionForeachAST (const cPtr_templateInstructionForeachAST * inSourcePtr) :
GGS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForeachAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST GGS_templateInstructionForeachAST::class_func_new (const GGS_bool & in_mIsAscending,
                                                                                     const GGS_templateExpressionAST & in_mExpression,
                                                                                     const GGS_templateInstructionForEnumerationAST & in_mEnumeratedObjectProperties,
                                                                                     const GGS_templateInstructionListAST & in_mBeforeInstructionList,
                                                                                     const GGS_templateInstructionListAST & in_mDoInstructionList,
                                                                                     const GGS_lstring & in_mIndexIdentifier,
                                                                                     const GGS_templateInstructionListAST & in_mBetweenInstructionList,
                                                                                     const GGS_templateInstructionListAST & in_mAfterInstructionList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForeachAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionForeachAST (in_mIsAscending, in_mExpression, in_mEnumeratedObjectProperties, in_mBeforeInstructionList, in_mDoInstructionList, in_mIndexIdentifier, in_mBetweenInstructionList, in_mAfterInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_templateInstructionForeachAST::readProperty_mIsAscending (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mIsAscending ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateInstructionForeachAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST GGS_templateInstructionForeachAST::readProperty_mEnumeratedObjectProperties (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionForEnumerationAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mEnumeratedObjectProperties ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionForeachAST::readProperty_mBeforeInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mBeforeInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionForeachAST::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateInstructionForeachAST::readProperty_mIndexIdentifier (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mIndexIdentifier ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionForeachAST::readProperty_mBetweenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mBetweenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionForeachAST::readProperty_mAfterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mAfterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionForeachAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachAST::cPtr_templateInstructionForeachAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mIsAscending (),
mProperty_mExpression (),
mProperty_mEnumeratedObjectProperties (),
mProperty_mBeforeInstructionList (),
mProperty_mDoInstructionList (),
mProperty_mIndexIdentifier (),
mProperty_mBetweenInstructionList (),
mProperty_mAfterInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachAST::cPtr_templateInstructionForeachAST (const GGS_bool & in_mIsAscending,
                                                                        const GGS_templateExpressionAST & in_mExpression,
                                                                        const GGS_templateInstructionForEnumerationAST & in_mEnumeratedObjectProperties,
                                                                        const GGS_templateInstructionListAST & in_mBeforeInstructionList,
                                                                        const GGS_templateInstructionListAST & in_mDoInstructionList,
                                                                        const GGS_lstring & in_mIndexIdentifier,
                                                                        const GGS_templateInstructionListAST & in_mBetweenInstructionList,
                                                                        const GGS_templateInstructionListAST & in_mAfterInstructionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mIsAscending (),
mProperty_mExpression (),
mProperty_mEnumeratedObjectProperties (),
mProperty_mBeforeInstructionList (),
mProperty_mDoInstructionList (),
mProperty_mIndexIdentifier (),
mProperty_mBetweenInstructionList (),
mProperty_mAfterInstructionList () {
  mProperty_mIsAscending = in_mIsAscending ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mEnumeratedObjectProperties = in_mEnumeratedObjectProperties ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mIndexIdentifier = in_mIndexIdentifier ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionForeachAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST ;
}

void cPtr_templateInstructionForeachAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionForeachAST:") ;
  mProperty_mIsAscending.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumeratedObjectProperties.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndexIdentifier.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionForeachAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionForeachAST (mProperty_mIsAscending, mProperty_mExpression, mProperty_mEnumeratedObjectProperties, mProperty_mBeforeInstructionList, mProperty_mDoInstructionList, mProperty_mIndexIdentifier, mProperty_mBetweenInstructionList, mProperty_mAfterInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionForeachAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsAscending.printNonNullClassInstanceProperties ("mIsAscending") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mEnumeratedObjectProperties.printNonNullClassInstanceProperties ("mEnumeratedObjectProperties") ;
    mProperty_mBeforeInstructionList.printNonNullClassInstanceProperties ("mBeforeInstructionList") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mIndexIdentifier.printNonNullClassInstanceProperties ("mIndexIdentifier") ;
    mProperty_mBetweenInstructionList.printNonNullClassInstanceProperties ("mBetweenInstructionList") ;
    mProperty_mAfterInstructionList.printNonNullClassInstanceProperties ("mAfterInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @templateInstructionForeachAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForeachAST ("templateInstructionForeachAST",
                                                                                     & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionForeachAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForeachAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForeachAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST GGS_templateInstructionForeachAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForeachAST result ;
  const GGS_templateInstructionForeachAST * p = (const GGS_templateInstructionForeachAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForeachAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForeachAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionForeachForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForeachForGeneration::objectCompare (const GGS_templateInstructionForeachForGeneration & inOperand) const {
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

GGS_templateInstructionForeachForGeneration::GGS_templateInstructionForeachForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration GGS_templateInstructionForeachForGeneration::
init_21__21__21__21__21__21__21__21_ (const GGS_bool & in_mIsAscending,
                                      const GGS_semanticExpressionForGeneration & in_mExpression,
                                      const GGS_string & in_mEnumeratorCppName,
                                      const GGS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                      const GGS_templateInstructionListForGeneration & in_mDoInstructionList,
                                      const GGS_string & in_mIndexCppName,
                                      const GGS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                      const GGS_templateInstructionListForGeneration & in_mAfterInstructionList,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionForeachForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionForeachForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionForeachForGeneration_init_21__21__21__21__21__21__21__21_ (in_mIsAscending, in_mExpression, in_mEnumeratorCppName, in_mBeforeInstructionList, in_mDoInstructionList, in_mIndexCppName, in_mBetweenInstructionList, in_mAfterInstructionList, inCompiler) ;
  const GGS_templateInstructionForeachForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachForGeneration::
templateInstructionForeachForGeneration_init_21__21__21__21__21__21__21__21_ (const GGS_bool & in_mIsAscending,
                                                                              const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                              const GGS_string & in_mEnumeratorCppName,
                                                                              const GGS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                                                              const GGS_templateInstructionListForGeneration & in_mDoInstructionList,
                                                                              const GGS_string & in_mIndexCppName,
                                                                              const GGS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                                                              const GGS_templateInstructionListForGeneration & in_mAfterInstructionList,
                                                                              Compiler * /* inCompiler */) {
  mProperty_mIsAscending = in_mIsAscending ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mEnumeratorCppName = in_mEnumeratorCppName ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mIndexCppName = in_mIndexCppName ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration::GGS_templateInstructionForeachForGeneration (const cPtr_templateInstructionForeachForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForeachForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration GGS_templateInstructionForeachForGeneration::class_func_new (const GGS_bool & in_mIsAscending,
                                                                                                         const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                                         const GGS_string & in_mEnumeratorCppName,
                                                                                                         const GGS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                                                                                         const GGS_templateInstructionListForGeneration & in_mDoInstructionList,
                                                                                                         const GGS_string & in_mIndexCppName,
                                                                                                         const GGS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                                                                                         const GGS_templateInstructionListForGeneration & in_mAfterInstructionList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForeachForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionForeachForGeneration (in_mIsAscending, in_mExpression, in_mEnumeratorCppName, in_mBeforeInstructionList, in_mDoInstructionList, in_mIndexCppName, in_mBetweenInstructionList, in_mAfterInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_templateInstructionForeachForGeneration::readProperty_mIsAscending (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mIsAscending ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_templateInstructionForeachForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_templateInstructionForeachForGeneration::readProperty_mEnumeratorCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mEnumeratorCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionForeachForGeneration::readProperty_mBeforeInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mBeforeInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionForeachForGeneration::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_templateInstructionForeachForGeneration::readProperty_mIndexCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mIndexCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionForeachForGeneration::readProperty_mBetweenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mBetweenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionForeachForGeneration::readProperty_mAfterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mAfterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionForeachForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachForGeneration::cPtr_templateInstructionForeachForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mIsAscending (),
mProperty_mExpression (),
mProperty_mEnumeratorCppName (),
mProperty_mBeforeInstructionList (),
mProperty_mDoInstructionList (),
mProperty_mIndexCppName (),
mProperty_mBetweenInstructionList (),
mProperty_mAfterInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachForGeneration::cPtr_templateInstructionForeachForGeneration (const GGS_bool & in_mIsAscending,
                                                                                            const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                            const GGS_string & in_mEnumeratorCppName,
                                                                                            const GGS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                                                                            const GGS_templateInstructionListForGeneration & in_mDoInstructionList,
                                                                                            const GGS_string & in_mIndexCppName,
                                                                                            const GGS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                                                                            const GGS_templateInstructionListForGeneration & in_mAfterInstructionList,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mIsAscending (),
mProperty_mExpression (),
mProperty_mEnumeratorCppName (),
mProperty_mBeforeInstructionList (),
mProperty_mDoInstructionList (),
mProperty_mIndexCppName (),
mProperty_mBetweenInstructionList (),
mProperty_mAfterInstructionList () {
  mProperty_mIsAscending = in_mIsAscending ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mEnumeratorCppName = in_mEnumeratorCppName ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mIndexCppName = in_mIndexCppName ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionForeachForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;
}

void cPtr_templateInstructionForeachForGeneration::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionForeachForGeneration:") ;
  mProperty_mIsAscending.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumeratorCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndexCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionForeachForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionForeachForGeneration (mProperty_mIsAscending, mProperty_mExpression, mProperty_mEnumeratorCppName, mProperty_mBeforeInstructionList, mProperty_mDoInstructionList, mProperty_mIndexCppName, mProperty_mBetweenInstructionList, mProperty_mAfterInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionForeachForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mIsAscending.printNonNullClassInstanceProperties ("mIsAscending") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mEnumeratorCppName.printNonNullClassInstanceProperties ("mEnumeratorCppName") ;
    mProperty_mBeforeInstructionList.printNonNullClassInstanceProperties ("mBeforeInstructionList") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mIndexCppName.printNonNullClassInstanceProperties ("mIndexCppName") ;
    mProperty_mBetweenInstructionList.printNonNullClassInstanceProperties ("mBetweenInstructionList") ;
    mProperty_mAfterInstructionList.printNonNullClassInstanceProperties ("mAfterInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @templateInstructionForeachForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ("templateInstructionForeachForGeneration",
                                                                                               & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionForeachForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForeachForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForeachForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration GGS_templateInstructionForeachForGeneration::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForeachForGeneration result ;
  const GGS_templateInstructionForeachForGeneration * p = (const GGS_templateInstructionForeachForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForeachForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForeachForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionSwitchForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionSwitchForGeneration::objectCompare (const GGS_templateInstructionSwitchForGeneration & inOperand) const {
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

GGS_templateInstructionSwitchForGeneration::GGS_templateInstructionSwitchForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionSwitchForGeneration GGS_templateInstructionSwitchForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_enumType,
                  const GGS_semanticExpressionForGeneration & in_switchExpression,
                  const GGS_templateInstructionSwitchBranchListForGeneration & in_templateInstructionSwitchBranchList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionSwitchForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionSwitchForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionSwitchForGeneration_init_21__21__21_ (in_enumType, in_switchExpression, in_templateInstructionSwitchBranchList, inCompiler) ;
  const GGS_templateInstructionSwitchForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchForGeneration::
templateInstructionSwitchForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_enumType,
                                                         const GGS_semanticExpressionForGeneration & in_switchExpression,
                                                         const GGS_templateInstructionSwitchBranchListForGeneration & in_templateInstructionSwitchBranchList,
                                                         Compiler * /* inCompiler */) {
  mProperty_enumType = in_enumType ;
  mProperty_switchExpression = in_switchExpression ;
  mProperty_templateInstructionSwitchBranchList = in_templateInstructionSwitchBranchList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchForGeneration::GGS_templateInstructionSwitchForGeneration (const cPtr_templateInstructionSwitchForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionSwitchForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchForGeneration GGS_templateInstructionSwitchForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_enumType,
                                                                                                       const GGS_semanticExpressionForGeneration & in_switchExpression,
                                                                                                       const GGS_templateInstructionSwitchBranchListForGeneration & in_templateInstructionSwitchBranchList,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_templateInstructionSwitchForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionSwitchForGeneration (in_enumType, in_switchExpression, in_templateInstructionSwitchBranchList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_templateInstructionSwitchForGeneration::readProperty_enumType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    return p->mProperty_enumType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_templateInstructionSwitchForGeneration::readProperty_switchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    return p->mProperty_switchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration GGS_templateInstructionSwitchForGeneration::readProperty_templateInstructionSwitchBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionSwitchBranchListForGeneration () ;
  }else{
    cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    return p->mProperty_templateInstructionSwitchBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionSwitchForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionSwitchForGeneration::cPtr_templateInstructionSwitchForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_enumType (),
mProperty_switchExpression (),
mProperty_templateInstructionSwitchBranchList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionSwitchForGeneration::cPtr_templateInstructionSwitchForGeneration (const GGS_unifiedTypeMapEntry & in_enumType,
                                                                                          const GGS_semanticExpressionForGeneration & in_switchExpression,
                                                                                          const GGS_templateInstructionSwitchBranchListForGeneration & in_templateInstructionSwitchBranchList,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_enumType (),
mProperty_switchExpression (),
mProperty_templateInstructionSwitchBranchList () {
  mProperty_enumType = in_enumType ;
  mProperty_switchExpression = in_switchExpression ;
  mProperty_templateInstructionSwitchBranchList = in_templateInstructionSwitchBranchList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionSwitchForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;
}

void cPtr_templateInstructionSwitchForGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionSwitchForGeneration:") ;
  mProperty_enumType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_switchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_templateInstructionSwitchBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionSwitchForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionSwitchForGeneration (mProperty_enumType, mProperty_switchExpression, mProperty_templateInstructionSwitchBranchList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionSwitchForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_enumType.printNonNullClassInstanceProperties ("enumType") ;
    mProperty_switchExpression.printNonNullClassInstanceProperties ("switchExpression") ;
    mProperty_templateInstructionSwitchBranchList.printNonNullClassInstanceProperties ("templateInstructionSwitchBranchList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @templateInstructionSwitchForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ("templateInstructionSwitchForGeneration",
                                                                                              & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionSwitchForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionSwitchForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionSwitchForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchForGeneration GGS_templateInstructionSwitchForGeneration::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_templateInstructionSwitchForGeneration result ;
  const GGS_templateInstructionSwitchForGeneration * p = (const GGS_templateInstructionSwitchForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionSwitchForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexiqueComponentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexiqueComponentAST::objectCompare (const GGS_lexiqueComponentAST & inOperand) const {
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

GGS_lexiqueComponentAST::GGS_lexiqueComponentAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexiqueComponentAST GGS_lexiqueComponentAST::
init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mLexiqueComponentName,
                                                                  const GGS_bool & in_mIsTemplate,
                                                                  const GGS_templateDelimitorListAST & in_mTemplateDelimitorListAST,
                                                                  const GGS_templateReplacementListAST & in_mTemplateReplacementListAST,
                                                                  const GGS_lexicalAttributeListAST & in_mLexicalAttributeListAST,
                                                                  const GGS_lexicalStyleListAST & in_mLexicalStyleListAST,
                                                                  const GGS_terminalDeclarationListAST & in_mTerminalDeclarationListAST,
                                                                  const GGS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationListAST,
                                                                  const GGS_lexicalListDeclarationListAST & in_mLexicalListDeclarationListAST,
                                                                  const GGS_lexicalRuleListAST & in_mLexicalRuleListAST,
                                                                  const GGS_indexingListAST & in_mIndexingListAST,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cPtr_lexiqueComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexiqueComponentAST (inCompiler COMMA_THERE)) ;
  object->lexiqueComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (in_isPredefined, in_mLexiqueComponentName, in_mIsTemplate, in_mTemplateDelimitorListAST, in_mTemplateReplacementListAST, in_mLexicalAttributeListAST, in_mLexicalStyleListAST, in_mTerminalDeclarationListAST, in_mLexicalMessageDeclarationListAST, in_mLexicalListDeclarationListAST, in_mLexicalRuleListAST, in_mIndexingListAST, inCompiler) ;
  const GGS_lexiqueComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::
lexiqueComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                                      const GGS_lstring & in_mLexiqueComponentName,
                                                                                      const GGS_bool & in_mIsTemplate,
                                                                                      const GGS_templateDelimitorListAST & in_mTemplateDelimitorListAST,
                                                                                      const GGS_templateReplacementListAST & in_mTemplateReplacementListAST,
                                                                                      const GGS_lexicalAttributeListAST & in_mLexicalAttributeListAST,
                                                                                      const GGS_lexicalStyleListAST & in_mLexicalStyleListAST,
                                                                                      const GGS_terminalDeclarationListAST & in_mTerminalDeclarationListAST,
                                                                                      const GGS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationListAST,
                                                                                      const GGS_lexicalListDeclarationListAST & in_mLexicalListDeclarationListAST,
                                                                                      const GGS_lexicalRuleListAST & in_mLexicalRuleListAST,
                                                                                      const GGS_indexingListAST & in_mIndexingListAST,
                                                                                      Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mIsTemplate = in_mIsTemplate ;
  mProperty_mTemplateDelimitorListAST = in_mTemplateDelimitorListAST ;
  mProperty_mTemplateReplacementListAST = in_mTemplateReplacementListAST ;
  mProperty_mLexicalAttributeListAST = in_mLexicalAttributeListAST ;
  mProperty_mLexicalStyleListAST = in_mLexicalStyleListAST ;
  mProperty_mTerminalDeclarationListAST = in_mTerminalDeclarationListAST ;
  mProperty_mLexicalMessageDeclarationListAST = in_mLexicalMessageDeclarationListAST ;
  mProperty_mLexicalListDeclarationListAST = in_mLexicalListDeclarationListAST ;
  mProperty_mLexicalRuleListAST = in_mLexicalRuleListAST ;
  mProperty_mIndexingListAST = in_mIndexingListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentAST::GGS_lexiqueComponentAST (const cPtr_lexiqueComponentAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueComponentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentAST GGS_lexiqueComponentAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                 const GGS_lstring & in_mLexiqueComponentName,
                                                                 const GGS_bool & in_mIsTemplate,
                                                                 const GGS_templateDelimitorListAST & in_mTemplateDelimitorListAST,
                                                                 const GGS_templateReplacementListAST & in_mTemplateReplacementListAST,
                                                                 const GGS_lexicalAttributeListAST & in_mLexicalAttributeListAST,
                                                                 const GGS_lexicalStyleListAST & in_mLexicalStyleListAST,
                                                                 const GGS_terminalDeclarationListAST & in_mTerminalDeclarationListAST,
                                                                 const GGS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationListAST,
                                                                 const GGS_lexicalListDeclarationListAST & in_mLexicalListDeclarationListAST,
                                                                 const GGS_lexicalRuleListAST & in_mLexicalRuleListAST,
                                                                 const GGS_indexingListAST & in_mIndexingListAST,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_lexiqueComponentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexiqueComponentAST (in_isPredefined, in_mLexiqueComponentName, in_mIsTemplate, in_mTemplateDelimitorListAST, in_mTemplateReplacementListAST, in_mLexicalAttributeListAST, in_mLexicalStyleListAST, in_mTerminalDeclarationListAST, in_mLexicalMessageDeclarationListAST, in_mLexicalListDeclarationListAST, in_mLexicalRuleListAST, in_mIndexingListAST,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexiqueComponentAST::readProperty_mLexiqueComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexiqueComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexiqueComponentAST::readProperty_mIsTemplate (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mIsTemplate ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_lexiqueComponentAST::readProperty_mTemplateDelimitorListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateDelimitorListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mTemplateDelimitorListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST GGS_lexiqueComponentAST::readProperty_mTemplateReplacementListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateReplacementListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mTemplateReplacementListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST GGS_lexiqueComponentAST::readProperty_mLexicalAttributeListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalAttributeListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalAttributeListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST GGS_lexiqueComponentAST::readProperty_mLexicalStyleListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalStyleListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalStyleListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST GGS_lexiqueComponentAST::readProperty_mTerminalDeclarationListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_terminalDeclarationListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mTerminalDeclarationListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageDeclarationListAST GGS_lexiqueComponentAST::readProperty_mLexicalMessageDeclarationListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalMessageDeclarationListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalMessageDeclarationListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST GGS_lexiqueComponentAST::readProperty_mLexicalListDeclarationListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalListDeclarationListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalListDeclarationListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST GGS_lexiqueComponentAST::readProperty_mLexicalRuleListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalRuleListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalRuleListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST GGS_lexiqueComponentAST::readProperty_mIndexingListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_indexingListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mIndexingListAST ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexiqueComponentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexiqueComponentAST::cPtr_lexiqueComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mIsTemplate (),
mProperty_mTemplateDelimitorListAST (),
mProperty_mTemplateReplacementListAST (),
mProperty_mLexicalAttributeListAST (),
mProperty_mLexicalStyleListAST (),
mProperty_mTerminalDeclarationListAST (),
mProperty_mLexicalMessageDeclarationListAST (),
mProperty_mLexicalListDeclarationListAST (),
mProperty_mLexicalRuleListAST (),
mProperty_mIndexingListAST () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexiqueComponentAST::cPtr_lexiqueComponentAST (const GGS_bool & in_isPredefined,
                                                    const GGS_lstring & in_mLexiqueComponentName,
                                                    const GGS_bool & in_mIsTemplate,
                                                    const GGS_templateDelimitorListAST & in_mTemplateDelimitorListAST,
                                                    const GGS_templateReplacementListAST & in_mTemplateReplacementListAST,
                                                    const GGS_lexicalAttributeListAST & in_mLexicalAttributeListAST,
                                                    const GGS_lexicalStyleListAST & in_mLexicalStyleListAST,
                                                    const GGS_terminalDeclarationListAST & in_mTerminalDeclarationListAST,
                                                    const GGS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationListAST,
                                                    const GGS_lexicalListDeclarationListAST & in_mLexicalListDeclarationListAST,
                                                    const GGS_lexicalRuleListAST & in_mLexicalRuleListAST,
                                                    const GGS_indexingListAST & in_mIndexingListAST,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mIsTemplate (),
mProperty_mTemplateDelimitorListAST (),
mProperty_mTemplateReplacementListAST (),
mProperty_mLexicalAttributeListAST (),
mProperty_mLexicalStyleListAST (),
mProperty_mTerminalDeclarationListAST (),
mProperty_mLexicalMessageDeclarationListAST (),
mProperty_mLexicalListDeclarationListAST (),
mProperty_mLexicalRuleListAST (),
mProperty_mIndexingListAST () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mIsTemplate = in_mIsTemplate ;
  mProperty_mTemplateDelimitorListAST = in_mTemplateDelimitorListAST ;
  mProperty_mTemplateReplacementListAST = in_mTemplateReplacementListAST ;
  mProperty_mLexicalAttributeListAST = in_mLexicalAttributeListAST ;
  mProperty_mLexicalStyleListAST = in_mLexicalStyleListAST ;
  mProperty_mTerminalDeclarationListAST = in_mTerminalDeclarationListAST ;
  mProperty_mLexicalMessageDeclarationListAST = in_mLexicalMessageDeclarationListAST ;
  mProperty_mLexicalListDeclarationListAST = in_mLexicalListDeclarationListAST ;
  mProperty_mLexicalRuleListAST = in_mLexicalRuleListAST ;
  mProperty_mIndexingListAST = in_mIndexingListAST ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexiqueComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentAST ;
}

void cPtr_lexiqueComponentAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@lexiqueComponentAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsTemplate.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateDelimitorListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateReplacementListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalAttributeListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalStyleListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTerminalDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalMessageDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalListDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalRuleListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndexingListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexiqueComponentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexiqueComponentAST (mProperty_isPredefined, mProperty_mLexiqueComponentName, mProperty_mIsTemplate, mProperty_mTemplateDelimitorListAST, mProperty_mTemplateReplacementListAST, mProperty_mLexicalAttributeListAST, mProperty_mLexicalStyleListAST, mProperty_mTerminalDeclarationListAST, mProperty_mLexicalMessageDeclarationListAST, mProperty_mLexicalListDeclarationListAST, mProperty_mLexicalRuleListAST, mProperty_mIndexingListAST, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexiqueComponentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexiqueComponentName.printNonNullClassInstanceProperties ("mLexiqueComponentName") ;
    mProperty_mIsTemplate.printNonNullClassInstanceProperties ("mIsTemplate") ;
    mProperty_mTemplateDelimitorListAST.printNonNullClassInstanceProperties ("mTemplateDelimitorListAST") ;
    mProperty_mTemplateReplacementListAST.printNonNullClassInstanceProperties ("mTemplateReplacementListAST") ;
    mProperty_mLexicalAttributeListAST.printNonNullClassInstanceProperties ("mLexicalAttributeListAST") ;
    mProperty_mLexicalStyleListAST.printNonNullClassInstanceProperties ("mLexicalStyleListAST") ;
    mProperty_mTerminalDeclarationListAST.printNonNullClassInstanceProperties ("mTerminalDeclarationListAST") ;
    mProperty_mLexicalMessageDeclarationListAST.printNonNullClassInstanceProperties ("mLexicalMessageDeclarationListAST") ;
    mProperty_mLexicalListDeclarationListAST.printNonNullClassInstanceProperties ("mLexicalListDeclarationListAST") ;
    mProperty_mLexicalRuleListAST.printNonNullClassInstanceProperties ("mLexicalRuleListAST") ;
    mProperty_mIndexingListAST.printNonNullClassInstanceProperties ("mIndexingListAST") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @lexiqueComponentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentAST ("lexiqueComponentAST",
                                                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexiqueComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexiqueComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexiqueComponentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentAST GGS_lexiqueComponentAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_lexiqueComponentAST result ;
  const GGS_lexiqueComponentAST * p = (const GGS_lexiqueComponentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexiqueComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexiqueComponentAST_2E_weak::objectCompare (const GGS_lexiqueComponentAST_2E_weak & inOperand) const {
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

GGS_lexiqueComponentAST_2E_weak::GGS_lexiqueComponentAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentAST_2E_weak & GGS_lexiqueComponentAST_2E_weak::operator = (const GGS_lexiqueComponentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentAST_2E_weak::GGS_lexiqueComponentAST_2E_weak (const GGS_lexiqueComponentAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentAST_2E_weak GGS_lexiqueComponentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexiqueComponentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentAST GGS_lexiqueComponentAST_2E_weak::bang_lexiqueComponentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexiqueComponentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexiqueComponentAST) ;
      result = GGS_lexiqueComponentAST ((cPtr_lexiqueComponentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexiqueComponentAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentAST_2E_weak ("lexiqueComponentAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexiqueComponentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexiqueComponentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexiqueComponentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentAST_2E_weak GGS_lexiqueComponentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexiqueComponentAST_2E_weak result ;
  const GGS_lexiqueComponentAST_2E_weak * p = (const GGS_lexiqueComponentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexiqueComponentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateLexiqueComponentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLexiqueComponentAST::objectCompare (const GGS_templateLexiqueComponentAST & inOperand) const {
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

GGS_templateLexiqueComponentAST::GGS_templateLexiqueComponentAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateLexiqueComponentAST GGS_templateLexiqueComponentAST::
init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                      const GGS_lstring & in_mLexiqueComponentName,
                                      const GGS_lstring & in_mLexiqueSuperComponentName,
                                      const GGS_templateDelimitorListAST & in_mTemplateDelimitorList,
                                      const GGS_templateReplacementListAST & in_mTemplateReplacementList,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_templateLexiqueComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLexiqueComponentAST (inCompiler COMMA_THERE)) ;
  object->templateLexiqueComponentAST_init_21_isPredefined_21__21__21__21_ (in_isPredefined, in_mLexiqueComponentName, in_mLexiqueSuperComponentName, in_mTemplateDelimitorList, in_mTemplateReplacementList, inCompiler) ;
  const GGS_templateLexiqueComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::
templateLexiqueComponentAST_init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mLexiqueComponentName,
                                                                  const GGS_lstring & in_mLexiqueSuperComponentName,
                                                                  const GGS_templateDelimitorListAST & in_mTemplateDelimitorList,
                                                                  const GGS_templateReplacementListAST & in_mTemplateReplacementList,
                                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueSuperComponentName = in_mLexiqueSuperComponentName ;
  mProperty_mTemplateDelimitorList = in_mTemplateDelimitorList ;
  mProperty_mTemplateReplacementList = in_mTemplateReplacementList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST::GGS_templateLexiqueComponentAST (const cPtr_templateLexiqueComponentAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLexiqueComponentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST GGS_templateLexiqueComponentAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                                 const GGS_lstring & in_mLexiqueComponentName,
                                                                                 const GGS_lstring & in_mLexiqueSuperComponentName,
                                                                                 const GGS_templateDelimitorListAST & in_mTemplateDelimitorList,
                                                                                 const GGS_templateReplacementListAST & in_mTemplateReplacementList,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_templateLexiqueComponentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateLexiqueComponentAST (in_isPredefined, in_mLexiqueComponentName, in_mLexiqueSuperComponentName, in_mTemplateDelimitorList, in_mTemplateReplacementList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateLexiqueComponentAST::readProperty_mLexiqueComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mLexiqueComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateLexiqueComponentAST::readProperty_mLexiqueSuperComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mLexiqueSuperComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_templateLexiqueComponentAST::readProperty_mTemplateDelimitorList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateDelimitorListAST () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mTemplateDelimitorList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST GGS_templateLexiqueComponentAST::readProperty_mTemplateReplacementList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateReplacementListAST () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mTemplateReplacementList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLexiqueComponentAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLexiqueComponentAST::cPtr_templateLexiqueComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueSuperComponentName (),
mProperty_mTemplateDelimitorList (),
mProperty_mTemplateReplacementList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateLexiqueComponentAST::cPtr_templateLexiqueComponentAST (const GGS_bool & in_isPredefined,
                                                                    const GGS_lstring & in_mLexiqueComponentName,
                                                                    const GGS_lstring & in_mLexiqueSuperComponentName,
                                                                    const GGS_templateDelimitorListAST & in_mTemplateDelimitorList,
                                                                    const GGS_templateReplacementListAST & in_mTemplateReplacementList,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueSuperComponentName (),
mProperty_mTemplateDelimitorList (),
mProperty_mTemplateReplacementList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueSuperComponentName = in_mLexiqueSuperComponentName ;
  mProperty_mTemplateDelimitorList = in_mTemplateDelimitorList ;
  mProperty_mTemplateReplacementList = in_mTemplateReplacementList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateLexiqueComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLexiqueComponentAST ;
}

void cPtr_templateLexiqueComponentAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@templateLexiqueComponentAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueSuperComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateDelimitorList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateReplacementList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateLexiqueComponentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLexiqueComponentAST (mProperty_isPredefined, mProperty_mLexiqueComponentName, mProperty_mLexiqueSuperComponentName, mProperty_mTemplateDelimitorList, mProperty_mTemplateReplacementList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLexiqueComponentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexiqueComponentName.printNonNullClassInstanceProperties ("mLexiqueComponentName") ;
    mProperty_mLexiqueSuperComponentName.printNonNullClassInstanceProperties ("mLexiqueSuperComponentName") ;
    mProperty_mTemplateDelimitorList.printNonNullClassInstanceProperties ("mTemplateDelimitorList") ;
    mProperty_mTemplateReplacementList.printNonNullClassInstanceProperties ("mTemplateReplacementList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @templateLexiqueComponentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLexiqueComponentAST ("templateLexiqueComponentAST",
                                                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateLexiqueComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLexiqueComponentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateLexiqueComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateLexiqueComponentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST GGS_templateLexiqueComponentAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_templateLexiqueComponentAST result ;
  const GGS_templateLexiqueComponentAST * p = (const GGS_templateLexiqueComponentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateLexiqueComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLexiqueComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalImplicitRuleAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalImplicitRuleAST::objectCompare (const GGS_lexicalImplicitRuleAST & inOperand) const {
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

GGS_lexicalImplicitRuleAST::GGS_lexicalImplicitRuleAST (void) :
GGS_abstractLexicalRuleAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalImplicitRuleAST GGS_lexicalImplicitRuleAST::
init_21_ (const GGS_lstring & in_mListName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalImplicitRuleAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalImplicitRuleAST (inCompiler COMMA_THERE)) ;
  object->lexicalImplicitRuleAST_init_21_ (in_mListName, inCompiler) ;
  const GGS_lexicalImplicitRuleAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalImplicitRuleAST::
lexicalImplicitRuleAST_init_21_ (const GGS_lstring & in_mListName,
                                 Compiler * /* inCompiler */) {
  mProperty_mListName = in_mListName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalImplicitRuleAST::GGS_lexicalImplicitRuleAST (const cPtr_lexicalImplicitRuleAST * inSourcePtr) :
GGS_abstractLexicalRuleAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalImplicitRuleAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalImplicitRuleAST GGS_lexicalImplicitRuleAST::class_func_new (const GGS_lstring & in_mListName,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_lexicalImplicitRuleAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalImplicitRuleAST (in_mListName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalImplicitRuleAST::readProperty_mListName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalImplicitRuleAST * p = (cPtr_lexicalImplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalImplicitRuleAST) ;
    return p->mProperty_mListName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalImplicitRuleAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalImplicitRuleAST::cPtr_lexicalImplicitRuleAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRuleAST (inCompiler COMMA_THERE),
mProperty_mListName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalImplicitRuleAST::cPtr_lexicalImplicitRuleAST (const GGS_lstring & in_mListName,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRuleAST (inCompiler COMMA_THERE),
mProperty_mListName () {
  mProperty_mListName = in_mListName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalImplicitRuleAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;
}

void cPtr_lexicalImplicitRuleAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalImplicitRuleAST:") ;
  mProperty_mListName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalImplicitRuleAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalImplicitRuleAST (mProperty_mListName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalImplicitRuleAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLexicalRuleAST::printNonNullClassInstanceProperties () ;
    mProperty_mListName.printNonNullClassInstanceProperties ("mListName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @lexicalImplicitRuleAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ("lexicalImplicitRuleAST",
                                                                              & kTypeDescriptor_GALGAS_abstractLexicalRuleAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalImplicitRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalImplicitRuleAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalImplicitRuleAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalImplicitRuleAST GGS_lexicalImplicitRuleAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalImplicitRuleAST result ;
  const GGS_lexicalImplicitRuleAST * p = (const GGS_lexicalImplicitRuleAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalImplicitRuleAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalImplicitRuleAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalCharacterSetMatchAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalCharacterSetMatchAST::objectCompare (const GGS_lexicalCharacterSetMatchAST & inOperand) const {
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

GGS_lexicalCharacterSetMatchAST::GGS_lexicalCharacterSetMatchAST (void) :
GGS_lexicalExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalCharacterSetMatchAST GGS_lexicalCharacterSetMatchAST::
init_21_ (const GGS_lstring & in_mCharacterSetName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalCharacterSetMatchAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalCharacterSetMatchAST (inCompiler COMMA_THERE)) ;
  object->lexicalCharacterSetMatchAST_init_21_ (in_mCharacterSetName, inCompiler) ;
  const GGS_lexicalCharacterSetMatchAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterSetMatchAST::
lexicalCharacterSetMatchAST_init_21_ (const GGS_lstring & in_mCharacterSetName,
                                      Compiler * /* inCompiler */) {
  mProperty_mCharacterSetName = in_mCharacterSetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterSetMatchAST::GGS_lexicalCharacterSetMatchAST (const cPtr_lexicalCharacterSetMatchAST * inSourcePtr) :
GGS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterSetMatchAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterSetMatchAST GGS_lexicalCharacterSetMatchAST::class_func_new (const GGS_lstring & in_mCharacterSetName,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_lexicalCharacterSetMatchAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterSetMatchAST (in_mCharacterSetName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalCharacterSetMatchAST::readProperty_mCharacterSetName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalCharacterSetMatchAST * p = (cPtr_lexicalCharacterSetMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterSetMatchAST) ;
    return p->mProperty_mCharacterSetName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterSetMatchAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterSetMatchAST::cPtr_lexicalCharacterSetMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mCharacterSetName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterSetMatchAST::cPtr_lexicalCharacterSetMatchAST (const GGS_lstring & in_mCharacterSetName,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mCharacterSetName () {
  mProperty_mCharacterSetName = in_mCharacterSetName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCharacterSetMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;
}

void cPtr_lexicalCharacterSetMatchAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalCharacterSetMatchAST:") ;
  mProperty_mCharacterSetName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCharacterSetMatchAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalCharacterSetMatchAST (mProperty_mCharacterSetName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalCharacterSetMatchAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mCharacterSetName.printNonNullClassInstanceProperties ("mCharacterSetName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @lexicalCharacterSetMatchAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ("lexicalCharacterSetMatchAST",
                                                                                   & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalCharacterSetMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalCharacterSetMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalCharacterSetMatchAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterSetMatchAST GGS_lexicalCharacterSetMatchAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalCharacterSetMatchAST result ;
  const GGS_lexicalCharacterSetMatchAST * p = (const GGS_lexicalCharacterSetMatchAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalCharacterSetMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterSetMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalCharacterMatchAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalCharacterMatchAST::objectCompare (const GGS_lexicalCharacterMatchAST & inOperand) const {
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

GGS_lexicalCharacterMatchAST::GGS_lexicalCharacterMatchAST (void) :
GGS_lexicalExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalCharacterMatchAST GGS_lexicalCharacterMatchAST::
init_21_ (const GGS_lchar & in_mCharacter,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalCharacterMatchAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalCharacterMatchAST (inCompiler COMMA_THERE)) ;
  object->lexicalCharacterMatchAST_init_21_ (in_mCharacter, inCompiler) ;
  const GGS_lexicalCharacterMatchAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterMatchAST::
lexicalCharacterMatchAST_init_21_ (const GGS_lchar & in_mCharacter,
                                   Compiler * /* inCompiler */) {
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterMatchAST::GGS_lexicalCharacterMatchAST (const cPtr_lexicalCharacterMatchAST * inSourcePtr) :
GGS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterMatchAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterMatchAST GGS_lexicalCharacterMatchAST::class_func_new (const GGS_lchar & in_mCharacter,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_lexicalCharacterMatchAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterMatchAST (in_mCharacter,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lchar GGS_lexicalCharacterMatchAST::readProperty_mCharacter (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lchar () ;
  }else{
    cPtr_lexicalCharacterMatchAST * p = (cPtr_lexicalCharacterMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterMatchAST) ;
    return p->mProperty_mCharacter ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterMatchAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterMatchAST::cPtr_lexicalCharacterMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mCharacter () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterMatchAST::cPtr_lexicalCharacterMatchAST (const GGS_lchar & in_mCharacter,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mCharacter () {
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCharacterMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;
}

void cPtr_lexicalCharacterMatchAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalCharacterMatchAST:") ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCharacterMatchAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalCharacterMatchAST (mProperty_mCharacter, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalCharacterMatchAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mCharacter.printNonNullClassInstanceProperties ("mCharacter") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @lexicalCharacterMatchAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ("lexicalCharacterMatchAST",
                                                                                & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalCharacterMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalCharacterMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalCharacterMatchAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterMatchAST GGS_lexicalCharacterMatchAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalCharacterMatchAST result ;
  const GGS_lexicalCharacterMatchAST * p = (const GGS_lexicalCharacterMatchAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalCharacterMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalCharacterIntervalMatchAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalCharacterIntervalMatchAST::objectCompare (const GGS_lexicalCharacterIntervalMatchAST & inOperand) const {
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

GGS_lexicalCharacterIntervalMatchAST::GGS_lexicalCharacterIntervalMatchAST (void) :
GGS_lexicalExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalCharacterIntervalMatchAST GGS_lexicalCharacterIntervalMatchAST::
init_21__21_ (const GGS_lchar & in_mLowerBound,
              const GGS_lchar & in_mUpperBound,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalCharacterIntervalMatchAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalCharacterIntervalMatchAST (inCompiler COMMA_THERE)) ;
  object->lexicalCharacterIntervalMatchAST_init_21__21_ (in_mLowerBound, in_mUpperBound, inCompiler) ;
  const GGS_lexicalCharacterIntervalMatchAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterIntervalMatchAST::
lexicalCharacterIntervalMatchAST_init_21__21_ (const GGS_lchar & in_mLowerBound,
                                               const GGS_lchar & in_mUpperBound,
                                               Compiler * /* inCompiler */) {
  mProperty_mLowerBound = in_mLowerBound ;
  mProperty_mUpperBound = in_mUpperBound ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterIntervalMatchAST::GGS_lexicalCharacterIntervalMatchAST (const cPtr_lexicalCharacterIntervalMatchAST * inSourcePtr) :
GGS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterIntervalMatchAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterIntervalMatchAST GGS_lexicalCharacterIntervalMatchAST::class_func_new (const GGS_lchar & in_mLowerBound,
                                                                                           const GGS_lchar & in_mUpperBound,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_lexicalCharacterIntervalMatchAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterIntervalMatchAST (in_mLowerBound, in_mUpperBound,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lchar GGS_lexicalCharacterIntervalMatchAST::readProperty_mLowerBound (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lchar () ;
  }else{
    cPtr_lexicalCharacterIntervalMatchAST * p = (cPtr_lexicalCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterIntervalMatchAST) ;
    return p->mProperty_mLowerBound ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lchar GGS_lexicalCharacterIntervalMatchAST::readProperty_mUpperBound (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lchar () ;
  }else{
    cPtr_lexicalCharacterIntervalMatchAST * p = (cPtr_lexicalCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterIntervalMatchAST) ;
    return p->mProperty_mUpperBound ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterIntervalMatchAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterIntervalMatchAST::cPtr_lexicalCharacterIntervalMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mLowerBound (),
mProperty_mUpperBound () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterIntervalMatchAST::cPtr_lexicalCharacterIntervalMatchAST (const GGS_lchar & in_mLowerBound,
                                                                              const GGS_lchar & in_mUpperBound,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mLowerBound (),
mProperty_mUpperBound () {
  mProperty_mLowerBound = in_mLowerBound ;
  mProperty_mUpperBound = in_mUpperBound ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCharacterIntervalMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;
}

void cPtr_lexicalCharacterIntervalMatchAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalCharacterIntervalMatchAST:") ;
  mProperty_mLowerBound.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUpperBound.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCharacterIntervalMatchAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalCharacterIntervalMatchAST (mProperty_mLowerBound, mProperty_mUpperBound, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalCharacterIntervalMatchAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLowerBound.printNonNullClassInstanceProperties ("mLowerBound") ;
    mProperty_mUpperBound.printNonNullClassInstanceProperties ("mUpperBound") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @lexicalCharacterIntervalMatchAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ("lexicalCharacterIntervalMatchAST",
                                                                                        & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalCharacterIntervalMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalCharacterIntervalMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalCharacterIntervalMatchAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterIntervalMatchAST GGS_lexicalCharacterIntervalMatchAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalCharacterIntervalMatchAST result ;
  const GGS_lexicalCharacterIntervalMatchAST * p = (const GGS_lexicalCharacterIntervalMatchAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalCharacterIntervalMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterIntervalMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalStringMatchAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalStringMatchAST::objectCompare (const GGS_lexicalStringMatchAST & inOperand) const {
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

GGS_lexicalStringMatchAST::GGS_lexicalStringMatchAST (void) :
GGS_lexicalExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalStringMatchAST GGS_lexicalStringMatchAST::
init_21_ (const GGS_lstring & in_mString,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalStringMatchAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalStringMatchAST (inCompiler COMMA_THERE)) ;
  object->lexicalStringMatchAST_init_21_ (in_mString, inCompiler) ;
  const GGS_lexicalStringMatchAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringMatchAST::
lexicalStringMatchAST_init_21_ (const GGS_lstring & in_mString,
                                Compiler * /* inCompiler */) {
  mProperty_mString = in_mString ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringMatchAST::GGS_lexicalStringMatchAST (const cPtr_lexicalStringMatchAST * inSourcePtr) :
GGS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStringMatchAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalStringMatchAST GGS_lexicalStringMatchAST::class_func_new (const GGS_lstring & in_mString,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_lexicalStringMatchAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalStringMatchAST (in_mString,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalStringMatchAST::readProperty_mString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalStringMatchAST * p = (cPtr_lexicalStringMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringMatchAST) ;
    return p->mProperty_mString ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalStringMatchAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalStringMatchAST::cPtr_lexicalStringMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mString () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalStringMatchAST::cPtr_lexicalStringMatchAST (const GGS_lstring & in_mString,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mString () {
  mProperty_mString = in_mString ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalStringMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringMatchAST ;
}

void cPtr_lexicalStringMatchAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalStringMatchAST:") ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalStringMatchAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalStringMatchAST (mProperty_mString, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalStringMatchAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mString.printNonNullClassInstanceProperties ("mString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @lexicalStringMatchAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringMatchAST ("lexicalStringMatchAST",
                                                                             & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalStringMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringMatchAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalStringMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalStringMatchAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringMatchAST GGS_lexicalStringMatchAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalStringMatchAST result ;
  const GGS_lexicalStringMatchAST * p = (const GGS_lexicalStringMatchAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalStringMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalStringNotMatchAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalStringNotMatchAST::objectCompare (const GGS_lexicalStringNotMatchAST & inOperand) const {
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

GGS_lexicalStringNotMatchAST::GGS_lexicalStringNotMatchAST (void) :
GGS_lexicalExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalStringNotMatchAST GGS_lexicalStringNotMatchAST::
init_21__21_ (const GGS_lstring & in_mString,
              const GGS_lstring & in_mErrorMessage,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalStringNotMatchAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalStringNotMatchAST (inCompiler COMMA_THERE)) ;
  object->lexicalStringNotMatchAST_init_21__21_ (in_mString, in_mErrorMessage, inCompiler) ;
  const GGS_lexicalStringNotMatchAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringNotMatchAST::
lexicalStringNotMatchAST_init_21__21_ (const GGS_lstring & in_mString,
                                       const GGS_lstring & in_mErrorMessage,
                                       Compiler * /* inCompiler */) {
  mProperty_mString = in_mString ;
  mProperty_mErrorMessage = in_mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringNotMatchAST::GGS_lexicalStringNotMatchAST (const cPtr_lexicalStringNotMatchAST * inSourcePtr) :
GGS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStringNotMatchAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalStringNotMatchAST GGS_lexicalStringNotMatchAST::class_func_new (const GGS_lstring & in_mString,
                                                                           const GGS_lstring & in_mErrorMessage,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_lexicalStringNotMatchAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalStringNotMatchAST (in_mString, in_mErrorMessage,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalStringNotMatchAST::readProperty_mString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalStringNotMatchAST * p = (cPtr_lexicalStringNotMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
    return p->mProperty_mString ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalStringNotMatchAST::readProperty_mErrorMessage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalStringNotMatchAST * p = (cPtr_lexicalStringNotMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
    return p->mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalStringNotMatchAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalStringNotMatchAST::cPtr_lexicalStringNotMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mString (),
mProperty_mErrorMessage () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalStringNotMatchAST::cPtr_lexicalStringNotMatchAST (const GGS_lstring & in_mString,
                                                              const GGS_lstring & in_mErrorMessage,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mString (),
mProperty_mErrorMessage () {
  mProperty_mString = in_mString ;
  mProperty_mErrorMessage = in_mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalStringNotMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;
}

void cPtr_lexicalStringNotMatchAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalStringNotMatchAST:") ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mErrorMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalStringNotMatchAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalStringNotMatchAST (mProperty_mString, mProperty_mErrorMessage, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalStringNotMatchAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mString.printNonNullClassInstanceProperties ("mString") ;
    mProperty_mErrorMessage.printNonNullClassInstanceProperties ("mErrorMessage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @lexicalStringNotMatchAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ("lexicalStringNotMatchAST",
                                                                                & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalStringNotMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalStringNotMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalStringNotMatchAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringNotMatchAST GGS_lexicalStringNotMatchAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalStringNotMatchAST result ;
  const GGS_lexicalStringNotMatchAST * p = (const GGS_lexicalStringNotMatchAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalStringNotMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringNotMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalSendTerminalByDefaultAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalSendTerminalByDefaultAST::objectCompare (const GGS_lexicalSendTerminalByDefaultAST & inOperand) const {
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

GGS_lexicalSendTerminalByDefaultAST::GGS_lexicalSendTerminalByDefaultAST (void) :
GGS_lexicalSendDefaultActionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST GGS_lexicalSendTerminalByDefaultAST::
init_21_ (const GGS_lstring & in_mDefaultSentTerminal,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalSendTerminalByDefaultAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalSendTerminalByDefaultAST (inCompiler COMMA_THERE)) ;
  object->lexicalSendTerminalByDefaultAST_init_21_ (in_mDefaultSentTerminal, inCompiler) ;
  const GGS_lexicalSendTerminalByDefaultAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSendTerminalByDefaultAST::
lexicalSendTerminalByDefaultAST_init_21_ (const GGS_lstring & in_mDefaultSentTerminal,
                                          Compiler * /* inCompiler */) {
  mProperty_mDefaultSentTerminal = in_mDefaultSentTerminal ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST::GGS_lexicalSendTerminalByDefaultAST (const cPtr_lexicalSendTerminalByDefaultAST * inSourcePtr) :
GGS_lexicalSendDefaultActionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSendTerminalByDefaultAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST GGS_lexicalSendTerminalByDefaultAST::class_func_new (const GGS_lstring & in_mDefaultSentTerminal,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_lexicalSendTerminalByDefaultAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalSendTerminalByDefaultAST (in_mDefaultSentTerminal,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalSendTerminalByDefaultAST::readProperty_mDefaultSentTerminal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalSendTerminalByDefaultAST * p = (cPtr_lexicalSendTerminalByDefaultAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSendTerminalByDefaultAST) ;
    return p->mProperty_mDefaultSentTerminal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSendTerminalByDefaultAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalSendTerminalByDefaultAST::cPtr_lexicalSendTerminalByDefaultAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (inCompiler COMMA_THERE),
mProperty_mDefaultSentTerminal () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalSendTerminalByDefaultAST::cPtr_lexicalSendTerminalByDefaultAST (const GGS_lstring & in_mDefaultSentTerminal,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (inCompiler COMMA_THERE),
mProperty_mDefaultSentTerminal () {
  mProperty_mDefaultSentTerminal = in_mDefaultSentTerminal ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalSendTerminalByDefaultAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;
}

void cPtr_lexicalSendTerminalByDefaultAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalSendTerminalByDefaultAST:") ;
  mProperty_mDefaultSentTerminal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalSendTerminalByDefaultAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalSendTerminalByDefaultAST (mProperty_mDefaultSentTerminal, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalSendTerminalByDefaultAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalSendDefaultActionAST::printNonNullClassInstanceProperties () ;
    mProperty_mDefaultSentTerminal.printNonNullClassInstanceProperties ("mDefaultSentTerminal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @lexicalSendTerminalByDefaultAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ("lexicalSendTerminalByDefaultAST",
                                                                                       & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalSendTerminalByDefaultAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSendTerminalByDefaultAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSendTerminalByDefaultAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST GGS_lexicalSendTerminalByDefaultAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalSendTerminalByDefaultAST result ;
  const GGS_lexicalSendTerminalByDefaultAST * p = (const GGS_lexicalSendTerminalByDefaultAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSendTerminalByDefaultAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendTerminalByDefaultAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalErrorByDefaultAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalErrorByDefaultAST::objectCompare (const GGS_lexicalErrorByDefaultAST & inOperand) const {
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

GGS_lexicalErrorByDefaultAST::GGS_lexicalErrorByDefaultAST (void) :
GGS_lexicalSendDefaultActionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST GGS_lexicalErrorByDefaultAST::
init_21_ (const GGS_lstring & in_mDefaultErrorMessageName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalErrorByDefaultAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalErrorByDefaultAST (inCompiler COMMA_THERE)) ;
  object->lexicalErrorByDefaultAST_init_21_ (in_mDefaultErrorMessageName, inCompiler) ;
  const GGS_lexicalErrorByDefaultAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorByDefaultAST::
lexicalErrorByDefaultAST_init_21_ (const GGS_lstring & in_mDefaultErrorMessageName,
                                   Compiler * /* inCompiler */) {
  mProperty_mDefaultErrorMessageName = in_mDefaultErrorMessageName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST::GGS_lexicalErrorByDefaultAST (const cPtr_lexicalErrorByDefaultAST * inSourcePtr) :
GGS_lexicalSendDefaultActionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalErrorByDefaultAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST GGS_lexicalErrorByDefaultAST::class_func_new (const GGS_lstring & in_mDefaultErrorMessageName,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_lexicalErrorByDefaultAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalErrorByDefaultAST (in_mDefaultErrorMessageName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalErrorByDefaultAST::readProperty_mDefaultErrorMessageName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalErrorByDefaultAST * p = (cPtr_lexicalErrorByDefaultAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalErrorByDefaultAST) ;
    return p->mProperty_mDefaultErrorMessageName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalErrorByDefaultAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalErrorByDefaultAST::cPtr_lexicalErrorByDefaultAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (inCompiler COMMA_THERE),
mProperty_mDefaultErrorMessageName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalErrorByDefaultAST::cPtr_lexicalErrorByDefaultAST (const GGS_lstring & in_mDefaultErrorMessageName,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (inCompiler COMMA_THERE),
mProperty_mDefaultErrorMessageName () {
  mProperty_mDefaultErrorMessageName = in_mDefaultErrorMessageName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalErrorByDefaultAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;
}

void cPtr_lexicalErrorByDefaultAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalErrorByDefaultAST:") ;
  mProperty_mDefaultErrorMessageName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalErrorByDefaultAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalErrorByDefaultAST (mProperty_mDefaultErrorMessageName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalErrorByDefaultAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalSendDefaultActionAST::printNonNullClassInstanceProperties () ;
    mProperty_mDefaultErrorMessageName.printNonNullClassInstanceProperties ("mDefaultErrorMessageName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @lexicalErrorByDefaultAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ("lexicalErrorByDefaultAST",
                                                                                & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalErrorByDefaultAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalErrorByDefaultAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalErrorByDefaultAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST GGS_lexicalErrorByDefaultAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalErrorByDefaultAST result ;
  const GGS_lexicalErrorByDefaultAST * p = (const GGS_lexicalErrorByDefaultAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalErrorByDefaultAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalErrorByDefaultAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalAttributeInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalAttributeInputArgumentAST::objectCompare (const GGS_lexicalAttributeInputArgumentAST & inOperand) const {
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

GGS_lexicalAttributeInputArgumentAST::GGS_lexicalAttributeInputArgumentAST (void) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST GGS_lexicalAttributeInputArgumentAST::
init_21_ (const GGS_lstring & in_mAttributeName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalAttributeInputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalAttributeInputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalAttributeInputArgumentAST_init_21_ (in_mAttributeName, inCompiler) ;
  const GGS_lexicalAttributeInputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputArgumentAST::
lexicalAttributeInputArgumentAST_init_21_ (const GGS_lstring & in_mAttributeName,
                                           Compiler * /* inCompiler */) {
  mProperty_mAttributeName = in_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST::GGS_lexicalAttributeInputArgumentAST (const cPtr_lexicalAttributeInputArgumentAST * inSourcePtr) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalAttributeInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST GGS_lexicalAttributeInputArgumentAST::class_func_new (const GGS_lstring & in_mAttributeName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_lexicalAttributeInputArgumentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalAttributeInputArgumentAST (in_mAttributeName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalAttributeInputArgumentAST::readProperty_mAttributeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalAttributeInputArgumentAST * p = (cPtr_lexicalAttributeInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalAttributeInputArgumentAST) ;
    return p->mProperty_mAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalAttributeInputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputArgumentAST::cPtr_lexicalAttributeInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mAttributeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputArgumentAST::cPtr_lexicalAttributeInputArgumentAST (const GGS_lstring & in_mAttributeName,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mAttributeName () {
  mProperty_mAttributeName = in_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalAttributeInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;
}

void cPtr_lexicalAttributeInputArgumentAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalAttributeInputArgumentAST:") ;
  mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalAttributeInputArgumentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalAttributeInputArgumentAST (mProperty_mAttributeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalAttributeInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mAttributeName.printNonNullClassInstanceProperties ("mAttributeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @lexicalAttributeInputArgumentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ("lexicalAttributeInputArgumentAST",
                                                                                        & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalAttributeInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalAttributeInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalAttributeInputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST GGS_lexicalAttributeInputArgumentAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalAttributeInputArgumentAST result ;
  const GGS_lexicalAttributeInputArgumentAST * p = (const GGS_lexicalAttributeInputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalAttributeInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

