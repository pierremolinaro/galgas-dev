#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-23.h"

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

AC_GALGAS_root * GGS_analysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_analysisContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_analysisContext GGS_analysisContext::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_analysisContext result ;
  const GGS_analysisContext * p = (const GGS_analysisContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_analysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("analysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateLiteralUIntExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLiteralUIntExpressionAST::objectCompare (const GGS_templateLiteralUIntExpressionAST & inOperand) const {
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

GGS_templateLiteralUIntExpressionAST::GGS_templateLiteralUIntExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateLiteralUIntExpressionAST GGS_templateLiteralUIntExpressionAST::
init_21_ (const GGS_lbigint & in_mLiteralInt,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateLiteralUIntExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLiteralUIntExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateLiteralUIntExpressionAST_init_21_ (in_mLiteralInt, inCompiler) ;
  const GGS_templateLiteralUIntExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralUIntExpressionAST::
templateLiteralUIntExpressionAST_init_21_ (const GGS_lbigint & in_mLiteralInt,
                                           Compiler * /* inCompiler */) {
  mProperty_mLiteralInt = in_mLiteralInt ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralUIntExpressionAST::GGS_templateLiteralUIntExpressionAST (const cPtr_templateLiteralUIntExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralUIntExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_templateLiteralUIntExpressionAST::readProperty_mLiteralInt (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbigint () ;
  }else{
    cPtr_templateLiteralUIntExpressionAST * p = (cPtr_templateLiteralUIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralUIntExpressionAST) ;
    return p->mProperty_mLiteralInt ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralUIntExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralUIntExpressionAST::cPtr_templateLiteralUIntExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralInt () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralUIntExpressionAST::cPtr_templateLiteralUIntExpressionAST (const GGS_lbigint & in_mLiteralInt,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralInt () {
  mProperty_mLiteralInt = in_mLiteralInt ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateLiteralUIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ;
}

void cPtr_templateLiteralUIntExpressionAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@templateLiteralUIntExpressionAST:") ;
  mProperty_mLiteralInt.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateLiteralUIntExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLiteralUIntExpressionAST (mProperty_mLiteralInt, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLiteralUIntExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInt.printNonNullClassInstanceProperties ("mLiteralInt") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateLiteralUIntExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ("templateLiteralUIntExpressionAST",
                                                                                     & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLiteralUIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateLiteralUIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateLiteralUIntExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralUIntExpressionAST GGS_templateLiteralUIntExpressionAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateLiteralUIntExpressionAST result ;
  const GGS_templateLiteralUIntExpressionAST * p = (const GGS_templateLiteralUIntExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateLiteralUIntExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralUIntExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateLiteralDoubleExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLiteralDoubleExpressionAST::objectCompare (const GGS_templateLiteralDoubleExpressionAST & inOperand) const {
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

GGS_templateLiteralDoubleExpressionAST::GGS_templateLiteralDoubleExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateLiteralDoubleExpressionAST GGS_templateLiteralDoubleExpressionAST::
init_21_ (const GGS_ldouble & in_mLiteralDouble,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateLiteralDoubleExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLiteralDoubleExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateLiteralDoubleExpressionAST_init_21_ (in_mLiteralDouble, inCompiler) ;
  const GGS_templateLiteralDoubleExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralDoubleExpressionAST::
templateLiteralDoubleExpressionAST_init_21_ (const GGS_ldouble & in_mLiteralDouble,
                                             Compiler * /* inCompiler */) {
  mProperty_mLiteralDouble = in_mLiteralDouble ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralDoubleExpressionAST::GGS_templateLiteralDoubleExpressionAST (const cPtr_templateLiteralDoubleExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralDoubleExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ldouble GGS_templateLiteralDoubleExpressionAST::readProperty_mLiteralDouble (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ldouble () ;
  }else{
    cPtr_templateLiteralDoubleExpressionAST * p = (cPtr_templateLiteralDoubleExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralDoubleExpressionAST) ;
    return p->mProperty_mLiteralDouble ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralDoubleExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralDoubleExpressionAST::cPtr_templateLiteralDoubleExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralDouble () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralDoubleExpressionAST::cPtr_templateLiteralDoubleExpressionAST (const GGS_ldouble & in_mLiteralDouble,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralDouble () {
  mProperty_mLiteralDouble = in_mLiteralDouble ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateLiteralDoubleExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ;
}

void cPtr_templateLiteralDoubleExpressionAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@templateLiteralDoubleExpressionAST:") ;
  mProperty_mLiteralDouble.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateLiteralDoubleExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLiteralDoubleExpressionAST (mProperty_mLiteralDouble, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLiteralDoubleExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralDouble.printNonNullClassInstanceProperties ("mLiteralDouble") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateLiteralDoubleExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ("templateLiteralDoubleExpressionAST",
                                                                                       & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLiteralDoubleExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateLiteralDoubleExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateLiteralDoubleExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralDoubleExpressionAST GGS_templateLiteralDoubleExpressionAST::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateLiteralDoubleExpressionAST result ;
  const GGS_templateLiteralDoubleExpressionAST * p = (const GGS_templateLiteralDoubleExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateLiteralDoubleExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralDoubleExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertDeclaredLocalVariable'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::init (inCompiler COMMA_HERE), GGS_localVarValuation::class_func_declared (GGS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 31)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addICNS_file'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addICNS_5F_file (GGS_XcodeProjectDescriptor & ioObject,
                                      const GGS_string constinArgument_inFileName,
                                      GGS_string & outArgument_outFileRef,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 32)) ;
  }
  ioObject.mProperty_mICNS_5F_fileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas", 33)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@productionRuleListForGrammarAnalysis.element displayRule'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_displayRule (const GGS_productionRuleListForGrammarAnalysis_2E_element inObject,
                                  const GGS_string constinArgument_inSyntaxComponentName,
                                  GGS_string & ioArgument_ioGeneratedCode,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_currentNode_5040 = GGS_string ("P0start") ;
  GGS_rowList temp_0 = GGS_rowList::init (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 118)) ;
  GGS__32_stringlist temp_1 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 118)) ;
  temp_1.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (var_currentNode_5040, GGS_string ("[firstPoint] ()"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 118)) ;
  temp_0.plusPlusAssignOperation (GGS_rowList_2E_element::init_21_ (temp_1, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 118)) ;
  GGS_rowList var_rowArray_5079 = temp_0 ;
  GGS_string var_arrows_5147 = GGS_string::makeEmptyString () ;
  GGS_string var_arrowStyle_5173 = GGS_string ("--") ;
  GGS_uint var_column_5203 = GGS_uint (uint32_t (1U)) ;
  GGS_uint var_unusedMaxUsedRowIndex_5226 = GGS_uint (uint32_t (0U)) ;
  const GGS_productionRuleListForGrammarAnalysis_2E_element temp_2 = inObject ;
  UpEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_5269 (temp_2.readProperty_mInstructionList ()) ;
  while (enumerator_5269.hasCurrentObject ()) {
    callExtensionMethod_tikzNodeForSyntaxInstruction ((cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_5269.current_mInstruction (HERE).ptr (), var_rowArray_5079, GGS_uint (uint32_t (0U)), var_column_5203, var_currentNode_5040, var_arrowStyle_5173, var_arrows_5147, var_unusedMaxUsedRowIndex_5226, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 124)) ;
    enumerator_5269.gotoNextObject () ;
  }
  GGS_string var_lastNodeName_5667 ;
  {
  extensionSetter_appendRow (var_rowArray_5079, GGS_string ("[lastPoint] ()"), GGS_uint (uint32_t (0U)), var_column_5203, var_lastNodeName_5667, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)) ;
  }
  var_arrows_5147.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (var_currentNode_5040, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GGS_string (") -- ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (var_lastNodeName_5667, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)) ;
  const GGS_productionRuleListForGrammarAnalysis_2E_element temp_3 = inObject ;
  GGS_location var_loc_5787 = temp_3.readProperty_mLeftNonterminalSymbol ().readProperty_location () ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\ruleSubsection{").add_operation (function_escapeForTex (constinArgument_inSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 140)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 141)).add_operation (function_escapeForTex (var_loc_5787.getter_file (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 143)).getter_lastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas", 143)).getter_deletingPathExtension (SOURCE_FILE ("production-rules-in-tex.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 142)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 143)).add_operation (function_escapeForTex (var_loc_5787.getter_startLine (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 144)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 144)).add_operation (GGS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 144)).add_operation (GGS_string ("\\begin{tikzpicture}\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 145)).add_operation (GGS_string ("  \\matrix[column sep=\\ruleMatrixColumnSeparation, row sep=\\ruleMatrixRowSeparation] {\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 140)) ;
  DownEnumerator_rowList enumerator_6193 (var_rowArray_5079) ;
  while (enumerator_6193.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("    "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 149)) ;
    UpEnumerator__32_stringlist enumerator_6265 (enumerator_6193.current_columns (HERE)) ;
    while (enumerator_6265.hasCurrentObject ()) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, enumerator_6265.current (HERE).readProperty_mValue_30_ ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 152)) ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\node (").add_operation (enumerator_6265.current (HERE).readProperty_mValue_30_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)).add_operation (enumerator_6265.current (HERE).readProperty_mValue_31_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)).add_operation (GGS_string ("; & "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)) ;
      }
      enumerator_6265.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\\\\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 157)) ;
    enumerator_6193.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  };\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 159)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_arrows_5147, inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 161)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\end{tikzpicture}\n\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 162)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@procCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_procCallInstructionAST temp_0 = this ;
  UpEnumerator_actualParameterListAST enumerator_3311 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_3311.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_3311.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 75)) ;
    enumerator_3311.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@procCallInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature var_routineSignature_4296 ;
  GGS_bool var_isFilePrivate_4346 ;
  GGS_lstring var_routineMangledName_4392 ;
  const GGS_procCallInstructionAST temp_0 = this ;
  const GGS_procCallInstructionAST temp_1 = this ;
  extensionMethod_searchKey (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_routineMap (), temp_0.readProperty_mRoutineName (), temp_1.readProperty_mActualParameterList (), var_routineSignature_4296, var_isFilePrivate_4346, var_routineMangledName_4392, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 88)) ;
  GGS_lstring var_usefulnessName_4445 = function_procedureNameForUsefulEntitiesGraph (var_routineMangledName_4392, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 96)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_4445 COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 97)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_isFilePrivate_4346.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_procCallInstructionAST temp_3 = this ;
      GGS_location var_procDeclarationLocation_4673 = extensionGetter_locationForKey (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_routineMap (), temp_3.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 100)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_procCallInstructionAST temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mRoutineName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 101)).objectCompare (var_procDeclarationLocation_4673.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 101)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_procCallInstructionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mRoutineName ().readProperty_location (), GGS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_4673.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)), fixItArray7  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)) ;
        }
      }
    }
  }
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_5433 ;
  const GGS_procCallInstructionAST temp_8 = this ;
  const GGS_procCallInstructionAST temp_9 = this ;
  extensionMethod_analyzeRoutineArguments (temp_8.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_9.readProperty_mRoutineName (), GGS_string ("'").add_operation (var_routineMangledName_4392.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 112)).add_operation (GGS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 112)), var_routineSignature_4296, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5433, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 106)) ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_procCallInstructionForGeneration::init_21_routineMangledName_21_ (var_routineMangledName_4392, var_actualParameterListForGeneration_5433, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 119)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@procCallInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                        GGS_string & ioArgument_ioGeneratedCode,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_procCallInstructionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (temp_0.readProperty_routineMangledName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 144))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 144)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 145)) ;
  GGS_stringlist var_parameterCppNameList_6873 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_6920 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_6975 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_procCallInstructionForGeneration temp_1 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_7008 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_7008.hasCurrentObject ()) {
    GGS_string var_parameterCppName_7307 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_7008.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_6920, var_inputVariableList_6975, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_7307, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 151)) ;
    var_parameterCppNameList_6873.addAssignOperation (var_parameterCppName_7307  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 160)) ;
    enumerator_7008.gotoNextObject () ;
  }
  const GGS_procCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("routine_").add_operation (temp_2.readProperty_routineMangledName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 163)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 163)) ;
  UpEnumerator_stringlist enumerator_7525 (var_parameterCppNameList_6873) ;
  while (enumerator_7525.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_7525.current_mValue (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 165)) ;
    enumerator_7525.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)) ;
  }
  const GGS_procCallInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_routineMangledName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 169)) ;
  const GGS_procCallInstructionForGeneration temp_4 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_7855 (temp_4.readProperty_mActualParameterList ()) ;
  while (enumerator_7855.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_7855.current_mActualParameter (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 172)) ;
    enumerator_7855.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dropInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_dropInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dropInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_dropInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                 const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                 GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dropInstructionAST temp_0 = this ;
  UpEnumerator_lstringlist enumerator_4258 (temp_0.readProperty_mDropList ()) ;
  while (enumerator_4258.hasCurrentObject ()) {
    {
    extensionSetter_searchForDropAccess (ioArgument_ioVariableMap, enumerator_4258.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-drop.galgas", 94)) ;
    }
    enumerator_4258.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfAssignmentInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfAssignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 77)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfAssignmentInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_4184 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-assignment.galgas", 91)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-assignment.galgas", 91)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_4184.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 92)).operator_not (SOURCE_FILE ("instruction-self-assignment.galgas", 92)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfAssignmentInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 93)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_expression_4727 ;
      const GGS_selfAssignmentInstructionAST temp_4 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfAvailable_4184.readProperty_type (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4727, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 96)) ;
      {
      const GGS_selfAssignmentInstructionAST temp_5 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfAvailable_4184.readProperty_type (), var_expression_4727.readProperty_mResultType (), temp_5.readProperty_mInstructionLocation (), var_expression_4727, inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 106)) ;
      }
      const GGS_selfAssignmentInstructionAST temp_6 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_assignmentInstructionForGeneration::init_21__21__21__21__21__21__21_ (var_selfAvailable_4184.readProperty_type (), var_selfAvailable_4184.readProperty_type (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-self-assignment.galgas", 113)).readProperty_string (), var_expression_4727, temp_6.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 108)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfAssignmentInstructionAST temp_7 = this ;
    GenericArray <FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray8  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 118)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@superInitInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_superInitInstructionAST temp_0 = this ;
  UpEnumerator_actualOutputArgumentList enumerator_3759 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_3759.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_3759.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 95)) ;
    enumerator_3759.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@superInitInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_4498 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-super-init.galgas", 109)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-super-init.galgas", 109)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_selfAvailable_4498.readProperty_selfMutability ().objectCompare (GGS_selfMutability::class_func_initializer (SOURCE_FILE ("instruction-super-init.galgas", 110)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = extensionGetter_definition (var_selfAvailable_4498.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 111)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-super-init.galgas", 111)).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          switch (extensionGetter_definition (var_selfAvailable_4498.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 112)).readProperty_superType ().enumValue ()) {
          case GGS_unifiedTypeMapEntry::Enumeration::invalid:
            break ;
          case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
            {
              GGS_unifiedTypeMapElementClass_2E_weak extractedValue_4754_superType_0 ;
              extensionGetter_definition (var_selfAvailable_4498.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 112)).readProperty_superType ().getAssociatedValuesFor_element (extractedValue_4754_superType_0) ;
              GGS_unifiedTypeDefinition var_superTypeDefinition_4779 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) extractedValue_4754_superType_0.bang_unifiedTypeMapElementClass_2E_weak (inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 114)).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 114)) ;
              GGS_initializerMap var_superClassInitializerMap_4886 = var_superTypeDefinition_4779.readProperty_initializerMap () ;
              const GGS_superInitInstructionAST temp_1 = this ;
              const GGS_superInitInstructionAST temp_2 = this ;
              GGS_lstring var_signature_4960 = GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (temp_1.readProperty_mActualParameterList (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 117)), temp_2.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
              GGS_functionSignature var_formalSignature_5118 ;
              var_superClassInitializerMap_4886.method_searchKey (var_signature_4960, var_formalSignature_5118, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 118)) ;
              UpEnumerator_typedPropertyList enumerator_5234 (var_superTypeDefinition_4779.readProperty_allTypedPropertyList ()) ;
              while (enumerator_5234.hasCurrentObject ()) {
                GalgasBool test_3 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_3) {
                  test_3 = GGS_bool (ComparisonKind::equal, enumerator_5234.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("instruction-super-init.galgas", 121)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_3) {
                    {
                    const GGS_superInitInstructionAST temp_4 = this ;
                    GGS_unifiedTypeMapEntry joker_5454_3 ; // Joker input parameter
                    GGS_string joker_5454_2 ; // Joker input parameter
                    GGS_string joker_5454_1 ; // Joker input parameter
                    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (enumerator_5234.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 123)), temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), joker_5454_3, joker_5454_2, joker_5454_1, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 122)) ;
                    }
                  }
                }
                enumerator_5234.gotoNextObject () ;
              }
              const GGS_superInitInstructionAST temp_5 = this ;
              extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 128)) ;
              GGS_semanticExpressionListForGeneration var_actualParameterListForGeneration_5683 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
              const GGS_superInitInstructionAST temp_6 = this ;
              UpEnumerator_functionSignature enumerator_5783 (var_formalSignature_5118) ;
              UpEnumerator_actualOutputArgumentList enumerator_5818 (temp_6.readProperty_mActualParameterList ()) ;
              while (enumerator_5783.hasCurrentObject () && enumerator_5818.hasCurrentObject ()) {
                GGS_semanticExpressionForGeneration var_expression_6194 ;
                callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5818.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_5783.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_6194, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 134)) ;
                {
                routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_5783.current (HERE).readProperty_mFormalArgumentType (), var_expression_6194.readProperty_mResultType (), enumerator_5818.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_6194, inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 143)) ;
                }
                GalgasBool test_7 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_7) {
                  test_7 = GGS_bool (ComparisonKind::notEqual, enumerator_5783.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_5818.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_7) {
                    GGS_string temp_8 ;
                    const GalgasBool test_9 = GGS_bool (ComparisonKind::notEqual, enumerator_5783.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                    if (GalgasBool::boolTrue == test_9) {
                      temp_8 = enumerator_5783.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 151)) ;
                    }else if (GalgasBool::boolFalse == test_9) {
                      temp_8 = GGS_string::makeEmptyString () ;
                    }
                    GGS_string var_s_6546 = GGS_string ("!").add_operation (temp_8, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 150)) ;
                    GenericArray <FixItDescription> fixItArray10 ;
                    appendFixItActions (fixItArray10, EnumFixItKind::fixItReplace, var_s_6546) ;
                    inCompiler->emitSemanticError (enumerator_5818.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_6546, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 154)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 154)), fixItArray10  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 154)) ;
                  }
                }
                var_actualParameterListForGeneration_5683.addAssignOperation (var_expression_6194  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 158)) ;
                enumerator_5783.gotoNextObject () ;
                enumerator_5818.gotoNextObject () ;
              }
              const GGS_superInitInstructionAST temp_11 = this ;
              ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_superInitInstructionForGeneration::init_21__21__21__21_ (temp_11.readProperty_mInstructionLocation (), extensionGetter_initializerSignature (var_formalSignature_5118, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 163)), var_actualParameterListForGeneration_5683, var_superTypeDefinition_4779.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 161)) ;
            }
            break ;
          case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
            {
              const GGS_superInitInstructionAST temp_12 = this ;
              GenericArray <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GGS_string ("superinit  is not available, current class has no super class"), fixItArray13  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 168)) ;
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
    inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GGS_string ("superinit  should be call in a class initializer"), fixItArray15  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 171)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@superInitInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                         GGS_string & ioArgument_ioGeneratedCode,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist var_getterArgumentCppNameList_8565 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_superInitInstructionForGeneration temp_0 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_8606 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_8606.hasCurrentObject ()) {
    GGS_string var_argumentCppName_8825 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_8606.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_8825, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 198)) ;
    var_getterArgumentCppNameList_8565.addAssignOperation (var_argumentCppName_8825  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 205)) ;
    enumerator_8606.gotoNextObject () ;
  }
  const GGS_superInitInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_1.readProperty_mSuperTypeName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-super-init.galgas", 207)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 207)) ;
  const GGS_superInitInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_2.readProperty_mSuperInitializerSignature ().getter_identifierRepresentation (SOURCE_FILE ("instruction-super-init.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 208)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 209)) ;
  UpEnumerator_stringlist enumerator_9101 (var_getterArgumentCppNameList_8565) ;
  while (enumerator_9101.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_9101.current_mValue (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 211)) ;
    enumerator_9101.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 213)) COMMA_SOURCE_FILE ("instruction-super-init.galgas", 213)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 214)).add_operation (GGS_string (") ; \n"), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 214)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@warningInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_warningInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_warningInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLocationExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 87)) ;
  const GGS_warningInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mMessageExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 88)) ;
  const GGS_warningInstructionAST temp_2 = this ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.readProperty_mFixitListAST (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 89)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@warningInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_warningInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_locationExpression_5090 ;
  GGS_semanticExpressionForGeneration var_messageExpression_5118 ;
  GGS_fixitListForGeneration var_fixitListForGeneration_5145 ;
  {
  const GGS_warningInstructionAST temp_0 = this ;
  const GGS_warningInstructionAST temp_1 = this ;
  const GGS_warningInstructionAST temp_2 = this ;
  const GGS_warningInstructionAST temp_3 = this ;
  routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GGS_string ("warning"), ioArgument_ioVariableMap, var_locationExpression_5090, var_messageExpression_5118, var_fixitListForGeneration_5145, inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 104)) ;
  }
  const GGS_warningInstructionAST temp_4 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_warningInstructionForGeneration::init_21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), var_locationExpression_5090, var_messageExpression_5118, var_fixitListForGeneration_5145, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-warning.galgas", 120)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@warningInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_warningInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                       GGS_string & ioArgument_ioGeneratedCode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_receiverCppVarName_6599 ;
  const GGS_warningInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_6599, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 147)) ;
  GGS_string var_messageCppVarName_6807 ;
  const GGS_warningInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mWarningExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_6807, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 149)) ;
  GGS_string var_fixItArrayCppName_7057 ;
  const GGS_warningInstructionForGeneration temp_2 = this ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_7057, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 157)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 166)) COMMA_SOURCE_FILE ("instruction-warning.galgas", 166)) ;
  }
  const GGS_warningInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 167)).add_operation (GGS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 167)).add_operation (var_receiverCppVarName_6599, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 167)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 168)).add_operation (var_messageCppVarName_6807, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 168)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 169)).add_operation (var_fixItArrayCppName_7057, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 169)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 170)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 170)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 167)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@logInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_logInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_logInstructionAST temp_0 = this ;
  UpEnumerator_logListAST enumerator_4613 (temp_0.readProperty_mLogList ()) ;
  while (enumerator_4613.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_4613.current_mLogExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 124)) ;
    enumerator_4613.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@logInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_logInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_logInstructionAST temp_0 = this ;
  UpEnumerator_logListAST enumerator_5436 (temp_0.readProperty_mLogList ()) ;
  while (enumerator_5436.hasCurrentObject ()) {
    GGS_semanticExpressionForGeneration var_expression_5770 ;
    callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5436.current_mLogExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-log.galgas", 144)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5770, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 141)) ;
    ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_logInstructionForGeneration::init_21__21_ (enumerator_5436.current_mLogMessage (HERE), var_expression_5770, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-log.galgas", 151)) ;
    enumerator_5436.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@logInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_logInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                   GGS_string & ioArgument_ioGeneratedCode,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_logVar_6972 ;
  const GGS_logInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mLogExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_logVar_6972, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 174)) ;
  const GGS_logInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_logVar_6972.add_operation (GGS_string (".log ("), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 181)).add_operation (temp_1.readProperty_mLogMessage ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("instruction-log.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 181)) ;
  const GGS_logInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLogMessage ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 182)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 182)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ifInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ifInstructionAST temp_0 = this ;
  extensionMethod_enterExpressionListInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 138)) ;
  const GGS_ifInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 139)) ;
  const GGS_ifInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ifInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestListForGeneration var_testListForGeneration_7498 ;
  const GGS_ifInstructionAST temp_0 = this ;
  extensionMethod_analyzeSemanticExpressionList (temp_0.readProperty_mExpressions (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_testListForGeneration_7498, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 176)) ;
  GGS_semanticInstructionListForGeneration var_then_5F_instructionList_7920 ;
  {
  const GGS_ifInstructionAST temp_1 = this ;
  routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioVariableMap, var_then_5F_instructionList_7920, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 185)) ;
  }
  const GGS_ifInstructionAST temp_2 = this ;
  GGS_CommaSeparatedExpressionList var_expressions_7955 = temp_2.readProperty_mExpressions () ;
  {
  GGS_ifExpressionKind joker_8014 ; // Joker input parameter
  var_expressions_7955.setter_popLast (joker_8014, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 198)) ;
  }
  UpEnumerator_CommaSeparatedExpressionList enumerator_8027 (var_expressions_7955) ;
  while (enumerator_8027.hasCurrentObject ()) {
    {
    const GGS_ifInstructionAST temp_3 = this ;
    extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_3.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 200)) ;
    }
    {
    const GGS_ifInstructionAST temp_4 = this ;
    extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_4.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 201)) ;
    }
    enumerator_8027.gotoNextObject () ;
  }
  {
  const GGS_ifInstructionAST temp_5 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_5.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 203)) ;
  }
  GGS_semanticInstructionListForGeneration var_else_5F_instructionList_8655 ;
  {
  const GGS_ifInstructionAST temp_6 = this ;
  const GGS_ifInstructionAST temp_7 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_6.readProperty_m_5F_else_5F_instructionList (), temp_7.readProperty_mEndOf_5F_if_5F_instruction (), ioArgument_ioVariableMap, var_else_5F_instructionList_8655, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 205)) ;
  }
  {
  const GGS_ifInstructionAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOf_5F_if_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 218)) ;
  }
  const GGS_ifInstructionAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_ifInstructionForGeneration::init_21__21__21__21_ (temp_9.readProperty_mEndOf_5F_then_5F_branch (), var_testListForGeneration_7498, var_then_5F_instructionList_7920, var_else_5F_instructionList_8655, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas", 220)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ifInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                  GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                  GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                  const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                  GGS_string & ioArgument_ioGeneratedCode,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_testVar_10834 ;
  const GGS_ifInstructionForGeneration temp_0 = this ;
  extensionMethod_generateInstruction (temp_0.readProperty_mExpressions (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, var_testVar_10834, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 267)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolTrue == ").add_operation (var_testVar_10834, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 275)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 275)) ;
  {
  const GGS_ifInstructionForGeneration temp_1 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 276)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 284)) ;
  const GGS_ifInstructionForGeneration temp_2 = this ;
  UpEnumerator_ifTestListForGeneration enumerator_11215 (temp_2.readProperty_mExpressions ()) ;
  while (enumerator_11215.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 286)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 287)) ;
    enumerator_11215.gotoNextObject () ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_ifInstructionForGeneration temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::greaterThan, temp_4.readProperty_m_5F_else_5F_instructionList ().getter_count (SOURCE_FILE ("instruction-if.galgas", 290)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolFalse == ").add_operation (var_testVar_10834, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 291)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 291)) ;
      {
      const GGS_ifInstructionForGeneration temp_5 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_5.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 292)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 300)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@assignmentInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 159)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@assignmentInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_receiverType_6548 ;
  {
  const GGS_assignmentInstructionAST temp_0 = this ;
  GGS_string joker_6567 ; // Joker input parameter
  GGS_string joker_6576 ; // Joker input parameter
  extensionSetter_neutralAccess (ioArgument_ioVariableMap, temp_0.readProperty_mTargetVariableName (), var_receiverType_6548, joker_6567, joker_6576, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 172)) ;
  }
  GGS_unifiedTypeMapEntry var_targetType_6593 = var_receiverType_6548 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_assignmentInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_propertyMap var_propertyMap_6677 = extensionGetter_definition (var_targetType_6593, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 180)).readProperty_propertyMap () ;
      GGS_AccessControl var_accessControl_6783 ;
      GGS_bool var_isConstant_6802 ;
      const GGS_assignmentInstructionAST temp_3 = this ;
      var_propertyMap_6677.method_searchKey (temp_3.readProperty_mOptionalProperty (), var_accessControl_6783, var_isConstant_6802, var_targetType_6593, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 181)) ;
      const GGS_assignmentInstructionAST temp_4 = this ;
      extensionMethod_checkSetAccess (var_accessControl_6783, constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_4.readProperty_mOptionalProperty ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 182)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_isConstant_6802.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_assignmentInstructionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mOptionalProperty ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 184)) ;
        }
      }
    }
  }
  GGS_semanticExpressionForGeneration var_expression_7368 ;
  const GGS_assignmentInstructionAST temp_8 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_8.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_6593, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_7368, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 188)) ;
  {
  const GGS_assignmentInstructionAST temp_9 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_6593, var_expression_7368.readProperty_mResultType (), temp_9.readProperty_mInstructionLocation (), var_expression_7368, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 198)) ;
  }
  GGS_string var_targetVariableCppName_7627 ;
  GGS_string var_nameForCheckingFormalParameterUsing_7665 ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_assignmentInstructionAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::equal, temp_11.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      {
      const GGS_assignmentInstructionAST temp_12 = this ;
      GGS_unifiedTypeMapEntry joker_7835 ; // Joker input parameter
      extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_12.readProperty_mTargetVariableName (), joker_7835, var_targetVariableCppName_7627, var_nameForCheckingFormalParameterUsing_7665, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 208)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    {
    const GGS_assignmentInstructionAST temp_13 = this ;
    GGS_unifiedTypeMapEntry joker_8021 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_13.readProperty_mTargetVariableName (), joker_8021, var_targetVariableCppName_7627, var_nameForCheckingFormalParameterUsing_7665, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 215)) ;
    }
  }
  const GGS_assignmentInstructionAST temp_14 = this ;
  const GGS_assignmentInstructionAST temp_15 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_assignmentInstructionForGeneration::init_21__21__21__21__21__21__21_ (var_receiverType_6548, var_targetType_6593, var_targetVariableCppName_7627, var_nameForCheckingFormalParameterUsing_7665, temp_14.readProperty_mOptionalProperty ().readProperty_string (), var_expression_7368, temp_15.readProperty_mTargetVariableName ().readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 223)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfPropertyAssignmentInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfPropertyAssignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 250)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfPropertyAssignmentInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_9841 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-assignment.galgas", 262)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-assignment.galgas", 262)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_propertiesAreMutable (var_selfAvailable_9841.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 263)).operator_not (SOURCE_FILE ("instruction-assignment.galgas", 263)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfPropertyAssignmentInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' property not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 264)) ;
        }
      }
      GGS_propertyMap var_propertyMap_10088 = extensionGetter_definition (var_selfAvailable_9841.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 266)).readProperty_propertyMap () ;
      GGS_bool var_isConstant_10211 ;
      GGS_unifiedTypeMapEntry var_targetType_10227 ;
      const GGS_selfPropertyAssignmentInstructionAST temp_4 = this ;
      GGS_AccessControl joker_10203 ; // Joker input parameter
      var_propertyMap_10088.method_searchKey (temp_4.readProperty_mTargetSelfPropertyName (), joker_10203, var_isConstant_10211, var_targetType_10227, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 267)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_isConstant_10211.operator_and (var_selfAvailable_9841.readProperty_selfMutability ().getter_isInitializer (SOURCE_FILE ("instruction-assignment.galgas", 268)).operator_not (SOURCE_FILE ("instruction-assignment.galgas", 268)) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 268)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_selfPropertyAssignmentInstructionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mTargetSelfPropertyName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 269)) ;
        }
      }
      const GGS_selfPropertyAssignmentInstructionAST temp_8 = this ;
      GGS_string var_targetVariableCppName_10421 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 271)).add_operation (temp_8.readProperty_mTargetSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 272)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_selfPropertyAssignmentInstructionAST temp_10 = this ;
        test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          GGS_propertyMap var_propertyMap_10686 = extensionGetter_definition (var_targetType_10227, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 275)).readProperty_propertyMap () ;
          GGS_AccessControl var_accessControl_10794 ;
          GGS_bool var_isConstant_10813 ;
          const GGS_selfPropertyAssignmentInstructionAST temp_11 = this ;
          var_propertyMap_10686.method_searchKey (temp_11.readProperty_mOptionalProperty (), var_accessControl_10794, var_isConstant_10813, var_targetType_10227, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 276)) ;
          const GGS_selfPropertyAssignmentInstructionAST temp_12 = this ;
          extensionMethod_checkSetAccess (var_accessControl_10794, constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_12.readProperty_mOptionalProperty ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 277)) ;
          GalgasBool test_13 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_13) {
            test_13 = var_isConstant_10813.boolEnum () ;
            if (GalgasBool::boolTrue == test_13) {
              const GGS_selfPropertyAssignmentInstructionAST temp_14 = this ;
              GenericArray <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mOptionalProperty ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray15  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 279)) ;
            }
          }
        }
      }
      GGS_semanticExpressionForGeneration var_expression_11416 ;
      const GGS_selfPropertyAssignmentInstructionAST temp_16 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_16.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_10227, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_11416, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 283)) ;
      {
      const GGS_selfPropertyAssignmentInstructionAST temp_17 = this ;
      const GGS_selfPropertyAssignmentInstructionAST temp_18 = this ;
      GGS_unifiedTypeMapEntry joker_11572_3 ; // Joker input parameter
      GGS_string joker_11572_2 ; // Joker input parameter
      GGS_string joker_11572_1 ; // Joker input parameter
      extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (temp_17.readProperty_mTargetSelfPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 294)), temp_18.readProperty_mTargetSelfPropertyName ().readProperty_location (), inCompiler COMMA_HERE), joker_11572_3, joker_11572_2, joker_11572_1, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 293)) ;
      }
      {
      const GGS_selfPropertyAssignmentInstructionAST temp_19 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_10227, var_expression_11416.readProperty_mResultType (), temp_19.readProperty_mInstructionLocation (), var_expression_11416, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 297)) ;
      }
      const GGS_selfPropertyAssignmentInstructionAST temp_20 = this ;
      const GGS_selfPropertyAssignmentInstructionAST temp_21 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_assignmentInstructionForGeneration::init_21__21__21__21__21__21__21_ (var_selfAvailable_9841.readProperty_type (), var_targetType_10227, var_targetVariableCppName_10421, constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), temp_20.readProperty_mOptionalProperty ().readProperty_string (), var_expression_11416, temp_21.readProperty_mTargetSelfPropertyName ().readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 299)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfPropertyAssignmentInstructionAST temp_22 = this ;
    GenericArray <FixItDescription> fixItArray23 ;
    inCompiler->emitSemanticError (temp_22.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray23  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 309)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@assignmentInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GGS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_sourceVar_13630 ;
  const GGS_assignmentInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_13630, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 337)) ;
  {
  const GGS_assignmentInstructionForGeneration temp_1 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_1.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-assignment.galgas", 344)) ;
  }
  const GGS_assignmentInstructionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 346)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_assignmentInstructionForGeneration temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mOptionalProperty ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_assignmentInstructionForGeneration temp_5 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(temp_5.readProperty_mTargetCppName ().add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 348)).add_operation (var_sourceVar_13630, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 348)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 348)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_assignmentInstructionForGeneration temp_7 = this ;
      test_6 = extensionGetter_definition (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 349)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-assignment.galgas", 349)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_assignmentInstructionForGeneration temp_8 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(temp_8.readProperty_mTargetCppName ().add_operation (GGS_string (".setProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 352)) ;
        const GGS_assignmentInstructionForGeneration temp_9 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(temp_9.readProperty_mOptionalProperty ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 353)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" (").add_operation (var_sourceVar_13630, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 354)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 354)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      const GGS_assignmentInstructionForGeneration temp_10 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(temp_10.readProperty_mTargetCppName ().add_operation (GGS_string (".mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 362)) ;
      const GGS_assignmentInstructionForGeneration temp_11 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(temp_11.readProperty_mOptionalProperty ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 363)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 363)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" = ").add_operation (var_sourceVar_13630, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 364)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 364)) ;
    }
  }
  {
  const GGS_assignmentInstructionForGeneration temp_12 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_12.readProperty_mTargetCppName () COMMA_SOURCE_FILE ("instruction-assignment.galgas", 366)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@switchInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 227)) ;
  const GGS_switchInstructionAST temp_1 = this ;
  UpEnumerator_switchBranchesAST enumerator_8038 (temp_1.readProperty_mBranches ()) ;
  while (enumerator_8038.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_8038.current (HERE).readProperty_mInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 229)) ;
    enumerator_8038.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@switchInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_switchExpression_9005 ;
  const GGS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-switch.galgas", 245)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_switchExpression_9005, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 242)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_typeKindEnum_2E_enumType var_enumType_9097 = extensionGetter_definition (var_switchExpression_9005.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 252)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("instruction-switch.galgas", 252)).unwrappedValue () ;
    if (!extensionGetter_definition (var_switchExpression_9005.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 252)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("instruction-switch.galgas", 252)).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GGS_stringset var_constantsNamedInSwitchInstruction_9223 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      {
      extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 256)) ;
      }
      GGS_switchBranchesForGeneration var_switchBranchesForGeneration_9380 = GGS_switchBranchesForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_switchInstructionAST temp_2 = this ;
      UpEnumerator_switchBranchesAST enumerator_9439 (temp_2.readProperty_mBranches ()) ;
      while (enumerator_9439.hasCurrentObject ()) {
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 259)) ;
        }
        GGS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_9541 = GGS_extractedAssociatedValuesForGeneration::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_9621 (enumerator_9439.current (HERE).readProperty_mSwitchConstantList ()) ;
        while (enumerator_9621.hasCurrentObject ()) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_enumType_9097.readProperty_constantMap ().getter_hasKey (enumerator_9621.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 262)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = var_constantsNamedInSwitchInstruction_9223.getter_hasKey (enumerator_9621.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 263)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  GenericArray <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (enumerator_9621.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_9621.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 265)).add_operation (GGS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 265)), fixItArray5  COMMA_SOURCE_FILE ("instruction-switch.galgas", 264)) ;
                }
              }
              var_constantsNamedInSwitchInstruction_9223.plusPlusAssignOperation (enumerator_9621.current (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("instruction-switch.galgas", 268)) ;
              GGS_associatedValueDescriptorList var_associatedTypeList_10096 ;
              GGS_uint joker_10088 ; // Joker input parameter
              var_enumType_9097.readProperty_constantMap ().method_searchKey (enumerator_9621.current (HERE), joker_10088, var_associatedTypeList_10096, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 269)) ;
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_10096.getter_count (SOURCE_FILE ("instruction-switch.galgas", 270)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, enumerator_9439.current (HERE).readProperty_mAssociatedValuesExtraction ().getter_count (SOURCE_FILE ("instruction-switch.galgas", 270)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 270)).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  GenericArray <FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_9621.current (HERE).readProperty_location (), GGS_string ("the associated values of '").add_operation (enumerator_9621.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 272)).add_operation (GGS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 272)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 271)) ;
                }
              }
              if (GalgasBool::boolFalse == test_6) {
                GalgasBool test_8 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_8) {
                  test_8 = GGS_bool (ComparisonKind::equal, var_associatedTypeList_10096.getter_count (SOURCE_FILE ("instruction-switch.galgas", 274)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_9439.current (HERE).readProperty_mAssociatedValuesExtraction ().getter_count (SOURCE_FILE ("instruction-switch.galgas", 274)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 274)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_8) {
                    GenericArray <FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (enumerator_9621.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_9621.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 276)).add_operation (GGS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 276)), fixItArray9  COMMA_SOURCE_FILE ("instruction-switch.galgas", 275)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_8) {
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = GGS_bool (ComparisonKind::notEqual, var_associatedTypeList_10096.getter_count (SOURCE_FILE ("instruction-switch.galgas", 278)).objectCompare (enumerator_9439.current (HERE).readProperty_mAssociatedValuesExtraction ().getter_count (SOURCE_FILE ("instruction-switch.galgas", 278)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      GGS_string temp_11 ;
                      const GalgasBool test_12 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_10096.getter_count (SOURCE_FILE ("instruction-switch.galgas", 282)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_12) {
                        temp_11 = GGS_string ("s") ;
                      }else if (GalgasBool::boolFalse == test_12) {
                        temp_11 = GGS_string::makeEmptyString () ;
                      }
                      GenericArray <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (enumerator_9621.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_9621.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 280)).add_operation (GGS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 280)).add_operation (var_associatedTypeList_10096.getter_count (SOURCE_FILE ("instruction-switch.galgas", 280)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 280)).add_operation (GGS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 280)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)), fixItArray13  COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_10) {
                    UpEnumerator_associatedValueDescriptorList enumerator_10989 (var_associatedTypeList_10096) ;
                    UpEnumerator_switchExtractedValuesListAST enumerator_11035 (enumerator_9439.current (HERE).readProperty_mAssociatedValuesExtraction ()) ;
                    GGS_uint index_10971 (uint32_t (0)) ;
                    while (enumerator_10989.hasCurrentObject () && enumerator_11035.hasCurrentObject ()) {
                      GalgasBool test_14 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_14) {
                        test_14 = GGS_bool (ComparisonKind::notEqual, enumerator_11035.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_14) {
                          GalgasBool test_15 = GalgasBool::boolTrue ;
                          if (GalgasBool::boolTrue == test_15) {
                            test_15 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_10989.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_11035.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_string ())).boolEnum () ;
                            if (GalgasBool::boolTrue == test_15) {
                              GenericArray <FixItDescription> fixItArray16 ;
                              inCompiler->emitSemanticError (enumerator_11035.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_location (), GGS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_10989.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 290)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 290)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 290)), fixItArray16  COMMA_SOURCE_FILE ("instruction-switch.galgas", 289)) ;
                            }
                          }
                        }
                      }
                      GGS_string var_cppName_11564 = GGS_string ("extractedValue_").add_operation (enumerator_11035.current (HERE).readProperty_mExtractedValueName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 295)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 295)).add_operation (enumerator_11035.current (HERE).readProperty_mExtractedValueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 296)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 296)).add_operation (index_10971.getter_string (SOURCE_FILE ("instruction-switch.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 296)) ;
                      var_extractedAssociatedValuesForGeneration_9541.addAssignOperation (enumerator_10989.current (HERE).readProperty_type (), var_cppName_11564, enumerator_10989.current (HERE).readProperty_name ()  COMMA_SOURCE_FILE ("instruction-switch.galgas", 297)) ;
                      GalgasBool test_17 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_17) {
                        test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_11035.current (HERE).readProperty_mExtractedValueName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_17) {
                          GalgasBool test_18 = GalgasBool::boolTrue ;
                          if (GalgasBool::boolTrue == test_18) {
                            test_18 = enumerator_11035.current (HERE).readProperty_mMarkedAsUnused ().boolEnum () ;
                            if (GalgasBool::boolTrue == test_18) {
                              {
                              extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_11035.current (HERE).readProperty_mExtractedValueName (), enumerator_10989.current (HERE).readProperty_type (), var_cppName_11564, var_cppName_11564, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)) ;
                              }
                            }
                          }
                          if (GalgasBool::boolFalse == test_18) {
                            {
                            extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, enumerator_11035.current (HERE).readProperty_mExtractedValueName (), enumerator_10989.current (HERE).readProperty_type (), var_cppName_11564, var_cppName_11564, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 310)) ;
                            }
                          }
                        }
                      }
                      enumerator_10989.gotoNextObject () ;
                      enumerator_11035.gotoNextObject () ;
                      index_10971.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 285)) ;
                    }
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GenericArray <FixItDescription> fixItArray19 ;
            inCompiler->emitSemanticError (enumerator_9621.current (HERE).readProperty_location (), GGS_string ("'").add_operation (enumerator_9621.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 322)).add_operation (GGS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 322)).add_operation (extensionGetter_definition (var_switchExpression_9005.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 323)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 322)).add_operation (GGS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 323)), fixItArray19  COMMA_SOURCE_FILE ("instruction-switch.galgas", 321)) ;
          }
          enumerator_9621.gotoNextObject () ;
        }
        GGS_semanticInstructionListForGeneration var_instructionList_13320 ;
        {
        routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), enumerator_9439.current (HERE).readProperty_mInstructions (), ioArgument_ioVariableMap, var_instructionList_13320, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 327)) ;
        }
        {
        extensionSetter_closeBranch (ioArgument_ioVariableMap, enumerator_9439.current (HERE).readProperty_mEndOfBranch (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 339)) ;
        }
        var_switchBranchesForGeneration_9380.addAssignOperation (enumerator_9439.current (HERE).readProperty_mSwitchConstantList (), var_extractedAssociatedValuesForGeneration_9541, enumerator_9439.current (HERE).readProperty_mEndOfBranch ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 343)), var_instructionList_13320  COMMA_SOURCE_FILE ("instruction-switch.galgas", 340)) ;
        enumerator_9439.gotoNextObject () ;
      }
      {
      const GGS_switchInstructionAST temp_20 = this ;
      extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_20.readProperty_mEndOf_5F_switch_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 346)) ;
      }
      GGS_stringset var_forgottenConstants_13745 = var_enumType_9097.readProperty_constantMap ().getter_keySet (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 348)).substract_operation (var_constantsNamedInSwitchInstruction_9223, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 348)) ;
      GalgasBool test_21 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_21) {
        test_21 = GGS_bool (ComparisonKind::greaterThan, var_forgottenConstants_13745.getter_count (SOURCE_FILE ("instruction-switch.galgas", 349)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_21) {
          GGS_string var_s_13893 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_13913 (var_forgottenConstants_13745) ;
          while (enumerator_13913.hasCurrentObject ()) {
            var_s_13893.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_13913.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 352)) ;
            enumerator_13913.gotoNextObject () ;
          }
          const GGS_switchInstructionAST temp_22 = this ;
          GenericArray <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (temp_22.readProperty_mEndOf_5F_switch_5F_instruction (), GGS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_13893, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 355)), fixItArray23  COMMA_SOURCE_FILE ("instruction-switch.galgas", 354)) ;
        }
      }
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_switchInstructionForGeneration::init_21__21__21_ (var_switchExpression_9005.readProperty_mResultType (), var_switchExpression_9005, var_switchBranchesForGeneration_9380, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 359)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_switchInstructionAST temp_24 = this ;
    GenericArray <FixItDescription> fixItArray25 ;
    inCompiler->emitSemanticError (temp_24.readProperty_mEndOfSwitchExpression (), GGS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (extensionGetter_definition (var_switchExpression_9005.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 367)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 366)).add_operation (GGS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 367)), fixItArray25  COMMA_SOURCE_FILE ("instruction-switch.galgas", 365)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@switchInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GGS_string & ioArgument_ioGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_switchVar_16561 ;
  const GGS_switchInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar_16561, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 412)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (").add_operation (var_switchVar_16561, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 419)).add_operation (GGS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 419)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 419)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 420)) ;
  const GGS_switchInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_1.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 421)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 421)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::invalid:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 422)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 423)) ;
  const GGS_switchInstructionForGeneration temp_2 = this ;
  UpEnumerator_switchBranchesForGeneration enumerator_16876 (temp_2.readProperty_mBranches ()) ;
  while (enumerator_16876.hasCurrentObject ()) {
    UpEnumerator__5B_lstring_5D_ enumerator_16922 (enumerator_16876.current (HERE).readProperty_mSwitchConstantList ()) ;
    while (enumerator_16922.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 426)) ;
      const GGS_switchInstructionForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_3.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 427)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 427)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::enum_"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 428)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_16922.current (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 429)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (":\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 430)) ;
      enumerator_16922.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 432)) ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_16876.current (HERE).readProperty_mInstructions ().getter_count (SOURCE_FILE ("instruction-switch.galgas", 433)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 434)) ;
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::greaterThan, enumerator_16876.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ().getter_count (SOURCE_FILE ("instruction-switch.galgas", 435)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            UpEnumerator_extractedAssociatedValuesForGeneration enumerator_17472 (enumerator_16876.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
            while (enumerator_17472.hasCurrentObject ()) {
              extensionMethod_addHeaderFileName (enumerator_17472.current (HERE).readProperty_mType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 437)) ;
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_17472.current (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 438)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 438)) ;
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (enumerator_17472.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 439)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 439)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 439)) ;
              enumerator_17472.gotoNextObject () ;
            }
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_switchVar_16561, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 441)).add_operation (GGS_string (".getAssociatedValuesFor_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 441)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 441)) ;
            ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_16876.current (HERE).readProperty_mSwitchConstantList ().readSubscript__3F_ (GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 442)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 442)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 442)) ;
            UpEnumerator_extractedAssociatedValuesForGeneration enumerator_17975 (enumerator_16876.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
            while (enumerator_17975.hasCurrentObject ()) {
              ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_17975.current (HERE).readProperty_mCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 444)) ;
              enumerator_17975.gotoNextObject () ;
              if (enumerator_17975.hasCurrentObject ()) {
                ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 445)) ;
              }
            }
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 447)) ;
          }
        }
        {
        routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_16876.current (HERE).readProperty_mInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 449)) ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 457)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 459)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 460)) ;
    }
    enumerator_16876.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 462)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@superMethodCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_superMethodCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_superMethodCallInstructionAST temp_0 = this ;
  UpEnumerator_actualParameterListAST enumerator_3946 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_3946.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_3946.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 98)) ;
    enumerator_3946.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@superMethodCallInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_superMethodCallInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GGS_localVarManager & ioArgument_ioVariableMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_selfType_4691 ;
  switch (constinArgument_inAnalysisContext.readProperty_selfAvailability ().enumValue ()) {
  case GGS_selfAvailability::Enumeration::invalid:
    break ;
  case GGS_selfAvailability::Enumeration::enum_none:
    {
      const GGS_superMethodCallInstructionAST temp_0 = this ;
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.readProperty_mMethodName ().readProperty_location (), GGS_string ("'super' is not available in this context"), fixItArray1  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 115)) ;
      var_selfType_4691.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_selfAvailability::Enumeration::enum_available:
    {
      GGS_unifiedTypeMapEntry extractedValue_4894_type_0 ;
      GGS_selfMutability extractedValue_4922_selfMutability_1 ;
      constinArgument_inAnalysisContext.readProperty_selfAvailability ().getAssociatedValuesFor_available (extractedValue_4894_type_0, extractedValue_4922_selfMutability_1) ;
      var_selfType_4691 = extractedValue_4894_type_0 ;
    }
    break ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_selfType_4691, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 120)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-super-method-call.galgas", 120)).operator_not (SOURCE_FILE ("instruction-super-method-call.galgas", 120)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_superMethodCallInstructionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mMethodName ().readProperty_location (), GGS_string ("self type is not a class"), fixItArray4  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 121)) ;
    }
  }
  GGS_formalParameterSignature var_routineSignature_5273 ;
  GGS_bool var_hasCompilerArgument_5310 ;
  GGS_string var_errorMessage_5350 ;
  const GGS_superMethodCallInstructionAST temp_5 = this ;
  GGS_methodKind joker_5247 ; // Joker input parameter
  GGS_location joker_5296 ; // Joker input parameter
  GGS_methodQualifier joker_5336 ; // Joker input parameter
  extensionGetter_definition (var_selfType_4691, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 124)).readProperty_instanceMethodMap ().method_searchKey (temp_5.readProperty_mMethodName (), joker_5247, var_routineSignature_5273, joker_5296, var_hasCompilerArgument_5310, joker_5336, var_errorMessage_5350, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 124)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::notEqual, var_errorMessage_5350.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_superMethodCallInstructionAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mMethodName ().readProperty_location (), var_errorMessage_5350, fixItArray8  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 134)) ;
    }
  }
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_5902 ;
  const GGS_superMethodCallInstructionAST temp_9 = this ;
  const GGS_superMethodCallInstructionAST temp_10 = this ;
  const GGS_superMethodCallInstructionAST temp_11 = this ;
  extensionMethod_analyzeRoutineArguments (temp_9.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_10.readProperty_mMethodName (), GGS_string ("'").add_operation (temp_11.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 143)).add_operation (GGS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 143)), var_routineSignature_5273, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5902, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 137)) ;
  GGS_unifiedTypeMapEntry var_baseType_5999 = var_selfType_4691 ;
  GGS_bool var_searching_6027 = GGS_bool (true) ;
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("instruction-super-method-call.galgas", 152)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      if (GGS_uint::class_func_max (SOURCE_FILE ("instruction-super-method-call.galgas", 153)).isValid ()) {
        uint32_t variant_6084 = GGS_uint::class_func_max (SOURCE_FILE ("instruction-super-method-call.galgas", 153)).uintValue () ;
        bool loop_6084 = true ;
        while (loop_6084) {
          loop_6084 = var_searching_6027.isValid () ;
          if (loop_6084) {
            loop_6084 = var_searching_6027.boolValue () ;
          }
          if (loop_6084 && (0 == variant_6084)) {
            loop_6084 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-super-method-call.galgas", 153)) ;
          }
          if (loop_6084) {
            variant_6084 -= 1 ;
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              test_13 = extensionGetter_definition (var_baseType_5999, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 154)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-super-method-call.galgas", 154)).boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                var_searching_6027 = GGS_bool (false) ;
              }
            }
            if (GalgasBool::boolFalse == test_13) {
              GalgasBool test_14 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_14) {
                const GGS_superMethodCallInstructionAST temp_15 = this ;
                test_14 = extensionGetter_definition (extensionGetter_definition (var_baseType_5999, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 157)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 157)).readProperty_instanceMethodMap ().getter_hasKey (temp_15.readProperty_mMethodName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 157)).boolEnum () ;
                if (GalgasBool::boolTrue == test_14) {
                  var_baseType_5999 = extensionGetter_definition (var_baseType_5999, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 158)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_14) {
                var_searching_6027 = GGS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GGS_superMethodCallInstructionAST temp_16 = this ;
  const GGS_superMethodCallInstructionAST temp_17 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_superMethodCallInstructionForGeneration::init_21__21__21__21__21_ (temp_16.readProperty_mInstructionLocation (), temp_17.readProperty_mMethodName ().readProperty_string (), var_actualParameterListForGeneration_5902, var_hasCompilerArgument_5310, var_baseType_5999, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 166)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@superMethodCallInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_superMethodCallInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                               GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                               GGS_string & ioArgument_ioGeneratedCode,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist var_parameterCppNameList_7941 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_7987 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_8041 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_superMethodCallInstructionForGeneration temp_0 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_8085 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_8085.hasCurrentObject ()) {
    GGS_string var_parameterCppName_8330 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_8085.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_7987, var_inputVariableList_8041, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_8330, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 204)) ;
    var_parameterCppNameList_7941.addAssignOperation (var_parameterCppName_8330  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 205)) ;
    enumerator_8085.gotoNextObject () ;
  }
  const GGS_superMethodCallInstructionForGeneration temp_1 = this ;
  const GGS_superMethodCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("method-").add_operation (extensionGetter_definition (temp_1.readProperty_mBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 208)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-super-method-call.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 208)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 208)).add_operation (temp_2.readProperty_mMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-super-method-call.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 208))  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 208)) ;
  const GGS_superMethodCallInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("cPtr_").add_operation (extensionGetter_definition (temp_3.readProperty_mBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 209)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-super-method-call.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 209)) ;
  const GGS_superMethodCallInstructionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::method_").add_operation (temp_4.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-super-method-call.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 210)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 210)) ;
  UpEnumerator_stringlist enumerator_8776 (var_parameterCppNameList_7941) ;
  while (enumerator_8776.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_8776.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 212)) ;
    enumerator_8776.gotoNextObject () ;
    if (enumerator_8776.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 213)) ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::equal, var_parameterCppNameList_7941.getter_count (SOURCE_FILE ("instruction-super-method-call.galgas", 215)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_superMethodCallInstructionForGeneration temp_7 = this ;
        test_6 = temp_7.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 217)) COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 217)) ;
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 218)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 219)) ;
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
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 222)) COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 222)) ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 223)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 223)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 224)) ;
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 226)) ;
    }
  }
  const GGS_superMethodCallInstructionForGeneration temp_10 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_sourceFile (temp_10.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 228)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 228)) ;
  const GGS_superMethodCallInstructionForGeneration temp_11 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_9496 (temp_11.readProperty_mActualParameterList ()) ;
  while (enumerator_9496.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_9496.current_mActualParameter (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 231)) ;
    enumerator_9496.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@loopInstructionWithoutVariantAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_loopInstructionWithoutVariantAST temp_0 = this ;
  extensionMethod_enterExpressionListInSemanticContext (temp_0.readProperty_mLoopExpression (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 110)) ;
  const GGS_loopInstructionWithoutVariantAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mFirstInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 111)) ;
  const GGS_loopInstructionWithoutVariantAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mSecondInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 112)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@loopInstructionWithoutVariantAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestListForGeneration var_testListForGeneration_5785 ;
  const GGS_loopInstructionWithoutVariantAST temp_0 = this ;
  extensionMethod_analyzeSemanticExpressionList (temp_0.readProperty_mLoopExpression (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_testListForGeneration_5785, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 125)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 134)) ;
  }
  GGS_semanticInstructionListForGeneration var_first_5F_instructionList_6333 ;
  {
  const GGS_loopInstructionWithoutVariantAST temp_1 = this ;
  const GGS_loopInstructionWithoutVariantAST temp_2 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_1.readProperty_mFirstInstructions (), temp_2.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_6333, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 136)) ;
  }
  GGS_semanticInstructionListForGeneration var_second_5F_instructionList_6779 ;
  {
  const GGS_loopInstructionWithoutVariantAST temp_3 = this ;
  const GGS_loopInstructionWithoutVariantAST temp_4 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_3.readProperty_mSecondInstructions (), temp_4.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_6779, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 150)) ;
  }
  {
  const GGS_loopInstructionWithoutVariantAST temp_5 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_5.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 164)) ;
  }
  const GGS_loopInstructionWithoutVariantAST temp_6 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_loopInstructionWithoutVariantForGeneration::init_21__21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_first_5F_instructionList_6333, var_testListForGeneration_5785, var_second_5F_instructionList_6779, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 166)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@loopInstructionWithoutVariantForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                  GGS_string & ioArgument_ioGeneratedCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_loopInstructionWithoutVariantForGeneration temp_0 = this ;
  GGS_string var_loopVar_8292 = GGS_string ("loop_").add_operation (temp_0.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 195)).getter_string (SOURCE_FILE ("instruction-loop-without-variant.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 195)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("bool ").add_operation (var_loopVar_8292, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 196)).add_operation (GGS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 196)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while (").add_operation (var_loopVar_8292, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 197)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 197)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 198)) ;
  }
  {
  const GGS_loopInstructionWithoutVariantForGeneration temp_1 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_1.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 199)) ;
  }
  GGS_string var_loopExpressionVar_8912 ;
  const GGS_loopInstructionWithoutVariantForGeneration temp_2 = this ;
  extensionMethod_generateInstruction (temp_2.readProperty_mLoopExpression (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, var_loopExpressionVar_8912, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 207)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_loopVar_8292.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 214)).add_operation (var_loopExpressionVar_8912, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 214)).add_operation (GGS_string (" == GalgasBool::boolTrue ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 214)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_loopVar_8292, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 218)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 218)) ;
  {
  const GGS_loopInstructionWithoutVariantForGeneration temp_3 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_3.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 219)) ;
  }
  GGS_bool var_first_9491 = GGS_bool (true) ;
  const GGS_loopInstructionWithoutVariantForGeneration temp_4 = this ;
  UpEnumerator_ifTestListForGeneration enumerator_9513 (temp_4.readProperty_mLoopExpression ()) ;
  while (enumerator_9513.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_first_9491.boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        var_first_9491 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 232)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_loopVar_8292, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 233)).add_operation (GGS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 233)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 235)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 236)) ;
    }
    enumerator_9513.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 238)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 239)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 240)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typeMethodCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_typeMethodCallInstructionAST temp_0 = this ;
  UpEnumerator_actualParameterListAST enumerator_3814 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_3814.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_3814.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 87)) ;
    enumerator_3814.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typeMethodCallInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_typeMethodCallInstructionAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_type_4695 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 103)) ;
  GGS_formalParameterSignature var_routineSignature_4849 ;
  GGS_bool var_hasCompilerArgument_4871 ;
  const GGS_typeMethodCallInstructionAST temp_1 = this ;
  extensionGetter_definition (var_type_4695, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 105)).readProperty_classMethodMap ().method_searchKey (temp_1.readProperty_mMethodName (), var_routineSignature_4849, var_hasCompilerArgument_4871, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 105)) ;
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_5310 ;
  const GGS_typeMethodCallInstructionAST temp_2 = this ;
  const GGS_typeMethodCallInstructionAST temp_3 = this ;
  const GGS_typeMethodCallInstructionAST temp_4 = this ;
  extensionMethod_analyzeRoutineArguments (temp_2.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mMethodName (), GGS_string ("'").add_operation (temp_4.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 113)).add_operation (GGS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 113)), var_routineSignature_4849, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5310, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 107)) ;
  const GGS_typeMethodCallInstructionAST temp_5 = this ;
  const GGS_typeMethodCallInstructionAST temp_6 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_typeMethodCallInstructionForGeneration::init_21__21__21__21_ (temp_5.readProperty_mTypeName (), temp_6.readProperty_mMethodName (), var_actualParameterListForGeneration_5310, var_hasCompilerArgument_4871, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typeMethodCallInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                              GGS_string & ioArgument_ioGeneratedCode,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 145)) ;
  GGS_stringlist var_parameterCppNameList_6618 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_6662 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_6714 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_typeMethodCallInstructionForGeneration temp_0 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_6756 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_6756.hasCurrentObject ()) {
    GGS_string var_parameterCppName_7049 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_6756.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_6662, var_inputVariableList_6714, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_7049, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 151)) ;
    var_parameterCppNameList_6618.addAssignOperation (var_parameterCppName_7049  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 159)) ;
    enumerator_6756.gotoNextObject () ;
  }
  const GGS_typeMethodCallInstructionForGeneration temp_1 = this ;
  const GGS_typeMethodCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (temp_1.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 162)).add_operation (GGS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 162)).add_operation (temp_2.readProperty_mMethodName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 163)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 162)) ;
  UpEnumerator_stringlist enumerator_7326 (var_parameterCppNameList_6618) ;
  while (enumerator_7326.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_7326.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 165)) ;
    enumerator_7326.gotoNextObject () ;
    if (enumerator_7326.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 166)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_typeMethodCallInstructionForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 169)) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 169)) ;
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::greaterThan, var_parameterCppNameList_6618.getter_count (SOURCE_FILE ("instruction-type-method-call.galgas", 170)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 171)) ;
        }
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 173)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_typeMethodCallInstructionForGeneration temp_7 = this ;
    test_6 = temp_7.readProperty_mHasCompilerArgument ().operator_or (GGS_bool (ComparisonKind::greaterThan, var_parameterCppNameList_6618.getter_count (SOURCE_FILE ("instruction-type-method-call.galgas", 175)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 175)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 176)) ;
    }
  }
  const GGS_typeMethodCallInstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_sourceFile (temp_8.readProperty_mMethodName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 178)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 178)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 179)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@errorInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_errorInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_errorInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLocationExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 208)) ;
  const GGS_errorInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mMessageExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 209)) ;
  const GGS_errorInstructionAST temp_2 = this ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.readProperty_mFixitListAST (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 210)) ;
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
                                                                                                   const GGS_fixitListAST constinArgument_inFixitListAST,
                                                                                                   const GGS_location constinArgument_inErrorLocation,
                                                                                                   const GGS_string constinArgument_inErrorOrWarningString,
                                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                   GGS_semanticExpressionForGeneration & outArgument_outLocationExpression,
                                                                                                   GGS_semanticExpressionForGeneration & outArgument_outMessageExpression,
                                                                                                   GGS_fixitListForGeneration & outArgument_outFixitListForGeneration,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLocationExpression.drop () ; // Release 'out' argument
  outArgument_outMessageExpression.drop () ; // Release 'out' argument
  outArgument_outFixitListForGeneration.drop () ; // Release 'out' argument
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inLocationExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLocationType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outLocationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 262)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLocationType (), outArgument_outLocationExpression.readProperty_mResultType (), constinArgument_inErrorLocation, outArgument_outLocationExpression, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 272)) ;
  }
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inMessageExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-error.galgas", 282)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outMessageExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 279)) ;
  outArgument_outFixitListForGeneration = GGS_fixitListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_fixitListAST enumerator_10779 (constinArgument_inFixitListAST) ;
  while (enumerator_10779.hasCurrentObject ()) {
    switch (enumerator_10779.current_mElement (HERE).enumValue ()) {
    case GGS_fixitElementAST::Enumeration::invalid:
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItRemove:
      {
        outArgument_outFixitListForGeneration.addAssignOperation (GGS_fixitElementForGeneration::class_func_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 293))  COMMA_SOURCE_FILE ("instruction-error.galgas", 293)) ;
      }
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItReplace:
      {
        GGS_semanticExpressionAST extractedValue_10923_exp_0 ;
        GGS_location extractedValue_10927_errorLocation_1 ;
        enumerator_10779.current_mElement (HERE).getAssociatedValuesFor_fixItReplace (extractedValue_10923_exp_0, extractedValue_10927_errorLocation_1) ;
        GGS_semanticExpressionForGeneration var_expression_11237 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_10923_exp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_11237, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 295)) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_bool test_1 = GGS_bool (ComparisonKind::notEqual, var_expression_11237.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType ())) ;
          if (GalgasBool::boolTrue == test_1.boolEnum ()) {
            test_1 = GGS_bool (ComparisonKind::notEqual, var_expression_11237.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GGS_bool test_2 = test_1 ;
          if (GalgasBool::boolTrue == test_2.boolEnum ()) {
            test_2 = GGS_bool (ComparisonKind::notEqual, var_expression_11237.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GGS_bool test_3 = test_2 ;
          if (GalgasBool::boolTrue == test_3.boolEnum ()) {
            test_3 = GGS_bool (ComparisonKind::notEqual, var_expression_11237.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())) ;
          }
          test_0 = test_3.boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_10927_errorLocation_1, GGS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_11237.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 308)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 308)).add_operation (GGS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 308)), fixItArray4  COMMA_SOURCE_FILE ("instruction-error.galgas", 308)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssignOperation (GGS_fixitElementForGeneration::class_func_fixItReplace (var_expression_11237  COMMA_SOURCE_FILE ("instruction-error.galgas", 312))  COMMA_SOURCE_FILE ("instruction-error.galgas", 312)) ;
      }
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItInsertBefore:
      {
        GGS_semanticExpressionAST extractedValue_11910_exp_0 ;
        GGS_location extractedValue_11914_errorLocation_1 ;
        enumerator_10779.current_mElement (HERE).getAssociatedValuesFor_fixItInsertBefore (extractedValue_11910_exp_0, extractedValue_11914_errorLocation_1) ;
        GGS_semanticExpressionForGeneration var_expression_12224 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_11910_exp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_12224, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 314)) ;
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          GGS_bool test_6 = GGS_bool (ComparisonKind::notEqual, var_expression_12224.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType ())) ;
          if (GalgasBool::boolTrue == test_6.boolEnum ()) {
            test_6 = GGS_bool (ComparisonKind::notEqual, var_expression_12224.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GGS_bool test_7 = test_6 ;
          if (GalgasBool::boolTrue == test_7.boolEnum ()) {
            test_7 = GGS_bool (ComparisonKind::notEqual, var_expression_12224.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GGS_bool test_8 = test_7 ;
          if (GalgasBool::boolTrue == test_8.boolEnum ()) {
            test_8 = GGS_bool (ComparisonKind::notEqual, var_expression_12224.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())) ;
          }
          test_5 = test_8.boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            GenericArray <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_11914_errorLocation_1, GGS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_12224.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 327)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 327)).add_operation (GGS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 327)), fixItArray9  COMMA_SOURCE_FILE ("instruction-error.galgas", 327)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssignOperation (GGS_fixitElementForGeneration::class_func_fixItInsertBefore (var_expression_12224  COMMA_SOURCE_FILE ("instruction-error.galgas", 331))  COMMA_SOURCE_FILE ("instruction-error.galgas", 331)) ;
      }
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItInsertAfter:
      {
        GGS_semanticExpressionAST extractedValue_12901_exp_0 ;
        GGS_location extractedValue_12905_errorLocation_1 ;
        enumerator_10779.current_mElement (HERE).getAssociatedValuesFor_fixItInsertAfter (extractedValue_12901_exp_0, extractedValue_12905_errorLocation_1) ;
        GGS_semanticExpressionForGeneration var_expression_13215 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_12901_exp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_13215, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 333)) ;
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          GGS_bool test_11 = GGS_bool (ComparisonKind::notEqual, var_expression_13215.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType ())) ;
          if (GalgasBool::boolTrue == test_11.boolEnum ()) {
            test_11 = GGS_bool (ComparisonKind::notEqual, var_expression_13215.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GGS_bool test_12 = test_11 ;
          if (GalgasBool::boolTrue == test_12.boolEnum ()) {
            test_12 = GGS_bool (ComparisonKind::notEqual, var_expression_13215.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GGS_bool test_13 = test_12 ;
          if (GalgasBool::boolTrue == test_13.boolEnum ()) {
            test_13 = GGS_bool (ComparisonKind::notEqual, var_expression_13215.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())) ;
          }
          test_10 = test_13.boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GenericArray <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (extractedValue_12905_errorLocation_1, GGS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_13215.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 346)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 346)).add_operation (GGS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 346)), fixItArray14  COMMA_SOURCE_FILE ("instruction-error.galgas", 346)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssignOperation (GGS_fixitElementForGeneration::class_func_fixItInsertAfter (var_expression_13215  COMMA_SOURCE_FILE ("instruction-error.galgas", 350))  COMMA_SOURCE_FILE ("instruction-error.galgas", 350)) ;
      }
      break ;
    }
    enumerator_10779.gotoNextObject () ;
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::notEqual, outArgument_outMessageExpression.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 356)).add_operation (GGS_string (" message expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 356)).add_operation (extensionGetter_definition (outArgument_outMessageExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 356)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 356)).add_operation (GGS_string ("'; it should be of the '@string' type"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 356)), fixItArray16  COMMA_SOURCE_FILE ("instruction-error.galgas", 355)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@errorInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_errorInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                  GGS_localVarManager & ioArgument_ioVariableMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_locationExpression_15119 ;
  GGS_semanticExpressionForGeneration var_messageExpression_15147 ;
  GGS_fixitListForGeneration var_fixitListForGeneration_15174 ;
  {
  const GGS_errorInstructionAST temp_0 = this ;
  const GGS_errorInstructionAST temp_1 = this ;
  const GGS_errorInstructionAST temp_2 = this ;
  const GGS_errorInstructionAST temp_3 = this ;
  routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GGS_string ("error"), ioArgument_ioVariableMap, var_locationExpression_15119, var_messageExpression_15147, var_fixitListForGeneration_15174, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 372)) ;
  }
  GGS_stringlist var_builtVariableCppNameList_15238 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_errorInstructionAST temp_4 = this ;
  UpEnumerator_lstringlist enumerator_15287 (temp_4.readProperty_mBuiltVariableList ()) ;
  while (enumerator_15287.hasCurrentObject ()) {
    GGS_string var_varCppName_15383 ;
    {
    GGS_unifiedTypeMapEntry joker_15375 ; // Joker input parameter
    GGS_string joker_15394 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_15287.current_mValue (HERE), joker_15375, var_varCppName_15383, joker_15394, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 390)) ;
    }
    var_builtVariableCppNameList_15238.addAssignOperation (var_varCppName_15383  COMMA_SOURCE_FILE ("instruction-error.galgas", 391)) ;
    enumerator_15287.gotoNextObject () ;
  }
  const GGS_errorInstructionAST temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_errorInstructionForGeneration::init_21__21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), var_locationExpression_15119, var_messageExpression_15147, var_builtVariableCppNameList_15238, var_fixitListForGeneration_15174, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-error.galgas", 394)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@errorInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_errorInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                     GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                     GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                     const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                     GGS_string & ioArgument_ioGeneratedCode,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_receiverCppVarName_18811 ;
  const GGS_errorInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_18811, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 469)) ;
  GGS_string var_messageCppVarName_19020 ;
  const GGS_errorInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mErrorExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_19020, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 477)) ;
  GGS_string var_fixItArrayCppName_19278 ;
  const GGS_errorInstructionForGeneration temp_2 = this ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_19278, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 485)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 494)) COMMA_SOURCE_FILE ("instruction-error.galgas", 494)) ;
  }
  const GGS_errorInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 495)).add_operation (GGS_string ("->emitSemanticError ("), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 495)).add_operation (var_receiverCppVarName_18811, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 495)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 496)).add_operation (var_messageCppVarName_19020, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 496)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 497)).add_operation (var_fixItArrayCppName_19278, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 497)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 498)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 499)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 498)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 495)) ;
  const GGS_errorInstructionForGeneration temp_4 = this ;
  UpEnumerator_stringlist enumerator_19652 (temp_4.readProperty_mBuiltVariableCppNameList ()) ;
  while (enumerator_19652.hasCurrentObject ()) {
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_19652.current_mValue (HERE) COMMA_SOURCE_FILE ("instruction-error.galgas", 502)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_19652.current_mValue (HERE).add_operation (GGS_string (".drop () ; // Release error dropped variable\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 503)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 503)) ;
    enumerator_19652.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@methodCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_methodCallInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 98)) ;
  const GGS_methodCallInstructionAST temp_1 = this ;
  UpEnumerator_actualParameterListAST enumerator_4220 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_4220.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_4220.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 100)) ;
    enumerator_4220.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@methodCallInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_methodCallInstructionAST temp_1 = this ;
    test_0 = GGS_bool (nullptr != dynamic_cast <const cPtr_selfInExpressionAST *> (temp_1.readProperty_mReceiverExpression ().ptr ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_methodCallInstructionAST temp_2 = this ;
      extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_2.readProperty_mMethodName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 115)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_receiverExpression_5449 ;
  const GGS_methodCallInstructionAST temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-method-call.galgas", 121)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_5449, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 118)) ;
  GGS_methodKind var_kind_5618 ;
  GGS_formalParameterSignature var_routineSignature_5634 ;
  GGS_bool var_hasCompilerArgument_5671 ;
  GGS_string var_errorMessage_5711 ;
  const GGS_methodCallInstructionAST temp_4 = this ;
  GGS_location joker_5657 ; // Joker input parameter
  GGS_methodQualifier joker_5697 ; // Joker input parameter
  extensionGetter_definition (var_receiverExpression_5449.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 128)).readProperty_instanceMethodMap ().method_searchKey (temp_4.readProperty_mMethodName (), var_kind_5618, var_routineSignature_5634, joker_5657, var_hasCompilerArgument_5671, joker_5697, var_errorMessage_5711, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 128)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_errorMessage_5711.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_methodCallInstructionAST temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mMethodName ().readProperty_location (), var_errorMessage_5711, fixItArray7  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 138)) ;
    }
  }
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_6263 ;
  const GGS_methodCallInstructionAST temp_8 = this ;
  const GGS_methodCallInstructionAST temp_9 = this ;
  const GGS_methodCallInstructionAST temp_10 = this ;
  extensionMethod_analyzeRoutineArguments (temp_8.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_9.readProperty_mMethodName (), GGS_string ("'").add_operation (temp_10.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 147)).add_operation (GGS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 147)), var_routineSignature_5634, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_6263, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 141)) ;
  GGS_unifiedTypeMapEntry var_baseType_6360 = var_receiverExpression_5449.readProperty_mResultType () ;
  GGS_bool var_searching_6410 = GGS_bool (true) ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("instruction-method-call.galgas", 156)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      if (GGS_uint::class_func_max (SOURCE_FILE ("instruction-method-call.galgas", 157)).isValid ()) {
        uint32_t variant_6467 = GGS_uint::class_func_max (SOURCE_FILE ("instruction-method-call.galgas", 157)).uintValue () ;
        bool loop_6467 = true ;
        while (loop_6467) {
          loop_6467 = var_searching_6410.isValid () ;
          if (loop_6467) {
            loop_6467 = var_searching_6410.boolValue () ;
          }
          if (loop_6467 && (0 == variant_6467)) {
            loop_6467 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-method-call.galgas", 157)) ;
          }
          if (loop_6467) {
            variant_6467 -= 1 ;
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              test_12 = extensionGetter_definition (var_baseType_6360, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 158)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-method-call.galgas", 158)).boolEnum () ;
              if (GalgasBool::boolTrue == test_12) {
                var_searching_6410 = GGS_bool (false) ;
              }
            }
            if (GalgasBool::boolFalse == test_12) {
              GalgasBool test_13 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_13) {
                const GGS_methodCallInstructionAST temp_14 = this ;
                test_13 = extensionGetter_definition (extensionGetter_definition (var_baseType_6360, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 161)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 161)).readProperty_instanceMethodMap ().getter_hasKey (temp_14.readProperty_mMethodName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-method-call.galgas", 161)).boolEnum () ;
                if (GalgasBool::boolTrue == test_13) {
                  var_baseType_6360 = extensionGetter_definition (var_baseType_6360, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_13) {
                var_searching_6410 = GGS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GGS_methodCallInstructionAST temp_15 = this ;
  const GGS_methodCallInstructionAST temp_16 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_methodCallInstructionForGeneration::init_21__21__21__21__21__21__21__21_ (temp_15.readProperty_mInstructionLocation (), var_receiverExpression_5449.readProperty_mResultType (), var_receiverExpression_5449, temp_16.readProperty_mMethodName ().readProperty_string (), var_kind_5618, var_actualParameterListForGeneration_6263, var_hasCompilerArgument_5671, var_baseType_6360, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 170)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@methodCallInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GGS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_receiverCppName_8684 ;
  const GGS_methodCallInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_8684, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 209)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_8684 COMMA_SOURCE_FILE ("instruction-method-call.galgas", 210)) ;
  }
  GGS_stringlist var_parameterCppNameList_8773 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_8817 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_8869 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_methodCallInstructionForGeneration temp_1 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_8911 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_8911.hasCurrentObject ()) {
    GGS_string var_parameterCppName_9154 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_8911.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_8817, var_inputVariableList_8869, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_9154, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 216)) ;
    var_parameterCppNameList_8773.addAssignOperation (var_parameterCppName_9154  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 217)) ;
    enumerator_8911.gotoNextObject () ;
  }
  const GGS_methodCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GGS_methodKind::Enumeration::invalid:
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsExtension:
    {
      const GGS_methodCallInstructionForGeneration temp_3 = this ;
      const GGS_methodCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("method-").add_operation (extensionGetter_definition (temp_3.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 222)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 222)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 222)).add_operation (temp_4.readProperty_mMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 222))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 222)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_methodCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 223)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-method-call.galgas", 223)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_methodCallInstructionForGeneration temp_7 = this ;
          const GGS_methodCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("callExtensionMethod_").add_operation (temp_7.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224)).add_operation (GGS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224)).add_operation (extensionGetter_identifierRepresentation (temp_8.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 225)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 225)).add_operation (var_receiverCppName_8684, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 226)).add_operation (GGS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        const GGS_methodCallInstructionForGeneration temp_9 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("extensionMethod_").add_operation (temp_9.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 228)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 228)).add_operation (var_receiverCppName_8684, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 229)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 228)) ;
      }
    }
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsMember:
    {
      const GGS_methodCallInstructionForGeneration temp_10 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(var_receiverCppName_8684.add_operation (GGS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 232)).add_operation (temp_10.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 232)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 232)) ;
    }
    break ;
  }
  UpEnumerator_stringlist enumerator_10070 (var_parameterCppNameList_8773) ;
  while (enumerator_10070.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_10070.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 235)) ;
    enumerator_10070.gotoNextObject () ;
    if (enumerator_10070.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 236)) ;
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_parameterCppNameList_8773.getter_count (SOURCE_FILE ("instruction-method-call.galgas", 238)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_methodCallInstructionForGeneration temp_13 = this ;
        test_12 = temp_13.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 240)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 240)) ;
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 241)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 242)) ;
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
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 245)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 245)) ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 246)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 247)) ;
      }
    }
    if (GalgasBool::boolFalse == test_14) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 249)) ;
    }
  }
  const GGS_methodCallInstructionForGeneration temp_16 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_sourceFile (temp_16.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 251)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 251)) ;
  const GGS_methodCallInstructionForGeneration temp_17 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_10752 (temp_17.readProperty_mActualParameterList ()) ;
  while (enumerator_10752.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_10752.current_mActualParameter (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 254)) ;
    enumerator_10752.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localVariableDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVariableDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 135)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localVariableDeclarationWithAssignmentAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_6466 ;
  const GGS_localVariableDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-var-declaration.galgas", 153)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_6466, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 150)) ;
  const GGS_localVariableDeclarationWithAssignmentAST temp_1 = this ;
  const GGS_localVariableDeclarationWithAssignmentAST temp_2 = this ;
  GGS_string var_targetVariableCppName_6515 = GGS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 160)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 160)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 160)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 160)) ;
  {
  const GGS_localVariableDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), GGS_bool (true), var_expression_6466.readProperty_mResultType (), var_targetVariableCppName_6515, var_targetVariableCppName_6515, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 161)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::init_21__21__21__21_ (var_expression_6466.readProperty_mResultType (), GGS_bool (false), var_targetVariableCppName_6515, var_expression_6466, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 169)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localVariableDeclarationNoAssignmentAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationNoAssignmentAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_localVariableDeclarationNoAssignmentAST temp_0 = this ;
  GGS_unifiedTypeMapEntry joker_7456 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), joker_7456, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 182)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localVariableDeclarationNoAssignmentAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationNoAssignmentAST::method_analyzeSemanticInstruction (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVariableDeclarationNoAssignmentAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_targetType_8241 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 196)) ;
  const GGS_localVariableDeclarationNoAssignmentAST temp_1 = this ;
  const GGS_localVariableDeclarationNoAssignmentAST temp_2 = this ;
  GGS_string var_targetVariableCppName_8308 = GGS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 197)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 197)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 197)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 197)) ;
  {
  const GGS_localVariableDeclarationNoAssignmentAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalVariable (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_targetType_8241, var_targetVariableCppName_8308, var_targetVariableCppName_8308, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 198)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_localVariableDeclarationForGeneration::init_21__21_ (var_targetType_8241, var_targetVariableCppName_8308, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 205)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localVariableDeclarationForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                             const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                             GGS_string & ioArgument_ioGeneratedCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVariableDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mVariableType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 227)) ;
  const GGS_localVariableDeclarationForGeneration temp_1 = this ;
  const GGS_localVariableDeclarationForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mVariableType (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 228)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 228)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 228)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 228)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@loopInstructionWithVariantAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_loopInstructionWithVariantAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 131)) ;
  const GGS_loopInstructionWithVariantAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mLoopExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 132)) ;
  const GGS_loopInstructionWithVariantAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mFirstInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 133)) ;
  const GGS_loopInstructionWithVariantAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mSecondInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 134)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@loopInstructionWithVariantAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GGS_localVarManager & ioArgument_ioVariableMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_variantExpression_6719 ;
  const GGS_loopInstructionWithVariantAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 152)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_variantExpression_6719, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 149)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), var_variantExpression_6719.readProperty_mResultType (), var_variantExpression_6719.readProperty_mLocation (), var_variantExpression_6719, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 159)) ;
  }
  GGS_semanticExpressionForGeneration var_loopExpression_7253 ;
  const GGS_loopInstructionWithVariantAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mLoopExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 169)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_loopExpression_7253, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 166)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_loopExpression_7253.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_loopInstructionWithVariantAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfLoopExpression (), GGS_string ("the loop expression type should be '@").add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).add_operation (GGS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).add_operation (extensionGetter_definition (var_loopExpression_7253.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)), fixItArray4  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 177)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 182)) ;
  }
  GGS_semanticInstructionListForGeneration var_first_5F_instructionList_8146 ;
  {
  const GGS_loopInstructionWithVariantAST temp_5 = this ;
  const GGS_loopInstructionWithVariantAST temp_6 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_5.readProperty_mFirstInstructions (), temp_6.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_8146, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 184)) ;
  }
  GGS_semanticInstructionListForGeneration var_second_5F_instructionList_8564 ;
  {
  const GGS_loopInstructionWithVariantAST temp_7 = this ;
  const GGS_loopInstructionWithVariantAST temp_8 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_7.readProperty_mSecondInstructions (), temp_8.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_8564, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 198)) ;
  }
  {
  const GGS_loopInstructionWithVariantAST temp_9 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_9.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 212)) ;
  }
  const GGS_loopInstructionWithVariantAST temp_10 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_loopInstructionWithVariantForGeneration::init_21__21__21__21__21_ (temp_10.readProperty_mInstructionLocation (), var_variantExpression_6719, var_first_5F_instructionList_8146, var_loopExpression_7253, var_second_5F_instructionList_8564, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 214)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@loopInstructionWithVariantForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                               GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                               GGS_string & ioArgument_ioGeneratedCode,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_variantCppVarName_10106 ;
  const GGS_loopInstructionWithVariantForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName_10106, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 242)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_variantCppVarName_10106, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 249)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 249)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 250)) ;
  }
  const GGS_loopInstructionWithVariantForGeneration temp_1 = this ;
  GGS_string var_variantVar_10251 = GGS_string ("variant_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 251)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 251)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("uint32_t ").add_operation (var_variantVar_10251, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)).add_operation (var_variantCppVarName_10106, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)).add_operation (GGS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)) ;
  const GGS_loopInstructionWithVariantForGeneration temp_2 = this ;
  GGS_string var_loopVar_10439 = GGS_string ("loop_").add_operation (temp_2.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("bool ").add_operation (var_loopVar_10439, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)).add_operation (GGS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)).add_operation (GGS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)).add_operation (var_loopVar_10439, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 256)) ;
  }
  {
  const GGS_loopInstructionWithVariantForGeneration temp_3 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_3.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 257)) ;
  }
  GGS_string var_loopExpressionVar_11010 ;
  const GGS_loopInstructionWithVariantForGeneration temp_4 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_4.readProperty_mLoopExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_11010, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 265)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_loopVar_10439.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)).add_operation (var_loopExpressionVar_11010, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)).add_operation (GGS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)).add_operation (GGS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)).add_operation (var_loopVar_10439, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (var_loopVar_10439, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (var_loopExpressionVar_11010, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (GGS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 270)) COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 270)) ;
  }
  const GGS_loopInstructionWithVariantForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_loopVar_10439, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)).add_operation (GGS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)).add_operation (var_variantVar_10251, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)).add_operation (GGS_string (")) {\n  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)).add_operation (var_loopVar_10439, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (GGS_string (" = false ;\n  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)).add_operation (GGS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)).add_operation (extensionGetter_sourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)).add_operation (GGS_string (") ;\n}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)).add_operation (GGS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)).add_operation (var_loopVar_10439, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 275)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_variantVar_10251, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 276)).add_operation (GGS_string (" -= 1 ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 276)) ;
  {
  const GGS_loopInstructionWithVariantForGeneration temp_6 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_6.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 277)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 285)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 286)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 287)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 288)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 289)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@syntaxSendInstructionAST transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionAST::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                                   const GGS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                                   GGS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                                   GGS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                                                   Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@syntaxSendInstructionAST analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionAST::method_analyzeSyntaxInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     const GGS_bool constinArgument_inHasTranslateFeature,
                                                                     const GGS_terminalMap /* constinArgument_inTerminalMap */,
                                                                     const GGS_string /* constinArgument_inLexiqueName */,
                                                                     const GGS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                     const GGS_string /* constinArgument_inComponentName */,
                                                                     const GGS_stringset /* constinArgument_inIndexNameSet */,
                                                                     GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("instruction-syntax-send.galgas", 91)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_syntaxSendInstructionAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("'send' instruction is only allowed when syntax componant has 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 92)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_expression_5021 ;
  const GGS_syntaxSendInstructionAST temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-syntax-send.galgas", 100)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5021, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 97)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_expression_5021.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_syntaxSendInstructionAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("'send' expresion should be an @string expression"), fixItArray6  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 108)) ;
    }
  }
  const GGS_syntaxSendInstructionAST temp_7 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_syntaxSendInstructionForGeneration::init_21__21_ (temp_7.readProperty_mInstructionLocation (), var_expression_5021, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 111)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@syntaxSendInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GGS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_sourceVar_6558 ;
  const GGS_syntaxSendInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_6558, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 135)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 143)) COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 143)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_sourceVar_6558, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 144)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 144)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 145)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (".appendString (").add_operation (var_sourceVar_6558, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 146)).add_operation (GGS_string (".stringValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 146)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 147)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@undefinedLocalConstantDeclarationAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_localConstantDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localConstantDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 152)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'
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
      GGS_unifiedTypeMapEntry joker_6404 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mOptionalTypeName (), joker_6404, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 159)) ;
      }
    }
  }
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 161)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@undefinedLocalConstantDeclarationAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationAST::method_analyzeSemanticInstruction (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                   GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                   const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_undefinedLocalConstantDeclarationAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_targetType_7228 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mConstantTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 175)) ;
  const GGS_undefinedLocalConstantDeclarationAST temp_1 = this ;
  const GGS_undefinedLocalConstantDeclarationAST temp_2 = this ;
  GGS_string var_targetVariableCppName_7303 = GGS_string ("var_").add_operation (temp_1.readProperty_mConstantName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 176)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 176)).add_operation (temp_2.readProperty_mConstantName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 177)).getter_string (SOURCE_FILE ("instruction-let.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 177)) ;
  {
  const GGS_undefinedLocalConstantDeclarationAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mConstantName (), var_targetType_7228, var_targetVariableCppName_7303, var_targetVariableCppName_7303, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 178)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_undefinedLocalConstantDeclarationForGeneration::init_21__21_ (var_targetType_7228, var_targetVariableCppName_7303, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-let.galgas", 185)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_localConstantDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_8681 ;
  const GGS_localConstantDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-let.galgas", 204)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8681, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 201)) ;
  const GGS_localConstantDeclarationWithAssignmentAST temp_1 = this ;
  const GGS_localConstantDeclarationWithAssignmentAST temp_2 = this ;
  GGS_string var_targetVariableCppName_8730 = GGS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 211)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 211)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 212)).getter_string (SOURCE_FILE ("instruction-let.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 212)) ;
  {
  const GGS_localConstantDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_expression_8681.readProperty_mResultType (), var_targetVariableCppName_8730, var_targetVariableCppName_8730, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 213)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::init_21__21__21__21_ (var_expression_8681.readProperty_mResultType (), GGS_bool (true), var_targetVariableCppName_8730, var_expression_8681, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-let.galgas", 220)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                  const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                  GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                  GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_targetType_9903 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 236)) ;
  GGS_semanticExpressionForGeneration var_expression_10274 ;
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_9903, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_10274, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 238)) ;
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = this ;
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  GGS_string var_targetVariableCppName_10323 = GGS_string ("var_").add_operation (temp_2.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 248)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 248)).add_operation (temp_3.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 249)).getter_string (SOURCE_FILE ("instruction-let.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 249)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_5 = this ;
    test_4 = temp_5.readProperty_mIsConstant ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_6 = this ;
      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mVariableName (), var_targetType_9903, var_targetVariableCppName_10323, var_targetVariableCppName_10323, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 251)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    {
    const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_7 = this ;
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_7.readProperty_mVariableName (), GGS_bool (true), var_targetType_9903, var_targetVariableCppName_10323, var_targetVariableCppName_10323, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 258)) ;
    }
  }
  {
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_8 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_9903, var_expression_10274.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_10274, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 267)) ;
  }
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::init_21__21__21__21_ (var_targetType_9903, temp_9.readProperty_mIsConstant (), var_targetVariableCppName_10323, var_expression_10274, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-let.galgas", 269)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@undefinedLocalConstantDeclarationForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                                      GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                      GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                      const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                      GGS_string & ioArgument_ioGeneratedCode,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_undefinedLocalConstantDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 303)) ;
  const GGS_undefinedLocalConstantDeclarationForGeneration temp_1 = this ;
  const GGS_undefinedLocalConstantDeclarationForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 304)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 304)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 304)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 304)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localVariableOrConstantDeclarationWithSourceExpressionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                                                           GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                           GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                           const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                           GGS_string & ioArgument_ioGeneratedCode,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 315)) ;
  GGS_string var_sourceVar_13423 ;
  const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_13423, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 316)) ;
  const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_2 = this ;
  const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 323)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 323)).add_operation (temp_3.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 323)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 323)).add_operation (var_sourceVar_13423, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 323)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 323)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 323)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInFileInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInFileInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInFileInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 364)) ;
  const GGS_grammarInFileInstructionAST temp_1 = this ;
  UpEnumerator_actualParameterListAST enumerator_16763 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_16763.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_16763.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 366)) ;
    enumerator_16763.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInStringInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInStringInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInStringInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 373)) ;
  const GGS_grammarInStringInstructionAST temp_1 = this ;
  UpEnumerator_actualParameterListAST enumerator_17195 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_17195.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_17195.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 375)) ;
    enumerator_17195.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInFileInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInFileInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GGS_localVarManager & ioArgument_ioVariableMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInFileInstructionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_18036 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 390)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_18036 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 391)) ;
  }
  GGS_grammarLabelMap var_grammarLabelMap_18361 ;
  GGS_bool var_hasTranslateFeature_18399 ;
  const GGS_grammarInFileInstructionAST temp_1 = this ;
  GGS_bool joker_18381 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_grammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_18361, joker_18381, var_hasTranslateFeature_18399, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 393)) ;
  GGS_formalParameterSignature var_labelSignature_18527 ;
  const GGS_grammarInFileInstructionAST temp_2 = this ;
  var_grammarLabelMap_18361.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_18527, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 400)) ;
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_18970 ;
  const GGS_grammarInFileInstructionAST temp_3 = this ;
  const GGS_grammarInFileInstructionAST temp_4 = this ;
  const GGS_grammarInFileInstructionAST temp_5 = this ;
  extensionMethod_analyzeRoutineArguments (temp_3.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_4.readProperty_mLabelName (), GGS_string ("label of the ").add_operation (temp_5.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 411)).add_operation (GGS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 411)), var_labelSignature_18527, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_18970, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 405)) ;
  GGS_semanticExpressionForGeneration var_sourceExpression_19326 ;
  const GGS_grammarInFileInstructionAST temp_6 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-grammar.galgas", 421)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_sourceExpression_19326, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 418)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_sourceExpression_19326.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInFileInstructionAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GGS_string ("this expression is the source file path and its type should be '@lstring', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_19326.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 431)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 431)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 429)) ;
    }
  }
  const GGS_grammarInFileInstructionAST temp_10 = this ;
  GGS_string var_syntaxDirectedTranslationResultVarName_19802 = GGS_string ("syntaxDirectedTranslationResult_").add_operation (temp_10.readProperty_mGrammarComponentName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 435)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 435)) ;
  GGS_stringlist var_assignementList_19941 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_grammarInFileInstructionAST temp_11 = this ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_11.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_hasTranslateFeature_18399, var_syntaxDirectedTranslationResultVarName_19802, var_assignementList_19941, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 437)) ;
  const GGS_grammarInFileInstructionAST temp_12 = this ;
  const GGS_grammarInFileInstructionAST temp_13 = this ;
  const GGS_grammarInFileInstructionAST temp_14 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_grammarInstructionWithSourceFileForGeneration::init_21__21__21__21__21__21__21__21_ (temp_12.readProperty_mInstructionLocation (), temp_13.readProperty_mGrammarComponentName ().readProperty_string (), temp_14.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_19326, var_actualParameterListForGeneration_18970, var_hasTranslateFeature_18399, var_assignementList_19941, var_syntaxDirectedTranslationResultVarName_19802, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 446)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInStringInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInStringInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GGS_localVarManager & ioArgument_ioVariableMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInStringInstructionAST temp_0 = this ;
  GGS_lstring var_grammarUsefulnessName_21188 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 467)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_grammarUsefulnessName_21188 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 468)) ;
  }
  GGS_grammarLabelMap var_grammarLabelMap_21527 ;
  GGS_bool var_hasTranslateFeature_21565 ;
  const GGS_grammarInStringInstructionAST temp_1 = this ;
  GGS_bool joker_21547 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_grammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_21527, joker_21547, var_hasTranslateFeature_21565, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 470)) ;
  GGS_formalParameterSignature var_labelSignature_21693 ;
  const GGS_grammarInStringInstructionAST temp_2 = this ;
  var_grammarLabelMap_21527.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_21693, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 477)) ;
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_22136 ;
  const GGS_grammarInStringInstructionAST temp_3 = this ;
  const GGS_grammarInStringInstructionAST temp_4 = this ;
  const GGS_grammarInStringInstructionAST temp_5 = this ;
  extensionMethod_analyzeRoutineArguments (temp_3.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_4.readProperty_mLabelName (), GGS_string ("label of the ").add_operation (temp_5.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 488)).add_operation (GGS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 488)), var_labelSignature_21693, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_22136, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 482)) ;
  GGS_semanticExpressionForGeneration var_sourceExpression_22492 ;
  const GGS_grammarInStringInstructionAST temp_6 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-grammar.galgas", 498)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_sourceExpression_22492, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 495)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_sourceExpression_22492.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInStringInstructionAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GGS_string ("this expression is the source string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_22492.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 508)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 507)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 508)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 506)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_nameExpression_23171 ;
  const GGS_grammarInStringInstructionAST temp_10 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_10.readProperty_mNameExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-grammar.galgas", 515)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_nameExpression_23171, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 512)) ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::notEqual, var_nameExpression_23171.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_grammarInStringInstructionAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfNameExpression (), GGS_string ("this expression is the name string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_22492.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 525)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 524)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 525)), fixItArray13  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 523)) ;
    }
  }
  const GGS_grammarInStringInstructionAST temp_14 = this ;
  GGS_string var_syntaxDirectedTranslationResultVarName_23588 = GGS_string ("syntaxDirectedTranslationResult_").add_operation (temp_14.readProperty_mGrammarComponentName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 529)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 529)) ;
  GGS_stringlist var_assignementList_23727 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_grammarInStringInstructionAST temp_15 = this ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_15.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_hasTranslateFeature_21565, var_syntaxDirectedTranslationResultVarName_23588, var_assignementList_23727, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 531)) ;
  const GGS_grammarInStringInstructionAST temp_16 = this ;
  const GGS_grammarInStringInstructionAST temp_17 = this ;
  const GGS_grammarInStringInstructionAST temp_18 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_grammarInstructionWithSourceExpressionForGeneration::init_21__21__21__21__21__21__21__21__21_ (temp_16.readProperty_mInstructionLocation (), temp_17.readProperty_mGrammarComponentName ().readProperty_string (), temp_18.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_22492, var_nameExpression_23171, var_actualParameterListForGeneration_22136, var_hasTranslateFeature_21565, var_assignementList_23727, var_syntaxDirectedTranslationResultVarName_23588, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 540)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionWithSourceFileForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceFileForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                     GGS_string & ioArgument_ioGeneratedCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInstructionWithSourceFileForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 575))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 575)) ;
  GGS_string var_sourceVar_25843 ;
  const GGS_grammarInstructionWithSourceFileForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceFileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_25843, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 577)) ;
  GGS_stringlist var_parameterCppNameList_25886 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_25932 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_25986 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_grammarInstructionWithSourceFileForGeneration temp_2 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_26030 (temp_2.readProperty_mActualParameterList ()) ;
  while (enumerator_26030.hasCurrentObject ()) {
    GGS_string var_parameterCppName_26339 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_26030.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_25932, var_inputVariableList_25986, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_26339, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 589)) ;
    var_parameterCppNameList_25886.addAssignOperation (var_parameterCppName_26339  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 598)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (nullptr != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_26030.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        ioArgument_ioGeneratedCode.plusAssignOperation(var_parameterCppName_26339.add_operation (GGS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 600)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 600)) ;
      }
    }
    enumerator_26030.gotoNextObject () ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_grammarInstructionWithSourceFileForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_grammarInstructionWithSourceFileForGeneration temp_6 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("String ").add_operation (temp_6.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 604)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 604)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 604)) ;
    }
  }
  const GGS_grammarInstructionWithSourceFileForGeneration temp_7 = this ;
  const GGS_grammarInstructionWithSourceFileForGeneration temp_8 = this ;
  const GGS_grammarInstructionWithSourceFileForGeneration temp_9 = this ;
  GGS_string temp_10 ;
  const GalgasBool test_11 = temp_9.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (GalgasBool::boolTrue == test_11) {
    const GGS_grammarInstructionWithSourceFileForGeneration temp_12 = this ;
    temp_10 = temp_12.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 610)) ;
  }else if (GalgasBool::boolFalse == test_11) {
    temp_10 = GGS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("cGrammar_").add_operation (temp_7.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 606)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 606)).add_operation (GGS_string ("::_performSourceFileParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 606)).add_operation (temp_8.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 607)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 607)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 607)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 608)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 609)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 609)).add_operation (var_sourceVar_25843, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 610)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 606)) ;
  UpEnumerator_stringlist enumerator_27125 (var_parameterCppNameList_25886) ;
  while (enumerator_27125.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (enumerator_27125.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 613)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 613)) ;
    enumerator_27125.gotoNextObject () ;
  }
  const GGS_grammarInstructionWithSourceFileForGeneration temp_13 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 615)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 615)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 615)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 616)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 616)) ;
  }
  const GGS_grammarInstructionWithSourceFileForGeneration temp_14 = this ;
  UpEnumerator_stringlist enumerator_27371 (temp_14.readProperty_mAssignementList ()) ;
  while (enumerator_27371.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_27371.current (HERE).readProperty_mValue ().add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 618)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 618)) ;
    enumerator_27371.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionWithSourceExpressionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceExpressionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                                           GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                           GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                           const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                           GGS_string & ioArgument_ioGeneratedCode,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 645))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 645)) ;
  GGS_string var_sourceVar_28972 ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_28972, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 647)) ;
  GGS_string var_nameVar_29193 ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mNameStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_nameVar_29193, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 655)) ;
  GGS_stringlist var_parameterCppNameList_29234 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_29280 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_29334 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_3 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_29378 (temp_3.readProperty_mActualParameterList ()) ;
  while (enumerator_29378.hasCurrentObject ()) {
    GGS_string var_parameterCppName_29694 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_29378.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_29280, var_inputVariableList_29334, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_29694, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 667)) ;
    var_parameterCppNameList_29234.addAssignOperation (var_parameterCppName_29694  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 676)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (nullptr != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_29378.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssignOperation(var_parameterCppName_29694.add_operation (GGS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 678)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 678)) ;
      }
    }
    enumerator_29378.gotoNextObject () ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_grammarInstructionWithSourceExpressionForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_grammarInstructionWithSourceExpressionForGeneration temp_7 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("String ").add_operation (temp_7.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 682)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 682)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 682)) ;
    }
  }
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_8 = this ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_9 = this ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_10 = this ;
  GGS_string temp_11 ;
  const GalgasBool test_12 = temp_10.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_grammarInstructionWithSourceExpressionForGeneration temp_13 = this ;
    temp_11 = temp_13.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 687)) ;
  }else if (GalgasBool::boolFalse == test_12) {
    temp_11 = GGS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("cGrammar_").add_operation (temp_8.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 684)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 684)).add_operation (GGS_string ("::_performSourceStringParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 684)).add_operation (temp_9.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 685)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 685)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 685)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 686)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 686)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 686)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 686)).add_operation (var_sourceVar_28972, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 687)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 688)).add_operation (var_nameVar_29193, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 689)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 684)) ;
  UpEnumerator_stringlist enumerator_30499 (var_parameterCppNameList_29234) ;
  while (enumerator_30499.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (enumerator_30499.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 691)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 691)) ;
    enumerator_30499.gotoNextObject () ;
  }
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_14 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_14.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 693)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 693)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 693)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 693)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 694)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 694)) ;
  }
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_15 = this ;
  UpEnumerator_stringlist enumerator_30745 (temp_15.readProperty_mAssignementList ()) ;
  while (enumerator_30745.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_30745.current (HERE).readProperty_mValue ().add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 696)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 696)) ;
    enumerator_30745.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mWhileExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 445)) ;
  const GGS_forInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mBeforeInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 446)) ;
  const GGS_forInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mBetweenInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 447)) ;
  const GGS_forInstructionAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mDoInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 448)) ;
  const GGS_forInstructionAST temp_4 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_4.readProperty_mAfterInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 449)) ;
  const GGS_forInstructionAST temp_5 = this ;
  UpEnumerator_forInstructionEnumeratedObjectListAST enumerator_15871 (temp_5.readProperty_mEnumeratedObjectList ()) ;
  while (enumerator_15871.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((cPtr_abstractEnumeratedCollectionAST *) enumerator_15871.current_mEnumeratedCollection (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 451)) ;
    enumerator_15871.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumeratedCollectionCstListInExpAST enterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionCstListInExpAST::method_enterInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumeratedCollectionCstListInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 462)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumeratedCollectionVarInExpAST enterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionVarInExpAST::method_enterInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumeratedCollectionVarInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 468)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumeratedCollectionCstListInExpAST analyzeEnumeration'
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionCstListInExpAST::method_analyzeEnumeration (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GGS_localVarManager & ioArgument_ioVariableMap,
                                                                          GGS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                          GGS_string & outArgument_outEnumeratorCppName,
                                                                          GGS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumeratedCollectionCstListInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 500)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 497)) ;
  const GGS_enumeratedCollectionCstListInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GGS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 507)).getter_string (SOURCE_FILE ("instruction-for.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 507)) ;
  GGS_enumerationDescriptorList var_enumerationDescriptorList_18430 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 508)).readProperty_enumerationDescriptorList () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, var_enumerationDescriptorList_18430.getter_count (SOURCE_FILE ("instruction-for.galgas", 509)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_enumeratedCollectionCstListInExpAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GGS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 510)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 510)).add_operation (GGS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 510)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 510)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_enumeratedCollectionCstListInExpAST temp_6 = this ;
      test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 513)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GGS_enumerationDescriptorList var_currentTypedAttributeList_18808 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 514)).readProperty_enumerationDescriptorList () ;
        UpEnumerator_enumerationDescriptorList enumerator_18937 (var_currentTypedAttributeList_18808) ;
        while (enumerator_18937.hasCurrentObject ()) {
          {
          const GGS_enumeratedCollectionCstListInExpAST temp_7 = this ;
          extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, GGS_lstring::init_21__21_ (enumerator_18937.current_mEnumerationName (HERE), temp_7.readProperty_mEndOfEnumerationExpression (), inCompiler COMMA_HERE), enumerator_18937.current_mEnumeratedType (HERE), outArgument_outEnumeratorCppName.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 519)).add_operation (enumerator_18937.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 519)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 519)), outArgument_outEnumeratorCppName.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 520)).add_operation (enumerator_18937.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 520)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 516)) ;
          }
          enumerator_18937.gotoNextObject () ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_enumeratedCollectionCstListInExpAST temp_9 = this ;
        test_8 = GGS_bool (ComparisonKind::notEqual, temp_9.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 523)).objectCompare (var_enumerationDescriptorList_18430.getter_count (SOURCE_FILE ("instruction-for.galgas", 523)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          const GGS_enumeratedCollectionCstListInExpAST temp_10 = this ;
          GGS_string temp_11 ;
          const GalgasBool test_12 = GGS_bool (ComparisonKind::greaterThan, var_enumerationDescriptorList_18430.getter_count (SOURCE_FILE ("instruction-for.galgas", 527)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_12) {
            temp_11 = GGS_string ("s") ;
          }else if (GalgasBool::boolFalse == test_12) {
            temp_11 = GGS_string::makeEmptyString () ;
          }
          const GGS_enumeratedCollectionCstListInExpAST temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mEndOfEnumerationExpression (), GGS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 525)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 525)).add_operation (GGS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 525)).add_operation (var_enumerationDescriptorList_18430.getter_count (SOURCE_FILE ("instruction-for.galgas", 526)).getter_string (SOURCE_FILE ("instruction-for.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 525)).add_operation (GGS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 526)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 526)).add_operation (GGS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 527)).add_operation (temp_13.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 529)).getter_string (SOURCE_FILE ("instruction-for.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 528)), fixItArray14  COMMA_SOURCE_FILE ("instruction-for.galgas", 524)) ;
        }
      }
      if (GalgasBool::boolFalse == test_8) {
        GalgasBool test_15 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_enumeratedCollectionCstListInExpAST temp_16 = this ;
          test_15 = GGS_bool (ComparisonKind::greaterThan, var_enumerationDescriptorList_18430.getter_count (SOURCE_FILE ("instruction-for.galgas", 532)).objectCompare (temp_16.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 532)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_15) {
            const GGS_enumeratedCollectionCstListInExpAST temp_17 = this ;
            GGS_uint var_missingArgumentCount_19895 = var_enumerationDescriptorList_18430.getter_count (SOURCE_FILE ("instruction-for.galgas", 533)).substract_operation (temp_17.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 533)) ;
            const GGS_enumeratedCollectionCstListInExpAST temp_18 = this ;
            GenericArray <FixItDescription> fixItArray19 ;
            GGS_string temp_20 ;
            const GalgasBool test_21 = GGS_bool (ComparisonKind::equal, var_missingArgumentCount_19895.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_21) {
              temp_20 = GGS_string ("*") ;
            }else if (GalgasBool::boolFalse == test_21) {
              temp_20 = GGS_string (" ").add_operation (var_missingArgumentCount_19895.getter_string (SOURCE_FILE ("instruction-for.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 536)).add_operation (GGS_string ("*"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 536)) ;
            }
            appendFixItActions (fixItArray19, EnumFixItKind::fixItReplace, temp_20) ;
            inCompiler->emitSemanticError (temp_18.readProperty_mEndOfEnumerationExpression (), GGS_string ("enumerated object has ").add_operation (var_missingArgumentCount_19895.getter_string (SOURCE_FILE ("instruction-for.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 535)).add_operation (GGS_string ("more properties"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 535)), fixItArray19  COMMA_SOURCE_FILE ("instruction-for.galgas", 534)) ;
          }
        }
        const GGS_enumeratedCollectionCstListInExpAST temp_22 = this ;
        UpEnumerator_forInstructionEnumeratedObjectElementListAST enumerator_20271 (temp_22.readProperty_mElementList ()) ;
        UpEnumerator_enumerationDescriptorList enumerator_20333 (var_enumerationDescriptorList_18430) ;
        while (enumerator_20271.hasCurrentObject () && enumerator_20333.hasCurrentObject ()) {
          GalgasBool test_23 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_23) {
            test_23 = GGS_bool (ComparisonKind::notEqual, enumerator_20271.current_mOptionalConstantName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_23) {
              GalgasBool test_24 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_24) {
                test_24 = GGS_bool (ComparisonKind::notEqual, enumerator_20271.current_mOptionalTypeName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_24) {
                  GGS_unifiedTypeMapEntry var_foundType_20524 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_20271.current_mOptionalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 542)) ;
                  GalgasBool test_25 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_25) {
                    test_25 = GGS_bool (ComparisonKind::notEqual, var_foundType_20524.objectCompare (enumerator_20333.current_mEnumeratedType (HERE))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_25) {
                      GenericArray <FixItDescription> fixItArray26 ;
                      inCompiler->emitSemanticError (enumerator_20271.current_mOptionalTypeName (HERE).readProperty_location (), GGS_string ("incorrect '@").add_operation (extensionGetter_definition (var_foundType_20524, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 544)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 544)).add_operation (GGS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 544)).add_operation (extensionGetter_definition (enumerator_20333.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 544)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 544)).add_operation (GGS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 544)), fixItArray26  COMMA_SOURCE_FILE ("instruction-for.galgas", 544)) ;
                    }
                  }
                }
              }
              ioArgument_ioLocalConstantListForDoBranch.addAssignOperation (enumerator_20333.current_mEnumeratedType (HERE), enumerator_20271.current_mOptionalConstantName (HERE), enumerator_20271.current_mDeclaredAsUnused (HERE), outArgument_outEnumeratorCppName.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 551)).add_operation (enumerator_20333.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 551)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 551))  COMMA_SOURCE_FILE ("instruction-for.galgas", 547)) ;
            }
          }
          enumerator_20271.gotoNextObject () ;
          enumerator_20333.gotoNextObject () ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumeratedCollectionVarInExpAST analyzeEnumeration'
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionVarInExpAST::method_analyzeEnumeration (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                      GGS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                      GGS_string & outArgument_outEnumeratorCppName,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumeratedCollectionVarInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 571)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 568)) ;
  const GGS_enumeratedCollectionVarInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GGS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 578)).getter_string (SOURCE_FILE ("instruction-for.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 578)) ;
  GGS_unifiedTypeMapEntry var_enumeratedElementType_22128 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 579)).readProperty_typeForEnumeratedElement () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_enumeratedElementType_22128.getter_isNull (SOURCE_FILE ("instruction-for.galgas", 580)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_enumeratedCollectionVarInExpAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GGS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 581)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 581)).add_operation (GGS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 581)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 581)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_enumeratedCollectionVarInExpAST temp_6 = this ;
      test_5 = GGS_bool (ComparisonKind::notEqual, temp_6.readProperty_mEnumerationVariable ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_enumeratedCollectionVarInExpAST temp_7 = this ;
        ioArgument_ioLocalConstantListForDoBranch.addAssignOperation (var_enumeratedElementType_22128, temp_7.readProperty_mEnumerationVariable (), GGS_bool (false), outArgument_outEnumeratorCppName.add_operation (GGS_string (".current (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 583))  COMMA_SOURCE_FILE ("instruction-for.galgas", 583)) ;
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_enumeratedCollectionVarInExpAST temp_9 = this ;
    test_8 = GGS_bool (ComparisonKind::notEqual, temp_9.readProperty_mEnumerationOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_enumeratedCollectionVarInExpAST temp_10 = this ;
      GGS_unifiedTypeMapEntry var_explicitType_22708 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_10.readProperty_mEnumerationOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 587)) ;
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_enumeratedElementType_22128, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 588)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (var_explicitType_22708, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 588)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          const GGS_enumeratedCollectionVarInExpAST temp_12 = this ;
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mEnumerationOptionalTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_enumeratedElementType_22128, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 589)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 589)).add_operation (GGS_string ("' type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 589)), fixItArray13  COMMA_SOURCE_FILE ("instruction-for.galgas", 589)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 605)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 606)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 608)) ;
  }
  GGS_semanticInstructionListForGeneration var_before_5F_instructionList_24200 ;
  {
  const GGS_forInstructionAST temp_0 = this ;
  const GGS_forInstructionAST temp_1 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_0.readProperty_mBeforeInstructionList (), temp_1.readProperty_mEndOf_5F_before_5F_branch (), ioArgument_ioVariableMap, var_before_5F_instructionList_24200, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 609)) ;
  }
  {
  const GGS_forInstructionAST temp_2 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_2.readProperty_mEndOf_5F_before_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 622)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 624)) ;
  }
  GGS_semanticInstructionListForGeneration var_between_5F_instructionList_24731 ;
  {
  const GGS_forInstructionAST temp_3 = this ;
  const GGS_forInstructionAST temp_4 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_3.readProperty_mBetweenInstructionList (), temp_4.readProperty_mEndOf_5F_between_5F_branch (), ioArgument_ioVariableMap, var_between_5F_instructionList_24731, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 625)) ;
  }
  {
  const GGS_forInstructionAST temp_5 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_5.readProperty_mEndOf_5F_between_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 638)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 640)) ;
  }
  GGS_semanticInstructionListForGeneration var_after_5F_instructionList_25296 ;
  {
  const GGS_forInstructionAST temp_6 = this ;
  const GGS_forInstructionAST temp_7 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_6.readProperty_mAfterInstructionList (), temp_7.readProperty_mEndOf_5F_after_5F_branch (), ioArgument_ioVariableMap, var_after_5F_instructionList_25296, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 641)) ;
  }
  {
  const GGS_forInstructionAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOf_5F_after_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 654)) ;
  }
  GGS_localConstantList var_localConstantListForDoBranch_25440 = GGS_localConstantList::init (inCompiler COMMA_HERE) ;
  GGS_forInstructionEnumeratedObjectListForGeneration var_enumerationList_25530 = GGS_forInstructionEnumeratedObjectListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_forInstructionAST temp_9 = this ;
  UpEnumerator_forInstructionEnumeratedObjectListAST enumerator_25570 (temp_9.readProperty_mEnumeratedObjectList ()) ;
  while (enumerator_25570.hasCurrentObject ()) {
    GGS_string var_enumeratorCppName_25859 ;
    GGS_semanticExpressionForGeneration var_enumerationExpression_25921 ;
    callExtensionMethod_analyzeEnumeration ((cPtr_abstractEnumeratedCollectionAST *) enumerator_25570.current_mEnumeratedCollection (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_localConstantListForDoBranch_25440, var_enumeratorCppName_25859, var_enumerationExpression_25921, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 659)) ;
    GGS_string temp_10 ;
    const GalgasBool test_11 = enumerator_25570.current_mAscending (HERE).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      temp_10 = GGS_string ("Up") ;
    }else if (GalgasBool::boolFalse == test_11) {
      temp_10 = GGS_string ("Down") ;
    }
    var_enumerationList_25530.addAssignOperation (temp_10, var_enumerationExpression_25921, var_enumeratorCppName_25859  COMMA_SOURCE_FILE ("instruction-for.galgas", 670)) ;
    enumerator_25570.gotoNextObject () ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 676)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 677)) ;
  }
  UpEnumerator_localConstantList enumerator_26241 (var_localConstantListForDoBranch_25440) ;
  while (enumerator_26241.hasCurrentObject ()) {
    {
    extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_26241.current (HERE).readProperty_mName (), enumerator_26241.current (HERE).readProperty_mType (), enumerator_26241.current (HERE).readProperty_mCppName (), enumerator_26241.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 680)) ;
    }
    enumerator_26241.gotoNextObject () ;
  }
  GGS_semanticExpressionForGeneration var_uncheckedWhileExpression_26732 ;
  const GGS_forInstructionAST temp_12 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_12.readProperty_mWhileExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 691)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_uncheckedWhileExpression_26732, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 688)) ;
  GGS_semanticExpressionForGeneration var_whileExpression_26919 ;
  {
  const GGS_forInstructionAST temp_13 = this ;
  routine_checkExpressionIsBoolean_3F__3F__3F__21_ (constinArgument_inAnalysisContext, temp_13.readProperty_mEndOf_5F_while_5F_expression (), var_uncheckedWhileExpression_26732, var_whileExpression_26919, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 697)) ;
  }
  {
  const GGS_forInstructionAST temp_14 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_14.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 704)) ;
  }
  {
  const GGS_forInstructionAST temp_15 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_15.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 705)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 707)) ;
  }
  GGS_string var_indexCppName_27151 = GGS_string::makeEmptyString () ;
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    const GGS_forInstructionAST temp_17 = this ;
    test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mIndexVariableName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      const GGS_forInstructionAST temp_18 = this ;
      var_indexCppName_27151 = GGS_string ("index_").add_operation (temp_18.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 710)).getter_string (SOURCE_FILE ("instruction-for.galgas", 710)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 710)) ;
      const GGS_forInstructionAST temp_19 = this ;
      var_localConstantListForDoBranch_25440.addAssignOperation (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), temp_19.readProperty_mIndexVariableName (), GGS_bool (false), var_indexCppName_27151  COMMA_SOURCE_FILE ("instruction-for.galgas", 711)) ;
    }
  }
  GGS_semanticInstructionListForGeneration var_do_5F_instructionList_27893 ;
  {
  const GGS_forInstructionAST temp_20 = this ;
  const GGS_forInstructionAST temp_21 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantListForDoBranch_25440, GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_20.readProperty_mDoInstructionList (), temp_21.readProperty_mEndOf_5F_do_5F_branch (), ioArgument_ioVariableMap, var_do_5F_instructionList_27893, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 718)) ;
  }
  {
  const GGS_forInstructionAST temp_22 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_22.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 732)) ;
  }
  {
  const GGS_forInstructionAST temp_23 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_23.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 734)) ;
  }
  {
  const GGS_forInstructionAST temp_24 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_24.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 735)) ;
  }
  const GGS_forInstructionAST temp_25 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_forInstructionForGeneration::init_21__21__21__21__21__21__21__21_ (temp_25.readProperty_mInstructionLocation (), var_enumerationList_25530, var_indexCppName_27151, var_whileExpression_26919, var_before_5F_instructionList_24200, var_between_5F_instructionList_24731, var_do_5F_instructionList_27893, var_after_5F_instructionList_25296, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas", 737)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                   GGS_string & ioArgument_ioGeneratedCode,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist var_enumerationVarCppNameList_30162 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_forInstructionForGeneration temp_0 = this ;
  UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_30225 (temp_0.readProperty_mEnumeratedObjectList ()) ;
  while (enumerator_30225.hasCurrentObject ()) {
    GGS_string var_enumerationVar_30433 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_30225.current_mEnumeratedExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_enumerationVar_30433, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 783)) ;
    var_enumerationVarCppNameList_30162.addAssignOperation (var_enumerationVar_30433  COMMA_SOURCE_FILE ("instruction-for.galgas", 790)) ;
    enumerator_30225.gotoNextObject () ;
  }
  const GGS_forInstructionForGeneration temp_1 = this ;
  UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_30534 (temp_1.readProperty_mEnumeratedObjectList ()) ;
  UpEnumerator_stringlist enumerator_30558 (var_enumerationVarCppNameList_30162) ;
  while (enumerator_30534.hasCurrentObject () && enumerator_30558.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_30534.current (HERE).readProperty_mEnumerationOrder ().add_operation (GGS_string ("Enumerator_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 793)).add_operation (extensionGetter_identifierRepresentation (enumerator_30534.current (HERE).readProperty_mEnumeratedExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 793)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 793)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 793)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (enumerator_30534.current (HERE).readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 794)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 794)).add_operation (enumerator_30558.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 794)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 794)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 794)) ;
    enumerator_30534.gotoNextObject () ;
    enumerator_30558.gotoNextObject () ;
  }
  const GGS_forInstructionForGeneration temp_2 = this ;
  GGS_bool var_whileExpressionIsAllwaysTrue_30868 = callExtensionGetter_isTrueExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mWhileExpression ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 797)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_forInstructionForGeneration temp_4 = this ;
    const GGS_forInstructionForGeneration temp_5 = this ;
    test_3 = GGS_bool (ComparisonKind::greaterThan, temp_4.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 799)).add_operation (temp_5.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 799)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 799)).objectCompare (GGS_uint (uint32_t (0U)))).operator_or (var_whileExpressionIsAllwaysTrue_30868.operator_not (SOURCE_FILE ("instruction-for.galgas", 799)) COMMA_SOURCE_FILE ("instruction-for.galgas", 799)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_forInstructionForGeneration temp_7 = this ;
        test_6 = GGS_bool (ComparisonKind::notEqual, temp_7.readProperty_mIndexVariableCppName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_forInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_uint ").add_operation (temp_8.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 802)).add_operation (GGS_string (" (uint32_t (0)) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 802)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 802)) ;
        }
      }
      GGS_string var_boolVarCppName_31308 = GGS_string ("bool_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-for.galgas", 804)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 804)) ;
      ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 805)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = var_whileExpressionIsAllwaysTrue_30868.boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const bool ").add_operation (var_boolVarCppName_31308, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 807)).add_operation (GGS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 807)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 807)) ;
        }
      }
      if (GalgasBool::boolFalse == test_9) {
        GGS_string var_whileVar_31667 ;
        const GGS_forInstructionForGeneration temp_10 = this ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_10.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_31667, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 809)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("bool ").add_operation (var_boolVarCppName_31308, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 810)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 810)).add_operation (var_whileVar_31667, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 810)).add_operation (GGS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 810)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 810)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 812)) ;
      const GGS_forInstructionForGeneration temp_11 = this ;
      UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_31824 (temp_11.readProperty_mEnumeratedObjectList ()) ;
      while (enumerator_31824.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_31824.current_mEnumeratorCppName (HERE).add_operation (GGS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 814)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 814)) ;
        enumerator_31824.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(var_boolVarCppName_31308.add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 816)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 816)) ;
      {
      const GGS_forInstructionForGeneration temp_12 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_12.readProperty_mBeforeInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 817)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 825)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 826)) ;
      const GGS_forInstructionForGeneration temp_13 = this ;
      UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_32329 (temp_13.readProperty_mEnumeratedObjectList ()) ;
      while (enumerator_32329.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_32329.current_mEnumeratorCppName (HERE).add_operation (GGS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 828)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 828)) ;
        enumerator_32329.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(var_boolVarCppName_31308.add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 830)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 830)) ;
      {
      const GGS_forInstructionForGeneration temp_14 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_14.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 832)) ;
      }
      const GGS_forInstructionForGeneration temp_15 = this ;
      UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_32814 (temp_15.readProperty_mEnumeratedObjectList ()) ;
      while (enumerator_32814.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_32814.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 842)).add_operation (GGS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 842)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 842)) ;
        enumerator_32814.gotoNextObject () ;
      }
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        const GGS_forInstructionForGeneration temp_17 = this ;
        test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mIndexVariableCppName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          const GGS_forInstructionForGeneration temp_18 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (temp_18.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 845)).add_operation (GGS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 845)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 845)) ;
        }
      }
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = var_whileExpressionIsAllwaysTrue_30868.operator_not (SOURCE_FILE ("instruction-for.galgas", 848)).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 849)) ;
          const GGS_forInstructionForGeneration temp_20 = this ;
          UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_33216 (temp_20.readProperty_mEnumeratedObjectList ()) ;
          while (enumerator_33216.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_33216.current_mEnumeratorCppName (HERE).add_operation (GGS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 851)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 851)) ;
            enumerator_33216.gotoNextObject () ;
            if (enumerator_33216.hasCurrentObject ()) {
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 852)) ;
            }
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 854)) ;
          GGS_string var_whileVar_33606 ;
          const GGS_forInstructionForGeneration temp_21 = this ;
          callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_21.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_33606, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 855)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("    ").add_operation (var_boolVarCppName_31308, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 862)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 862)).add_operation (var_whileVar_33606, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 862)).add_operation (GGS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 862)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 862)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 863)) ;
        }
      }
      GalgasBool test_22 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_22) {
        const GGS_forInstructionForGeneration temp_23 = this ;
        test_22 = GGS_bool (ComparisonKind::greaterThan, temp_23.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 866)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_22) {
          {
          ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 867)) ;
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 868)) ;
          const GGS_forInstructionForGeneration temp_24 = this ;
          UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_33940 (temp_24.readProperty_mEnumeratedObjectList ()) ;
          while (enumerator_33940.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_33940.current_mEnumeratorCppName (HERE).add_operation (GGS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 870)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 870)) ;
            enumerator_33940.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(var_boolVarCppName_31308.add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 872)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 872)) ;
          {
          const GGS_forInstructionForGeneration temp_25 = this ;
          routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_25.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 873)) ;
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 881)) ;
          {
          ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 882)) ;
          }
        }
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 885)) ;
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 887)) ;
      }
      {
      const GGS_forInstructionForGeneration temp_26 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_26.readProperty_mAfterInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 888)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 896)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_27 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_27) {
      const GGS_forInstructionForGeneration temp_28 = this ;
      test_27 = GGS_bool (ComparisonKind::notEqual, temp_28.readProperty_mIndexVariableCppName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_27) {
        const GGS_forInstructionForGeneration temp_29 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_uint ").add_operation (temp_29.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 899)).add_operation (GGS_string (" (uint32_t (0)) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 899)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 899)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 901)) ;
    const GGS_forInstructionForGeneration temp_30 = this ;
    UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35136 (temp_30.readProperty_mEnumeratedObjectList ()) ;
    while (enumerator_35136.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_35136.current_mEnumeratorCppName (HERE).add_operation (GGS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 903)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 903)) ;
      enumerator_35136.gotoNextObject () ;
      if (enumerator_35136.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 904)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 906)) ;
    {
    const GGS_forInstructionForGeneration temp_31 = this ;
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_31.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 908)) ;
    }
    const GGS_forInstructionForGeneration temp_32 = this ;
    UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35631 (temp_32.readProperty_mEnumeratedObjectList ()) ;
    while (enumerator_35631.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_35631.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 918)).add_operation (GGS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 918)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 918)) ;
      enumerator_35631.gotoNextObject () ;
    }
    GalgasBool test_33 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_33) {
      const GGS_forInstructionForGeneration temp_34 = this ;
      test_33 = GGS_bool (ComparisonKind::greaterThan, temp_34.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 921)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_33) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 922)) ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 923)) ;
        const GGS_forInstructionForGeneration temp_35 = this ;
        UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35951 (temp_35.readProperty_mEnumeratedObjectList ()) ;
        while (enumerator_35951.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_35951.current_mEnumeratorCppName (HERE).add_operation (GGS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 925)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 925)) ;
          enumerator_35951.gotoNextObject () ;
          if (enumerator_35951.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 926)) ;
          }
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 928)) ;
        {
        const GGS_forInstructionForGeneration temp_36 = this ;
        routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_36.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 929)) ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 937)) ;
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 938)) ;
        }
      }
    }
    GalgasBool test_37 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_37) {
      const GGS_forInstructionForGeneration temp_38 = this ;
      test_37 = GGS_bool (ComparisonKind::notEqual, temp_38.readProperty_mIndexVariableCppName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_37) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 942)) COMMA_SOURCE_FILE ("instruction-for.galgas", 942)) ;
        }
        const GGS_forInstructionForGeneration temp_39 = this ;
        const GGS_forInstructionForGeneration temp_40 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (temp_39.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 943)).add_operation (GGS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 943)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 943)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 943)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 943)).add_operation (extensionGetter_commaSourceFile (temp_40.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 944)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 944)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 944)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 943)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 946)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@setterCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_setterCallInstructionAST temp_0 = this ;
  UpEnumerator_actualParameterListAST enumerator_6206 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_6206.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_6206.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 172)) ;
    enumerator_6206.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfSetterCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfSetterCallInstructionAST temp_0 = this ;
  UpEnumerator_actualParameterListAST enumerator_6552 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_6552.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_6552.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 180)) ;
    enumerator_6552.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@setterCallInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_receiverType_7405 ;
  GGS_string var_targetVariableCppName_7432 ;
  GGS_string var_nameForCheckingFormalParameterUsing_7468 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_setterCallInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_selfAvailability_2E_available var_selfAvailability_7546 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-setter-call.galgas", 199)).unwrappedValue () ;
        if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-setter-call.galgas", 199)).isValuated ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfAvailability_7546.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 201)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_classType (SOURCE_FILE ("instruction-setter-call.galgas", 201)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = extensionGetter_selfIsMutable (var_selfAvailability_7546.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 202)).operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 202)).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                const GGS_setterCallInstructionAST temp_5 = this ;
                GenericArray <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (temp_5.readProperty_mSetterName ().readProperty_location (), GGS_string ("'self' not mutable in this context"), fixItArray6  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 203)) ;
              }
            }
          }
          GGS_propertyMap var_propertyMap_7909 = extensionGetter_definition (var_selfAvailability_7546.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 205)).readProperty_propertyMap () ;
          GGS_bool var_isConstant_8025 ;
          const GGS_setterCallInstructionAST temp_7 = this ;
          GGS_AccessControl joker_8017 ; // Joker input parameter
          var_propertyMap_7909.method_searchKey (temp_7.readProperty_mReceiverName (), joker_8017, var_isConstant_8025, var_receiverType_7405, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 206)) ;
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = var_isConstant_8025.boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              const GGS_setterCallInstructionAST temp_9 = this ;
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 208)) ;
            }
          }
          var_nameForCheckingFormalParameterUsing_7468 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GGS_setterCallInstructionAST temp_11 = this ;
          var_targetVariableCppName_7432 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 211)).add_operation (temp_11.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 212)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        const GGS_setterCallInstructionAST temp_12 = this ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mSetterName ().readProperty_location (), GGS_string ("'self' not available in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 214)) ;
        var_receiverType_7405.drop () ; // Release error dropped variable
        var_targetVariableCppName_7432.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_7468.drop () ; // Release error dropped variable
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_setterCallInstructionAST temp_14 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_14.readProperty_mReceiverName (), var_receiverType_7405, var_targetVariableCppName_7432, var_nameForCheckingFormalParameterUsing_7468, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 219)) ;
    }
  }
  GGS_bool var_ok_8810 = GGS_bool (true) ;
  const GGS_setterCallInstructionAST temp_15 = this ;
  GGS_location var_errorLocation_8826 = temp_15.readProperty_mReceiverName ().readProperty_location () ;
  const GGS_setterCallInstructionAST temp_16 = this ;
  UpEnumerator_lstringlist enumerator_8877 (temp_16.readProperty_mReceiverStructProperties ()) ;
  bool bool_17 = var_ok_8810.isValidAndTrue () ;
  if (enumerator_8877.hasCurrentObject () && bool_17) {
    while (enumerator_8877.hasCurrentObject () && bool_17) {
      var_ok_8810 = extensionGetter_definition (var_receiverType_7405, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 230)).readProperty_typeKind ().getter_isStructType (SOURCE_FILE ("instruction-setter-call.galgas", 230)) ;
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = var_ok_8810.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 231)).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (var_errorLocation_8826, GGS_string ("a structure is required for '.' access"), fixItArray19  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 232)) ;
        }
      }
      if (GalgasBool::boolFalse == test_18) {
        GGS_propertyMap var_propertyMap_9094 = extensionGetter_definition (var_receiverType_7405, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 234)).readProperty_propertyMap () ;
        GGS_AccessControl var_accessControl_9185 ;
        GGS_bool var_isConstant_9204 ;
        var_propertyMap_9094.method_searchKey (enumerator_8877.current_mValue (HERE), var_accessControl_9185, var_isConstant_9204, var_receiverType_7405, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 235)) ;
        extensionMethod_checkSetAccess (var_accessControl_9185, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_8877.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 236)) ;
        var_errorLocation_8826 = enumerator_8877.current_mValue (HERE).readProperty_location () ;
        GalgasBool test_20 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_20) {
          test_20 = var_isConstant_9204.boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            GenericArray <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_8877.current_mValue (HERE).readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 239)) ;
          }
        }
      }
      enumerator_8877.gotoNextObject () ;
      if (enumerator_8877.hasCurrentObject ()) {
        bool_17 = var_ok_8810.isValidAndTrue () ;
      }
    }
  }
  GGS_unifiedTypeMapEntry var_castType_9515 ;
  GalgasBool test_22 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_22) {
    const GGS_setterCallInstructionAST temp_23 = this ;
    test_22 = GGS_bool (ComparisonKind::notEqual, temp_23.readProperty_mTypeNameForCasting ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_22) {
      const GGS_setterCallInstructionAST temp_24 = this ;
      var_castType_9515 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_24.readProperty_mTypeNameForCasting (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 246)) ;
      {
      const GGS_setterCallInstructionAST temp_25 = this ;
      routine_checkAssignmentTypes_3F__3F__3F_ (var_receiverType_7405, var_castType_9515, temp_25.readProperty_mTypeNameForCasting ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 247)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_22) {
    var_castType_9515 = var_receiverType_7405 ;
  }
  GGS_methodKind var_kind_9873 ;
  GGS_formalParameterSignature var_routineSignature_9887 ;
  GGS_bool var_hasCompilerArgument_9913 ;
  GGS_string var_setterErrorMessage_9949 ;
  const GGS_setterCallInstructionAST temp_26 = this ;
  GGS_methodQualifier joker_9937 ; // Joker input parameter
  extensionGetter_definition (var_castType_9515, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 252)).readProperty_setterMap ().method_searchKey (temp_26.readProperty_mSetterName (), var_kind_9873, var_routineSignature_9887, var_hasCompilerArgument_9913, joker_9937, var_setterErrorMessage_9949, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 252)) ;
  GalgasBool test_27 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_27) {
    test_27 = GGS_bool (ComparisonKind::notEqual, var_setterErrorMessage_9949.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_27) {
      const GGS_setterCallInstructionAST temp_28 = this ;
      GenericArray <FixItDescription> fixItArray29 ;
      inCompiler->emitSemanticError (temp_28.readProperty_mSetterName ().readProperty_location (), var_setterErrorMessage_9949, fixItArray29  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 261)) ;
    }
  }
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_10478 ;
  const GGS_setterCallInstructionAST temp_30 = this ;
  const GGS_setterCallInstructionAST temp_31 = this ;
  const GGS_setterCallInstructionAST temp_32 = this ;
  extensionMethod_analyzeRoutineArguments (temp_30.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_31.readProperty_mSetterName (), GGS_string ("'").add_operation (temp_32.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 270)).add_operation (GGS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 270)), var_routineSignature_9887, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_10478, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 264)) ;
  GGS_unifiedTypeMapEntry var_baseType_10569 = var_castType_9515 ;
  GGS_bool var_searching_10595 = GGS_bool (true) ;
  GalgasBool test_33 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_33) {
    test_33 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("instruction-setter-call.galgas", 279)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_33) {
      if (GGS_uint::class_func_max (SOURCE_FILE ("instruction-setter-call.galgas", 280)).isValid ()) {
        uint32_t variant_10648 = GGS_uint::class_func_max (SOURCE_FILE ("instruction-setter-call.galgas", 280)).uintValue () ;
        bool loop_10648 = true ;
        while (loop_10648) {
          loop_10648 = var_searching_10595.isValid () ;
          if (loop_10648) {
            loop_10648 = var_searching_10595.boolValue () ;
          }
          if (loop_10648 && (0 == variant_10648)) {
            loop_10648 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-setter-call.galgas", 280)) ;
          }
          if (loop_10648) {
            variant_10648 -= 1 ;
            GalgasBool test_34 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_34) {
              test_34 = extensionGetter_definition (var_baseType_10569, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 281)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 281)).boolEnum () ;
              if (GalgasBool::boolTrue == test_34) {
                var_searching_10595 = GGS_bool (false) ;
              }
            }
            if (GalgasBool::boolFalse == test_34) {
              GalgasBool test_35 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_35) {
                const GGS_setterCallInstructionAST temp_36 = this ;
                test_35 = extensionGetter_definition (extensionGetter_definition (var_baseType_10569, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 284)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 284)).readProperty_setterMap ().getter_hasKey (temp_36.readProperty_mSetterName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 284)).boolEnum () ;
                if (GalgasBool::boolTrue == test_35) {
                  var_baseType_10569 = extensionGetter_definition (var_baseType_10569, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 285)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_35) {
                var_searching_10595 = GGS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GGS_setterCallInstructionAST temp_37 = this ;
  const GGS_setterCallInstructionAST temp_38 = this ;
  const GGS_setterCallInstructionAST temp_39 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_setterCallInstructionForGeneration::init_21__21__21__21__21__21__21__21__21__21__21_ (temp_37.readProperty_mReceiverName ().readProperty_location (), var_targetVariableCppName_7432, var_nameForCheckingFormalParameterUsing_7468, temp_38.readProperty_mReceiverStructProperties (), var_castType_9515, var_receiverType_7405, temp_39.readProperty_mSetterName (), var_kind_9873, var_actualParameterListForGeneration_10478, var_hasCompilerArgument_9913, var_baseType_10569, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 293)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfSetterCallInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_12031 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-setter-call.galgas", 318)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-setter-call.galgas", 318)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_12031.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 319)).operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 319)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfSetterCallInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mSetterName ().readProperty_location (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 320)) ;
        }
      }
      const GGS_selfSetterCallInstructionAST temp_4 = this ;
      extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_4.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 323)) ;
      GGS_methodKind var_kind_12486 ;
      GGS_formalParameterSignature var_routineSignature_12496 ;
      GGS_bool var_hasCompilerArgument_12518 ;
      const GGS_selfSetterCallInstructionAST temp_5 = this ;
      GGS_methodQualifier joker_12538 ; // Joker input parameter
      GGS_string joker_12541 ; // Joker input parameter
      extensionGetter_definition (var_selfAvailable_12031.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 325)).readProperty_setterMap ().method_searchKey (temp_5.readProperty_mSetterName (), var_kind_12486, var_routineSignature_12496, var_hasCompilerArgument_12518, joker_12538, joker_12541, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 325)) ;
      GGS_actualParameterListForGeneration var_actualParameterListForGeneration_12984 ;
      const GGS_selfSetterCallInstructionAST temp_6 = this ;
      const GGS_selfSetterCallInstructionAST temp_7 = this ;
      const GGS_selfSetterCallInstructionAST temp_8 = this ;
      extensionMethod_analyzeRoutineArguments (temp_6.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_7.readProperty_mSetterName (), GGS_string ("'").add_operation (temp_8.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 333)).add_operation (GGS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 333)), var_routineSignature_12496, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_12984, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 327)) ;
      const GGS_selfSetterCallInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_selfSetterCallInstructionForGeneration::init_21__21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), var_selfAvailable_12031.readProperty_type (), temp_9.readProperty_mSetterName (), var_kind_12486, var_actualParameterListForGeneration_12984, var_hasCompilerArgument_12518, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 340)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfSetterCallInstructionAST temp_10 = this ;
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mSetterName ().readProperty_location (), GGS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 349)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@setterCallInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GGS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 389)) ;
  const GGS_setterCallInstructionForGeneration temp_0 = this ;
  GGS_string var_receiverCppName_15068 = temp_0.readProperty_mReceiverCppName () ;
  const GGS_setterCallInstructionForGeneration temp_1 = this ;
  UpEnumerator_lstringlist enumerator_15115 (temp_1.readProperty_mReceiverStructAttributes ()) ;
  while (enumerator_15115.hasCurrentObject ()) {
    var_receiverCppName_15068.plusAssignOperation(GGS_string (".mProperty_").add_operation (enumerator_15115.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 392)) ;
    enumerator_15115.gotoNextObject () ;
  }
  {
  const GGS_setterCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mReceiverBaseName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 394)) ;
  }
  GGS_stringlist var_parameterCppNameList_15346 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_15391 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_15444 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_setterCallInstructionForGeneration temp_3 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_15475 (temp_3.readProperty_mActualParameterList ()) ;
  while (enumerator_15475.hasCurrentObject ()) {
    GGS_string var_parameterCppName_15760 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_15475.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_15391, var_inputVariableList_15444, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_15760, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 400)) ;
    var_parameterCppNameList_15346.addAssignOperation (var_parameterCppName_15760  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 409)) ;
    enumerator_15475.gotoNextObject () ;
  }
  const GGS_setterCallInstructionForGeneration temp_4 = this ;
  switch (temp_4.readProperty_mKind ().enumValue ()) {
  case GGS_methodKind::Enumeration::invalid:
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsExtension:
    {
      const GGS_setterCallInstructionForGeneration temp_5 = this ;
      const GGS_setterCallInstructionForGeneration temp_6 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("setter-").add_operation (extensionGetter_definition (temp_5.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 414)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 414)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 414)).add_operation (temp_6.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 414))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 414)) ;
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        const GGS_setterCallInstructionForGeneration temp_8 = this ;
        test_7 = extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 415)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 415)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            const GGS_setterCallInstructionForGeneration temp_10 = this ;
            test_9 = GGS_bool (ComparisonKind::greaterThan, extensionGetter_definition (temp_10.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 416)).readProperty_allTypedPropertyList ().getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 416)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              ioArgument_ioGeneratedCode.plusAssignOperation(var_receiverCppName_15068.add_operation (GGS_string (".insulate ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 417)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 417)).add_operation (GGS_string (" COMMA_HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 417)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 417)) ;
              {
              ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 418)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 418)) ;
              }
            }
          }
          const GGS_setterCallInstructionForGeneration temp_11 = this ;
          GGS_string var_pointerUniqueName_16439 = GGS_string ("ptr_").add_operation (temp_11.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 420)).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 420)) ;
          const GGS_setterCallInstructionForGeneration temp_12 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 421)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 421)).add_operation (var_pointerUniqueName_16439, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 421)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 421)) ;
          const GGS_setterCallInstructionForGeneration temp_13 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" = (cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_13.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 422)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 422)).add_operation (var_receiverCppName_15068, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 422)).add_operation (GGS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 422)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 422)) ;
          GalgasBool test_14 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_14) {
            const GGS_setterCallInstructionForGeneration temp_15 = this ;
            const GGS_setterCallInstructionForGeneration temp_16 = this ;
            test_14 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (temp_15.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 423)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (temp_16.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 423)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_14) {
              const GGS_setterCallInstructionForGeneration temp_17 = this ;
              ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("class-").add_operation (extensionGetter_definition (temp_17.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 424)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 424))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 424)) ;
              const GGS_setterCallInstructionForGeneration temp_18 = this ;
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if ((nullptr != ").add_operation (var_pointerUniqueName_16439, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 425)).add_operation (GGS_string (") && (dynamic_cast <cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 425)).add_operation (extensionGetter_identifierRepresentation (temp_18.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 426)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 426)).add_operation (var_pointerUniqueName_16439, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 426)).add_operation (GGS_string (") == nullptr)) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 427)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 425)) ;
              {
              ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 428)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 428)) ;
              }
              const GGS_setterCallInstructionForGeneration temp_19 = this ;
              const GGS_setterCallInstructionForGeneration temp_20 = this ;
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 429)).add_operation (GGS_string ("->onTheFlyRunTimeError (\"cannot cast to '@"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 429)).add_operation (extensionGetter_definition (temp_19.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 430)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 429)).add_operation (GGS_string ("'\""), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 430)).add_operation (extensionGetter_commaSourceFile (temp_20.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 430)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 429)) ;
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_pointerUniqueName_16439, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 431)).add_operation (GGS_string (" = nullptr ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 431)) ;
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 432)) ;
            }
          }
          const GGS_setterCallInstructionForGeneration temp_21 = this ;
          const GGS_setterCallInstructionForGeneration temp_22 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("callExtensionSetter_").add_operation (temp_21.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)).add_operation (GGS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)).add_operation (extensionGetter_identifierRepresentation (temp_22.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)).add_operation (var_pointerUniqueName_16439, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        const GGS_setterCallInstructionForGeneration temp_23 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("extensionSetter_").add_operation (temp_23.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 437)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 437)).add_operation (var_receiverCppName_15068, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 437)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 437)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 437)) ;
      }
    }
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsMember:
    {
      const GGS_setterCallInstructionForGeneration temp_24 = this ;
      extensionMethod_addHeaderFileName (temp_24.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 440)) ;
      const GGS_setterCallInstructionForGeneration temp_25 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(var_receiverCppName_15068.add_operation (GGS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 441)).add_operation (temp_25.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 441)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 441)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 441)) ;
    }
    break ;
  }
  UpEnumerator_stringlist enumerator_18172 (var_parameterCppNameList_15346) ;
  while (enumerator_18172.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_18172.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 444)) ;
    enumerator_18172.gotoNextObject () ;
    if (enumerator_18172.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 445)) ;
    }
  }
  GalgasBool test_26 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_26) {
    const GGS_setterCallInstructionForGeneration temp_27 = this ;
    test_26 = temp_27.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (GalgasBool::boolTrue == test_26) {
      GalgasBool test_28 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_28) {
        test_28 = GGS_bool (ComparisonKind::notEqual, var_parameterCppNameList_15346.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 448)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 449)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 451)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 451)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 452)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 453)) ;
    }
  }
  if (GalgasBool::boolFalse == test_26) {
    GalgasBool test_29 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_29) {
      test_29 = GGS_bool (ComparisonKind::notEqual, var_parameterCppNameList_15346.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 454)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_29) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 455)) ;
      }
    }
  }
  const GGS_setterCallInstructionForGeneration temp_30 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_sourceFile (temp_30.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 457)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 457)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 457)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 458)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfSetterCallInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                              GGS_string & ioArgument_ioGeneratedCode,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 468)) ;
  {
  const GGS_selfSetterCallInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 469)) ;
  }
  GGS_stringlist var_parameterCppNameList_19213 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_19257 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_19309 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_selfSetterCallInstructionForGeneration temp_1 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_19351 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_19351.hasCurrentObject ()) {
    GGS_string var_parameterCppName_19644 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_19351.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_19257, var_inputVariableList_19309, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_19644, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 475)) ;
    var_parameterCppNameList_19213.addAssignOperation (var_parameterCppName_19644  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 483)) ;
    enumerator_19351.gotoNextObject () ;
  }
  const GGS_selfSetterCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GGS_methodKind::Enumeration::invalid:
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsExtension:
    {
      const GGS_selfSetterCallInstructionForGeneration temp_3 = this ;
      const GGS_selfSetterCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("setter-").add_operation (extensionGetter_definition (temp_3.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 488)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 488)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 488)).add_operation (temp_4.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 488))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 488)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_selfSetterCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 489)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 489)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_selfSetterCallInstructionForGeneration temp_7 = this ;
          const GGS_selfSetterCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("callExtensionSetter_").add_operation (temp_7.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 490)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 490)).add_operation (temp_8.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 490)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 490)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        const GGS_selfSetterCallInstructionForGeneration temp_9 = this ;
        const GGS_selfSetterCallInstructionForGeneration temp_10 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("extensionSetter_").add_operation (temp_9.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 492)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 492)).add_operation (temp_10.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 492)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 492)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 492)) ;
      }
    }
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsMember:
    {
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        const GGS_selfSetterCallInstructionForGeneration temp_12 = this ;
        test_11 = extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 495)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 495)).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          const GGS_selfSetterCallInstructionForGeneration temp_13 = this ;
          const GGS_selfSetterCallInstructionForGeneration temp_14 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(temp_13.readProperty_mSelfCppName ().add_operation (GGS_string ("->setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 496)).add_operation (temp_14.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 496)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 496)) ;
        }
      }
      if (GalgasBool::boolFalse == test_11) {
        const GGS_selfSetterCallInstructionForGeneration temp_15 = this ;
        const GGS_selfSetterCallInstructionForGeneration temp_16 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(temp_15.readProperty_mSelfCppName ().add_operation (GGS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 498)).add_operation (temp_16.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 498)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 498)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 498)) ;
      }
    }
    break ;
  }
  UpEnumerator_stringlist enumerator_20637 (var_parameterCppNameList_19213) ;
  while (enumerator_20637.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_20637.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 502)) ;
    enumerator_20637.gotoNextObject () ;
    if (enumerator_20637.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 503)) ;
    }
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    const GGS_selfSetterCallInstructionForGeneration temp_18 = this ;
    test_17 = temp_18.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = GGS_bool (ComparisonKind::notEqual, var_parameterCppNameList_19213.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 506)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 507)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 509)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 509)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 510)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 510)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 511)) ;
    }
  }
  if (GalgasBool::boolFalse == test_17) {
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      test_20 = GGS_bool (ComparisonKind::notEqual, var_parameterCppNameList_19213.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 512)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 513)) ;
      }
    }
  }
  const GGS_selfSetterCallInstructionForGeneration temp_21 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_sourceFile (temp_21.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 515)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 515)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 515)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 516)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@opAssignExpressionInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_opAssignExpressionInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_opAssignExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 417)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@opAssignExpressionInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_opAssignExpressionInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_targetType_15391 ;
  GGS_string var_targetVariableCppName_15418 ;
  GGS_string var_nameForCheckingFormalParameterUsing_15456 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_opAssignExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_selfAvailability_2E_available var_selfAvailable_15538 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas", 434)).unwrappedValue () ;
        if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas", 434)).isValuated ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = extensionGetter_propertiesAreMutable (var_selfAvailable_15538.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 435)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 435)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              const GGS_opAssignExpressionInstructionAST temp_4 = this ;
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GGS_string ("property not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 436)) ;
            }
          }
          GGS_propertyMap var_propertyMap_15786 = extensionGetter_definition (var_selfAvailable_15538.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 438)).readProperty_propertyMap () ;
          GGS_bool var_isConstant_15901 ;
          const GGS_opAssignExpressionInstructionAST temp_6 = this ;
          GGS_AccessControl joker_15893 ; // Joker input parameter
          var_propertyMap_15786.method_searchKey (temp_6.readProperty_mReceiverName (), joker_15893, var_isConstant_15901, var_targetType_15391, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 439)) ;
          var_nameForCheckingFormalParameterUsing_15456 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GGS_opAssignExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_15418 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 441)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 442)) ;
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = var_isConstant_15901.boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              const GGS_opAssignExpressionInstructionAST temp_9 = this ;
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 444)) ;
            }
          }
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = extensionGetter_propertiesAreMutable (var_selfAvailable_15538.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 446)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 446)).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              const GGS_opAssignExpressionInstructionAST temp_12 = this ;
              GenericArray <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GGS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 447)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        const GGS_opAssignExpressionInstructionAST temp_14 = this ;
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 450)) ;
        var_targetType_15391.drop () ; // Release error dropped variable
        var_targetVariableCppName_15418.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_15456.drop () ; // Release error dropped variable
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_opAssignExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_15391, var_targetVariableCppName_15418, var_nameForCheckingFormalParameterUsing_15456, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 454)) ;
    }
  }
  const GGS_opAssignExpressionInstructionAST temp_17 = this ;
  UpEnumerator_lstringlist enumerator_16885 (temp_17.readProperty_mStructAttributeList ()) ;
  while (enumerator_16885.hasCurrentObject ()) {
    GGS_propertyMap var_propertyMap_16934 = extensionGetter_definition (var_targetType_15391, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 463)).readProperty_propertyMap () ;
    GGS_AccessControl var_accessControl_17023 ;
    GGS_bool var_isConstant_17042 ;
    var_propertyMap_16934.method_searchKey (enumerator_16885.current_mValue (HERE), var_accessControl_17023, var_isConstant_17042, var_targetType_15391, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 464)) ;
    extensionMethod_checkSetAccess (var_accessControl_17023, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_16885.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 465)) ;
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = var_isConstant_17042.boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        const GGS_opAssignExpressionInstructionAST temp_19 = this ;
        GenericArray <FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (temp_19.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray20  COMMA_SOURCE_FILE ("instruction-concat.galgas", 467)) ;
      }
    }
    enumerator_16885.gotoNextObject () ;
  }
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    const GGS_opAssignExpressionInstructionAST temp_22 = this ;
    test_21 = extensionGetter_definition (var_targetType_15391, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 471)).readProperty_features ().getter_contains (extensionGetter_features (temp_22.readProperty_mOperator (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 471)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 471)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 471)).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      const GGS_opAssignExpressionInstructionAST temp_23 = this ;
      const GGS_opAssignExpressionInstructionAST temp_24 = this ;
      GenericArray <FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_15391, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 473)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 473)).add_operation (GGS_string ("' type, but this type does not support the '"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 473)).add_operation (extensionGetter_string (temp_24.readProperty_mOperator (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 474)).add_operation (GGS_string ("' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 474)), fixItArray25  COMMA_SOURCE_FILE ("instruction-concat.galgas", 472)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_expression_17961 ;
  const GGS_opAssignExpressionInstructionAST temp_26 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_26.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_15391, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_17961, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 478)) ;
  {
  const GGS_opAssignExpressionInstructionAST temp_27 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_15391, var_expression_17961.readProperty_mResultType (), temp_27.readProperty_mInstructionLocation (), var_expression_17961, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 488)) ;
  }
  const GGS_opAssignExpressionInstructionAST temp_28 = this ;
  const GGS_opAssignExpressionInstructionAST temp_29 = this ;
  const GGS_opAssignExpressionInstructionAST temp_30 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_opAssignInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_28.readProperty_mInstructionLocation (), var_targetType_15391, var_targetVariableCppName_15418, var_nameForCheckingFormalParameterUsing_15456, temp_29.readProperty_mStructAttributeList (), var_expression_17961, extensionGetter_cppFunctionName (temp_30.readProperty_mOperator (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 497)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-concat.galgas", 490)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@plusEqualElementsInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_plusEqualElementsInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_plusEqualElementsInstructionAST temp_0 = this ;
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 516)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@plusEqualElementsInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_plusEqualElementsInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_targetType_19816 ;
  GGS_string var_targetVariableCppName_19843 ;
  GGS_string var_nameForCheckingFormalParameterUsing_19881 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_plusEqualElementsInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_selfAvailability_2E_available var_selfAvailable_19963 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas", 533)).unwrappedValue () ;
        if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas", 533)).isValuated ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GGS_propertyMap var_propertyMap_20044 = extensionGetter_definition (var_selfAvailable_19963.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 534)).readProperty_propertyMap () ;
          GGS_bool var_isConstant_20159 ;
          const GGS_plusEqualElementsInstructionAST temp_3 = this ;
          GGS_AccessControl joker_20151 ; // Joker input parameter
          var_propertyMap_20044.method_searchKey (temp_3.readProperty_mReceiverName (), joker_20151, var_isConstant_20159, var_targetType_19816, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 535)) ;
          var_nameForCheckingFormalParameterUsing_19881 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GGS_plusEqualElementsInstructionAST temp_4 = this ;
          var_targetVariableCppName_19843 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 537)).add_operation (temp_4.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 538)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 538)) ;
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = var_isConstant_20159.boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              const GGS_plusEqualElementsInstructionAST temp_6 = this ;
              GenericArray <FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (temp_6.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-concat.galgas", 540)) ;
            }
          }
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = extensionGetter_propertiesAreMutable (var_selfAvailable_19963.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 542)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 542)).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              const GGS_plusEqualElementsInstructionAST temp_9 = this ;
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GGS_string ("the property cannot be mutated in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 543)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        const GGS_plusEqualElementsInstructionAST temp_11 = this ;
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray12  COMMA_SOURCE_FILE ("instruction-concat.galgas", 546)) ;
        var_targetType_19816.drop () ; // Release error dropped variable
        var_targetVariableCppName_19843.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_19881.drop () ; // Release error dropped variable
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_plusEqualElementsInstructionAST temp_13 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_13.readProperty_mReceiverName (), var_targetType_19816, var_targetVariableCppName_19843, var_nameForCheckingFormalParameterUsing_19881, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 550)) ;
    }
  }
  const GGS_plusEqualElementsInstructionAST temp_14 = this ;
  UpEnumerator_lstringlist enumerator_21146 (temp_14.readProperty_mStructAttributeList ()) ;
  while (enumerator_21146.hasCurrentObject ()) {
    GGS_propertyMap var_propertyMap_21195 = extensionGetter_definition (var_targetType_19816, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 559)).readProperty_propertyMap () ;
    GGS_AccessControl var_accessControl_21284 ;
    GGS_bool var_isConstant_21303 ;
    var_propertyMap_21195.method_searchKey (enumerator_21146.current_mValue (HERE), var_accessControl_21284, var_isConstant_21303, var_targetType_19816, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 560)) ;
    extensionMethod_checkSetAccess (var_accessControl_21284, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_21146.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 561)) ;
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = var_isConstant_21303.boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GenericArray <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_21146.current_mValue (HERE).readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 563)) ;
      }
    }
    enumerator_21146.gotoNextObject () ;
  }
  GGS_functionSignature var_addAssignOperatorArguments_21581 = extensionGetter_definition (var_targetType_19816, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 567)).readProperty_addAssignOperatorArguments () ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = GGS_bool (ComparisonKind::equal, var_addAssignOperatorArguments_21581.getter_count (SOURCE_FILE ("instruction-concat.galgas", 568)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      const GGS_plusEqualElementsInstructionAST temp_18 = this ;
      GenericArray <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_19816, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 570)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 570)).add_operation (GGS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 570)), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 569)) ;
    }
  }
  if (GalgasBool::boolFalse == test_17) {
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      const GGS_plusEqualElementsInstructionAST temp_21 = this ;
      test_20 = GGS_bool (ComparisonKind::notEqual, temp_21.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-concat.galgas", 574)).objectCompare (var_addAssignOperatorArguments_21581.getter_count (SOURCE_FILE ("instruction-concat.galgas", 574)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        const GGS_plusEqualElementsInstructionAST temp_22 = this ;
        const GGS_plusEqualElementsInstructionAST temp_23 = this ;
        GenericArray <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mInstructionLocation (), GGS_string ("calling the '+=' operator on an '@").add_operation (extensionGetter_definition (var_targetType_19816, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 576)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 576)).add_operation (GGS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 576)).add_operation (var_addAssignOperatorArguments_21581.getter_count (SOURCE_FILE ("instruction-concat.galgas", 577)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 577)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 576)).add_operation (GGS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 577)).add_operation (temp_23.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-concat.galgas", 578)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 577)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 578)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 575)) ;
      }
    }
    if (GalgasBool::boolFalse == test_20) {
      GGS_semanticExpressionListForGeneration var_effectiveParameterList_22418 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_plusEqualElementsInstructionAST temp_25 = this ;
      UpEnumerator_actualOutputArgumentList enumerator_22486 (temp_25.readProperty_mExpressions ()) ;
      UpEnumerator_functionSignature enumerator_22572 (var_addAssignOperatorArguments_21581) ;
      while (enumerator_22486.hasCurrentObject () && enumerator_22572.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_expression_22924 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_22486.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_22572.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_22924, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 583)) ;
        GalgasBool test_26 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_26) {
          test_26 = GGS_bool (ComparisonKind::notEqual, enumerator_22572.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_22486.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_26) {
            GGS_string temp_27 ;
            const GalgasBool test_28 = GGS_bool (ComparisonKind::notEqual, enumerator_22572.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_28) {
              temp_27 = enumerator_22572.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 593)) ;
            }else if (GalgasBool::boolFalse == test_28) {
              temp_27 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_23032 = GGS_string ("!").add_operation (temp_27, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 593)) ;
            GenericArray <FixItDescription> fixItArray29 ;
            appendFixItActions (fixItArray29, EnumFixItKind::fixItReplace, var_s_23032) ;
            inCompiler->emitSemanticError (enumerator_22486.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_23032, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 594)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 594)), fixItArray29  COMMA_SOURCE_FILE ("instruction-concat.galgas", 594)) ;
          }
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_22572.current_mFormalArgumentType (HERE), var_expression_22924.readProperty_mResultType (), enumerator_22486.current_mEndOfExpressionLocation (HERE), var_expression_22924, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 596)) ;
        }
        var_effectiveParameterList_22418.addAssignOperation (var_expression_22924  COMMA_SOURCE_FILE ("instruction-concat.galgas", 597)) ;
        enumerator_22486.gotoNextObject () ;
        enumerator_22572.gotoNextObject () ;
      }
      const GGS_plusEqualElementsInstructionAST temp_30 = this ;
      const GGS_plusEqualElementsInstructionAST temp_31 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_plusEqualnstructionForGeneration::init_21__21__21__21__21__21_ (var_targetVariableCppName_19843, var_targetType_19816, var_nameForCheckingFormalParameterUsing_19881, temp_30.readProperty_mInstructionLocation (), temp_31.readProperty_mStructAttributeList (), var_effectiveParameterList_22418, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-concat.galgas", 600)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@plusPlusEqualElementInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_plusPlusEqualElementInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_plusPlusEqualElementInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 625)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@plusPlusEqualElementInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_plusPlusEqualElementInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_targetType_25084 ;
  GGS_string var_targetVariableCppName_25111 ;
  GGS_string var_nameForCheckingFormalParameterUsing_25149 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_plusPlusEqualElementInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_selfAvailability_2E_available var_selfAvailable_25231 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas", 642)).unwrappedValue () ;
        if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas", 642)).isValuated ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GGS_propertyMap var_propertyMap_25312 = extensionGetter_definition (var_selfAvailable_25231.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 643)).readProperty_propertyMap () ;
          GGS_bool var_isConstant_25427 ;
          const GGS_plusPlusEqualElementInstructionAST temp_3 = this ;
          GGS_AccessControl joker_25419 ; // Joker input parameter
          var_propertyMap_25312.method_searchKey (temp_3.readProperty_mReceiverName (), joker_25419, var_isConstant_25427, var_targetType_25084, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 644)) ;
          var_nameForCheckingFormalParameterUsing_25149 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GGS_plusPlusEqualElementInstructionAST temp_4 = this ;
          var_targetVariableCppName_25111 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 646)).add_operation (temp_4.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 647)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 647)) ;
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = var_isConstant_25427.boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              const GGS_plusPlusEqualElementInstructionAST temp_6 = this ;
              GenericArray <FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (temp_6.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-concat.galgas", 649)) ;
            }
          }
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = extensionGetter_propertiesAreMutable (var_selfAvailable_25231.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 651)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 651)).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              const GGS_plusPlusEqualElementInstructionAST temp_9 = this ;
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GGS_string ("the property cannot be mutated in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 652)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        const GGS_plusPlusEqualElementInstructionAST temp_11 = this ;
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray12  COMMA_SOURCE_FILE ("instruction-concat.galgas", 655)) ;
        var_targetType_25084.drop () ; // Release error dropped variable
        var_targetVariableCppName_25111.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_25149.drop () ; // Release error dropped variable
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_plusPlusEqualElementInstructionAST temp_13 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_13.readProperty_mReceiverName (), var_targetType_25084, var_targetVariableCppName_25111, var_nameForCheckingFormalParameterUsing_25149, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 659)) ;
    }
  }
  const GGS_plusPlusEqualElementInstructionAST temp_14 = this ;
  UpEnumerator_lstringlist enumerator_26414 (temp_14.readProperty_mStructAttributeList ()) ;
  while (enumerator_26414.hasCurrentObject ()) {
    GGS_propertyMap var_propertyMap_26463 = extensionGetter_definition (var_targetType_25084, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 668)).readProperty_propertyMap () ;
    GGS_AccessControl var_accessControl_26552 ;
    GGS_bool var_isConstant_26571 ;
    var_propertyMap_26463.method_searchKey (enumerator_26414.current_mValue (HERE), var_accessControl_26552, var_isConstant_26571, var_targetType_25084, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 669)) ;
    extensionMethod_checkSetAccess (var_accessControl_26552, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_26414.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 670)) ;
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = var_isConstant_26571.boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GenericArray <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_26414.current_mValue (HERE).readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 672)) ;
      }
    }
    enumerator_26414.gotoNextObject () ;
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = extensionGetter_definition (var_targetType_25084, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 676)).readProperty_supportCollectionValue ().operator_not (SOURCE_FILE ("instruction-concat.galgas", 676)).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      const GGS_plusPlusEqualElementInstructionAST temp_18 = this ;
      GenericArray <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_25084, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 678)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 678)).add_operation (GGS_string ("' type, but this type does not support the '++=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 678)), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 677)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_rightExpressionType_27111 = extensionGetter_definition (var_targetType_25084, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 682)).readProperty_typeForEnumeratedElement () ;
  GGS_semanticExpressionForGeneration var_expression_27503 ;
  const GGS_plusPlusEqualElementInstructionAST temp_20 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_20.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_rightExpressionType_27111, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_27503, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 684)) ;
  {
  const GGS_plusPlusEqualElementInstructionAST temp_21 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_rightExpressionType_27111, var_expression_27503.readProperty_mResultType (), temp_21.readProperty_mInstructionLocation (), var_expression_27503, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 694)) ;
  }
  const GGS_plusPlusEqualElementInstructionAST temp_22 = this ;
  const GGS_plusPlusEqualElementInstructionAST temp_23 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_plusPlusAssignInstructionForGeneration::init_21__21__21__21__21__21_ (temp_22.readProperty_mInstructionLocation (), var_targetType_25084, var_targetVariableCppName_25111, var_nameForCheckingFormalParameterUsing_25149, temp_23.readProperty_mStructAttributeList (), var_expression_27503, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-concat.galgas", 701)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@plusEqualnstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_plusEqualnstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                        GGS_string & ioArgument_ioGeneratedCode,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_plusEqualnstructionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 735)) ;
  GGS_stringlist var_parameterList_29171 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_plusEqualnstructionForGeneration temp_1 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_29211 (temp_1.readProperty_mExpressionList ()) ;
  while (enumerator_29211.hasCurrentObject ()) {
    GGS_string var_parameter_29433 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_29211.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_29433, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 738)) ;
    var_parameterList_29171.addAssignOperation (var_parameter_29433  COMMA_SOURCE_FILE ("instruction-concat.galgas", 745)) ;
    enumerator_29211.gotoNextObject () ;
  }
  {
  const GGS_plusEqualnstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 748)) ;
  }
  const GGS_plusEqualnstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_3.readProperty_mReceiverCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 749)) ;
  const GGS_plusEqualnstructionForGeneration temp_4 = this ;
  UpEnumerator_lstringlist enumerator_29652 (temp_4.readProperty_mStructAttributeList ()) ;
  while (enumerator_29652.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (".mProperty_").add_operation (enumerator_29652.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 751)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 751)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 751)) ;
    enumerator_29652.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (".addAssignOperation ("), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 754)) ;
  {
  const GGS_plusEqualnstructionForGeneration temp_5 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_5.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 755)) ;
  }
  UpEnumerator_stringlist enumerator_29942 (var_parameterList_29171) ;
  while (enumerator_29942.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_29942.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 757)) ;
    enumerator_29942.gotoNextObject () ;
    if (enumerator_29942.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 758)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_plusEqualnstructionForGeneration temp_7 = this ;
    test_6 = extensionGetter_definition (temp_7.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 760)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("instruction-concat.galgas", 760)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 760)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 761)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 761)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 761)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 762)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 762)) ;
      }
    }
  }
  const GGS_plusEqualnstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 764)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 764)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 764)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 764)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@opAssignInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_opAssignInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                        GGS_string & ioArgument_ioGeneratedCode,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_opAssignInstructionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 789)) ;
  GGS_string var_sourceVar_31600 ;
  const GGS_opAssignInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_31600, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 790)) ;
  {
  const GGS_opAssignInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 797)) ;
  }
  const GGS_opAssignInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_3.readProperty_mTargetVariableCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 798)) ;
  const GGS_opAssignInstructionForGeneration temp_4 = this ;
  UpEnumerator_lstringlist enumerator_31764 (temp_4.readProperty_mStructAttributeList ()) ;
  while (enumerator_31764.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (".mProperty_").add_operation (enumerator_31764.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 800)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 800)) ;
    enumerator_31764.gotoNextObject () ;
  }
  const GGS_opAssignInstructionForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (".").add_operation (temp_5.readProperty_mGeneratedMethod (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 802)).add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 802)).add_operation (var_sourceVar_31600, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 802)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 802)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 803)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 803)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 803)) ;
  const GGS_opAssignInstructionForGeneration temp_6 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 804)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 804)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 804)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 804)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 805)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 805)) ;
  }
  {
  const GGS_opAssignInstructionForGeneration temp_7 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_7.readProperty_mTargetVariableCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 806)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@plusPlusAssignInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_plusPlusAssignInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                              GGS_string & ioArgument_ioGeneratedCode,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_plusPlusAssignInstructionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 830)) ;
  GGS_string var_sourceVar_33400 ;
  const GGS_plusPlusAssignInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_33400, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 831)) ;
  {
  const GGS_plusPlusAssignInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 838)) ;
  }
  const GGS_plusPlusAssignInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_3.readProperty_mTargetVariableCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 839)) ;
  const GGS_plusPlusAssignInstructionForGeneration temp_4 = this ;
  UpEnumerator_lstringlist enumerator_33564 (temp_4.readProperty_mStructAttributeList ()) ;
  while (enumerator_33564.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (".mProperty_").add_operation (enumerator_33564.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 841)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 841)) ;
    enumerator_33564.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (".plusPlusAssignOperation (").add_operation (var_sourceVar_33400, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 843)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 843)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 843)) ;
  const GGS_plusPlusAssignInstructionForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_commaSourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 844)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 844)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 844)) ;
  {
  const GGS_plusPlusAssignInstructionForGeneration temp_6 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_6.readProperty_mTargetVariableCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 845)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfDivEqualExpressionInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfDivEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfDivEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 172)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfDivEqualExpressionInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfDivEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_7586 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 185)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 185)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_7586.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 186)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 186)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfDivEqualExpressionInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 187)) ;
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfAvailable_7586.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 190)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 190)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 190)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_selfDivEqualExpressionInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_7586.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 192)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 192)).add_operation (GGS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 192)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 191)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_expression_8526 ;
      const GGS_selfDivEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfAvailable_7586.readProperty_type (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8526, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 197)) ;
      {
      const GGS_selfDivEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfAvailable_7586.readProperty_type (), var_expression_8526.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_8526, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 207)) ;
      }
      const GGS_selfDivEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_opAssignInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_selfAvailable_7586.readProperty_type (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GGS_string::makeEmptyString (), GGS_lstringlist::init (inCompiler COMMA_HERE), var_expression_8526, GGS_string ("divAssignOperation"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 214)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfDivEqualExpressionInstructionAST temp_10 = this ;
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 224)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfPlusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfPlusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 242)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfPlusEqualExpressionInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_10527 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 255)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 255)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_10527.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 256)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 256)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfPlusEqualExpressionInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 257)) ;
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfAvailable_10527.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 260)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 260)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 260)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 260)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_selfPlusEqualExpressionInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_10527.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 262)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 262)).add_operation (GGS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 262)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 261)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_expression_11473 ;
      const GGS_selfPlusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfAvailable_10527.readProperty_type (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_11473, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 267)) ;
      {
      const GGS_selfPlusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfAvailable_10527.readProperty_type (), var_expression_11473.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_11473, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 277)) ;
      }
      const GGS_selfPlusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_opAssignInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_selfAvailable_10527.readProperty_type (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GGS_string::makeEmptyString (), GGS_lstringlist::init (inCompiler COMMA_HERE), var_expression_11473, GGS_string ("plusAssignOperation"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 284)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfPlusEqualExpressionInstructionAST temp_10 = this ;
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 294)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfMinusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfMinusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfMinusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 312)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfMinusEqualExpressionInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfMinusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_13476 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 325)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 325)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_13476.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 326)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 326)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfMinusEqualExpressionInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 327)) ;
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfAvailable_13476.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 330)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 330)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 330)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 330)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_selfMinusEqualExpressionInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_13476.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 332)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 332)).add_operation (GGS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 332)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 331)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_expression_14425 ;
      const GGS_selfMinusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfAvailable_13476.readProperty_type (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_14425, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 337)) ;
      {
      const GGS_selfMinusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfAvailable_13476.readProperty_type (), var_expression_14425.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_14425, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 347)) ;
      }
      const GGS_selfMinusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_opAssignInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_selfAvailable_13476.readProperty_type (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GGS_string::makeEmptyString (), GGS_lstringlist::init (inCompiler COMMA_HERE), var_expression_14425, GGS_string ("minusAssignOperation"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 354)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfMinusEqualExpressionInstructionAST temp_10 = this ;
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 364)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfMulEqualExpressionInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfMulEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfMulEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 382)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfMulEqualExpressionInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfMulEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_16425 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 395)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 395)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_16425.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 396)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 396)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfMulEqualExpressionInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 397)) ;
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfAvailable_16425.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 400)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 400)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 400)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_selfMulEqualExpressionInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_16425.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 402)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 402)).add_operation (GGS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 402)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 401)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_expression_17366 ;
      const GGS_selfMulEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfAvailable_16425.readProperty_type (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_17366, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 407)) ;
      {
      const GGS_selfMulEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfAvailable_16425.readProperty_type (), var_expression_17366.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_17366, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 417)) ;
      }
      const GGS_selfMulEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_opAssignInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_selfAvailable_16425.readProperty_type (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GGS_string::makeEmptyString (), GGS_lstringlist::init (inCompiler COMMA_HERE), var_expression_17366, GGS_string ("mulAssignOperation"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 424)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfMulEqualExpressionInstructionAST temp_10 = this ;
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 434)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfPlusEqualElementsInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualElementsInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfPlusEqualElementsInstructionAST temp_0 = this ;
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 452)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfPlusEqualElementsInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualElementsInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                  GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_19357 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 465)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 465)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_19357.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 466)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 466)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfPlusEqualElementsInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 467)) ;
        }
      }
      GGS_functionSignature var_addAssignOperatorArguments_19647 = extensionGetter_definition (var_selfAvailable_19357.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 470)).readProperty_addAssignOperatorArguments () ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_addAssignOperatorArguments_19647.getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 471)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_selfPlusEqualElementsInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_19357.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 473)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 473)).add_operation (GGS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 473)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 472)) ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_selfPlusEqualElementsInstructionAST temp_8 = this ;
          test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 477)).objectCompare (var_addAssignOperatorArguments_19647.getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 477)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            const GGS_selfPlusEqualElementsInstructionAST temp_9 = this ;
            const GGS_selfPlusEqualElementsInstructionAST temp_10 = this ;
            GenericArray <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("calling the '+=' operator on an '@").add_operation (extensionGetter_definition (var_selfAvailable_19357.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 479)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 479)).add_operation (GGS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 479)).add_operation (var_addAssignOperatorArguments_19647.getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 481)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 480)).add_operation (GGS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 481)).add_operation (temp_10.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 482)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 481)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 482)), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 478)) ;
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GGS_semanticExpressionListForGeneration var_effectiveParameterList_20508 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
          const GGS_selfPlusEqualElementsInstructionAST temp_12 = this ;
          UpEnumerator_actualOutputArgumentList enumerator_20607 (temp_12.readProperty_mExpressions ()) ;
          UpEnumerator_functionSignature enumerator_20642 (var_addAssignOperatorArguments_19647) ;
          while (enumerator_20607.hasCurrentObject () && enumerator_20642.hasCurrentObject ()) {
            GGS_semanticExpressionForGeneration var_expression_21036 ;
            callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_20607.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_20642.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_21036, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 487)) ;
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              test_13 = GGS_bool (ComparisonKind::notEqual, enumerator_20642.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_20607.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                GGS_string temp_14 ;
                const GalgasBool test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_20642.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_15) {
                  temp_14 = enumerator_20642.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 498)) ;
                }else if (GalgasBool::boolFalse == test_15) {
                  temp_14 = GGS_string::makeEmptyString () ;
                }
                GGS_string var_s_21174 = GGS_string ("!").add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 497)) ;
                GenericArray <FixItDescription> fixItArray16 ;
                appendFixItActions (fixItArray16, EnumFixItKind::fixItReplace, var_s_21174) ;
                inCompiler->emitSemanticError (enumerator_20607.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_21174, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 501)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 501)), fixItArray16  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 501)) ;
              }
            }
            {
            routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_20642.current (HERE).readProperty_mFormalArgumentType (), var_expression_21036.readProperty_mResultType (), enumerator_20607.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_21036, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 503)) ;
            }
            var_effectiveParameterList_20508.addAssignOperation (var_expression_21036  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 509)) ;
            enumerator_20607.gotoNextObject () ;
            enumerator_20642.gotoNextObject () ;
          }
          const GGS_selfPlusEqualElementsInstructionAST temp_17 = this ;
          ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_plusEqualnstructionForGeneration::init_21__21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), var_selfAvailable_19357.readProperty_type (), GGS_string::makeEmptyString (), temp_17.readProperty_mInstructionLocation (), GGS_lstringlist::init (inCompiler COMMA_HERE), var_effectiveParameterList_20508, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 512)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfPlusEqualElementsInstructionAST temp_18 = this ;
    GenericArray <FixItDescription> fixItArray19 ;
    inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray19  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 522)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@messageInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_messageInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_messageInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 70)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@messageInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_messageInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4390 ;
  const GGS_messageInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-message.galgas", 88)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4390, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 85)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_expression_4390.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_messageInstructionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("the expression has the '@").add_operation (extensionGetter_definition (var_expression_4390.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 97)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 97)).add_operation (GGS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 97)), fixItArray3  COMMA_SOURCE_FILE ("instruction-message.galgas", 96)) ;
    }
  }
  const GGS_messageInstructionAST temp_4 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_messageInstructionForGeneration::init_21__21_ (var_expression_4390, temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-message.galgas", 101)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@messageInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_messageInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                       GGS_string & ioArgument_ioGeneratedCode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_messageCppVarName_5851 ;
  const GGS_messageInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_5851, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 123)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 131)).add_operation (GGS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 131)).add_operation (var_messageCppVarName_5851, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 131)) ;
  const GGS_messageInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 132)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 132)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 132)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 133)) COMMA_SOURCE_FILE ("instruction-message.galgas", 133)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWithoutArgument&&?name?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (GGS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                   GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                   const GGS_string constinArgument_inClassFunctionName,
                                                                                                   const GGS_string constinArgument_inReturnedTypeName,
                                                                                                   const GGS_bool constinArgument_inHasLexiqueArgument,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_1720 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_1720, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 30)) ;
  }
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 35)), inCompiler COMMA_HERE), GGS_functionSignature::init (inCompiler COMMA_HERE), constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_1720 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 34)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWithArgument&&?name?argTypeName?argName?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (GGS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                                          GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                          const GGS_string constinArgument_inClassFunctionName,
                                                                                                                          const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                          const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                          const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                          const GGS_bool constinArgument_inHasLexiqueArgument,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_2435 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_2435, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 52)) ;
  }
  GGS_unifiedTypeMapEntry var_t_2522 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_2522, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 53)) ;
  }
  {
  GGS_functionSignature temp_0 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 56)) ;
  temp_0.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 56)), var_t_2522, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 56)) ;
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 55)), inCompiler COMMA_HERE), temp_0, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_2435 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 54)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWith2Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (GGS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                                                                                         GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                         const GGS_string constinArgument_inClassFunctionName,
                                                                                                                                                                         const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                                         const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                                                         const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                                                         const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                                                                         const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                                                         const GGS_bool constinArgument_inHasLexiqueArgument,
                                                                                                                                                                         Compiler * inCompiler
                                                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_3349 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3349, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 73)) ;
  }
  GGS_functionSignature var_argumentTypeList_3374 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_3442 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_3442, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 76)) ;
  }
  var_argumentTypeList_3374.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 77)), var_t_3442, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 77)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_3442, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 78)) ;
  }
  var_argumentTypeList_3374.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 79)), var_t_3442, constinArgument_inArgument_32_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 79)) ;
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 81)), inCompiler COMMA_HERE), var_argumentTypeList_3374, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_3349 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 80)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWith3Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?argTypeName3?argName3?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (GGS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                                                                                                                           GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                                                           const GGS_string constinArgument_inClassFunctionName,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_33_TypeName,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_33_Name,
                                                                                                                                                                                                           const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                                                                                           const GGS_bool constinArgument_inHasLexiqueArgument,
                                                                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_4567 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_4567, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 101)) ;
  }
  GGS_unifiedTypeMapEntry var_t_4654 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4654, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 102)) ;
  }
  GGS_functionSignature var_argumentTypeList_4682 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  var_argumentTypeList_4682.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 104)), var_t_4654, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 104)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_4654, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 105)) ;
  }
  var_argumentTypeList_4682.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 106)), var_t_4654, constinArgument_inArgument_32_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 106)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_4654, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 107)) ;
  }
  var_argumentTypeList_4682.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 108)), var_t_4654, constinArgument_inArgument_33_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 108)) ;
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 110)), inCompiler COMMA_HERE), var_argumentTypeList_4682, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_4567 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 109)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithoutArgument&?methodName?'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithoutArgument_26__3F_methodName_3F_ (GGS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                                       const GGS_string constinArgument_inInstanceMethodName,
                                                                       const GGS_bool constinArgument_inHasCompilerArgument,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 29)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 30)), GGS_formalParameterSignature::init (inCompiler COMMA_HERE), GGS_location::class_func_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 32)), constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 34)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 28)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithInputArgument&&?inputArgTypeName?inputArgName?methodName?'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (GGS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                                                                                 GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                 const GGS_string constinArgument_inInputArgumentTypeName,
                                                                                                                 const GGS_string constinArgument_inInputArgumentName,
                                                                                                                 const GGS_string constinArgument_inInstanceMethodName,
                                                                                                                 const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_2476 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_2476, inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 47)) ;
  }
  GGS_formalParameterSignature var_argList_2527 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_2527.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 49)), var_argumentTypeIndex_2476, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 49)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 49)) ;
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 51)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 52)), var_argList_2527, GGS_location::class_func_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 54)), constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 56)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 50)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithInputArgument&&?argTypeName?argName?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (GGS_setterMap & ioArgument_ioSetterMap,
                                                                                                            GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                            const GGS_string constinArgument_inInputArgumentTypeName,
                                                                                                            const GGS_string constinArgument_inInputArgumentName,
                                                                                                            const GGS_string constinArgument_inSetterName,
                                                                                                            const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_1754 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_1754, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 31)) ;
  }
  GGS_formalParameterSignature var_argList_1805 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_1805.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 33)), var_argumentTypeIndex_1754, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 33)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 33)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 35)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 36)), var_argList_1805, constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 39)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 34)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithOutputAndInputArguments&&?outputArgTypeName?outputArgName?inputArgTypeName?inputArgName?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithOutputAndInputArguments_26__26__3F_outputArgTypeName_3F_outputArgName_3F_inputArgTypeName_3F_inputArgName_3F_setterName_3F_compilerArg (GGS_setterMap & ioArgument_ioSetterMap,
                                                                                                                                                                      GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                      const GGS_string constinArgument_inOutputArgumentTypeName,
                                                                                                                                                                      const GGS_string constinArgument_inOutputArgumentName,
                                                                                                                                                                      const GGS_string constinArgument_inInputArgumentTypeName,
                                                                                                                                                                      const GGS_string constinArgument_inInputArgumentName,
                                                                                                                                                                      const GGS_string constinArgument_inSetterName,
                                                                                                                                                                      const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_outputArgumentTypeIndex_2696 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inOutputArgumentTypeName, var_outputArgumentTypeIndex_2696, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 54)) ;
  }
  GGS_unifiedTypeMapEntry var_inputArgumentTypeIndex_2793 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_inputArgumentTypeIndex_2793, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 55)) ;
  }
  GGS_formalParameterSignature var_argList_2849 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_2849.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 57)), var_outputArgumentTypeIndex_2696, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("semanticsSetters.galgas", 57)), constinArgument_inOutputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 57)) ;
  var_argList_2849.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 58)), var_inputArgumentTypeIndex_2793, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 58)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 58)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 60)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 61)), var_argList_2849, constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 64)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 59)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWith2InputArguments&&?arg1TypeName?arg1Name?arg2TypeName?arg2Name?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (GGS_setterMap & ioArgument_ioSetterMap,
                                                                                                                                                           GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                           const GGS_string constinArgument_inInputArgument_31_TypeName,
                                                                                                                                                           const GGS_string constinArgument_inInputArgument_31_Name,
                                                                                                                                                           const GGS_string constinArgument_inInputArgument_32_TypeName,
                                                                                                                                                           const GGS_string constinArgument_inInputArgument_32_Name,
                                                                                                                                                           const GGS_string constinArgument_inSetterName,
                                                                                                                                                           const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature var_argList_3764 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_3868 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_31_TypeName, var_argumentTypeIndex_3868, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 80)) ;
  }
  var_argList_3764.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 81)), var_argumentTypeIndex_3868, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 81)), constinArgument_inInputArgument_31_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 81)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_32_TypeName, var_argumentTypeIndex_3868, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 82)) ;
  }
  var_argList_3764.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 83)), var_argumentTypeIndex_3868, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 83)), constinArgument_inInputArgument_32_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 83)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 85)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 86)), var_argList_3764, constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 89)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 84)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithoutArgument&??compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (GGS_setterMap & ioArgument_ioSetterMap,
                                                                  const GGS_string constinArgument_inSetterName,
                                                                  const GGS_bool constinArgument_inHasCompilerArgument,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 100)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 101)), GGS_formalParameterSignature::init (inCompiler COMMA_HERE), constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 104)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 99)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_routineMangledName (const GGS_lstring & constinArgument_inRoutineName,
                                         const GGS_formalParameterSignature & constinArgument_inRoutineFormalParameters,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_str_1470 = constinArgument_inRoutineName.readProperty_string () ;
  UpEnumerator_formalParameterSignature enumerator_1516 (constinArgument_inRoutineFormalParameters) ;
  while (enumerator_1516.hasCurrentObject ()) {
    switch (enumerator_1516.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        var_str_1470.plusAssignOperation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 29)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        var_str_1470.plusAssignOperation(GGS_string ("&"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 31)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        var_str_1470.plusAssignOperation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 33)) ;
      }
      break ;
    }
    var_str_1470.plusAssignOperation(enumerator_1516.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 35)) ;
    enumerator_1516.gotoNextObject () ;
  }
  result_result = GGS_lstring::init_21__21_ (var_str_1470, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_routineMangledName [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_formalParameterSignature,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_routineMangledName (Compiler * inCompiler,
                                                                const cObjectArray & inEffectiveParameterArray,
                                                                const GGS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_formalParameterSignature operand1 = GGS_formalParameterSignature::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                             inCompiler
                                                                                             COMMA_THERE) ;
  return function_routineMangledName (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_routineMangledName ("routineMangledName",
                                                                    functionWithGenericHeader_routineMangledName,
                                                                    & kTypeDescriptor_GALGAS_lstring,
                                                                    2,
                                                                    functionArgs_routineMangledName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'routineArgumentFromFormalParameters'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_routineArgumentFromFormalParameters (const GGS_formalParameterSignature & constinArgument_inRoutineFormalParameters,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("(") ;
  UpEnumerator_formalParameterSignature enumerator_2086 (constinArgument_inRoutineFormalParameters) ;
  while (enumerator_2086.hasCurrentObject ()) {
    switch (enumerator_2086.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        result_result.plusAssignOperation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 48)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        result_result.plusAssignOperation(GGS_string ("!\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 50)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        result_result.plusAssignOperation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 52)) ;
      }
      break ;
    }
    result_result.plusAssignOperation(enumerator_2086.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 54)) ;
    enumerator_2086.gotoNextObject () ;
    if (enumerator_2086.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 56)) ;
    }
  }
  result_result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 58)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_routineArgumentFromFormalParameters [2] = {
  & kTypeDescriptor_GALGAS_formalParameterSignature,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_routineArgumentFromFormalParameters (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GGS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_formalParameterSignature operand0 = GGS_formalParameterSignature::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                             inCompiler
                                                                                             COMMA_THERE) ;
  return function_routineArgumentFromFormalParameters (operand0,
                                                       inCompiler
                                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_routineArgumentFromFormalParameters ("routineArgumentFromFormalParameters",
                                                                                     functionWithGenericHeader_routineArgumentFromFormalParameters,
                                                                                     & kTypeDescriptor_GALGAS_string,
                                                                                     1,
                                                                                     functionArgs_routineArgumentFromFormalParameters) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_extensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_extensionMethodAST temp_0 = this ;
  const GGS_extensionMethodAST temp_1 = this ;
  result_result = GGS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 150)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 150)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 150)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extensionMethodAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                              GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GGS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                              GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionMethodAST temp_0 = this ;
  const GGS_extensionMethodAST temp_1 = this ;
  const GGS_extensionMethodAST temp_2 = this ;
  GGS_lstring var_key_6663 = GGS_lstring::init_21__21_ (GGS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 164)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 164)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 164)), temp_2.readProperty_mExtensionMethodName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6663, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 167)) ;
  }
  {
  const GGS_extensionMethodAST temp_4 = this ;
  const GGS_extensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6663, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 168)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-method.galgas", 168)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_extensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-method.galgas", 170)).operator_not (SOURCE_FILE ("extension-method.galgas", 170)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_extensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 171)) ;
      }
    }
  }
  const GGS_extensionMethodAST temp_9 = this ;
  GGS_extensionMethodMapForBuildingContext_2E_element var_entry_7191 = ioArgument_ioExtensionMethodMapForBuildingContext.readSubscript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionMethodAST temp_10 = this ;
  const GGS_extensionMethodAST temp_11 = this ;
  var_entry_7191.mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mExtensionMethodName (), temp_11.readProperty_mExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("extension-method.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 177)) ;
  }
  {
  ioArgument_ioExtensionMethodMapForBuildingContext.setter_replaceKey (var_entry_7191, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 182)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extensionMethodAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                        const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                        const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extensionMethodAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument_inProductDirectory */,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionMethodAST temp_0 = this ;
  const GGS_extensionMethodAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_9163 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 214)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9163, var_nameForUsefulness_9163, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 215)) ;
  }
  const GGS_extensionMethodAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_9345 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 216)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_9345, var_nameForUsefulness_9163 COMMA_SOURCE_FILE ("extension-method.galgas", 217)) ;
  }
  const GGS_extensionMethodAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_9556 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 219)) ;
  GGS_string var_selfObjectNameString_9632 ;
  GGS_string var_selfObjectPropertyAccessorString_9669 ;
  GGS_bool var_implementedAsFunction_9716 ;
  GGS_bool var_isClass_9781 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_9556, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 224)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_classType (SOURCE_FILE ("extension-method.galgas", 224)))) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_isClass_9781.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_selfObjectNameString_9632 = GGS_string ("this") ;
      var_selfObjectPropertyAccessorString_9669 = GGS_string ("this->") ;
      var_implementedAsFunction_9716 = GGS_bool (false) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    var_selfObjectNameString_9632 = GGS_string ("inObject") ;
    var_selfObjectPropertyAccessorString_9669 = GGS_string ("inObject.") ;
    var_implementedAsFunction_9716 = GGS_bool (true) ;
  }
  GGS_analysisContext var_analysisContextNew_10162 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameString_9632, GGS_selfAvailability::class_func_available (var_selfType_9556, GGS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-method.galgas", 239))  COMMA_SOURCE_FILE ("extension-method.galgas", 239)), var_selfObjectPropertyAccessorString_9669, inCompiler COMMA_HERE) ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_10896 ;
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_10944 ;
  {
  const GGS_extensionMethodAST temp_5 = this ;
  const GGS_extensionMethodAST temp_6 = this ;
  const GGS_extensionMethodAST temp_7 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_9163, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_10162, ioArgument_ioTypeMap, temp_5.readProperty_mExtensionMethodFormalParameterList (), temp_6.readProperty_mExtensionMethodInstructionList (), temp_7.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_10896, var_formalParameterListForGeneration_10944, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 246)) ;
  }
  const GGS_extensionMethodAST temp_8 = this ;
  const GGS_extensionMethodAST temp_9 = this ;
  const GGS_extensionMethodAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("extension method ").add_operation (temp_8.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 259)), GGS_extensionMethodForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GGS_bool (true), GGS_string ("method-").add_operation (extensionGetter_definition (var_selfType_9556, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 262)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 262)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 262)).add_operation (temp_9.readProperty_mExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 262)), var_selfType_9556, temp_10.readProperty_mExtensionMethodName ().readProperty_string (), var_implementedAsFunction_9716, var_formalParameterListForGeneration_10944, extensionGetter_definition (var_selfType_9556, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 267)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_10896, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas", 258)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extensionMethodAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                             GGS_genericExtensionMethodListMap & ioArgument_ioExtensionMethodListMap,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_extensionMethodAST temp_0 = this ;
  const GGS_extensionMethodAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioExtensionMethodListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 294)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_extensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-method.galgas", 313)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extensionMethodForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_extensionMethodForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_extensionMethodForGeneration temp_2 = this ;
      const GGS_extensionMethodForGeneration temp_3 = this ;
      const GGS_extensionMethodForGeneration temp_4 = this ;
      outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 322)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionMethodName (), temp_4.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas", 321))) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_extensionMethodForGeneration temp_5 = this ;
    const GGS_extensionMethodForGeneration temp_6 = this ;
    const GGS_extensionMethodForGeneration temp_7 = this ;
    outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 328)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mExtensionMethodName (), temp_7.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas", 327))) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extensionMethodForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_extensionMethodForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_extensionMethodForGeneration temp_2 = this ;
      GGS_formalParameterListForGeneration var_extensionMethodFormalParameterList_15269 = temp_2.readProperty_mExtensionMethodFormalParameterList () ;
      {
      const GGS_extensionMethodForGeneration temp_3 = this ;
      var_extensionMethodFormalParameterList_15269.setter_insertAtIndex (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-method.galgas", 343)), GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method.galgas", 344)), temp_3.readProperty_mReceiverType (), GGS_lstring::init_21__21_ (GGS_string ("self"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 346)), inCompiler COMMA_HERE), GGS_string ("inObject"), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 342)) ;
      }
      const GGS_extensionMethodForGeneration temp_4 = this ;
      const GGS_extensionMethodForGeneration temp_5 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("method-").add_operation (extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 350)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 350)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 350)).add_operation (temp_5.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 350))  COMMA_SOURCE_FILE ("extension-method.galgas", 350)) ;
      GGS_string var_code_16212 ;
      {
      const GGS_extensionMethodForGeneration temp_6 = this ;
      const GGS_extensionMethodForGeneration temp_7 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GGS_bool (false), GGS_string ("extensionMethod_").add_operation (temp_6.readProperty_mExtensionMethodName ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 353)), ioArgument_ioInclusionSet, var_extensionMethodFormalParameterList_15269, temp_7.readProperty_mSemanticInstructionListForGeneration (), GGS_bool (false), GGS_string ("Compiler"), GGS_bool (true), GGS_bool (false), GGS_bool (false), var_code_16212, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 351)) ;
      }
      const GGS_extensionMethodForGeneration temp_8 = this ;
      const GGS_extensionMethodForGeneration temp_9 = this ;
      outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 365)).readProperty_typeName ().readProperty_string (), temp_9.readProperty_mExtensionMethodName (), var_code_16212 COMMA_SOURCE_FILE ("extension-method.galgas", 364))) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_extensionMethodForGeneration temp_10 = this ;
    extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 370)) ;
    const GGS_extensionMethodForGeneration temp_11 = this ;
    UpEnumerator_formalParameterListForGeneration enumerator_16542 (temp_11.readProperty_mExtensionMethodFormalParameterList ()) ;
    while (enumerator_16542.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_16542.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 372)) ;
      enumerator_16542.gotoNextObject () ;
    }
    const GGS_extensionMethodForGeneration temp_12 = this ;
    GGS_unifiedTypeMapEntry var_baseType_16692 = temp_12.readProperty_mReceiverType () ;
    GGS_bool var_searching_16736 = GGS_bool (true) ;
    if (GGS_uint::class_func_max (SOURCE_FILE ("extension-method.galgas", 376)).isValid ()) {
      uint32_t variant_16757 = GGS_uint::class_func_max (SOURCE_FILE ("extension-method.galgas", 376)).uintValue () ;
      bool loop_16757 = true ;
      while (loop_16757) {
        loop_16757 = var_searching_16736.isValid () ;
        if (loop_16757) {
          loop_16757 = var_searching_16736.boolValue () ;
        }
        if (loop_16757 && (0 == variant_16757)) {
          loop_16757 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-method.galgas", 376)) ;
        }
        if (loop_16757) {
          variant_16757 -= 1 ;
          GalgasBool test_13 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_13) {
            test_13 = extensionGetter_definition (var_baseType_16692, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 377)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-method.galgas", 377)).operator_not (SOURCE_FILE ("extension-method.galgas", 377)).boolEnum () ;
            if (GalgasBool::boolTrue == test_13) {
              GalgasBool test_14 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_14) {
                const GGS_extensionMethodForGeneration temp_15 = this ;
                test_14 = extensionGetter_definition (extensionGetter_definition (var_baseType_16692, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 378)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 378)).readProperty_instanceMethodMap ().getter_hasKey (temp_15.readProperty_mExtensionMethodName () COMMA_SOURCE_FILE ("extension-method.galgas", 378)).boolEnum () ;
                if (GalgasBool::boolTrue == test_14) {
                  var_baseType_16692 = extensionGetter_definition (var_baseType_16692, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 379)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_14) {
                var_searching_16736 = GGS_bool (false) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_13) {
            var_searching_16736 = GGS_bool (false) ;
          }
        }
      }
    }
    const GGS_extensionMethodForGeneration temp_16 = this ;
    ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("method-").add_operation (extensionGetter_definition (var_baseType_16692, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 388)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 388)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 388)).add_operation (temp_16.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 389))  COMMA_SOURCE_FILE ("extension-method.galgas", 387)) ;
    GGS_string var_methodImplementation_17513 ;
    {
    const GGS_extensionMethodForGeneration temp_17 = this ;
    const GGS_extensionMethodForGeneration temp_18 = this ;
    const GGS_extensionMethodForGeneration temp_19 = this ;
    const GGS_extensionMethodForGeneration temp_20 = this ;
    routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (temp_17.readProperty_mReceiverType (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionMethodName (), temp_19.readProperty_mExtensionMethodFormalParameterList (), temp_20.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_17513, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 390)) ;
    }
    const GGS_extensionMethodForGeneration temp_21 = this ;
    const GGS_extensionMethodForGeneration temp_22 = this ;
    const GGS_extensionMethodForGeneration temp_23 = this ;
    outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (inCompiler, extensionGetter_definition (temp_21.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 399)).readProperty_typeName ().readProperty_string (), temp_22.readProperty_mExtensionMethodName (), temp_23.readProperty_mExtensionMethodFormalParameterList (), var_methodImplementation_17513 COMMA_SOURCE_FILE ("extension-method.galgas", 398))) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@initializerAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_initializerAST::getter_keyRepresentation (Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_initializerAST temp_0 = this ;
  const GGS_initializerAST temp_1 = this ;
  result_result = function_initializerNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName (), extensionGetter_initializerSignature (temp_1.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 141)).readProperty_string () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@initializerAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_initializerAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                          GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                          GGS_extensionInitializerForBuildingContext & ioArgument_ioExtensionInitializerForBuildingContext,
                                                          GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                          GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                          GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                          GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_initializerAST temp_0 = this ;
  const GGS_initializerAST temp_1 = this ;
  GGS_lstring var_key_6318 = GGS_lstring::init_21__21_ (callExtensionGetter_keyRepresentation ((const cPtr_initializerAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 157)), temp_1.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_initializerAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6318, temp_2, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 158)) ;
  }
  {
  const GGS_initializerAST temp_3 = this ;
  const GGS_initializerAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6318, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 159)), temp_4.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-initializer.galgas", 159)) ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_initializerAST temp_6 = this ;
    test_5 = ioArgument_ioExtensionInitializerForBuildingContext.getter_hasKey (temp_6.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-initializer.galgas", 161)).operator_not (SOURCE_FILE ("extension-initializer.galgas", 161)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      {
      const GGS_initializerAST temp_7 = this ;
      ioArgument_ioExtensionInitializerForBuildingContext.setter_insertKey (temp_7.readProperty_mTypeName (), GGS_extensionInitializerMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 162)) ;
      }
    }
  }
  const GGS_initializerAST temp_8 = this ;
  GGS_extensionInitializerForBuildingContext_2E_element var_entry_6761 = ioArgument_ioExtensionInitializerForBuildingContext.readSubscript__3F_searchKey (temp_8.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_initializerAST temp_9 = this ;
  const GGS_initializerAST temp_10 = this ;
  const GGS_initializerAST temp_11 = this ;
  var_entry_6761.mProperty_mExtensionInitializerMapForType.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (temp_9.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 169)), temp_10.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE), temp_11.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 168)) ;
  }
  {
  ioArgument_ioExtensionInitializerForBuildingContext.setter_replaceKey (var_entry_6761, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 172)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@initializerAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_initializerAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                    const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                    const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                    const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                    const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                    GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                    GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@initializerAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_initializerAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                   const GGS_string /* constinArgument_inProductDirectory */,
                                                   const GGS_semanticContext constinArgument_inSemanticContext,
                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                   const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                   GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_initializerAST temp_0 = this ;
  const GGS_initializerAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_8415 = function_initializerNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName (), extensionGetter_initializerSignature (temp_1.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 198)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8415, var_nameForUsefulness_8415, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 202)) ;
  }
  const GGS_initializerAST temp_2 = this ;
  GGS_unifiedTypeMapEntry var_selfType_8680 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 204)) ;
  GGS_string var_selfObjectNameString_8755 ;
  GGS_string var_selfObjectAccessorString_8792 ;
  GGS_bool var_isClass_8860 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_8680, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 208)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_classType (SOURCE_FILE ("extension-initializer.galgas", 208)))) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_isClass_8860.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_selfObjectNameString_8755 = GGS_string ("this") ;
      var_selfObjectAccessorString_8792 = GGS_string::makeEmptyString () ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    var_selfObjectNameString_8755 = GGS_string ("result") ;
    var_selfObjectAccessorString_8792 = GGS_string ("result.") ;
  }
  GGS_analysisContext var_analysisContextNew_9144 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameString_8755, GGS_selfAvailability::class_func_available (var_selfType_8680, GGS_selfMutability::class_func_initializer (SOURCE_FILE ("extension-initializer.galgas", 221))  COMMA_SOURCE_FILE ("extension-initializer.galgas", 221)), var_selfObjectAccessorString_8792, inCompiler COMMA_HERE) ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_9683 ;
  GGS_formalInputParameterListForGeneration var_formalParameterListForGeneration_9731 ;
  {
  const GGS_initializerAST temp_4 = this ;
  const GGS_initializerAST temp_5 = this ;
  const GGS_initializerAST temp_6 = this ;
  routine_analyzeInitializerBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_8415, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_9144, ioArgument_ioTypeMap, temp_4.readProperty_mFormalParameterList (), temp_5.readProperty_mInstructionList (), temp_6.readProperty_mEndOfInitializerLocation (), var_semanticInstructionListForGeneration_9683, var_formalParameterListForGeneration_9731, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 224)) ;
  }
  const GGS_initializerAST temp_7 = this ;
  GGS_string var_initializerName_9786 = extensionGetter_initializerSignature (temp_7.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 236)) ;
  const GGS_initializerAST temp_8 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("initializer @").add_operation (temp_8.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 238)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 238)).add_operation (var_initializerName_9786, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 238)), GGS_extensionInitializerForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_bool (false), GGS_string ("initializer-").add_operation (extensionGetter_definition (var_selfType_8680, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 241)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-initializer.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 241)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 241)).add_operation (var_initializerName_9786.getter_fileNameRepresentation (SOURCE_FILE ("extension-initializer.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 241)), var_selfType_8680, var_initializerName_9786, var_formalParameterListForGeneration_9731, extensionGetter_definition (var_selfType_8680, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 245)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_9683, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas", 237)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeInitializerBody?&?&???!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeInitializerBody_3F__26__3F__26__3F__3F__3F__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         const GGS_formalInputParameterListAST constinArgument_inFormalArgumentListAST,
                                                                         const GGS_semanticInstructionListAST constinArgument_inInstructionList,
                                                                         const GGS_location constinArgument_inEndOfMethodLocation,
                                                                         GGS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                                                         GGS_formalInputParameterListForGeneration & outArgument_outSignatureForGeneration,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  GGS_localVarManager var_variableMap_11330 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_11434 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("extension-initializer.galgas", 267)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("extension-initializer.galgas", 267)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      UpEnumerator_typedPropertyList enumerator_11553 (extensionGetter_definition (var_selfAvailable_11434.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 268)).readProperty_allTypedPropertyList ()) ;
      while (enumerator_11553.hasCurrentObject ()) {
        GGS_bool temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, var_selfAvailable_11434.readProperty_selfMutability ().objectCompare (GGS_selfMutability::class_func_initializer (SOURCE_FILE ("extension-initializer.galgas", 269)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = GGS_bool (ComparisonKind::notEqual, enumerator_11553.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("extension-initializer.galgas", 270)))) ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_bool (true) ;
        }
        GGS_bool var_initialized_11587 = temp_1 ;
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_11330, enumerator_11553.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfMethodLocation, enumerator_11553.current (HERE).readProperty_typeEntry (), GGS_string ("<< unused >>"), GGS_string ("self.").add_operation (enumerator_11553.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 278)), var_initialized_11587, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 273)) ;
        }
        enumerator_11553.gotoNextObject () ;
      }
    }
  }
  outArgument_outSignatureForGeneration = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_formalInputParameterListAST enumerator_12097 (constinArgument_inFormalArgumentListAST) ;
  while (enumerator_12097.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_12132 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_12097.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 286)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = enumerator_12097.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string var_cppName_12267 = GGS_string ("constinArgument_").add_operation (enumerator_12097.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 288)) ;
        outArgument_outSignatureForGeneration.addAssignOperation (enumerator_12097.current (HERE).readProperty_mFormalSelector (), var_parameterType_12132, var_cppName_12267, enumerator_12097.current (HERE).readProperty_mFormalArgumentName (), enumerator_12097.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("extension-initializer.galgas", 289)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = enumerator_12097.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (var_variableMap_11330, enumerator_12097.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_12132, var_cppName_12267, var_cppName_12267, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 296)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          {
          extensionSetter_insertConstantInputFormalArgument (var_variableMap_11330, enumerator_12097.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_12132, var_cppName_12267, var_cppName_12267, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 298)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GGS_string var_cppName_12882 = GGS_string ("inArgument_").add_operation (enumerator_12097.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 301)) ;
      outArgument_outSignatureForGeneration.addAssignOperation (enumerator_12097.current (HERE).readProperty_mFormalSelector (), var_parameterType_12132, var_cppName_12882, enumerator_12097.current (HERE).readProperty_mFormalArgumentName (), enumerator_12097.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("extension-initializer.galgas", 302)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = enumerator_12097.current (HERE).readProperty_mIsUnused ().boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          {
          extensionSetter_insertInputFormalArgumentDeclaredAsUnused (var_variableMap_11330, enumerator_12097.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_12132, var_cppName_12882, var_cppName_12882, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 309)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        {
        extensionSetter_insertInputFormalArgument (var_variableMap_11330, enumerator_12097.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_12132, var_cppName_12882, var_cppName_12882, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 311)) ;
        }
      }
    }
    enumerator_12097.gotoNextObject () ;
  }
  outArgument_outSemanticInstructionListForGeneration = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_semanticInstructionListAST enumerator_13587 (constinArgument_inInstructionList) ;
  while (enumerator_13587.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_13587.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_11330, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 318)) ;
    enumerator_13587.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_11330, constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 328)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionInitializerForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_extensionInitializerForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-initializer.galgas", 345)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extensionInitializerForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionInitializerForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  GGS_string & outArgument_outImplementation,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionInitializerForGeneration temp_0 = this ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_15097 (temp_0.readProperty_formalParameterList ()) ;
  while (enumerator_15097.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_15097.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 354)) ;
    enumerator_15097.gotoNextObject () ;
  }
  GGS_string var_methodImplementation_15404 ;
  {
  const GGS_extensionInitializerForGeneration temp_1 = this ;
  const GGS_extensionInitializerForGeneration temp_2 = this ;
  const GGS_extensionInitializerForGeneration temp_3 = this ;
  const GGS_extensionInitializerForGeneration temp_4 = this ;
  routine_generateInitializer_3F__3F__26__3F__3F__21_ (temp_1.readProperty_mReceiverType (), temp_2.readProperty_initializerName (), ioArgument_ioInclusionSet, temp_3.readProperty_formalParameterList (), temp_4.readProperty_semanticInstructionListForGeneration (), var_methodImplementation_15404, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 356)) ;
  }
  const GGS_extensionInitializerForGeneration temp_5 = this ;
  const GGS_extensionInitializerForGeneration temp_6 = this ;
  const GGS_extensionInitializerForGeneration temp_7 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_initializerImplementation (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 365)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_initializerName (), temp_7.readProperty_formalParameterList (), var_methodImplementation_15404 COMMA_SOURCE_FILE ("extension-initializer.galgas", 364))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInitializer??&??!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInitializer_3F__3F__26__3F__3F__21_ (const GGS_unifiedTypeMapEntry constinArgument_inReceiverType,
                                                          const GGS_string constinArgument_inInitializerName,
                                                          GGS_stringset & ioArgument_ioInclusionSet,
                                                          const GGS_formalInputParameterListForGeneration constinArgument_inFormalArgumentList,
                                                          const GGS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                          GGS_string & outArgument_outGeneratedCode,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GGS_string var_className_16445 = extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 386)).readProperty_typeName ().readProperty_string () ;
  GGS_stringset var_unusedVariableCppNameSet_16548 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_16548.plusPlusAssignOperation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 389))  COMMA_SOURCE_FILE ("extension-initializer.galgas", 389)) ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_16648 (constinArgument_inFormalArgumentList) ;
  while (enumerator_16648.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_16548.plusPlusAssignOperation (enumerator_16648.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("extension-initializer.galgas", 391)) ;
    enumerator_16648.gotoNextObject () ;
  }
  GGS_uint var_temporaryVariableIndex_16776 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_routineBody_16817 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_16817.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 396)) ;
  }
  UpEnumerator_semanticInstructionListForGeneration enumerator_16877 (constinArgument_inInstructionList) ;
  while (enumerator_16877.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_16877.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_16776, var_unusedVariableCppNameSet_16548, GGS_bool (false), var_routineBody_16817, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 398)) ;
    enumerator_16877.gotoNextObject () ;
  }
  {
  var_routineBody_16817.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 406)) ;
  }
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 408)) ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_17265 (constinArgument_inFormalArgumentList) ;
  while (enumerator_17265.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_17265.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 410)) ;
    enumerator_17265.gotoNextObject () ;
  }
  GGS_bool var_isStruct_17394 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 413)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-initializer.galgas", 413)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_isStruct_17394.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outGeneratedCode = GGS_string ("GGS_").add_operation (var_className_16445.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 416)).add_operation (GGS_string (" GGS_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 416)).add_operation (var_className_16445.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 417)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 417)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 418)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 418)) ;
      GGS_uint var_colRef_17704 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("extension-initializer.galgas", 419)) ;
      UpEnumerator_formalInputParameterListForGeneration enumerator_17773 (constinArgument_inFormalArgumentList) ;
      while (enumerator_17773.hasCurrentObject ()) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = enumerator_17773.current (HERE).readProperty_mIsConstant ().boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_17773.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 423)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 423)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 423)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_17773.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 425)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 425)) ;
        }
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_unusedVariableCppNameSet_16548.getter_hasKey (enumerator_17773.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("extension-initializer.galgas", 427)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (enumerator_17773.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 428)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 428)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          outArgument_outGeneratedCode.plusAssignOperation(enumerator_17773.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 430)) ;
        }
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 432)) ;
        {
        outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_17704, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 433)) ;
        }
        enumerator_17773.gotoNextObject () ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("Compiler * ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 436)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 436)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 436)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_17704, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 437)) ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 438)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 439)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (var_className_16445.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 440)).add_operation (GGS_string (" result ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 440)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 440)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  result.setInitializedProperties (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 441)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 441)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 441)) ;
      outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_16817, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 442)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  return result ;\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 443)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 444)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outGeneratedCode = GGS_string ("GGS_").add_operation (var_className_16445.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 446)).add_operation (GGS_string (" GGS_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 446)).add_operation (var_className_16445.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 447)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 447)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 448)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 448)) ;
    GGS_uint var_colRef_19140 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("extension-initializer.galgas", 449)) ;
    UpEnumerator_formalInputParameterListForGeneration enumerator_19209 (constinArgument_inFormalArgumentList) ;
    while (enumerator_19209.hasCurrentObject ()) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = enumerator_19209.current (HERE).readProperty_mIsConstant ().boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_19209.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 453)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 453)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 453)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_19209.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 455)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 455)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 455)) ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(enumerator_19209.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 457)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 458)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19140, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 459)) ;
      }
      enumerator_19209.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("Compiler * ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 462)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 462)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 462)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19140, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 463)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_LOCATION_ARGS) {\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 464)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  cPtr_").add_operation (var_className_16445.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 465)).add_operation (GGS_string (" * object = nullptr ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 465)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 465)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  macroMyNew (object, cPtr_").add_operation (var_className_16445.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 466)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 466)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 467)).add_operation (GGS_string (" COMMA_THERE)) ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 467)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 467)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  object->").add_operation (var_className_16445.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 468)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 468)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 469)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 469)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 468)) ;
    UpEnumerator_formalInputParameterListForGeneration enumerator_20279 (constinArgument_inFormalArgumentList) ;
    while (enumerator_20279.hasCurrentObject ()) {
      outArgument_outGeneratedCode.plusAssignOperation(enumerator_20279.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 471)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 472)) ;
      enumerator_20279.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 474)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 474)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  const GGS_").add_operation (var_className_16445.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 475)).add_operation (GGS_string (" result (object) ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 475)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  macroDetachSharedObject (object) ;\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 476)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  return result ;\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 477)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 478)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("void cPtr_").add_operation (var_className_16445.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 479)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 479)).add_operation (var_className_16445.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 480)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 480)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 481)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 479)) ;
    UpEnumerator_formalInputParameterListForGeneration enumerator_20911 (constinArgument_inFormalArgumentList) ;
    while (enumerator_20911.hasCurrentObject ()) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = enumerator_20911.current (HERE).readProperty_mIsConstant ().boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const "), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 484)) ;
        }
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_20911.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 486)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 486)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_unusedVariableCppNameSet_16548.getter_hasKey (enumerator_20911.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("extension-initializer.galgas", 487)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (enumerator_20911.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 488)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 488)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        outArgument_outGeneratedCode.plusAssignOperation(enumerator_20911.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 490)) ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 492)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19140, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 493)) ;
      }
      enumerator_20911.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("Compiler * "), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 496)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = var_unusedVariableCppNameSet_16548.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 497)) COMMA_SOURCE_FILE ("extension-initializer.galgas", 497)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 498)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 498)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 498)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      outArgument_outGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 500)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 500)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 502)) ;
    outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_16817, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 503)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 504)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_abstractExtensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_abstractExtensionGetterAST temp_0 = this ;
  const GGS_abstractExtensionGetterAST temp_1 = this ;
  result_result = GGS_string ("abstract extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 153)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 153)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 153)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@abstractExtensionGetterAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                      GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                      GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                      GGS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                      GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                      GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionGetterAST temp_0 = this ;
  const GGS_abstractExtensionGetterAST temp_1 = this ;
  const GGS_abstractExtensionGetterAST temp_2 = this ;
  GGS_lstring var_key_6905 = GGS_lstring::init_21__21_ (GGS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 168)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 168)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 168)), temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6905, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 171)) ;
  }
  {
  const GGS_abstractExtensionGetterAST temp_4 = this ;
  const GGS_abstractExtensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6905, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 172)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 172)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_abstractExtensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 174)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 174)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_abstractExtensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 175)) ;
      }
    }
  }
  const GGS_abstractExtensionGetterAST temp_9 = this ;
  GGS_extensionGetterMapForBuildingContext_2E_element var_entry_7448 = ioArgument_ioExtensionGetterMapForBuildingContext.readSubscript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionGetterAST temp_10 = this ;
  const GGS_abstractExtensionGetterAST temp_11 = this ;
  const GGS_abstractExtensionGetterAST temp_12 = this ;
  var_entry_7448.mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionGetterName (), temp_11.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_12.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("extension-abstract-getter.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 181)) ;
  }
  {
  ioArgument_ioExtensionGetterMapForBuildingContext.setter_replaceKey (var_entry_7448, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 187)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@abstractExtensionGetterAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@abstractExtensionGetterAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                               GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GGS_string /* constinArgument_inProductDirectory */,
                                                               const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionGetterAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_9476 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 220)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_9476, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 222)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-abstract-getter.galgas", 222)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 222)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_abstractExtensionGetterAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare an extension getter: '@").add_operation (extensionGetter_definition (var_selfType_9476, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 224)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 224)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 224)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 223)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_9476, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 226)).readProperty_isConcrete ().boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_abstractExtensionGetterAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare an abstract extension getter: '@").add_operation (extensionGetter_definition (var_selfType_9476, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 228)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 228)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 228)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 227)) ;
      }
    }
  }
  GGS_formalInputParameterListForGeneration var_formalParameterListForGeneration_10120 = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_abstractExtensionGetterAST temp_7 = this ;
  UpEnumerator_formalInputParameterListAST enumerator_10230 (temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList ()) ;
  while (enumerator_10230.hasCurrentObject ()) {
    var_formalParameterListForGeneration_10120.addAssignOperation (enumerator_10230.current_mFormalSelector (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_10230.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 236)), enumerator_10230.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_10230.current_mFormalArgumentName (HERE), enumerator_10230.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 234)) ;
    enumerator_10230.gotoNextObject () ;
  }
  const GGS_abstractExtensionGetterAST temp_8 = this ;
  const GGS_abstractExtensionGetterAST temp_9 = this ;
  const GGS_abstractExtensionGetterAST temp_10 = this ;
  const GGS_abstractExtensionGetterAST temp_11 = this ;
  const GGS_abstractExtensionGetterAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("abstract extension getter ").add_operation (temp_8.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 243)), GGS_abstractExtensionGetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (GGS_bool (true), GGS_string ("getter-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 246)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 246)).add_operation (temp_10.readProperty_mAbstractExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 246)), var_selfType_9476, temp_11.readProperty_mAbstractExtensionGetterName ().readProperty_string (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_12.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 249)), var_formalParameterListForGeneration_10120, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 242)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@abstractExtensionGetterAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & ioArgument_ioAbstractExtensionGetterListMap,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_abstractExtensionGetterAST temp_0 = this ;
  const GGS_abstractExtensionGetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioAbstractExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 270)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_abstractExtensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-abstract-getter.galgas", 290)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@abstractExtensionGetterForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GGS_string & outArgument_outHeader,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionGetterForGeneration temp_0 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_1 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_2 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 298)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), temp_2.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_3.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 297))) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@abstractExtensionGetterForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionGetterForGeneration temp_0 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("getter-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 311)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 310)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 311)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 312))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 310)) ;
  const GGS_abstractExtensionGetterForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 313)) ;
  const GGS_abstractExtensionGetterForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 314)) ;
  const GGS_abstractExtensionGetterForGeneration temp_4 = this ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_14513 (temp_4.readProperty_mAbstractExtensionGetterFormalParameterList ()) ;
  while (enumerator_14513.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_14513.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 316)) ;
    enumerator_14513.gotoNextObject () ;
  }
  const GGS_abstractExtensionGetterForGeneration temp_5 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_6 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_7 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_8 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 319)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mAbstractExtensionGetterName (), temp_7.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_8.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 318))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleEquatableComparableExtension&?&?acceptEquatable?acceptComparable'
//
//--------------------------------------------------------------------------------------------------

void routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                                                    const GGS_lstring constinArgument_inTypeName,
                                                                                                    GGS_typeFeatures & ioArgument_ioFeatures,
                                                                                                    const GGS_bool constinArgument_inAcceptEquatable,
                                                                                                    const GGS_bool constinArgument_inAcceptComparable,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_equatableExtensionMap_2E_element var_node_3267 = ioArgument_ioEquatableExtensionMap.readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioEquatableExtensionMap.readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GGS_location var_location_3325 = ioArgument_ioEquatableExtensionMap.getter_locationForKey (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 84)) ;
      {
      GGS_equatableComparableExtension joker_3442 ; // Joker input parameter
      ioArgument_ioEquatableExtensionMap.setter_removeKey (constinArgument_inTypeName, joker_3442, inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 85)) ;
      }
      GGS_bool var_currentlyEquatable_3454 = ioArgument_ioFeatures.getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas", 86)) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 86)) ;
      GGS_bool var_currentlyComparable_3517 = ioArgument_ioFeatures.getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("extension-equatable-comparable.galgas", 87)) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 87)) ;
      switch (var_node_3267.readProperty_mExtension ().enumValue ()) {
      case GGS_equatableComparableExtension::Enumeration::invalid:
        break ;
      case GGS_equatableComparableExtension::Enumeration::enum_equatable:
        {
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = var_currentlyComparable_3517.boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (var_location_3325, GGS_string ("useless extension, the type is already declared comparable"), fixItArray2  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 91)) ;
            }
          }
          if (GalgasBool::boolFalse == test_1) {
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = var_currentlyEquatable_3454.boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                GenericArray <FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (var_location_3325, GGS_string ("useless extension, the type is already declared equatable"), fixItArray4  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 93)) ;
              }
            }
            if (GalgasBool::boolFalse == test_3) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = constinArgument_inAcceptEquatable.boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  ioArgument_ioFeatures.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 95)) ;
                }
              }
              if (GalgasBool::boolFalse == test_5) {
                GenericArray <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (var_location_3325, GGS_string ("useless extension, the type does not support %equatable"), fixItArray6  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 97)) ;
                GenericArray <FixItDescription> fixItArray7 ;
                inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("type declaration is here"), fixItArray7  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 98)) ;
              }
            }
          }
        }
        break ;
      case GGS_equatableComparableExtension::Enumeration::enum_comparable:
        {
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = var_currentlyComparable_3517.boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (var_location_3325, GGS_string ("useless extension, the type is already declared comparable"), fixItArray9  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 102)) ;
            }
          }
          if (GalgasBool::boolFalse == test_8) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = constinArgument_inAcceptComparable.boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                ioArgument_ioFeatures.orAssignOperation(GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("extension-equatable-comparable.galgas", 104)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas", 104)) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 104)) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              GenericArray <FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (var_location_3325, GGS_string ("useless extension, the type does not support %comparable"), fixItArray11  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 106)) ;
              GenericArray <FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("type declaration is here"), fixItArray12  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 107)) ;
            }
          }
        }
        break ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@equatableExtensionAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_equatableExtensionAST::getter_keyRepresentation (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_equatableExtensionAST temp_0 = this ;
  result_result = function_equatableNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 137)).readProperty_string () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@equatableExtensionAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_equatableExtensionAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                 GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                 GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                 GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                 GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                 GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                 GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_equatableExtensionAST temp_0 = this ;
  const GGS_equatableExtensionAST temp_1 = this ;
  GGS_lstring var_key_6269 = GGS_lstring::init_21__21_ (callExtensionGetter_keyRepresentation ((const cPtr_equatableExtensionAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 150)), temp_1.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_equatableExtensionAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6269, temp_2, inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 151)) ;
  }
  {
  const GGS_equatableExtensionAST temp_3 = this ;
  const GGS_equatableExtensionAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6269, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 152)), temp_4.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 152)) ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_equatableExtensionAST temp_6 = this ;
    const GGS_equatableExtensionMap_2E_element var_node_6513 = ioArgument_ioEquatableExtensionMap.readSubscript__3F_ (temp_6.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioEquatableExtensionMap.readSubscript__3F_ (temp_6.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_5 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_5) {
      const GGS_equatableExtensionAST temp_7 = this ;
      switch (temp_7.readProperty_mExtension ().enumValue ()) {
      case GGS_equatableComparableExtension::Enumeration::invalid:
        break ;
      case GGS_equatableComparableExtension::Enumeration::enum_equatable:
        {
          switch (var_node_6513.readProperty_mExtension ().enumValue ()) {
          case GGS_equatableComparableExtension::Enumeration::invalid:
            break ;
          case GGS_equatableComparableExtension::Enumeration::enum_equatable:
            {
              const GGS_equatableExtensionAST temp_8 = this ;
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (temp_8.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type is already equatable"), fixItArray9  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 159)) ;
              const GGS_equatableExtensionAST temp_10 = this ;
              GenericArray <FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (ioArgument_ioEquatableExtensionMap.getter_locationForKey (temp_10.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 160)), GGS_string ("equatable extension declaration is here"), fixItArray11  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 160)) ;
            }
            break ;
          case GGS_equatableComparableExtension::Enumeration::enum_comparable:
            {
              const GGS_equatableExtensionAST temp_12 = this ;
              GenericArray <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mTypeName ().readProperty_location (), GGS_string ("useless declaration, this type is already comparable"), fixItArray13  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 162)) ;
              const GGS_equatableExtensionAST temp_14 = this ;
              GenericArray <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (ioArgument_ioEquatableExtensionMap.getter_locationForKey (temp_14.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 163)), GGS_string ("comparable extension declaration is here"), fixItArray15  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 163)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_equatableComparableExtension::Enumeration::enum_comparable:
        {
          switch (var_node_6513.readProperty_mExtension ().enumValue ()) {
          case GGS_equatableComparableExtension::Enumeration::invalid:
            break ;
          case GGS_equatableComparableExtension::Enumeration::enum_equatable:
            {
              const GGS_equatableExtensionAST temp_16 = this ;
              GenericArray <FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (ioArgument_ioEquatableExtensionMap.getter_locationForKey (temp_16.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 168)), GGS_string ("useless declaration, this type is already comparable"), fixItArray17  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 168)) ;
              const GGS_equatableExtensionAST temp_18 = this ;
              GenericArray <FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (temp_18.readProperty_mTypeName ().readProperty_location (), GGS_string ("comparable extension declaration is here"), fixItArray19  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 169)) ;
            }
            break ;
          case GGS_equatableComparableExtension::Enumeration::enum_comparable:
            {
              const GGS_equatableExtensionAST temp_20 = this ;
              GenericArray <FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (temp_20.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type is already comparable"), fixItArray21  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 171)) ;
              const GGS_equatableExtensionAST temp_22 = this ;
              GenericArray <FixItDescription> fixItArray23 ;
              inCompiler->emitSemanticError (ioArgument_ioEquatableExtensionMap.getter_locationForKey (temp_22.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 172)), GGS_string ("comparable extension declaration is here"), fixItArray23  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 172)) ;
            }
            break ;
          }
        }
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    {
    const GGS_equatableExtensionAST temp_24 = this ;
    const GGS_equatableExtensionAST temp_25 = this ;
    ioArgument_ioEquatableExtensionMap.setter_insertKey (temp_24.readProperty_mTypeName (), temp_25.readProperty_mExtension (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 176)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@equatableExtensionAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_equatableExtensionAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                           const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                           const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                           const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                           const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                           GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                           GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@equatableExtensionAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_equatableExtensionAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                          GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                          const GGS_string /* constinArgument_inProductDirectory */,
                                                          const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                          GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                          const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                          GGS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingAbstractExtensionSetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingAbstractExtensionSetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_overridingAbstractExtensionSetterAST temp_0 = this ;
  const GGS_overridingAbstractExtensionSetterAST temp_1 = this ;
  result_result = GGS_string ("overriding extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 85)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 85)).add_operation (temp_1.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 85)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingAbstractExtensionSetterAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionSetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                                GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionSetterAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssignOperation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 98)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingAbstractExtensionSetterAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionSetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                          const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                          const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                          const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                          const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                          GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingAbstractExtensionSetterAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionSetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                         GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GGS_string /* constinArgument_inProductDirectory */,
                                                                         const GGS_semanticContext constinArgument_inSemanticContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GGS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionSetterAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_5773 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 124)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_5773, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 126)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 126)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 126)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_overridingAbstractExtensionSetterAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GGS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_5773, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 127)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 127)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 127)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 127)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_5773, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 128)).readProperty_isConcrete ().boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_overridingAbstractExtensionSetterAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GGS_string ("cannot declare an abstract extension setter: '@").add_operation (extensionGetter_definition (var_selfType_5773, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 129)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 129)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 129)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 129)) ;
      }
    }
  }
  GGS_string var_baseTypeName_6347 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_6394 = extensionGetter_definition (var_selfType_5773, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 133)).readProperty_superType () ;
  GGS_formalParameterSignature var_inheritedSignature_6444 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_location var_inheritedDeclarationLocation_6502 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 135)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 136)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 136)).isValid ()) {
    uint32_t variant_6552 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 136)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 136)).uintValue () ;
    bool loop_6552 = true ;
    while (loop_6552) {
      loop_6552 = var_superType_6394.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 137)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 137)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_6347.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 137)).isValid () ;
      if (loop_6552) {
        loop_6552 = var_superType_6394.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 137)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 137)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_6347.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 137)).boolValue () ;
      }
      if (loop_6552 && (0 == variant_6552)) {
        loop_6552 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 136)) ;
      }
      if (loop_6552) {
        variant_6552 -= 1 ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_overridingAbstractExtensionSetterAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_6394, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 138)).readProperty_setterMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionSetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 138)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GGS_methodQualifier var_qualifier_6854 ;
            const GGS_overridingAbstractExtensionSetterAST temp_9 = this ;
            GGS_methodKind joker_6823 ; // Joker input parameter
            GGS_bool joker_6846 ; // Joker input parameter
            GGS_string joker_6864 ; // Joker input parameter
            extensionGetter_definition (var_superType_6394, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 139)).readProperty_setterMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionSetterName (), joker_6823, var_inheritedSignature_6444, joker_6846, var_qualifier_6854, joker_6864, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 139)) ;
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_6854.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 140)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_baseTypeName_6347 = extensionGetter_definition (var_superType_6394, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 141)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_6394 = extensionGetter_definition (var_superType_6394, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 144)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_6347.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_overridingAbstractExtensionSetterAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GGS_string ("this setter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 147)) ;
    }
  }
  GGS_localVarManager var_variableMap_7249 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_7455 ;
  {
  const GGS_overridingAbstractExtensionSetterAST temp_14 = this ;
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionSetterFormalParameterList (), var_variableMap_7249, var_formalParameterListForGeneration_7455, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 151)) ;
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_6347.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      {
      const GGS_overridingAbstractExtensionSetterAST temp_16 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_7455, temp_16.readProperty_mOverridingExtensionSetterName ().readProperty_location (), var_inheritedSignature_6444, var_inheritedDeclarationLocation_6502, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 160)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingAbstractExtensionSetterAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionSetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionSetterListMap,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_overridingAbstractExtensionSetterAST temp_0 = this ;
  const GGS_overridingAbstractExtensionSetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingAbstractExtensionSetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 184)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingExtensionGetterAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                        GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                        GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                        GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GGS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                        GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionGetterAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssignOperation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 219)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_overridingExtensionGetterAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 221)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 221)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_overridingExtensionGetterAST temp_3 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 222)) ;
      }
    }
  }
  const GGS_overridingExtensionGetterAST temp_4 = this ;
  GGS_extensionGetterMapForBuildingContext_2E_element var_entry_8744 = ioArgument_ioExtensionGetterMapForBuildingContext.readSubscript__3F_searchKey (temp_4.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_overridingExtensionGetterAST temp_5 = this ;
  const GGS_overridingExtensionGetterAST temp_6 = this ;
  const GGS_overridingExtensionGetterAST temp_7 = this ;
  var_entry_8744.mProperty_mExtensionGetterMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionGetterName (), temp_6.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_7.readProperty_mOverridingExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("extension-overriding-getter.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 228)) ;
  }
  {
  ioArgument_ioExtensionGetterMapForBuildingContext.setter_replaceKey (var_entry_8744, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 234)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingExtensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_overridingExtensionGetterAST temp_0 = this ;
  const GGS_overridingExtensionGetterAST temp_1 = this ;
  result_result = GGS_string ("overriding extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 250)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 250)).add_operation (temp_1.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 250)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingExtensionGetterAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                  const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingExtensionGetterAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument_inProductDirectory */,
                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionGetterAST temp_0 = this ;
  const GGS_overridingExtensionGetterAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_11443 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 280)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11443, var_nameForUsefulness_11443, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 281)) ;
  }
  const GGS_overridingExtensionGetterAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_11631 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 282)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_11631, var_nameForUsefulness_11443 COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 283)) ;
  }
  const GGS_overridingExtensionGetterAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_11835 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 285)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_11835, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 287)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-getter.galgas", 287)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 287)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_overridingExtensionGetterAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare a extension getter: '@").add_operation (extensionGetter_definition (var_selfType_11835, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 288)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 288)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 288)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 288)) ;
    }
  }
  GGS_string var_baseTypeName_12176 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_12221 = extensionGetter_definition (var_selfType_11835, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 292)).readProperty_superType () ;
  GGS_functionSignature var_inheritedSignature_12288 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_inheritedReturnType_12319 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("extension-overriding-getter.galgas", 294)) ;
  GGS_location var_inheritedDeclarationLocation_12383 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 295)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 296)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 296)).isValid ()) {
    uint32_t variant_12431 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 296)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 296)).uintValue () ;
    bool loop_12431 = true ;
    while (loop_12431) {
      loop_12431 = var_superType_12221.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 297)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 297)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_12176.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 297)).isValid () ;
      if (loop_12431) {
        loop_12431 = var_superType_12221.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 297)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 297)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_12176.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 297)).boolValue () ;
      }
      if (loop_12431 && (0 == variant_12431)) {
        loop_12431 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-getter.galgas", 296)) ;
      }
      if (loop_12431) {
        variant_12431 -= 1 ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_overridingExtensionGetterAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_12221, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 298)).readProperty_getterMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 298)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GGS_methodQualifier var_qualifier_12852 ;
            const GGS_overridingExtensionGetterAST temp_9 = this ;
            GGS_methodKind joker_12713 ; // Joker input parameter
            GGS_bool joker_12790 ; // Joker input parameter
            GGS_string joker_12870 ; // Joker input parameter
            extensionGetter_definition (var_superType_12221, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 299)).readProperty_getterMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionGetterName (), joker_12713, var_inheritedSignature_12288, var_inheritedDeclarationLocation_12383, joker_12790, var_inheritedReturnType_12319, var_qualifier_12852, joker_12870, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 299)) ;
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_12852.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-getter.galgas", 309)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_baseTypeName_12176 = extensionGetter_definition (var_superType_12221, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 310)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_12221 = extensionGetter_definition (var_superType_12221, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 313)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_12176.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_overridingExtensionGetterAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GGS_string ("this getter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 316)) ;
    }
  }
  GGS_analysisContext var_analysisContext_13237 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string ("this"), GGS_selfAvailability::class_func_available (var_selfType_11835, GGS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-overriding-getter.galgas", 323))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 323)), GGS_string ("object."), inCompiler COMMA_HERE) ;
  GGS_formalInputParameterListForGeneration var_formalParameterListForGeneration_13926 ;
  GGS_unifiedTypeMapEntry var_returnType_13989 ;
  GGS_string var_returnVariableCppName_14017 ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_14086 ;
  {
  const GGS_overridingExtensionGetterAST temp_14 = this ;
  const GGS_overridingExtensionGetterAST temp_15 = this ;
  const GGS_overridingExtensionGetterAST temp_16 = this ;
  const GGS_overridingExtensionGetterAST temp_17 = this ;
  const GGS_overridingExtensionGetterAST temp_18 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_11443, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_13237, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionGetterFormalInputParameterList (), temp_15.readProperty_mOverridingExtensionGetterInstructionList (), temp_16.readProperty_mOverridingExtensionGetterReturnedVariableName (), temp_17.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_18.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_13926, var_returnType_13989, var_returnVariableCppName_14017, var_semanticInstructionListForGeneration_14086, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 326)) ;
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_12176.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      {
      const GGS_overridingExtensionGetterAST temp_20 = this ;
      routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (var_formalParameterListForGeneration_13926, var_returnType_13989, temp_20.readProperty_mOverridingExtensionGetterName ().readProperty_location (), var_inheritedSignature_12288, var_inheritedReturnType_12319, var_inheritedDeclarationLocation_12383, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 343)) ;
      }
    }
  }
  const GGS_overridingExtensionGetterAST temp_21 = this ;
  const GGS_overridingExtensionGetterAST temp_22 = this ;
  const GGS_overridingExtensionGetterAST temp_23 = this ;
  const GGS_overridingExtensionGetterAST temp_24 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("override extension getter ").add_operation (temp_21.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 354)), GGS_overrideExtensionGetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GGS_bool (false), GGS_string ("getter-").add_operation (temp_22.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 357)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 357)).add_operation (temp_23.readProperty_mOverridingExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 357)), var_selfType_11835, var_baseTypeName_12176, temp_24.readProperty_mOverridingExtensionGetterName ().readProperty_string (), var_returnType_13989, var_returnVariableCppName_14017, var_formalParameterListForGeneration_13926, extensionGetter_definition (var_selfType_11835, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 364)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_14086, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 353)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingExtensionGetterAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionGetterListMap,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_overridingExtensionGetterAST temp_0 = this ;
  const GGS_overridingExtensionGetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 386)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overrideExtensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_overrideExtensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-getter.galgas", 410)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overrideExtensionGetterForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_overrideExtensionGetterForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overrideExtensionGetterForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("class-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 419)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 419))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 419)) ;
  GGS_string var_extensionGetterCode_18422 ;
  {
  const GGS_overrideExtensionGetterForGeneration temp_1 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_2 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_3 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_4 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_5 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_6 = this ;
  routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (GGS_string ("cPtr_").add_operation (extensionGetter_definition (temp_1.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 421)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 421)).add_operation (GGS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 421)).add_operation (temp_2.readProperty_mOverridingExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 421)), ioArgument_ioInclusionSet, temp_3.readProperty_mOverridingExtensionGetterFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), GGS_string ("Compiler"), temp_5.readProperty_mResultType (), temp_6.readProperty_mResultVarCppName (), var_extensionGetterCode_18422, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 420)) ;
  }
  const GGS_overrideExtensionGetterForGeneration temp_7 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_8 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_9 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (inCompiler, extensionGetter_definition (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 431)).readProperty_typeName ().readProperty_string (), temp_8.readProperty_mOverridingExtensionGetterName (), var_extensionGetterCode_18422, temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 430))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionSetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_extensionSetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_extensionSetterAST temp_0 = this ;
  const GGS_extensionSetterAST temp_1 = this ;
  result_result = GGS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 158)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 158)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 158)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extensionSetterAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                              GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GGS_extensionSetterMapForBuildingContext & ioArgument_ioExtensionSetterMapForBuildingContext,
                                                              GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionSetterAST temp_0 = this ;
  const GGS_extensionSetterAST temp_1 = this ;
  const GGS_extensionSetterAST temp_2 = this ;
  GGS_lstring var_key_7172 = GGS_lstring::init_21__21_ (GGS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 174)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 174)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 174)), temp_2.readProperty_mExtensionSetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionSetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7172, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 177)) ;
  }
  {
  const GGS_extensionSetterAST temp_4 = this ;
  const GGS_extensionSetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_7172, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 178)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-setter.galgas", 178)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_extensionSetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-setter.galgas", 180)).operator_not (SOURCE_FILE ("extension-setter.galgas", 180)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_extensionSetterAST temp_8 = this ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionSetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 181)) ;
      }
    }
  }
  const GGS_extensionSetterAST temp_9 = this ;
  GGS_extensionSetterMapForBuildingContext_2E_element var_entry_7673 = ioArgument_ioExtensionSetterMapForBuildingContext.readSubscript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionSetterAST temp_10 = this ;
  const GGS_extensionSetterAST temp_11 = this ;
  var_entry_7673.mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionSetterName (), temp_11.readProperty_mExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 187)) ;
  }
  {
  ioArgument_ioExtensionSetterMapForBuildingContext.setter_replaceKey (var_entry_7673, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 191)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extensionSetterAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                        const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                        const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extensionSetterAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument_inProductDirectory */,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionSetterAST temp_0 = this ;
  const GGS_extensionSetterAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_9694 = function_setterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 227)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9694, var_nameForUsefulness_9694, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 228)) ;
  }
  const GGS_extensionSetterAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_9872 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 229)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_9872, var_nameForUsefulness_9694 COMMA_SOURCE_FILE ("extension-setter.galgas", 230)) ;
  }
  const GGS_extensionSetterAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_10076 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 232)) ;
  GGS_string var_selfObjectName_10149 ;
  GGS_string var_selfObjectAccessor_10178 ;
  GGS_bool var_implementedAsFunction_10209 ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_10076, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 237)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-setter.galgas", 237)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_selfObjectName_10149 = GGS_string ("object") ;
      var_selfObjectAccessor_10178 = GGS_string ("object->") ;
      var_implementedAsFunction_10209 = GGS_bool (false) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    var_selfObjectName_10149 = GGS_string ("ioObject") ;
    var_selfObjectAccessor_10178 = GGS_string ("ioObject.") ;
    var_implementedAsFunction_10209 = GGS_bool (true) ;
  }
  GGS_analysisContext var_analysisContext_10567 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectName_10149, GGS_selfAvailability::class_func_available (var_selfType_10076, GGS_selfMutability::class_func_selfAndPropertiesAreMutable (SOURCE_FILE ("extension-setter.galgas", 251))  COMMA_SOURCE_FILE ("extension-setter.galgas", 251)), var_selfObjectAccessor_10178, inCompiler COMMA_HERE) ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_11106 ;
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_11152 ;
  {
  const GGS_extensionSetterAST temp_5 = this ;
  const GGS_extensionSetterAST temp_6 = this ;
  const GGS_extensionSetterAST temp_7 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_9694, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_10567, ioArgument_ioTypeMap, temp_5.readProperty_mExtensionSetterFormalParameterList (), temp_6.readProperty_mExtensionSetterInstructionList (), temp_7.readProperty_mEndOfSetterDeclarationLocation (), var_semanticInstructionListForGeneration_11106, var_formalParameterListForGeneration_11152, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 254)) ;
  }
  const GGS_extensionSetterAST temp_8 = this ;
  const GGS_extensionSetterAST temp_9 = this ;
  const GGS_extensionSetterAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("extension setter ").add_operation (temp_8.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 267)), GGS_extensionSetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GGS_bool (true), GGS_string ("setter-").add_operation (extensionGetter_definition (var_selfType_10076, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 270)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 270)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 270)).add_operation (temp_9.readProperty_mExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 270)), var_selfType_10076, temp_10.readProperty_mExtensionSetterName ().readProperty_string (), var_implementedAsFunction_10209, var_formalParameterListForGeneration_11152, extensionGetter_definition (var_selfType_10076, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 275)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_11106, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas", 266)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extensionSetterAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & ioArgument_ioExtensionSetterListMap,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_extensionSetterAST temp_0 = this ;
  const GGS_extensionSetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioExtensionSetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 299)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionSetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_extensionSetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-setter.galgas", 321)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extensionSetterForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_extensionSetterForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_extensionSetterForGeneration temp_2 = this ;
      const GGS_extensionSetterForGeneration temp_3 = this ;
      const GGS_extensionSetterForGeneration temp_4 = this ;
      outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 330)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionSetterName (), temp_4.readProperty_mExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-setter.galgas", 329))) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_extensionSetterForGeneration temp_5 = this ;
    const GGS_extensionSetterForGeneration temp_6 = this ;
    const GGS_extensionSetterForGeneration temp_7 = this ;
    outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 336)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mExtensionSetterName (), temp_7.readProperty_mExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-setter.galgas", 335))) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extensionSetterForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionSetterForGeneration temp_0 = this ;
  UpEnumerator_formalParameterListForGeneration enumerator_15193 (temp_0.readProperty_mExtensionSetterFormalParameterList ()) ;
  while (enumerator_15193.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_15193.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 350)) ;
    enumerator_15193.gotoNextObject () ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_extensionSetterForGeneration temp_2 = this ;
    test_1 = temp_2.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_extensionSetterForGeneration temp_3 = this ;
      GGS_formalParameterListForGeneration var_extensionSetterFormalParameterList_15356 = temp_3.readProperty_mExtensionSetterFormalParameterList () ;
      {
      const GGS_extensionSetterForGeneration temp_4 = this ;
      var_extensionSetterFormalParameterList_15356.setter_insertAtIndex (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-setter.galgas", 355)), GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.galgas", 356)), temp_4.readProperty_mReceiverType (), GGS_lstring::init_21__21_ (GGS_string ("self"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 358)), inCompiler COMMA_HERE), GGS_string ("ioObject"), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 354)) ;
      }
      const GGS_extensionSetterForGeneration temp_5 = this ;
      const GGS_extensionSetterForGeneration temp_6 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("setter-").add_operation (extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 362)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 362)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 362)).add_operation (temp_6.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 362))  COMMA_SOURCE_FILE ("extension-setter.galgas", 362)) ;
      GGS_string var_code_16295 ;
      {
      const GGS_extensionSetterForGeneration temp_7 = this ;
      const GGS_extensionSetterForGeneration temp_8 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GGS_bool (false), GGS_string ("extensionSetter_").add_operation (temp_7.readProperty_mExtensionSetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 365)), ioArgument_ioInclusionSet, var_extensionSetterFormalParameterList_15356, temp_8.readProperty_mSemanticInstructionListForGeneration (), GGS_bool (false), GGS_string ("Compiler"), GGS_bool (true), GGS_bool (false), GGS_bool (false), var_code_16295, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 363)) ;
      }
      const GGS_extensionSetterForGeneration temp_9 = this ;
      const GGS_extensionSetterForGeneration temp_10 = this ;
      outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_9.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 377)).readProperty_typeName ().readProperty_string (), temp_10.readProperty_mExtensionSetterName (), var_code_16295 COMMA_SOURCE_FILE ("extension-setter.galgas", 376))) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_extensionSetterForGeneration temp_11 = this ;
    GGS_unifiedTypeMapEntry var_baseType_16559 = temp_11.readProperty_mReceiverType () ;
    GGS_bool var_searching_16603 = GGS_bool (true) ;
    if (GGS_uint::class_func_max (SOURCE_FILE ("extension-setter.galgas", 384)).isValid ()) {
      uint32_t variant_16624 = GGS_uint::class_func_max (SOURCE_FILE ("extension-setter.galgas", 384)).uintValue () ;
      bool loop_16624 = true ;
      while (loop_16624) {
        loop_16624 = var_searching_16603.isValid () ;
        if (loop_16624) {
          loop_16624 = var_searching_16603.boolValue () ;
        }
        if (loop_16624 && (0 == variant_16624)) {
          loop_16624 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-setter.galgas", 384)) ;
        }
        if (loop_16624) {
          variant_16624 -= 1 ;
          GalgasBool test_12 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_12) {
            test_12 = extensionGetter_definition (var_baseType_16559, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 385)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-setter.galgas", 385)).operator_not (SOURCE_FILE ("extension-setter.galgas", 385)).boolEnum () ;
            if (GalgasBool::boolTrue == test_12) {
              GalgasBool test_13 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_13) {
                const GGS_extensionSetterForGeneration temp_14 = this ;
                test_13 = extensionGetter_definition (extensionGetter_definition (var_baseType_16559, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 386)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 386)).readProperty_setterMap ().getter_hasKey (temp_14.readProperty_mExtensionSetterName () COMMA_SOURCE_FILE ("extension-setter.galgas", 386)).boolEnum () ;
                if (GalgasBool::boolTrue == test_13) {
                  var_baseType_16559 = extensionGetter_definition (var_baseType_16559, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 387)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_13) {
                var_searching_16603 = GGS_bool (false) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_12) {
            var_searching_16603 = GGS_bool (false) ;
          }
        }
      }
    }
    const GGS_extensionSetterForGeneration temp_15 = this ;
    ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("setter-").add_operation (extensionGetter_definition (var_baseType_16559, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 395)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 395)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 395)).add_operation (temp_15.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 395))  COMMA_SOURCE_FILE ("extension-setter.galgas", 395)) ;
    extensionMethod_addHeaderFileName (var_baseType_16559, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 396)) ;
    GGS_string var_setterImplementation_17445 ;
    {
    const GGS_extensionSetterForGeneration temp_16 = this ;
    const GGS_extensionSetterForGeneration temp_17 = this ;
    const GGS_extensionSetterForGeneration temp_18 = this ;
    const GGS_extensionSetterForGeneration temp_19 = this ;
    routine_generateExtensionSetter_3F__3F__3F__26__3F__3F__21_ (extensionGetter_definition (temp_16.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 398)).readProperty_typeName ().readProperty_string (), GGS_string::makeEmptyString (), temp_17.readProperty_mExtensionSetterName (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionSetterFormalParameterList (), temp_19.readProperty_mSemanticInstructionListForGeneration (), var_setterImplementation_17445, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 397)) ;
    }
    const GGS_extensionSetterForGeneration temp_20 = this ;
    const GGS_extensionSetterForGeneration temp_21 = this ;
    const GGS_extensionSetterForGeneration temp_22 = this ;
    outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (inCompiler, extensionGetter_definition (temp_20.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 407)).readProperty_typeName ().readProperty_string (), temp_21.readProperty_mExtensionSetterName (), temp_22.readProperty_mExtensionSetterFormalParameterList (), var_setterImplementation_17445 COMMA_SOURCE_FILE ("extension-setter.galgas", 406))) ;
  }
}

